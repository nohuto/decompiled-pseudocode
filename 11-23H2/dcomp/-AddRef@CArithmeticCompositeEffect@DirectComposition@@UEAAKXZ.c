/*
 * XREFs of ?AddRef@CArithmeticCompositeEffect@DirectComposition@@UEAAKXZ @ 0x1800B5550
 * Callers:
 *     ?AddRef@CGaussianBlurEffect@DirectComposition@@W7EAAKXZ @ 0x1800A8390 (-AddRef@CGaussianBlurEffect@DirectComposition@@W7EAAKXZ.c)
 *     ?AddRef@CSaturationEffect@DirectComposition@@WBI@EAAKXZ @ 0x1800A83B0 (-AddRef@CSaturationEffect@DirectComposition@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CArithmeticCompositeEffect::AddRef(
        DirectComposition::CArithmeticCompositeEffect *this)
{
  return CMILRefCountImpl::AddReference((DirectComposition::CArithmeticCompositeEffect *)((char *)this + 16));
}
