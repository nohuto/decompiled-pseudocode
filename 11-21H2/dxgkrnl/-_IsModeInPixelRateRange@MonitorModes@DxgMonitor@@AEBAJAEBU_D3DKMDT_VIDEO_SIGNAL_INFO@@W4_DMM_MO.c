/*
 * XREFs of ?_IsModeInPixelRateRange@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C01E2D18
 * Callers:
 *     ?_IsSupportedModeInternal@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C01A9040 (-_IsSupportedModeInternal@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_M.c)
 * Callees:
 *     SupportedPixelRate @ 0x1C01E2DDC (SupportedPixelRate.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_IsModeInPixelRateRange(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _BYTE *a4,
        _DWORD *a5)
{
  __int64 v9; // rcx
  __int64 i; // rax
  int *v11; // rbx
  char v12; // al

  if ( a3 - 1 > 1 )
    WdLogSingleEntry0(1LL);
  if ( !a4 )
    WdLogSingleEntry0(1LL);
  if ( !a5 )
    WdLogSingleEntry0(1LL);
  v9 = a1 + 176;
  for ( i = *(_QWORD *)(a1 + 176); ; i = *((_QWORD *)v11 + 6) )
  {
    if ( i == v9 )
      goto LABEL_18;
    v11 = (int *)(i - 48);
    if ( !i )
      v11 = 0LL;
    if ( !v11 )
    {
LABEL_18:
      *a4 = 1;
      return 0LL;
    }
    if ( v11[9] == 2 )
      break;
  }
  v12 = SupportedPixelRate(a2, v11, a3);
  *a4 = v12;
  if ( v12 )
    return 0LL;
  if ( *v11 == 2 )
  {
    *a5 = 3;
    return 0LL;
  }
  if ( *v11 == 3 )
  {
    *a5 = 5;
    return 0LL;
  }
  WdLogSingleEntry1(2LL, *v11);
  return 3223192348LL;
}
