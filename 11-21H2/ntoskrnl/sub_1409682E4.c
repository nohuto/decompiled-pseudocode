/*
 * XREFs of sub_1409682E4 @ 0x1409682E4
 * Callers:
 *     sub_1405A1D20 @ 0x1405A1D20 (sub_1405A1D20.c)
 *     sub_1405A40C4 @ 0x1405A40C4 (sub_1405A40C4.c)
 *     sub_14080C354 @ 0x14080C354 (sub_14080C354.c)
 *     sub_140970AB4 @ 0x140970AB4 (sub_140970AB4.c)
 *     sub_140971068 @ 0x140971068 (sub_140971068.c)
 *     sub_1409779A4 @ 0x1409779A4 (sub_1409779A4.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 */

__int64 __fastcall sub_1409682E4(__int64 a1, __int64 a2)
{
  PVOID v4; // rcx

  v4 = sub_1402828F0(
         64,
         8 * ((*(_DWORD *)(a1 + 24) >> 6) + (unsigned int)((*(_DWORD *)(a1 + 24) & 0x3F) != 0)),
         0x4D425044u);
  if ( !v4 )
    return 3221225626LL;
  *(_QWORD *)(a1 + 32) = *(unsigned int *)(a1 + 24);
  *(_QWORD *)(a1 + 40) = v4;
  *(_DWORD *)(a1 + 96) = 0;
  if ( (unsigned int)sub_1402FDD20(*(_QWORD *)(*(_QWORD *)a1 + 48LL)) )
    *(_DWORD *)(a1 + 96) = 2;
  *(_QWORD *)(a1 + 16) = a2;
  return 0LL;
}
