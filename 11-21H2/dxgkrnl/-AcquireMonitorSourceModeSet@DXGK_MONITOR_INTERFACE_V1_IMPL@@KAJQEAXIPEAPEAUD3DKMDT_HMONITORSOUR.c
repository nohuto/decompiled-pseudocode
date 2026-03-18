/*
 * XREFs of ?AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGK_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C03B1FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DpiGetDxgAdapter @ 0x1C00151D0 (DpiGetDxgAdapter.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     MonitorGetMonitorHandle @ 0x1C01A0DA4 (MonitorGetMonitorHandle.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet(
        __int64 a1,
        unsigned int a2,
        struct D3DKMDT_HMONITORSOURCEMODESET__ **a3,
        const struct _DXGK_MONITORSOURCEMODESET_INTERFACE **a4)
{
  __int64 v6; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  unsigned int v11; // ebx
  DXGADAPTER *DxgAdapter; // rax
  __int64 v13; // rdi
  int MonitorHandle; // eax
  struct D3DKMDT_HMONITORSOURCEMODESET__ *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h]
  char v21; // [rsp+40h] [rbp-10h]
  struct D3DKMDT_HMONITORSOURCEMODESET__ *v22; // [rsp+80h] [rbp+30h] BYREF

  v19 = -1;
  v20 = 0LL;
  v6 = a2;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v21 = 1;
    v19 = 7052;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 7052);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v19, 7052);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
  v10[3] = a1;
  v10[4] = v6;
  v10[5] = a3;
  v10[6] = a4;
  if ( a3 && (*a3 = 0LL, a4) )
  {
    *a4 = 0LL;
    DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
    v13 = (__int64)DxgAdapter;
    if ( !DxgAdapter )
      goto LABEL_12;
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
      WdLogSingleEntry0(1LL);
    if ( *(_QWORD *)(v13 + 2792) )
    {
      v22 = 0LL;
      MonitorHandle = MonitorGetMonitorHandle(
                        v13,
                        (unsigned int)v6,
                        1u,
                        DXGK_MONITOR_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet,
                        (DXGMONITOR **)&v22);
      v11 = MonitorHandle;
      if ( MonitorHandle == -1073741275 )
      {
        WdLogSingleEntry1(3LL, v6);
        v11 = -1071774920;
      }
      else if ( MonitorHandle >= 0 )
      {
        v15 = v22;
        if ( !v22 )
          WdLogSingleEntry0(1LL);
        *a3 = v15;
        *a4 = &DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::DxgMonitorSourceModeSetInterfaceV1;
        v11 = 0;
      }
      else
      {
        WdLogSingleEntry2(2LL, v6, MonitorHandle);
      }
    }
    else
    {
LABEL_12:
      WdLogSingleEntry1(2LL, a1);
      v11 = -1071775742;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, a1);
    v11 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 )
  {
    LOBYTE(v16) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v19);
  }
  return v11;
}
