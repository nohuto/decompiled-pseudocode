/*
 * XREFs of ?SetClampOutput@CTableTransferEffect@DirectComposition@@UEAAJH@Z @ 0x1800F4FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTableTransferEffect::SetClampOutput(
        DirectComposition::CTableTransferEffect *this,
        int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           8,
           a2);
}
