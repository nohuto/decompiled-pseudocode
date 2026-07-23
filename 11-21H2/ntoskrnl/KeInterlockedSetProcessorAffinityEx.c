/*
 * XREFs of KeInterlockedSetProcessorAffinityEx @ 0x1403C1A20
 * Callers:
 *     sub_14022A040 @ 0x14022A040 (sub_14022A040.c)
 *     sub_14029B9A0 @ 0x14029B9A0 (sub_14029B9A0.c)
 *     sub_1403C1454 @ 0x1403C1454 (sub_1403C1454.c)
 *     sub_140579F48 @ 0x140579F48 (sub_140579F48.c)
 *     sub_1405C8D78 @ 0x1405C8D78 (sub_1405C8D78.c)
 *     sub_1405DD1A8 @ 0x1405DD1A8 (sub_1405DD1A8.c)
 *     sub_1405DD260 @ 0x1405DD260 (sub_1405DD260.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KeInterlockedSetProcessorAffinityEx(__int64 a1, int a2)
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
  return ((1LL << (v3 & 0x3F)) & _InterlockedOr64((volatile signed __int64 *)(a1 + 8LL * v5 + 8), 1LL << (v3 & 0x3F))) != 0;
}
