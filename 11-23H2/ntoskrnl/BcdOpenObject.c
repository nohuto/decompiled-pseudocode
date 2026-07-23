/*
 * XREFs of BcdOpenObject @ 0x140805214
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x14059E358 (PopAdaptivePersistSystemInitatedRebootState.c)
 *     WheaPersistBadPageToBcd @ 0x1406122E0 (WheaPersistBadPageToBcd.c)
 *     PoInitHiberServices @ 0x140801DB8 (PoInitHiberServices.c)
 *     PopBcdClearPendingResume @ 0x140801F04 (PopBcdClearPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x140802260 (PopBcdEstablishResumeObject.c)
 *     BiBindEfiBootManager @ 0x140802DDC (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x140803AB8 (BiBindEfiEntries.c)
 *     BiUpdateBcdObject @ 0x1408045D4 (BiUpdateBcdObject.c)
 *     BiBuildIdentifierList @ 0x140804938 (BiBuildIdentifierList.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetBootEntry @ 0x14099B9C0 (PopAdaptiveGetSystemInitiatedRebootTargetBootEntry.c)
 *     PopBcdSetPendingResume @ 0x14099D040 (PopBcdSetPendingResume.c)
 *     SepSecureBootCorrectBcd @ 0x1409D0B64 (SepSecureBootCorrectBcd.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x140A5C9A4 (BiGetDefaultBootEntryIdentifier.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140A5DA74 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiCreateEfiEntry @ 0x140A5E090 (BiCreateEfiEntry.c)
 *     BiExportEfiBootManager @ 0x140A5E87C (BiExportEfiBootManager.c)
 *     BiUpdateEfiEntry @ 0x140A5F19C (BiUpdateEfiEntry.c)
 *     PopAdaptiveInitializeBootContext @ 0x140B35F44 (PopAdaptiveInitializeBootContext.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x140373F70 (BiIsOfflineHandle.c)
 *     RtlStringFromGUIDEx @ 0x1406852B0 (RtlStringFromGUIDEx.c)
 *     RtlFreeUnicodeString @ 0x14076F5C0 (RtlFreeUnicodeString.c)
 *     BiOpenKey @ 0x1408053A0 (BiOpenKey.c)
 *     BiCloseKey @ 0x14080552C (BiCloseKey.c)
 *     BiLogMessage @ 0x1408058F0 (BiLogMessage.c)
 *     BiAcquireBcdSyncMutant @ 0x140805904 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1408059AC (BiReleaseBcdSyncMutant.c)
 *     BiIsObjectAliased @ 0x1408059D4 (BiIsObjectAliased.c)
 *     BiGetCurrentBootEntryIdentifier @ 0x140807198 (BiGetCurrentBootEntryIdentifier.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x140A5C9A4 (BiGetDefaultBootEntryIdentifier.c)
 */

NTSTATUS __cdecl BcdOpenObject(HANDLE BcdStoreHandle, const GUID *Identifier, PHANDLE BcdObjectHandle)
{
  __int64 v6; // rcx
  char v7; // r12
  NTSTATUS result; // eax
  NTSTATUS v9; // eax
  NTSTATUS v10; // ebx
  wchar_t *Buffer; // rdi
  int CurrentBootEntryIdentifier; // eax
  __int64 v13; // rcx
  NTSTATUS v14; // eax
  const wchar_t *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING GuidString; // [rsp+28h] [rbp-28h] BYREF
  GUID Guid; // [rsp+38h] [rbp-18h] BYREF
  int v20; // [rsp+98h] [rbp+48h] BYREF

  *(_QWORD *)&GuidString.Length = 0LL;
  v20 = 0;
  Guid = 0LL;
  LOBYTE(v6) = BiIsOfflineHandle((char)BcdStoreHandle);
  v7 = v6;
  result = BiAcquireBcdSyncMutant(v6);
  if ( result < 0 )
    return result;
  *BcdObjectHandle = 0LL;
  v17 = 0LL;
  GuidString.Buffer = 0LL;
  v9 = RtlStringFromGUIDEx((PGUID)Identifier, &GuidString, 1u);
  v10 = v9;
  if ( v9 < 0 )
  {
    BiLogMessage(4LL, L"Failed to get object identifier. Status: %x", (unsigned int)v9);
LABEL_19:
    Buffer = GuidString.Buffer;
    goto LABEL_6;
  }
  Buffer = GuidString.Buffer;
  BiLogMessage(2LL, L"Opening object %s", GuidString.Buffer);
  CurrentBootEntryIdentifier = BiOpenKey(BcdStoreHandle, L"Objects", 131097LL, &v17);
  v10 = CurrentBootEntryIdentifier;
  if ( CurrentBootEntryIdentifier < 0 )
  {
    v15 = L"Failed to open key for all objects. Status: %x";
LABEL_23:
    v16 = 4LL;
LABEL_28:
    BiLogMessage(v16, v15, (unsigned int)CurrentBootEntryIdentifier);
    goto LABEL_6;
  }
  if ( !(unsigned __int8)BiIsObjectAliased(Identifier, &v20) )
    goto LABEL_5;
  if ( v20 == 1 )
  {
    CurrentBootEntryIdentifier = BiGetCurrentBootEntryIdentifier(&Guid);
  }
  else
  {
    if ( v20 != 2 )
    {
      v10 = -1073741811;
      CurrentBootEntryIdentifier = -1073741811;
      goto LABEL_22;
    }
    CurrentBootEntryIdentifier = BiGetDefaultBootEntryIdentifier(BcdStoreHandle, &Guid);
  }
  v10 = CurrentBootEntryIdentifier;
  if ( CurrentBootEntryIdentifier < 0 )
  {
LABEL_22:
    v15 = L"Failed to get aliased identifier. Status: %x";
    goto LABEL_23;
  }
  RtlFreeUnicodeString(&GuidString);
  GuidString.Buffer = 0LL;
  v14 = RtlStringFromGUIDEx(&Guid, &GuidString, 1u);
  v10 = v14;
  if ( v14 < 0 )
  {
    BiLogMessage(4LL, L"Failed to update object GUID string. Status: %x", (unsigned int)v14);
    goto LABEL_19;
  }
  Buffer = GuidString.Buffer;
  BiLogMessage(2LL, L"Object alias resolves to %s", GuidString.Buffer);
LABEL_5:
  CurrentBootEntryIdentifier = BiOpenKey(v17, Buffer, 983103LL, BcdObjectHandle);
  v10 = CurrentBootEntryIdentifier;
  if ( CurrentBootEntryIdentifier < 0 )
  {
    v15 = L"Failed to open object's key. Status: %x";
    v16 = 4LL;
    if ( CurrentBootEntryIdentifier == -1073741772 )
      v16 = 2LL;
    goto LABEL_28;
  }
LABEL_6:
  if ( Buffer )
    RtlFreeUnicodeString(&GuidString);
  v13 = v17;
  if ( v17 )
    BiCloseKey(v17);
  LOBYTE(v13) = v7;
  BiReleaseBcdSyncMutant(v13);
  return v10;
}
