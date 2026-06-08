/*
 * XREFs of PepNotifyPerfConstraints @ 0x1C000A7B8
 * Callers:
 *     RegisterKernelPepPerf @ 0x1C0033D20 (RegisterKernelPepPerf.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x1C003A100 (PepUpdatePerformanceConstraintWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00045A0 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall PepNotifyPerfConstraints(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v3; // rcx
  int v6; // ebx
  int v8; // [rsp+28h] [rbp-10h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 1120);
  v9 = 0LL;
  v6 = PoFxProcessorNotification(v3, 12LL, &v9);
  if ( v6 >= 0 )
  {
    *a2 = v9;
    *a3 = HIDWORD(v9);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = v6;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      2u,
      0x23u,
      (__int64)&WPP_57f963f740483ea9c1cd5ca523cbe67d_Traceguids,
      v8);
  }
  return (unsigned int)v6;
}
