/*
 * XREFs of sub_140A6A9A0 @ 0x140A6A9A0
 * Callers:
 *     sub_14097AB60 @ 0x14097AB60 (sub_14097AB60.c)
 *     sub_140A6A73C @ 0x140A6A73C (sub_140A6A73C.c)
 * Callees:
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_1405A89EC @ 0x1405A89EC (sub_1405A89EC.c)
 */

char __fastcall sub_140A6A9A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  ULONG_PTR v4; // rax
  __int64 v5; // rdx
  ULONG_PTR v6; // r9
  __int64 v7; // r10
  char result; // al

  sub_140313C70(((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) | 0xFFF);
  v4 = sub_140313C70((*(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32)) << 12);
  result = sub_1405A89EC(v7, v5, v4, v6, 1);
  *(_DWORD *)(a2 + 64) |= 8u;
  return result;
}
