/*
 * XREFs of DxgkReportDevicePoweredOn @ 0x1C001B374
 * Callers:
 *     DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x1C001A68C (DpiSetDevicePowerTransitionStateAtPassiveLevel.c)
 *     DpiRequestDevicePowerState @ 0x1C001AE94 (DpiRequestDevicePowerState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkReportDevicePoweredOn(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 3032);
    if ( v1 )
      return PoFxReportDevicePoweredOn(v1);
  }
  return result;
}
