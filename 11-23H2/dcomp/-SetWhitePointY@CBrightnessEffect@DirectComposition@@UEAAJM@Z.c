/*
 * XREFs of ?SetWhitePointY@CBrightnessEffect@DirectComposition@@UEAAJM@Z @ 0x1800F66B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CBrightnessEffect::SetWhitePointY(
        DirectComposition::CBrightnessEffect *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           3,
           a2);
}
