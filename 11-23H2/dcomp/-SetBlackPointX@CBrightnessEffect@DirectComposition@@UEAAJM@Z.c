/*
 * XREFs of ?SetBlackPointX@CBrightnessEffect@DirectComposition@@UEAAJM@Z @ 0x1800F48D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CBrightnessEffect::SetBlackPointX(
        DirectComposition::CBrightnessEffect *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           4,
           a2);
}
