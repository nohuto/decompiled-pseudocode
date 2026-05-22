/*
 * XREFs of ?SetCoefficient3@CArithmeticCompositeEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F50E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CArithmeticCompositeEffect::SetCoefficient3(
        DirectComposition::CArithmeticCompositeEffect *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           4u,
           a2);
}
