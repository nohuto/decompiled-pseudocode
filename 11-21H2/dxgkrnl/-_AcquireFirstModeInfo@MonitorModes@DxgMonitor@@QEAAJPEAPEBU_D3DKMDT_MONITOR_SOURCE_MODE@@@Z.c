/*
 * XREFs of ?_AcquireFirstModeInfo@MonitorModes@DxgMonitor@@QEAAJPEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C020DDF4
 * Callers:
 *     ?AcquireFirstModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C020DCF0 (-AcquireFirstModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCE.c)
 * Callees:
 *     ?_CreateMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJPEBUDMMMONITORSOURCEMODE@12@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C020E1DC (-_CreateMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJPEBUDMMMONITORSOURCEMODE@12@PEAPEAU_.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_AcquireFirstModeInfo(
        DxgMonitor::MonitorModes *this,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a2)
{
  _QWORD *v4; // rax
  unsigned int v5; // edi
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v6; // rbx
  _QWORD *v8; // rbx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE *v11; // rdx
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v12; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 30) )
  {
    v8 = (_QWORD *)((char *)this + 128);
    v12 = 0LL;
    v9 = (_QWORD *)*((_QWORD *)this + 16);
    if ( v9 == v8 )
      goto LABEL_14;
    v4 = v9 - 12;
    if ( !v9 )
      v4 = 0LL;
    if ( !v4 )
LABEL_14:
      WdLogSingleEntry0(1LL);
    v10 = (_QWORD *)*v8;
    if ( (_QWORD *)*v8 == v8 )
    {
      v11 = 0LL;
    }
    else
    {
      v11 = (const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE *)(v10 - 12);
      if ( !v10 )
        v11 = 0LL;
    }
    v5 = DxgMonitor::MonitorModes::_CreateMonitorModeEnumerator(this, v11, &v12);
    if ( !v5 )
    {
      v6 = v12;
      if ( !v12 )
        WdLogSingleEntry0(1LL);
      *a2 = v6;
    }
    return v5;
  }
  else
  {
    WdLogNewEntry5_WdTrace(this, a2);
    return 1075708747LL;
  }
}
