/*
 * XREFs of ?SetGreen@CShadowEffect@DirectComposition@@UEAAJM@Z @ 0x1800F5310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CShadowEffect::SetGreen(DirectComposition::CShadowEffect *this, float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           3,
           a2);
}
