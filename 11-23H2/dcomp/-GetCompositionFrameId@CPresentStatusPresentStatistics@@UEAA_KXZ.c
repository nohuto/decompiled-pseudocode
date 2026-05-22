/*
 * XREFs of ?GetCompositionFrameId@CPresentStatusPresentStatistics@@UEAA_KXZ @ 0x180091540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CPresentStatusPresentStatistics::GetCompositionFrameId(
        CPresentStatusPresentStatistics *this)
{
  return *((_QWORD *)this + 2);
}
