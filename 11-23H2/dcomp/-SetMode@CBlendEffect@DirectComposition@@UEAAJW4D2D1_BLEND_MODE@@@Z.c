/*
 * XREFs of ?SetMode@CBlendEffect@DirectComposition@@UEAAJW4D2D1_BLEND_MODE@@@Z @ 0x1800F59B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CBlendEffect::SetMode(DirectComposition::CBlendEffect *this, unsigned int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           0,
           a2);
}
