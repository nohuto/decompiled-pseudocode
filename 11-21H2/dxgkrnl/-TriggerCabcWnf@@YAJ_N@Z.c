/*
 * XREFs of ?TriggerCabcWnf@@YAJ_N@Z @ 0x1C02F2B08
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01A0EB0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TriggerCabcWnf(unsigned __int8 a1)
{
  NTSTATUS v2; // eax
  char v4; // [rsp+50h] [rbp+8h] BYREF
  int ValueData; // [rsp+58h] [rbp+10h] BYREF

  ValueData = a1;
  v2 = RtlWriteRegistryValue(2u, L"GraphicsDrivers", L"DisableCABC", 4u, &ValueData, 4u);
  if ( v2 < 0 )
    WdLogSingleEntry1(3LL, v2);
  v4 = a1 ^ 1;
  return ZwUpdateWnfStateData(&WNF_DXGK_CABC_ON_OR_OFF, &v4, 1LL, 0LL, 0LL, 0, 0);
}
