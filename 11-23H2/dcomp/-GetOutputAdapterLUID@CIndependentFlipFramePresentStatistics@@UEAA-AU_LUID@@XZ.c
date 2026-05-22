/*
 * XREFs of ?GetOutputAdapterLUID@CIndependentFlipFramePresentStatistics@@UEAA?AU_LUID@@XZ @ 0x180091640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CIndependentFlipFramePresentStatistics::GetOutputAdapterLUID(
        CIndependentFlipFramePresentStatistics *this,
        _QWORD *a2)
{
  *a2 = *((_QWORD *)this + 3);
  return (struct _LUID)a2;
}
