/*
 * XREFs of ?SetAngle@CHueRotationEffect@DirectComposition@@UEAAJM@Z @ 0x1800F45C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHueRotationEffect::SetAngle(
        DirectComposition::CHueRotationEffect *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           0,
           a2);
}
