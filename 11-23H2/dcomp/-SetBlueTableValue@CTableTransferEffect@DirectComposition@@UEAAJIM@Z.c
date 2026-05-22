/*
 * XREFs of ?SetBlueTableValue@CTableTransferEffect@DirectComposition@@UEAAJIM@Z @ 0x1800F4A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTableTransferEffect::SetBlueTableValue(
        DirectComposition::CTableTransferEffect *this,
        int a2,
        float a3)
{
  if ( (a2 & 0x3FFFFFF) == a2 )
    return DirectComposition::CResourceProxy::SetScalarFloatProperty(
             (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
             (a2 << 6) | 0x2Fu,
             a3);
  else
    return 2147942487LL;
}
