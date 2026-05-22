/*
 * XREFs of ?SetRed@CShadowEffect@DirectComposition@@UEAAJM@Z @ 0x1800F5CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CShadowEffect::SetRed(DirectComposition::CShadowEffect *this, float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           2,
           a2);
}
