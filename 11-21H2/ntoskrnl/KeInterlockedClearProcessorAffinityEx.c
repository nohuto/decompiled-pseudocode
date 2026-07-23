/*
 * XREFs of KeInterlockedClearProcessorAffinityEx @ 0x1403B49A0
 * Callers:
 *     sub_140291710 @ 0x140291710 (sub_140291710.c)
 *     sub_14029B9A0 @ 0x14029B9A0 (sub_14029B9A0.c)
 *     sub_140306100 @ 0x140306100 (sub_140306100.c)
 *     sub_1403B4940 @ 0x1403B4940 (sub_1403B4940.c)
 *     sub_140579F48 @ 0x140579F48 (sub_140579F48.c)
 *     sub_1405C8D78 @ 0x1405C8D78 (sub_1405C8D78.c)
 *     sub_1405C8FE4 @ 0x1405C8FE4 (sub_1405C8FE4.c)
 *     sub_1405DD260 @ 0x1405DD260 (sub_1405DD260.c)
 *     sub_1405DD2E0 @ 0x1405DD2E0 (sub_1405DD2E0.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KeInterlockedClearProcessorAffinityEx(__int64 a1, int a2)
{
  unsigned int v3; // r10d
  unsigned int v4; // eax
  unsigned int v5; // ecx

  v3 = dword_140D0E5E0[a2];
  v4 = *(unsigned __int16 *)(a1 + 2);
  v5 = v3 >> 6;
  if ( v4 <= v3 >> 6 )
    return 0LL;
  _m_prefetchw((const void *)(a1 + 8LL * v5 + 8));
  return ((1LL << (v3 & 0x3F)) & _InterlockedAnd64(
                                   (volatile signed __int64 *)(a1 + 8LL * v5 + 8),
                                   ~(1LL << (v3 & 0x3F)))) != 0;
}
