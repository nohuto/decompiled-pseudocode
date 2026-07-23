/*
 * XREFs of BcdGetElementDataWithFlags @ 0x14080723C
 * Callers:
 *     BcdGetElementData @ 0x1408043C0 (BcdGetElementData.c)
 *     PopBcdEstablishResumeObject @ 0x140804514 (PopBcdEstablishResumeObject.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140804DD8 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdReadElement @ 0x140805418 (PopBcdReadElement.c)
 *     BiUpdateBcdObject @ 0x140806888 (BiUpdateBcdObject.c)
 *     BiBuildIdentifierList @ 0x140806BE8 (BiBuildIdentifierList.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetBootEntry @ 0x14099B870 (PopAdaptiveGetSystemInitiatedRebootTargetBootEntry.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1409D0EA4 (SepSecureBootUpdateBcdDataForRule.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x140A5C764 (BiGetDefaultBootEntryIdentifier.c)
 *     BiGetElement @ 0x140A5C9A0 (BiGetElement.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     BiIsOfflineHandle @ 0x140374424 (BiIsOfflineHandle.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     _ultow_s @ 0x1403DE190 (_ultow_s.c)
 *     RtlStringFromGUIDEx @ 0x1406852B0 (RtlStringFromGUIDEx.c)
 *     RtlFreeUnicodeString @ 0x14076F8E0 (RtlFreeUnicodeString.c)
 *     BiOpenKey @ 0x140807650 (BiOpenKey.c)
 *     BiCloseKey @ 0x1408077DC (BiCloseKey.c)
 *     BiGetRegistryValue @ 0x1408079C4 (BiGetRegistryValue.c)
 *     BiLogMessage @ 0x140807BA0 (BiLogMessage.c)
 *     BiAcquireBcdSyncMutant @ 0x140807BB4 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x140807C5C (BiReleaseBcdSyncMutant.c)
 *     BiGetObjectIdentifier @ 0x140807CE0 (BiGetObjectIdentifier.c)
 *     BiConvertElementFormatToValueType @ 0x140807E7C (BiConvertElementFormatToValueType.c)
 *     BiConvertRegistryDataToElement @ 0x140807EB4 (BiConvertRegistryDataToElement.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl BcdGetElementDataWithFlags(
        HANDLE BcdObjectHandle,
        ULONG BcdElement,
        BCD_FLAGS BcdFlags,
        PVOID Buffer,
        PULONG BufferSize)
{
  __int64 v6; // rcx
  char v7; // r15
  int v8; // eax
  __int64 v9; // rsi
  wchar_t *v10; // rdi
  int v11; // eax
  NTSTATUS v12; // ebx
  int v13; // eax
  unsigned int v14; // eax
  int RegistryValue; // eax
  PVOID v16; // r15
  __int64 v17; // rcx
  __int64 v19; // rcx
  NTSTATUS v20; // r8d
  __int64 v21; // [rsp+20h] [rbp-91h]
  char v22; // [rsp+40h] [rbp-71h]
  unsigned int v24; // [rsp+48h] [rbp-69h] BYREF
  __int64 v25; // [rsp+50h] [rbp-61h] BYREF
  unsigned int v26; // [rsp+58h] [rbp-59h]
  __int64 v27; // [rsp+60h] [rbp-51h] BYREF
  PVOID P; // [rsp+68h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-41h] BYREF
  GUID *v30; // [rsp+80h] [rbp-31h]
  GUID Guid; // [rsp+88h] [rbp-29h] BYREF
  wchar_t DstBuf[24]; // [rsp+98h] [rbp-19h] BYREF

  v30 = (GUID *)Buffer;
  v24 = 0;
  DestinationString = 0LL;
  Guid = 0LL;
  if ( !BufferSize || !Buffer && *BufferSize )
    return -1073741811;
  LOBYTE(v6) = BiIsOfflineHandle((char)BcdObjectHandle);
  v22 = v6;
  v7 = v6;
  v8 = BiAcquireBcdSyncMutant(v6);
  if ( v8 < 0 )
  {
    BiLogMessage(4LL, L"BcdGetElementDataWithFlags: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v8);
    return v20;
  }
  else
  {
    v25 = 0LL;
    v27 = 0LL;
    v9 = 0LL;
    P = 0LL;
    RtlInitUnicodeString(&DestinationString, 0LL);
    v10 = L"N/A";
    if ( (int)BiGetObjectIdentifier(BcdObjectHandle, &Guid) >= 0
      && RtlStringFromGUIDEx(&Guid, &DestinationString, 1u) >= 0 )
    {
      v10 = DestinationString.Buffer;
    }
    v11 = BiOpenKey(BcdObjectHandle, L"Elements", 131097LL, &v25);
    v12 = v11;
    if ( v11 < 0 )
    {
      BiLogMessage(
        4LL,
        L"BcdGetElementDataWithFlags: Failed to open elements key.Object: %ws Status: %x",
        v10,
        (unsigned int)v11);
    }
    else if ( ultow_s(BcdElement, DstBuf, 0x16uLL, 16) )
    {
      v12 = -1073741823;
    }
    else
    {
      v13 = BiOpenKey(v25, DstBuf, 131097LL, &v27);
      if ( v13 < 0 )
      {
        v19 = 4LL;
        if ( v13 == -1073741772 )
          v19 = 2LL;
        BiLogMessage(
          v19,
          L"BcdGetElementDataWithFlags: Failed to open key.Object: %ws Type: %ws Status: %x",
          v10,
          DstBuf,
          v13);
        v9 = v27;
        v12 = -1073741275;
      }
      else
      {
        v14 = BiConvertElementFormatToValueType(HIBYTE(BcdElement) & 0xF);
        v9 = v27;
        v26 = v14;
        RegistryValue = BiGetRegistryValue(v27, L"Element", 0LL, v14, &P, &v24);
        v16 = P;
        v12 = RegistryValue;
        if ( RegistryValue < 0 )
        {
          LODWORD(v21) = RegistryValue;
          BiLogMessage(
            4LL,
            L"BcdGetElementDataWithFlags: Failed to get registry value.Object: %ws Reg type: %lu Status: %x",
            v10,
            v26,
            v21);
        }
        else
        {
          v12 = BiConvertRegistryDataToElement(BcdObjectHandle, (PCWSTR)P, v24, 0, v30, (__int64)BufferSize);
        }
        if ( v16 )
          ExFreePoolWithTag(v16, 0x4B444342u);
        v7 = v22;
      }
    }
    RtlFreeUnicodeString(&DestinationString);
    if ( v9 )
      BiCloseKey(v9);
    if ( v25 )
      BiCloseKey(v25);
    LOBYTE(v17) = v7;
    BiReleaseBcdSyncMutant(v17);
    return v12;
  }
}
