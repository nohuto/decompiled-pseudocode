/*
 * XREFs of GetScreenRect @ 0x1C00AC98C
 * Callers:
 *     _GetPointerDeviceRects @ 0x1C00AC894 (_GetPointerDeviceRects.c)
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C0150640 (-MiPConvertPoint@@YA-AUtagPOINT@@PEBU1@@Z.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C0151F42 (VirtualizeMultiMonDigitizerSize.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C01AB63C (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     _GetMouseMovePointsEx @ 0x1C01AC90C (_GetMouseMovePointsEx.c)
 *     xxxInjectTouchInput @ 0x1C01B07F4 (xxxInjectTouchInput.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01B9DD8 (RemapHimetricPointsForMultiMonDigitizers.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01D18B0 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C02242FC (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 * Callees:
 *     GetScreenRectForDpi @ 0x1C00CFD44 (GetScreenRectForDpi.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall GetScreenRect(__int64 a1)
{
  unsigned __int16 v2; // bx

  v2 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(a1) >> 8) & 0x1FF;
  if ( v2
    && (!*((_QWORD *)PtiCurrentShared() + 57)
     || (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL) + 64LL) & 1) == 0) )
  {
    v2 = 0;
  }
  GetScreenRectForDpi(a1, v2);
  return a1;
}
