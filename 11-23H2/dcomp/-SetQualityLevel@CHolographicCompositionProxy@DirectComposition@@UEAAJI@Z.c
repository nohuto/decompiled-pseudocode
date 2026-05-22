/*
 * XREFs of ?SetQualityLevel@CHolographicCompositionProxy@DirectComposition@@UEAAJI@Z @ 0x1800E7B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHolographicCompositionProxy::SetQualityLevel(
        DirectComposition::CHolographicCompositionProxy *this,
        unsigned int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CHolographicCompositionProxy *)((char *)this + 8),
           1,
           a2);
}
