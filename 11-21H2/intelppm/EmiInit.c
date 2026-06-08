/*
 * XREFs of EmiInit @ 0x1C002DBA8
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0028678 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EmiInit(__int64 a1)
{
  __int64 v2; // rsi
  int v3; // ebx
  char v5; // [rsp+20h] [rbp-18h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _QWORD))(WdfFunctions_01015 + 616))(
         WdfDriverGlobals,
         v2,
         &GUID_DEVICE_ENERGY_METER,
         0LL);
  if ( v3 >= 0 )
  {
    v5 = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _QWORD, char))(WdfFunctions_01015 + 624))(
      WdfDriverGlobals,
      v2,
      &GUID_DEVICE_ENERGY_METER,
      0LL,
      v5);
    EmiChannelCount = ((__int64 (__fastcall *)(__int64, __int64))qword_1C001DF78)(a1, 0x800000000000LL);
  }
  return (unsigned int)v3;
}
