/*
 * XREFs of CmpInitializeKcbStack @ 0x1407D1B94
 * Callers:
 *     CmQueryLayeredKey @ 0x14035DC84 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x1406168EC (CmDeleteLayeredKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpInitializeKcbStack(__int64 a1)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_WORD *)(a1 + 2) = -1;
  return result;
}
