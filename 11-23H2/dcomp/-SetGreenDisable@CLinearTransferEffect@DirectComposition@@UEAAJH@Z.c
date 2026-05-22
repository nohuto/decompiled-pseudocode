/*
 * XREFs of ?SetGreenDisable@CLinearTransferEffect@DirectComposition@@UEAAJH@Z @ 0x1800F5350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CLinearTransferEffect::SetGreenDisable(
        DirectComposition::CLinearTransferEffect *this,
        unsigned int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           5,
           a2);
}
