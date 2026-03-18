/*
 * XREFs of WheapGetErrorSource @ 0x140610E98
 * Callers:
 *     HalpMcaReportError @ 0x140503748 (HalpMcaReportError.c)
 *     HalHandleNMI @ 0x1405062D0 (HalHandleNMI.c)
 *     KiMcheckAlternateReturn @ 0x140580390 (KiMcheckAlternateReturn.c)
 *     WheapReportBootError @ 0x1406103C8 (WheapReportBootError.c)
 *     WheaErrorSourceGetState @ 0x140610540 (WheaErrorSourceGetState.c)
 *     WheaGetErrorSource @ 0x140610590 (WheaGetErrorSource.c)
 *     WheaReportHwError @ 0x140610630 (WheaReportHwError.c)
 *     WheapAttemptErrorRecovery @ 0x140610C64 (WheapAttemptErrorRecovery.c)
 *     WheaAddHwErrorReportSectionDeviceDriver @ 0x140611100 (WheaAddHwErrorReportSectionDeviceDriver.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x1406113E0 (WheaHwErrorReportSubmitDeviceDriver.c)
 *     WheapFreeDriverPacketBuffer @ 0x1406117F4 (WheapFreeDriverPacketBuffer.c)
 *     WheapGetPreallocatedPacketBuffer @ 0x140611870 (WheapGetPreallocatedPacketBuffer.c)
 *     WheapInitErrorReportDeviceDriver @ 0x140611928 (WheapInitErrorReportDeviceDriver.c)
 *     WheapWmiExecuteErrorSourceMethod @ 0x140613B48 (WheapWmiExecuteErrorSourceMethod.c)
 *     WheaRemoveErrorSource @ 0x140A078C0 (WheaRemoveErrorSource.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall WheapGetErrorSource(__int64 a1, unsigned int a2)
{
  int v2; // r10d
  int v3; // r9d
  __int64 *v4; // r8

  if ( *(_DWORD *)a1 != 1279410516 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  if ( a2 >= *(_DWORD *)(a1 + 8) )
    return 0LL;
  v2 = *(_DWORD *)(a1 + 4);
  v3 = 0;
  v4 = *(__int64 **)(a1 + 16);
  if ( v2 <= 0 )
    return 0LL;
  while ( *((_DWORD *)v4 + 31) != a2 || *((_BYTE *)v4 + 88) || (unsigned int)(*((_DWORD *)v4 + 27) - 1) > 1 )
  {
    v4 = (__int64 *)*v4;
    if ( ++v3 >= v2 )
      return 0LL;
  }
  return v4;
}
