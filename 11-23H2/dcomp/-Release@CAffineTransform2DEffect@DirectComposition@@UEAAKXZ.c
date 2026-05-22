/*
 * XREFs of ?Release@CAffineTransform2DEffect@DirectComposition@@UEAAKXZ @ 0x1800B54D0
 * Callers:
 *     ?Release@CSaturationEffect@DirectComposition@@W7EAAKXZ @ 0x1800A8ED0 (-Release@CSaturationEffect@DirectComposition@@W7EAAKXZ.c)
 *     ?Release@CLinearTransferEffect@DirectComposition@@WBI@EAAKXZ @ 0x1800A8EF0 (-Release@CLinearTransferEffect@DirectComposition@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CAffineTransform2DEffect::Release(
        DirectComposition::CAffineTransform2DEffect *this)
{
  return DirectComposition::CDelayedDestructionObject::Release((DirectComposition::CAffineTransform2DEffect *)((char *)this + 8));
}
