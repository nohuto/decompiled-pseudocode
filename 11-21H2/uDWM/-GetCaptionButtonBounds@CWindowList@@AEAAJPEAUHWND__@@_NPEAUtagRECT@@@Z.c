/*
 * XREFs of ?GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@_NPEAUtagRECT@@@Z @ 0x180002EF8
 * Callers:
 *     ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x180002E60 (-GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 * Callees:
 *     ?GetMetricsForCaptionBar@CWindowData@@QEBAHH_N@Z @ 0x180003098 (-GetMetricsForCaptionBar@CWindowData@@QEBAHH_N@Z.c)
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x180003768 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180020CF0 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?GetCurrentStyle@CTopLevelWindow@@SA?AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z @ 0x18002D8C0 (-GetCurrentStyle@CTopLevelWindow@@SA-AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z.c)
 *     floor @ 0x180060EC8 (floor.c)
 */

__int64 __fastcall CWindowList::GetCaptionButtonBounds(CWindowList *this, HWND a2, bool a3, struct tagRECT *a4)
{
  int v5; // ebx
  int SyncedWindowDataByHwnd; // eax
  __int64 v8; // rdx
  unsigned int v9; // esi
  CWindowData *v10; // rbp
  unsigned int CurrentStyle; // r14d
  int v12; // edx
  int v13; // edi
  int v14; // r12d
  int v15; // edx
  int MetricsForCaptionBar; // r15d
  float v17; // xmm6_4
  float v18; // xmm7_4
  int v19; // edx
  LONG v20; // edx
  int v22; // ecx
  LONG v23; // ecx
  CWindowData *v24; // [rsp+30h] [rbp-68h] BYREF

  v5 = 0;
  v24 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v24);
  v9 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowDataByHwnd, 0x1527u, 0LL);
    return v9;
  }
  v10 = v24;
  if ( !v24 )
    return (unsigned int)-2147024809;
  LOBYTE(v8) = 1;
  CurrentStyle = CTopLevelWindow::GetCurrentStyle(v24, v8);
  if ( !CTopLevelWindow::HasRenderedBorder(CurrentStyle) )
    return (unsigned int)-2147024809;
  v12 = *((_DWORD *)v10 + 28);
  v13 = 0;
  v14 = v12 + 1;
  if ( (CurrentStyle & 0x20) == 0 )
    v14 = v12 - 1;
  v15 = 53;
  if ( (CurrentStyle & 2) == 0 )
    v15 = 31;
  MetricsForCaptionBar = CWindowData::GetMetricsForCaptionBar(v10, v15, a3);
  v17 = (float)MetricsForCaptionBar;
  if ( (CurrentStyle & 0x400) != 0 )
    v13 = (int)floor((float)(v17 * 2.2272727) + 0.5);
  v18 = v17 * 2.1818182;
  if ( (CurrentStyle & 0x200) != 0 )
    v13 += (int)floor(v18 + 0.5);
  if ( (CurrentStyle & 0x100) != 0 )
  {
    if ( (CurrentStyle & 0x800) != 0 )
      v13 += (int)floor(v18 + 0.5);
    goto LABEL_20;
  }
  if ( (CurrentStyle & 0x800) != 0 )
LABEL_20:
    v13 += (int)floor((float)(v17 * 2.2272727) + 0.5);
  a4->top = 0;
  v19 = 0;
  a4->bottom = MetricsForCaptionBar + *((_DWORD *)v10 + 28);
  if ( *((_DWORD *)v10 + 56) - *((_DWORD *)v10 + 54) >= 0 )
    v19 = *((_DWORD *)v10 + 56) - *((_DWORD *)v10 + 54);
  v20 = v19 - v14;
  a4->right = v20;
  a4->left = v20 - v13;
  if ( (CurrentStyle & 0x20000) != 0 && (*((_DWORD *)v10 + 30) & 0x400000) == 0 )
  {
    v22 = 0;
    if ( *((_DWORD *)v10 + 56) - *((_DWORD *)v10 + 54) >= 0 )
      v22 = *((_DWORD *)v10 + 56) - *((_DWORD *)v10 + 54);
    v23 = v22 - v20;
    a4->left = v23;
    if ( v13 >= 0 )
      v5 = v13;
    a4->right = v23 + v5;
  }
  return v9;
}
