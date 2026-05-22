/*
 * XREFs of ?InternalRelease@?$ComPtr@VCGenericInkProxy@DirectComposition@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E5C04
 * Callers:
 *     ??1CDelegatedInkTrailCookieTracker@DirectComposition@@UEAA@XZ @ 0x1800E5954 (--1CDelegatedInkTrailCookieTracker@DirectComposition@@UEAA@XZ.c)
 *     ??1CGenericInk@DirectComposition@@EEAA@XZ @ 0x1800ED878 (--1CGenericInk@DirectComposition@@EEAA@XZ.c)
 *     ?DisposeOnDelayedDestruction@CGenericInk@DirectComposition@@MEAAXXZ @ 0x1800F8AB0 (-DisposeOnDelayedDestruction@CGenericInk@DirectComposition@@MEAAXXZ.c)
 *     ??1CSynchronousSuperWetInk@DirectComposition@@EEAA@XZ @ 0x1800FC0EC (--1CSynchronousSuperWetInk@DirectComposition@@EEAA@XZ.c)
 *     ?DisposeOnDelayedDestruction@CSynchronousSuperWetInk@DirectComposition@@EEAAXXZ @ 0x1800FC990 (-DisposeOnDelayedDestruction@CSynchronousSuperWetInk@DirectComposition@@EEAAXXZ.c)
 *     ?CreateDelegatedInkTrailForSwapChain@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDCompositionDelegatedInkTrail@@@Z @ 0x1800FF760 (-CreateDelegatedInkTrailForSwapChain@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDComp.c)
 * Callees:
 *     ?Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ @ 0x180018050 (-Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<DirectComposition::CGenericInkProxy>::InternalRelease(
        DirectComposition::CTransformGroupProxy **a1)
{
  DirectComposition::CTransformGroupProxy *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return DirectComposition::CTransformGroupProxy::Release(v1);
  }
  return result;
}
