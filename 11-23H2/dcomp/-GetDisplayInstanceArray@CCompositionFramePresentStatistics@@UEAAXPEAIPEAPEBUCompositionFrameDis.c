/*
 * XREFs of ?GetDisplayInstanceArray@CCompositionFramePresentStatistics@@UEAAXPEAIPEAPEBUCompositionFrameDisplayInstance@@@Z @ 0x1801B0D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CCompositionFramePresentStatistics::GetDisplayInstanceArray(
        CCompositionFramePresentStatistics *this,
        unsigned int *a2,
        const struct CompositionFrameDisplayInstance **a3)
{
  *a2 = -286331153 * ((__int64)(*((_QWORD *)this + 6) - *((_QWORD *)this + 5)) >> 2);
  *a3 = (const struct CompositionFrameDisplayInstance *)*((_QWORD *)this + 5);
}
