/*
 * XREFs of ?SetAlphaTableValue@CTableTransferEffect@DirectComposition@@UEAAJIPEAUIDCompositionAnimation@@@Z @ 0x1800F4550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTableTransferEffect::SetAlphaTableValue(
        DirectComposition::CTableTransferEffect *this,
        int a2,
        struct IDCompositionAnimation *a3)
{
  if ( (a2 & 0x3FFFFFF) == a2 )
    return DirectComposition::CResourceProxy::SetAnimationProperty(
             (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
             (a2 << 6) | 0x3Fu,
             a3);
  else
    return 2147942487LL;
}
