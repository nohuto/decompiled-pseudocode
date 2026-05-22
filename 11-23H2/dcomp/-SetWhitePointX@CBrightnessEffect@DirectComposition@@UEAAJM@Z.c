/*
 * XREFs of ?SetWhitePointX@CBrightnessEffect@DirectComposition@@UEAAJM@Z @ 0x1800F6670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CBrightnessEffect::SetWhitePointX(
        DirectComposition::CBrightnessEffect *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           2,
           a2);
}
