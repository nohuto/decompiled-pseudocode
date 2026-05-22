/*
 * XREFs of ?SetAlpha@CShadowEffect@DirectComposition@@UEAAJM@Z @ 0x1800F43E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CShadowEffect::SetAlpha(DirectComposition::CShadowEffect *this, float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           5,
           a2);
}
