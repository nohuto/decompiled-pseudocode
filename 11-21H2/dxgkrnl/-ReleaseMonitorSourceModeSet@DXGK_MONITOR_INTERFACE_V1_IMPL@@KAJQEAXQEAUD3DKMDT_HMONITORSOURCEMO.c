/*
 * XREFs of ?ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXQEAUD3DKMDT_HMONITORSOURCEMODESET__@@@Z @ 0x1C03B3110
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DpiGetDxgAdapter @ 0x1C00151D0 (DpiGetDxgAdapter.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     MonitorReleaseMonitorHandle @ 0x1C01A05B4 (MonitorReleaseMonitorHandle.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V1_IMPL::ReleaseMonitorSourceModeSet(
        __int64 a1,
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  DXGADAPTER *DxgAdapter; // rax
  __int64 v9; // rbx
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+28h] [rbp-20h]
  char v16; // [rsp+30h] [rbp-18h]

  v14 = -1;
  v15 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v16 = 1;
    v14 = 7053;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 7053);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v14, 7053);
  v7 = WdLogNewEntry5_WdTrace(v6, v5);
  *(_QWORD *)(v7 + 24) = a2;
  *(_QWORD *)(v7 + 32) = a1;
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  v9 = (__int64)DxgAdapter;
  if ( !DxgAdapter )
    goto LABEL_9;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
    WdLogSingleEntry0(1LL);
  if ( *(_QWORD *)(v9 + 2792) )
  {
    if ( a2 )
    {
      v10 = MonitorReleaseMonitorHandle(v9, (__int64)a2, DXGK_MONITOR_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet);
    }
    else
    {
      WdLogSingleEntry1(2LL, 0LL);
      v10 = -1071774943;
    }
  }
  else
  {
LABEL_9:
    WdLogSingleEntry1(2LL, a1);
    v10 = -1071775742;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( v16 )
  {
    LOBYTE(v11) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v14);
  }
  return v10;
}
