/*
 * XREFs of ?SetBlueDisable@CTableTransferEffect@DirectComposition@@UEAAJH@Z @ 0x1800F49F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTableTransferEffect::SetBlueDisable(
        DirectComposition::CTableTransferEffect *this,
        int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           6,
           a2);
}
