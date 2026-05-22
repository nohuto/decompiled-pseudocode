/*
 * XREFs of ?SetBlackPointX@CBrightnessEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F48F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CBrightnessEffect::SetBlackPointX(
        DirectComposition::CBrightnessEffect *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           4u,
           a2);
}
