/*
 * XREFs of GetMonitorRectForDpi @ 0x1C00CFCCC
 * Callers:
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C0033750 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     GetMonitorRect @ 0x1C00C46EC (GetMonitorRect.c)
 *     GetMonitorRectForWindow @ 0x1C00CF9A8 (GetMonitorRectForWindow.c)
 *     GetScreenRectForDpi @ 0x1C00CFD44 (GetScreenRectForDpi.c)
 *     _MonitorFromRect @ 0x1C00D0160 (_MonitorFromRect.c)
 *     _MonitorFromPoint @ 0x1C00D03B0 (_MonitorFromPoint.c)
 *     UpdateWindowMonitor @ 0x1C00D16E0 (UpdateWindowMonitor.c)
 *     InternalGetRealClientRect @ 0x1C00EF568 (InternalGetRealClientRect.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x1C00F403C (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0123FE0 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x1C0214F34 (-CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x1C024BBAC (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
 * Callees:
 *     ExpandMonitorSpaceVertex @ 0x1C00D0BA8 (ExpandMonitorSpaceVertex.c)
 *     ScaleDPIRect @ 0x1C00D1E80 (ScaleDPIRect.c)
 */

__int64 *__fastcall GetMonitorRectForDpi(__int64 *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rax
  __int64 v6; // rdx
  unsigned __int16 v7; // si
  __int64 v9; // rax

  v3 = *(_QWORD *)(a2 + 40);
  v6 = *(unsigned __int16 *)(v3 + 62);
  v7 = *(_WORD *)(v3 + 60);
  *(_OWORD *)a1 = *(_OWORD *)(v3 + 28);
  if ( a3 )
  {
    v9 = ExpandMonitorSpaceVertex(a3, v6, *a1);
    ScaleDPIRect((_DWORD)a1, (_DWORD)a1, a3, v7, v9, *a1);
  }
  return a1;
}
