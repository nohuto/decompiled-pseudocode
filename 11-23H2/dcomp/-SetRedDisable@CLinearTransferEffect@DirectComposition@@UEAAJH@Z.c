/*
 * XREFs of ?SetRedDisable@CLinearTransferEffect@DirectComposition@@UEAAJH@Z @ 0x1800F5CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CLinearTransferEffect::SetRedDisable(
        DirectComposition::CLinearTransferEffect *this,
        unsigned int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           2,
           a2);
}
