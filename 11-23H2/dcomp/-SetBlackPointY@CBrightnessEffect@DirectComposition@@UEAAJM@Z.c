/*
 * XREFs of ?SetBlackPointY@CBrightnessEffect@DirectComposition@@UEAAJM@Z @ 0x1800F4910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CBrightnessEffect::SetBlackPointY(
        DirectComposition::CBrightnessEffect *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           5,
           a2);
}
