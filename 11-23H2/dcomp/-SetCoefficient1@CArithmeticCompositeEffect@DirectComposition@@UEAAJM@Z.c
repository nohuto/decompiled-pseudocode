/*
 * XREFs of ?SetCoefficient1@CArithmeticCompositeEffect@DirectComposition@@UEAAJM@Z @ 0x1800F5040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CArithmeticCompositeEffect::SetCoefficient1(
        DirectComposition::CArithmeticCompositeEffect *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           2,
           a2);
}
