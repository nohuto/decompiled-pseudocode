/*
 * XREFs of ?SetGreenDisable@CTableTransferEffect@DirectComposition@@UEAAJH@Z @ 0x1800F5370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTableTransferEffect::SetGreenDisable(
        DirectComposition::CTableTransferEffect *this,
        int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           5,
           a2);
}
