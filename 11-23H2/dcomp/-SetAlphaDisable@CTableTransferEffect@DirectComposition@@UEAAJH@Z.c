/*
 * XREFs of ?SetAlphaDisable@CTableTransferEffect@DirectComposition@@UEAAJH@Z @ 0x1800F4440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTableTransferEffect::SetAlphaDisable(
        DirectComposition::CTableTransferEffect *this,
        int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           7,
           a2);
}
