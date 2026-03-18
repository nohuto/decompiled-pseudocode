/*
 * XREFs of ?ReleaseDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@QEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C0216180
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0011D60 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ??0?$RESOURCE_LOCK@VMonitorDescriptorState@DxgMonitor@@@@QEAA@PEAVMonitorDescriptorState@DxgMonitor@@_N@Z @ 0x1C001CB44 (--0-$RESOURCE_LOCK@VMonitorDescriptorState@DxgMonitor@@@@QEAA@PEAVMonitorDescriptorState@DxgMoni.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL::ReleaseDescriptorInfo(
        struct D3DKMDT_HMONITORDESCRIPTORSET__ *const a1,
        struct _D3DKMDT_MONITOR_DESCRIPTOR *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  int MonitorFromHandle; // eax
  PERESOURCE v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v13; // edi
  struct _ERESOURCE *v14; // rbx
  struct _ERESOURCE *Flink; // rcx
  const struct _D3DKMDT_MONITOR_DESCRIPTOR *v16; // rax
  const struct _D3DKMDT_MONITOR_DESCRIPTOR *v17; // rdx
  const struct _D3DKMDT_MONITOR_DESCRIPTOR **DataSize; // rcx
  int v19; // [rsp+20h] [rbp-20h] BYREF
  __int64 v20; // [rsp+28h] [rbp-18h]
  char v21; // [rsp+30h] [rbp-10h]
  PERESOURCE Resource; // [rsp+50h] [rbp+10h] BYREF

  v19 = -1;
  v20 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v21 = 1;
    v19 = 7030;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 7030);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v19, 7030);
  v7 = WdLogNewEntry5_WdTrace(v6, v5);
  *(_QWORD *)(v7 + 24) = a1;
  *(_QWORD *)(v7 + 32) = a2;
  if ( a2 )
  {
    Resource = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, (struct DXGMONITOR **)&Resource);
    if ( MonitorFromHandle == -1073741816 )
    {
      WdLogSingleEntry1(2LL, a1);
      v13 = -1071774934;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
        WdLogSingleEntry0(1LL);
      v9 = Resource;
      if ( !Resource )
        WdLogSingleEntry0(1LL);
      RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>::RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>(
        &Resource,
        (struct _ERESOURCE *)v9[2].SystemResourcesList.Blink,
        1);
      v14 = Resource;
      Flink = *(struct _ERESOURCE **)&Resource[1].ActiveEntries;
      if ( Flink == (struct _ERESOURCE *)&Resource[1].ActiveEntries )
      {
LABEL_28:
        WdLogSingleEntry2(2LL, a2, Resource);
        v13 = -1071774928;
      }
      else
      {
        v16 = a2 + 1;
        while ( Flink != (struct _ERESOURCE *)v16 )
        {
          if ( &Resource[1].ActiveEntries == (ULONG *)Flink )
            goto LABEL_28;
          Flink = (struct _ERESOURCE *)Flink->SystemResourcesList.Flink;
        }
        v17 = *(const struct _D3DKMDT_MONITOR_DESCRIPTOR **)&v16->Id;
        if ( *(const struct _D3DKMDT_MONITOR_DESCRIPTOR **)(*(_QWORD *)&v16->Id + 8LL) != v16
          || (DataSize = (const struct _D3DKMDT_MONITOR_DESCRIPTOR **)a2[1].DataSize, *DataSize != v16) )
        {
          __fastfail(3u);
        }
        *DataSize = v17;
        v17->DataSize = (SIZE_T)DataSize;
        operator delete(a2);
        v13 = 0;
      }
      if ( v14 )
      {
        ExReleaseResourceLite(v14);
        KeLeaveCriticalRegion();
      }
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    v13 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 )
  {
    LOBYTE(v10) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v19);
  }
  return v13;
}
