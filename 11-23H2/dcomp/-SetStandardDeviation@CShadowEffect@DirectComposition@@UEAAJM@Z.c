/*
 * XREFs of ?SetStandardDeviation@CShadowEffect@DirectComposition@@UEAAJM@Z @ 0x1800F6140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CShadowEffect::SetStandardDeviation(
        DirectComposition::CShadowEffect *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           0,
           a2);
}
