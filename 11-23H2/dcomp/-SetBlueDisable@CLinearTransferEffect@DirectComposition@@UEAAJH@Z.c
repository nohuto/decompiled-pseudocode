/*
 * XREFs of ?SetBlueDisable@CLinearTransferEffect@DirectComposition@@UEAAJH@Z @ 0x1800F49D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CLinearTransferEffect::SetBlueDisable(
        DirectComposition::CLinearTransferEffect *this,
        unsigned int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           8,
           a2);
}
