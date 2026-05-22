/*
 * XREFs of ?SetWhitePointX@CBrightnessEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F6690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CBrightnessEffect::SetWhitePointX(
        DirectComposition::CBrightnessEffect *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           2u,
           a2);
}
