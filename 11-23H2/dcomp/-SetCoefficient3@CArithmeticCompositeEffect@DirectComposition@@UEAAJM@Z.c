/*
 * XREFs of ?SetCoefficient3@CArithmeticCompositeEffect@DirectComposition@@UEAAJM@Z @ 0x1800F50C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CArithmeticCompositeEffect::SetCoefficient3(
        DirectComposition::CArithmeticCompositeEffect *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           4,
           a2);
}
