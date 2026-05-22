/*
 * XREFs of ?SetClampOutput@CLinearTransferEffect@DirectComposition@@UEAAJH@Z @ 0x1800F4FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CLinearTransferEffect::SetClampOutput(
        DirectComposition::CLinearTransferEffect *this,
        unsigned int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           12,
           a2);
}
