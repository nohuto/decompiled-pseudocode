/*
 * XREFs of RtlpCreateHeapEncoding @ 0x180047878
 * Callers:
 *     RtlCreateHeap @ 0x180047FD0 (RtlCreateHeap.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x1800455D0 (RtlpHeapGenerateRandomValue64.c)
 */

void __fastcall RtlpCreateHeapEncoding(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 120) & 2) == 0 && (*(_DWORD *)(a1 + 112) & 0x4000000) == 0 )
  {
    *(_DWORD *)(a1 + 136) = 0;
    *(_BYTE *)(a1 + 138) = 16;
    *(_DWORD *)(a1 + 124) = *(_DWORD *)(a1 + 136);
    *(_DWORD *)(a1 + 136) |= RtlpHeapGenerateRandomValue64();
    *(_DWORD *)(a1 + 140) = (unsigned __int16)RtlpHeapGenerateRandomValue64();
  }
}
