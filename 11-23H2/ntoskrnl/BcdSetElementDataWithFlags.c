/*
 * XREFs of BcdSetElementDataWithFlags @ 0x140804118
 * Callers:
 *     PopBcdSetupResumeObject @ 0x140801D28 (PopBcdSetupResumeObject.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140802854 (PopBcdSetDefaultResumeObjectElements.c)
 *     BiBindEfiBootManager @ 0x140802B0C (BiBindEfiBootManager.c)
 *     BiUpdateBcdObject @ 0x140804304 (BiUpdateBcdObject.c)
 *     PopBcdRegenerateResumeObject @ 0x14099CC04 (PopBcdRegenerateResumeObject.c)
 *     PopBcdSetPendingResume @ 0x14099CE40 (PopBcdSetPendingResume.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1409D0DF4 (SepSecureBootUpdateBcdDataForRule.c)
 *     BcdSetElementData @ 0x140A5C834 (BcdSetElementData.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140A5D7C4 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 * Callees:
 *     BiSetFirmwareModifiedFromObject @ 0x140373CC8 (BiSetFirmwareModifiedFromObject.c)
 *     BiIsOfflineHandle @ 0x140373DD0 (BiIsOfflineHandle.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     _ultow_s @ 0x1403DE7F0 (_ultow_s.c)
 *     BiDeleteElement @ 0x14080367C (BiDeleteElement.c)
 *     BiDeleteKey @ 0x1408038D8 (BiDeleteKey.c)
 *     BiSetRegistryValue @ 0x140803A1C (BiSetRegistryValue.c)
 *     BiCreateKey @ 0x140803E04 (BiCreateKey.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140803FF0 (BiIsLinkedToFirmwareVariable.c)
 *     BiOpenKey @ 0x1408050D0 (BiOpenKey.c)
 *     BiCloseKey @ 0x14080525C (BiCloseKey.c)
 *     BiLogMessage @ 0x140805620 (BiLogMessage.c)
 *     BiAcquireBcdSyncMutant @ 0x140805634 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1408056DC (BiReleaseBcdSyncMutant.c)
 *     BiConvertElementFormatToValueType @ 0x1408058FC (BiConvertElementFormatToValueType.c)
 *     BiConvertElementToRegistryData @ 0x1408062E0 (BiConvertElementToRegistryData.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BcdSetElementDataWithFlags(void *a1, unsigned int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 result; // rax
  int v11; // eax
  int v12; // ebx
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
  unsigned int v23; // [rsp+40h] [rbp-31h] BYREF
  __int64 v24; // [rsp+48h] [rbp-29h] BYREF
  PVOID P; // [rsp+50h] [rbp-21h] BYREF
  wchar_t DstBuf[24]; // [rsp+58h] [rbp-19h] BYREF

  v23 = a2;
  v21 = 0;
  if ( !a4 && a5 )
    return 3221225485LL;
  v22 = 0LL;
  v8 = 0LL;
  v19 = 0;
  v24 = 0LL;
  P = 0LL;
  if ( !a5 )
  {
    BiDeleteElement(a1, a2);
    return 0LL;
  }
  LOBYTE(v9) = BiIsOfflineHandle((char)a1);
  v20 = v9;
  result = BiAcquireBcdSyncMutant(v9);
  if ( (int)result >= 0 )
  {
    BiLogMessage(2LL, L"Setting element %08x", a2);
    v11 = BiOpenKey(a1, L"Elements", 131101LL, &v22);
    v12 = v11;
    if ( v11 < 0 )
    {
      BiLogMessage(4LL, L"Failed to open key for object's elements. Status: %x", (unsigned int)v11);
    }
    else
    {
      if ( ultow_s(a2, DstBuf, 0x16uLL, 16) )
      {
        v12 = -1073741823;
LABEL_14:
        if ( v22 )
          BiCloseKey(v22);
        if ( v12 >= 0 )
        {
          if ( BiIsLinkedToFirmwareVariable((__int64)a1, (__int64)&v23) )
            BiSetFirmwareModifiedFromObject(a1);
        }
        LOBYTE(v13) = v20;
        BiReleaseBcdSyncMutant(v13);
        return (unsigned int)v12;
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
        v15 = BiConvertElementToRegistryData(a2, a4, a5, 0LL, &P, &v21);
        v8 = v24;
        v12 = v15;
        v16 = P;
        if ( v15 < 0 )
        {
          BiLogMessage(4LL, L"Failed to convert data for element %s. Status: %x", DstBuf, (unsigned int)v15);
        }
        else
        {
          v17 = BiConvertElementFormatToValueType(HIBYTE(a2) & 0xF);
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
