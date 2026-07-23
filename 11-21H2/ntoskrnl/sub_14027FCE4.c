/*
 * XREFs of sub_14027FCE4 @ 0x14027FCE4
 * Callers:
 *     sub_1406F5BB0 @ 0x1406F5BB0 (sub_1406F5BB0.c)
 *     sub_14082B4E0 @ 0x14082B4E0 (sub_14082B4E0.c)
 *     sub_140978B04 @ 0x140978B04 (sub_140978B04.c)
 *     sub_14097FA08 @ 0x14097FA08 (sub_14097FA08.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14027FCE4(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  result = 0LL;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 12) = 0;
  *(_WORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 8) = a3;
  return result;
}
