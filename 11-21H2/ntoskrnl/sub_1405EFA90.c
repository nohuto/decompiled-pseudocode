/*
 * XREFs of sub_1405EFA90 @ 0x1405EFA90
 * Callers:
 *     sub_140A6BF28 @ 0x140A6BF28 (sub_140A6BF28.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405EFA90(_WORD *a1, int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 result; // rax

  *((_BYTE *)a1 - 5) = -23;
  *((_DWORD *)a1 - 1) = a5 - a2;
  result = 4294965739LL;
  *a1 = -1557;
  return result;
}
