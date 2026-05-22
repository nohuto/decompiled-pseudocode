/*
 * XREFs of ?SetMode@CCompositeEffect@DirectComposition@@UEAAJW4D2D1_COMPOSITE_MODE@@@Z @ 0x1800F59D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositeEffect::SetMode(
        DirectComposition::CCompositeEffect *this,
        unsigned int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           0,
           a2);
}
