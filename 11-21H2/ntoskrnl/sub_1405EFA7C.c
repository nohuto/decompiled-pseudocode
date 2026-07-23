/*
 * XREFs of sub_1405EFA7C @ 0x1405EFA7C
 * Callers:
 *     sub_140A6BF28 @ 0x140A6BF28 (sub_140A6BF28.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405EFA7C(_WORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned __int16 *)(a2 + 4);
  *a1 = result;
  *(_DWORD *)a2 = 0;
  return result;
}
