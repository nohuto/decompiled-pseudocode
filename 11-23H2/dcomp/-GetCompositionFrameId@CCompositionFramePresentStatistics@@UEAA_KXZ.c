/*
 * XREFs of ?GetCompositionFrameId@CCompositionFramePresentStatistics@@UEAA_KXZ @ 0x1800915C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CCompositionFramePresentStatistics::GetCompositionFrameId(
        CCompositionFramePresentStatistics *this)
{
  return *((_QWORD *)this + 4);
}
