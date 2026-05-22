/*
 * XREFs of ?SetCoefficient2@CArithmeticCompositeEffect@DirectComposition@@UEAAJM@Z @ 0x1800F5080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CArithmeticCompositeEffect::SetCoefficient2(
        DirectComposition::CArithmeticCompositeEffect *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           3,
           a2);
}
