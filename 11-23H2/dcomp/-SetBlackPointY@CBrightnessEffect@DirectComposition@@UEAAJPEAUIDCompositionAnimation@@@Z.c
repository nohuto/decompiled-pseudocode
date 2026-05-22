/*
 * XREFs of ?SetBlackPointY@CBrightnessEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F4930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CBrightnessEffect::SetBlackPointY(
        DirectComposition::CBrightnessEffect *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           5u,
           a2);
}
