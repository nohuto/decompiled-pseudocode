/*
 * XREFs of ?SetClampOutput@CArithmeticCompositeEffect@DirectComposition@@UEAAJH@Z @ 0x1800F4F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CArithmeticCompositeEffect::SetClampOutput(
        DirectComposition::CArithmeticCompositeEffect *this,
        int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           1,
           a2);
}
