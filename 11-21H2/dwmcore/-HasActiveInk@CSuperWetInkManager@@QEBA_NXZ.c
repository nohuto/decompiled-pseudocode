/*
 * XREFs of ?HasActiveInk@CSuperWetInkManager@@QEBA_NXZ @ 0x180080D48
 * Callers:
 *     ?GetCompositorClockBoost@CComposition@@QEBA_NXZ @ 0x18001F470 (-GetCompositorClockBoost@CComposition@@QEBA_NXZ.c)
 *     ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x18007DDA4 (-PostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?UpdateCompositorClockBoost@CRenderTargetManager@@AEAAXXZ @ 0x180080CC8 (-UpdateCompositorClockBoost@CRenderTargetManager@@AEAAXXZ.c)
 *     ?AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCDirtyRegion@@@Z @ 0x180081554 (-AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRectU.c)
 * Callees:
 *     <none>
 */

char __fastcall CSuperWetInkManager::HasActiveInk(CSuperWetInkManager *this)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v4; // rcx

  if ( !*((_QWORD *)this + 1) )
  {
    v1 = *((_QWORD *)this + 5);
    v2 = *((_QWORD *)this + 6);
    if ( v1 == v2 )
      return 0;
    v4 = *(_QWORD *)(*(_QWORD *)this + 496LL);
    while ( (unsigned __int64)(v4 - *(_QWORD *)(v1 + 88)) >= 0xA )
    {
      v1 += 104LL;
      if ( v1 == v2 )
        return 0;
    }
  }
  return 1;
}
