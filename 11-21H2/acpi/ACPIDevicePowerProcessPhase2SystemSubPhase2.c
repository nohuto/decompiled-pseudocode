/*
 * XREFs of ACPIDevicePowerProcessPhase2SystemSubPhase2 @ 0x1C0050680
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000EB80 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0051AC8 (WPP_RECORDER_SF_qd.c)
 *     LinkNodeRestoreHardwareState @ 0x1C006C22C (LinkNodeRestoreHardwareState.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase2SystemSubPhase2(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = 0;
  v3 = 5LL;
  *(_DWORD *)(a1 + 212) = 5;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      10,
      64,
      (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids,
      a1,
      5);
  if ( *(_DWORD *)(a1 + 104) != 1 || (v2 = LinkNodeRestoreHardwareState(v3, a1), result = 259LL, v2 != 259) )
  {
    ACPIDeviceCompleteGenericPhase(0LL, v2, 0LL, a1);
    return 0LL;
  }
  return result;
}
