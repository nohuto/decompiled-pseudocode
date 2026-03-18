/*
 * XREFs of WheapGetErrorSource @ 0x140643F2C
 * Callers:
 *     HalpMcaReportError @ 0x14050745C (HalpMcaReportError.c)
 *     HalHandleNMI @ 0x14050A180 (HalHandleNMI.c)
 *     KiMcheckAlternateReturn @ 0x14057C3C0 (KiMcheckAlternateReturn.c)
 *     WheapReportBootError @ 0x1406433D0 (WheapReportBootError.c)
 *     WheaErrorSourceGetState @ 0x140643540 (WheaErrorSourceGetState.c)
 *     WheaGetErrorSource @ 0x140643590 (WheaGetErrorSource.c)
 *     WheaReportHwError @ 0x140643630 (WheaReportHwError.c)
 *     WheapAttemptArchitecturalErrorRecovery @ 0x140643CB4 (WheapAttemptArchitecturalErrorRecovery.c)
 *     WheaAddHwErrorReportSectionDeviceDriver @ 0x140644110 (WheaAddHwErrorReportSectionDeviceDriver.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x1406443F0 (WheaHwErrorReportSubmitDeviceDriver.c)
 *     WheapFreeDriverPacketBuffer @ 0x140644808 (WheapFreeDriverPacketBuffer.c)
 *     WheapGetPreallocatedPacketBuffer @ 0x140644878 (WheapGetPreallocatedPacketBuffer.c)
 *     WheapInitErrorReportDeviceDriver @ 0x140644930 (WheapInitErrorReportDeviceDriver.c)
 *     WheapWmiExecuteErrorSourceMethod @ 0x140646428 (WheapWmiExecuteErrorSourceMethod.c)
 *     WheaRemoveErrorSource @ 0x140A08880 (WheaRemoveErrorSource.c)
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
