/*
 * XREFs of sub_14069F308 @ 0x14069F308
 * Callers:
 *     sub_140226200 @ 0x140226200 (sub_140226200.c)
 *     sub_14053F5E8 @ 0x14053F5E8 (sub_14053F5E8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14069F308(__int64 a1)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_WORD *)(a1 + 2) = -1;
  return result;
}
