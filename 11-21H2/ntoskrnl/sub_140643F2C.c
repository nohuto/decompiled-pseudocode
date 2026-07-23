/*
 * XREFs of sub_140643F2C @ 0x140643F2C
 * Callers:
 *     sub_14050745C @ 0x14050745C (sub_14050745C.c)
 *     HalHandleNMI @ 0x14050A180 (HalHandleNMI.c)
 *     ?Process@CPullPin@@AEAAXXZ @ 0x14057C3C0 (-Process@CPullPin@@AEAAXXZ.c)
 *     sub_1406433D0 @ 0x1406433D0 (sub_1406433D0.c)
 *     WheaErrorSourceGetState @ 0x140643540 (WheaErrorSourceGetState.c)
 *     WheaGetErrorSource @ 0x140643590 (WheaGetErrorSource.c)
 *     WheaReportHwError @ 0x140643630 (WheaReportHwError.c)
 *     sub_140643CB4 @ 0x140643CB4 (sub_140643CB4.c)
 *     WheaAddHwErrorReportSectionDeviceDriver @ 0x140644110 (WheaAddHwErrorReportSectionDeviceDriver.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x1406443F0 (WheaHwErrorReportSubmitDeviceDriver.c)
 *     sub_140644808 @ 0x140644808 (sub_140644808.c)
 *     sub_140644878 @ 0x140644878 (sub_140644878.c)
 *     sub_140644930 @ 0x140644930 (sub_140644930.c)
 *     sub_140646428 @ 0x140646428 (sub_140646428.c)
 *     WheaRemoveErrorSource @ 0x140A08880 (WheaRemoveErrorSource.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_140643F2C(__int64 a1, unsigned int a2)
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
