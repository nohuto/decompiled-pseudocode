/*
 * XREFs of ?SetRedDisable@CTableTransferEffect@DirectComposition@@UEAAJH@Z @ 0x1800F5D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTableTransferEffect::SetRedDisable(
        DirectComposition::CTableTransferEffect *this,
        int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           4,
           a2);
}
