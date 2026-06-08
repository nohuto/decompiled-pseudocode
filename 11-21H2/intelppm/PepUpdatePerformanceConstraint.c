/*
 * XREFs of PepUpdatePerformanceConstraint @ 0x1C000D44C
 * Callers:
 *     PepDevicePowerControlCallback @ 0x1C000D500 (PepDevicePowerControlCallback.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002630 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall PepUpdatePerformanceConstraint(__int64 a1)
{
  unsigned int v2; // edi
  int v4; // [rsp+28h] [rbp-10h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = *(_DWORD *)(a1 + 56);
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      2u,
      0x27u,
      (__int64)&WPP_57f963f740483ea9c1cd5ca523cbe67d_Traceguids,
      v4);
  }
  v2 = 0;
  if ( *(_QWORD *)(a1 + 1184) )
  {
    _m_prefetchw((const void *)(a1 + 1180));
    if ( !(unsigned __int8)_InterlockedOr((volatile signed __int32 *)(a1 + 1180), 1u) )
      IoQueueWorkItem(*(PIO_WORKITEM *)(a1 + 1184), PepUpdatePerformanceConstraintWorker, CriticalWorkQueue, 0LL);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v2;
}
