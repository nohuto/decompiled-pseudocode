/*
 * XREFs of ?_IsSupportedModeInternal@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C01A9040
 * Callers:
 *     ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C01A8DFC (-IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z.c)
 * Callees:
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C0010CA8 (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     ?_IsModeSupportedByMonitorMode@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C01D10F8 (-_IsModeSupportedByMonitorMode@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_.c)
 *     ?_IsModeInPixelRateRange@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C01E2D18 (-_IsModeInPixelRateRange@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MO.c)
 *     ?_IsModeInActiveSizeRange@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C01E6A40 (-_IsModeInActiveSizeRange@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_M.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_IsSupportedModeInternal(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int8 a4,
        _BYTE *a5,
        int *a6)
{
  _QWORD *v10; // rdi
  __int64 v11; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // rax
  int IsModeInPixelRateRange; // eax
  __int64 v15; // rbx
  int v16; // eax
  int IsModeSupportedByMonitorMode; // eax
  int v19; // eax
  int IsModeInActiveSizeRange; // eax
  int v21; // eax

  if ( a3 - 1 > 1 )
    WdLogSingleEntry0(1LL);
  if ( !a5 )
    WdLogSingleEntry0(1LL);
  if ( !a6 )
    WdLogSingleEntry0(1LL);
  *a6 = 0;
  if ( a3 - 1 > 1 )
    WdLogSingleEntry0(1LL);
  if ( !a5 )
    WdLogSingleEntry0(1LL);
  v10 = (_QWORD *)(a1 + 128);
  v11 = *(_QWORD *)(a1 + 128);
  if ( (_QWORD *)*v10 != v10 )
  {
    v12 = (_QWORD *)(v11 - 96);
    if ( !v11 )
      v12 = 0LL;
    if ( v12 )
    {
      while ( *((_DWORD *)v12 + 21) != 5
           || *(_DWORD *)(a2 + 12) != *((_DWORD *)v12 + 5)
           || *(_DWORD *)(a2 + 16) != *((_DWORD *)v12 + 6)
           || ((*(_BYTE *)(a2 + 48) ^ *((_BYTE *)v12 + 56)) & 7) != 0
           || !a4
           && !DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(
                 (const struct _D3DDDI_RATIONAL *)(a2 + 20),
                 (const struct _D3DDDI_RATIONAL *)((char *)v12 + 28),
                 300) )
      {
        v13 = (_QWORD *)v12[12];
        if ( v13 != v10 )
        {
          v12 = v13 - 12;
          if ( !v13 )
            v12 = 0LL;
          if ( v12 )
            continue;
        }
        goto LABEL_20;
      }
      *a6 = 7;
      *a5 = 1;
      return 0LL;
    }
  }
LABEL_20:
  *a5 = 0;
  if ( *a6 )
    WdLogSingleEntry0(1LL);
  if ( !a4 )
  {
    IsModeInPixelRateRange = DxgMonitor::MonitorModes::_IsModeInPixelRateRange(a1, a2, a3, a5, a6);
    v15 = IsModeInPixelRateRange;
    if ( IsModeInPixelRateRange < 0 )
      goto LABEL_46;
    v16 = *a6;
    if ( !*a5 )
    {
      if ( !v16 )
LABEL_50:
        WdLogSingleEntry0(1LL);
      return 0LL;
    }
    if ( v16 )
      WdLogSingleEntry0(1LL);
  }
  IsModeSupportedByMonitorMode = DxgMonitor::MonitorModes::_IsModeSupportedByMonitorMode(a1, a2, a3, a4, a5, a6);
  v15 = IsModeSupportedByMonitorMode;
  if ( IsModeSupportedByMonitorMode >= 0 )
  {
    v19 = *a6;
    if ( *a5 )
    {
      if ( !v19 )
        goto LABEL_50;
      return 0LL;
    }
    if ( v19 )
      WdLogSingleEntry0(1LL);
    IsModeInActiveSizeRange = DxgMonitor::MonitorModes::_IsModeInActiveSizeRange(a1, a2, a3, a5, a6);
    v15 = IsModeInActiveSizeRange;
    if ( IsModeInActiveSizeRange >= 0 )
    {
      v21 = *a6;
      if ( !*a5 )
      {
        if ( v21 )
          WdLogSingleEntry0(1LL);
        *a5 = 0;
        *a6 = 1;
        return 0LL;
      }
      if ( !v21 )
        goto LABEL_50;
      return 0LL;
    }
  }
LABEL_46:
  WdLogSingleEntry1(2LL, v15);
  return (unsigned int)v15;
}
