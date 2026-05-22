/*
 * XREFs of ?SetSaturation@CSaturationEffect@DirectComposition@@UEAAJM@Z @ 0x1800F5F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSaturationEffect::SetSaturation(
        DirectComposition::CSaturationEffect *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           0,
           a2);
}
