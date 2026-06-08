/*
 * XREFs of RegisterKernelPerfStatesCallback @ 0x1C0035290
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004990 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C510 (_guard_dispatch_icall_nop.c)
 */

__int64 RegisterKernelPerfStatesCallback()
{
  int v0; // ebx
  int v2; // [rsp+28h] [rbp-10h]

  v0 = ((__int64 (*)(void))qword_1C00127C8)();
  if ( v0 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v2 = v0;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x1Fu,
      (__int64)&WPP_9a67812f3be535b726a3611c121e2d7f_Traceguids,
      v2);
  }
  return (unsigned int)v0;
}
