/*
 * XREFs of BcdSetElementDataWithFlags @ 0x14080669C
 * Callers:
 *     PopBcdSetupResumeObject @ 0x1408042AC (PopBcdSetupResumeObject.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140804DD8 (PopBcdSetDefaultResumeObjectElements.c)
 *     BiBindEfiBootManager @ 0x140805090 (BiBindEfiBootManager.c)
 *     BiUpdateBcdObject @ 0x140806888 (BiUpdateBcdObject.c)
 *     PopBcdRegenerateResumeObject @ 0x14099CCB4 (PopBcdRegenerateResumeObject.c)
 *     PopBcdSetPendingResume @ 0x14099CEF0 (PopBcdSetPendingResume.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1409D0EA4 (SepSecureBootUpdateBcdDataForRule.c)
 *     BcdSetElementData @ 0x140A5C8A4 (BcdSetElementData.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140A5D834 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 * Callees:
 *     BiSetFirmwareModifiedFromObject @ 0x14037431C (BiSetFirmwareModifiedFromObject.c)
 *     BiIsOfflineHandle @ 0x140374424 (BiIsOfflineHandle.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     _ultow_s @ 0x1403DE190 (_ultow_s.c)
 *     BiDeleteElement @ 0x140805C00 (BiDeleteElement.c)
 *     BiDeleteKey @ 0x140805E5C (BiDeleteKey.c)
 *     BiSetRegistryValue @ 0x140805FA0 (BiSetRegistryValue.c)
 *     BiCreateKey @ 0x140806388 (BiCreateKey.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140806574 (BiIsLinkedToFirmwareVariable.c)
 *     BiOpenKey @ 0x140807650 (BiOpenKey.c)
 *     BiCloseKey @ 0x1408077DC (BiCloseKey.c)
 *     BiLogMessage @ 0x140807BA0 (BiLogMessage.c)
 *     BiAcquireBcdSyncMutant @ 0x140807BB4 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x140807C5C (BiReleaseBcdSyncMutant.c)
 *     BiConvertElementFormatToValueType @ 0x140807E7C (BiConvertElementFormatToValueType.c)
 *     BiConvertElementToRegistryData @ 0x140808860 (BiConvertElementToRegistryData.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl BcdSetElementDataWithFlags(
        HANDLE BcdObjectHandle,
        ULONG BcdElement,
        BCD_FLAGS BcdFlags,
        PVOID Buffer,
        ULONG BufferSize)
{
  __int64 v8; // rdi
  __int64 v9; // rcx
  NTSTATUS result; // eax
  int v11; // eax
  NTSTATUS v12; // ebx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  PVOID v16; // r15
  ULONG v17; // eax
  int v18; // eax
  bool v19; // [rsp+30h] [rbp-41h] BYREF
  char v20; // [rsp+31h] [rbp-40h]
  ULONG v21; // [rsp+34h] [rbp-3Dh] BYREF
  __int64 v22; // [rsp+38h] [rbp-39h] BYREF
  ULONG v23; // [rsp+40h] [rbp-31h] BYREF
  __int64 v24; // [rsp+48h] [rbp-29h] BYREF
  PVOID P; // [rsp+50h] [rbp-21h] BYREF
  wchar_t DstBuf[24]; // [rsp+58h] [rbp-19h] BYREF

  v23 = BcdElement;
  v21 = 0;
  if ( !Buffer && BufferSize )
    return -1073741811;
  v22 = 0LL;
  v8 = 0LL;
  v19 = 0;
  v24 = 0LL;
  P = 0LL;
  if ( !BufferSize )
  {
    BiDeleteElement(BcdObjectHandle, BcdElement);
    return 0;
  }
  LOBYTE(v9) = BiIsOfflineHandle((char)BcdObjectHandle);
  v20 = v9;
  result = BiAcquireBcdSyncMutant(v9);
  if ( result >= 0 )
  {
    BiLogMessage(2LL, L"Setting element %08x", BcdElement);
    v11 = BiOpenKey(BcdObjectHandle, L"Elements", 131101LL, &v22);
    v12 = v11;
    if ( v11 < 0 )
    {
      BiLogMessage(4LL, L"Failed to open key for object's elements. Status: %x", (unsigned int)v11);
    }
    else
    {
      if ( ultow_s(BcdElement, DstBuf, 0x16uLL, 16) )
      {
        v12 = -1073741823;
LABEL_14:
        if ( v22 )
          BiCloseKey(v22);
        if ( v12 >= 0 )
        {
          if ( BiIsLinkedToFirmwareVariable((__int64)BcdObjectHandle, (__int64)&v23) )
            BiSetFirmwareModifiedFromObject(BcdObjectHandle);
        }
        LOBYTE(v13) = v20;
        BiReleaseBcdSyncMutant(v13);
        return v12;
      }
      v14 = BiCreateKey(v22, DstBuf, 0x10002u, 1u, &v24, &v19);
      v12 = v14;
      if ( v14 < 0 )
      {
        BiLogMessage(4LL, L"Failed to open key for element %s. Status: %x", DstBuf, (unsigned int)v14);
        v8 = v24;
      }
      else
      {
        v15 = BiConvertElementToRegistryData(BcdElement, Buffer, BufferSize, 0LL, &P, &v21);
        v8 = v24;
        v12 = v15;
        v16 = P;
        if ( v15 < 0 )
        {
          BiLogMessage(4LL, L"Failed to convert data for element %s. Status: %x", DstBuf, (unsigned int)v15);
        }
        else
        {
          v17 = BiConvertElementFormatToValueType(HIBYTE(BcdElement) & 0xF);
          v18 = BiSetRegistryValue(v8, L"Element", 0LL, v17, v16, v21);
          v12 = v18;
          if ( v18 < 0 )
            BiLogMessage(4LL, L"Failed to set registry data for element %s. Status: %x", DstBuf, (unsigned int)v18);
        }
        if ( v16 )
          ExFreePoolWithTag(v16, 0x4B444342u);
        if ( v12 >= 0 )
          goto LABEL_12;
      }
    }
    if ( v19 )
    {
      BiDeleteKey(v8);
      v8 = 0LL;
    }
LABEL_12:
    if ( v8 )
      BiCloseKey(v8);
    goto LABEL_14;
  }
  return result;
}
