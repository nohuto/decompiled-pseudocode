/*
 * XREFs of sub_14023D4C8 @ 0x14023D4C8
 * Callers:
 *     sub_14023D3C8 @ 0x14023D3C8 (sub_14023D3C8.c)
 * Callees:
 *     sub_140363560 @ 0x140363560 (sub_140363560.c)
 *     sub_1403635BC @ 0x1403635BC (sub_1403635BC.c)
 *     sub_140363A64 @ 0x140363A64 (sub_140363A64.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

void *__fastcall sub_14023D4C8(__int64 a1, __int64 a2, const void *a3)
{
  int v3; // edi
  __int64 v4; // rdx
  void *v6; // rbx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  v4 = a2 << v3;
  *(_QWORD *)&v8 = 0LL;
  v6 = (void *)(v4 + *(_QWORD *)(a1 + 24));
  BYTE8(v8) = 0;
  v9 = 0LL;
  if ( (int)sub_140363A64(a1 + 16, (unsigned __int64)(8 * v4) >> 15, &v9, &v8) < 0 )
    return 0LL;
  memmove(v6, a3, (unsigned int)(1 << v3));
  sub_1403635BC(&v9);
  v9 = v8;
  sub_140363560(&v9);
  return v6;
}
