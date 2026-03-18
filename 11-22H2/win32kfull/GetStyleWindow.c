/*
 * XREFs of GetStyleWindow @ 0x1C0119070
 * Callers:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00317F0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     CalcVisRgn @ 0x1C0033320 (CalcVisRgn.c)
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     zzzLockWindowUpdate2 @ 0x1C005DC44 (zzzLockWindowUpdate2.c)
 *     UpdateRedirectedDCE @ 0x1C008EDF0 (UpdateRedirectedDCE.c)
 *     SpbCheckDce @ 0x1C008F1F0 (SpbCheckDce.c)
 *     xxxDesktopPaintCallback @ 0x1C00B6FE0 (xxxDesktopPaintCallback.c)
 *     UnsetLayeredWindow @ 0x1C00C8C24 (UnsetLayeredWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00CF14C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     UnredirectDCEs @ 0x1C00D3C74 (UnredirectDCEs.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00EA3D4 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxSetWindowStyle @ 0x1C00EB620 (xxxSetWindowStyle.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00F7B60 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxSimpleDoSyncPaint @ 0x1C0118654 (xxxSimpleDoSyncPaint.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C0118F90 (UserGetRedirectedWindowOrigin.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C0154A60 (NtUserHwndQueryRedirectionInfo.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0156B26 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxPrintWindow @ 0x1C01BCFE4 (xxxPrintWindow.c)
 *     NtUserHwndSetRedirectionInfo @ 0x1C01D4DA0 (NtUserHwndSetRedirectionInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetStyleWindow(__int64 a1, int a2)
{
  __int64 v2; // r8

  v2 = a1;
  if ( !a1 )
    return v2;
  while ( ((unsigned __int8)a2 & *(_BYTE *)(*(_QWORD *)(v2 + 40) + BYTE1(a2) + 16LL)) == 0 )
  {
    v2 = *(_QWORD *)(v2 + 104);
    if ( !v2 )
      return v2;
  }
  if ( (*(_WORD *)(*(_QWORD *)(v2 + 40) + 42LL) & 0x2FFF) == 0x29D && v2 != a1 && (a2 == 2848 || a2 == 2568) )
    return 0LL;
  else
    return v2;
}
