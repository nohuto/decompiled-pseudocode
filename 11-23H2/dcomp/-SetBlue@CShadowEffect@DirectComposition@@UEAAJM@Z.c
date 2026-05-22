/*
 * XREFs of ?SetBlue@CShadowEffect@DirectComposition@@UEAAJM@Z @ 0x1800F4990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CShadowEffect::SetBlue(DirectComposition::CShadowEffect *this, float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           4,
           a2);
}
