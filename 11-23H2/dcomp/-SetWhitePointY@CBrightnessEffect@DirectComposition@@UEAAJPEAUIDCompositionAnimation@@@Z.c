/*
 * XREFs of ?SetWhitePointY@CBrightnessEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F66D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CBrightnessEffect::SetWhitePointY(
        DirectComposition::CBrightnessEffect *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           3u,
           a2);
}
