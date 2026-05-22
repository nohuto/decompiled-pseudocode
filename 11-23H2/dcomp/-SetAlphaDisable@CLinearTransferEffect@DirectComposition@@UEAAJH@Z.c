/*
 * XREFs of ?SetAlphaDisable@CLinearTransferEffect@DirectComposition@@UEAAJH@Z @ 0x1800F4420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CLinearTransferEffect::SetAlphaDisable(
        DirectComposition::CLinearTransferEffect *this,
        unsigned int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           11,
           a2);
}
