/*
 * XREFs of MonitorSetScaleFactorOverride @ 0x1C03B13F0
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1C02EC214 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z @ 0x1C001356C (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z.c)
 */

__int64 __fastcall MonitorSetScaleFactorOverride(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = (unsigned int)a2;
  v6 = WdLogNewEntry5_WdTrace(a1, a2);
  *(_QWORD *)(v6 + 24) = v4;
  *(_QWORD *)(v6 + 32) = a1;
  if ( !a1 || (_DWORD)v4 == -1 )
    return -1073741811LL;
  MONITOR_MGR::AcquireMonitorExclusive(&v10, a1, v4, 1u);
  v7 = v10;
  if ( v10 )
  {
    *(_DWORD *)(v10 + 468) = a3;
    v8 = 0;
    ExReleaseResourceLite((PERESOURCE)(v7 + 24));
    KeLeaveCriticalRegion();
  }
  else
  {
    v8 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
  }
  return v8;
}
