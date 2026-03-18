/*
 * XREFs of GetWindowBordersForDpi @ 0x1C00C6AB0
 * Callers:
 *     FindNCHit @ 0x1C00AD74C (FindNCHit.c)
 *     GetWindowBorders @ 0x1C00C6A7C (GetWindowBorders.c)
 *     MNPositionSysMenu @ 0x1C01FF5E4 (MNPositionSysMenu.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0217C90 (xxxMNFindWindowFromPoint.c)
 *     xxxCalcCaptionButton @ 0x1C022BDD0 (xxxCalcCaptionButton.c)
 *     xxxGetMenuBarInfo @ 0x1C0230D6C (xxxGetMenuBarInfo.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0239120 (xxxMNRecomputeBarIfNeeded.c)
 * Callees:
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x1C00EDCBC (GetWindowBordersForDpiWithCompatFlags2.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetWindowBordersForDpi(int a1, int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 ThreadWin32Thread; // rax
  int v8; // r8d
  int v9; // eax

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( *(_DWORD *)(ThreadWin32Thread + 632) > 0x9900u )
    v9 = 0;
  else
    v9 = *(_DWORD *)(ThreadWin32Thread + 648);
  return GetWindowBordersForDpiWithCompatFlags2(a1, a2, v8, 0, a5, v9);
}
