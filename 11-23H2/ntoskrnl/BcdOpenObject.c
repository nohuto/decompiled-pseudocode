/*
 * XREFs of BcdOpenObject @ 0x140804F44
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x14059DE68 (PopAdaptivePersistSystemInitatedRebootState.c)
 *     WheaPersistBadPageToBcd @ 0x140611D90 (WheaPersistBadPageToBcd.c)
 *     PoInitHiberServices @ 0x140801AE8 (PoInitHiberServices.c)
 *     PopBcdClearPendingResume @ 0x140801C34 (PopBcdClearPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x140801F90 (PopBcdEstablishResumeObject.c)
 *     BiBindEfiBootManager @ 0x140802B0C (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x1408037E8 (BiBindEfiEntries.c)
 *     BiUpdateBcdObject @ 0x140804304 (BiUpdateBcdObject.c)
 *     BiBuildIdentifierList @ 0x140804668 (BiBuildIdentifierList.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetBootEntry @ 0x14099B7C0 (PopAdaptiveGetSystemInitiatedRebootTargetBootEntry.c)
 *     PopBcdSetPendingResume @ 0x14099CE40 (PopBcdSetPendingResume.c)
 *     SepSecureBootCorrectBcd @ 0x1409D0964 (SepSecureBootCorrectBcd.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x140A5C6F4 (BiGetDefaultBootEntryIdentifier.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140A5D7C4 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiCreateEfiEntry @ 0x140A5DDE0 (BiCreateEfiEntry.c)
 *     BiExportEfiBootManager @ 0x140A5E5CC (BiExportEfiBootManager.c)
 *     BiUpdateEfiEntry @ 0x140A5EEEC (BiUpdateEfiEntry.c)
 *     PopAdaptiveInitializeBootContext @ 0x140B35F44 (PopAdaptiveInitializeBootContext.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x140373DD0 (BiIsOfflineHandle.c)
 *     RtlStringFromGUIDEx @ 0x1406852B0 (RtlStringFromGUIDEx.c)
 *     RtlFreeUnicodeString @ 0x14076F3D0 (RtlFreeUnicodeString.c)
 *     BiOpenKey @ 0x1408050D0 (BiOpenKey.c)
 *     BiCloseKey @ 0x14080525C (BiCloseKey.c)
 *     BiLogMessage @ 0x140805620 (BiLogMessage.c)
 *     BiAcquireBcdSyncMutant @ 0x140805634 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1408056DC (BiReleaseBcdSyncMutant.c)
 *     BiIsObjectAliased @ 0x140805704 (BiIsObjectAliased.c)
 *     BiGetCurrentBootEntryIdentifier @ 0x140806EC8 (BiGetCurrentBootEntryIdentifier.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x140A5C6F4 (BiGetDefaultBootEntryIdentifier.c)
 */

__int64 __fastcall BcdOpenObject(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  __int64 v6; // rcx
  char v7; // r12
  __int64 result; // rax
  int v9; // eax
  unsigned int v10; // ebx
  wchar_t *Buffer; // rdi
  int CurrentBootEntryIdentifier; // eax
  __int64 v13; // rcx
  int v14; // eax
  const wchar_t *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+28h] [rbp-28h] BYREF
  unsigned int v19[6]; // [rsp+38h] [rbp-18h] BYREF
  int v20; // [rsp+98h] [rbp+48h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  v20 = 0;
  *(_OWORD *)v19 = 0LL;
  LOBYTE(v6) = BiIsOfflineHandle(a1);
  v7 = v6;
  result = BiAcquireBcdSyncMutant(v6);
  if ( (int)result < 0 )
    return result;
  *a3 = 0LL;
  v17 = 0LL;
  UnicodeString.Buffer = 0LL;
  v9 = RtlStringFromGUIDEx(a2, (__int64)&UnicodeString, 1);
  v10 = v9;
  if ( v9 < 0 )
  {
    BiLogMessage(4LL, L"Failed to get object identifier. Status: %x", (unsigned int)v9);
LABEL_19:
    Buffer = UnicodeString.Buffer;
    goto LABEL_6;
  }
  Buffer = UnicodeString.Buffer;
  BiLogMessage(2LL, L"Opening object %s", UnicodeString.Buffer);
  CurrentBootEntryIdentifier = BiOpenKey(a1, L"Objects", 131097LL, &v17);
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
  if ( !(unsigned __int8)BiIsObjectAliased(a2, &v20) )
    goto LABEL_5;
  if ( v20 == 1 )
  {
    CurrentBootEntryIdentifier = BiGetCurrentBootEntryIdentifier(v19);
  }
  else
  {
    if ( v20 != 2 )
    {
      v10 = -1073741811;
      CurrentBootEntryIdentifier = -1073741811;
      goto LABEL_22;
    }
    CurrentBootEntryIdentifier = BiGetDefaultBootEntryIdentifier(a1, v19);
  }
  v10 = CurrentBootEntryIdentifier;
  if ( CurrentBootEntryIdentifier < 0 )
  {
LABEL_22:
    v15 = L"Failed to get aliased identifier. Status: %x";
    goto LABEL_23;
  }
  RtlFreeUnicodeString(&UnicodeString);
  UnicodeString.Buffer = 0LL;
  v14 = RtlStringFromGUIDEx(v19, (__int64)&UnicodeString, 1);
  v10 = v14;
  if ( v14 < 0 )
  {
    BiLogMessage(4LL, L"Failed to update object GUID string. Status: %x", (unsigned int)v14);
    goto LABEL_19;
  }
  Buffer = UnicodeString.Buffer;
  BiLogMessage(2LL, L"Object alias resolves to %s", UnicodeString.Buffer);
LABEL_5:
  CurrentBootEntryIdentifier = BiOpenKey(v17, Buffer, 983103LL, a3);
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
    RtlFreeUnicodeString(&UnicodeString);
  v13 = v17;
  if ( v17 )
    BiCloseKey(v17);
  LOBYTE(v13) = v7;
  BiReleaseBcdSyncMutant(v13);
  return v10;
}
