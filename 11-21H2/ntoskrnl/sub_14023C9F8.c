/*
 * XREFs of sub_14023C9F8 @ 0x14023C9F8
 * Callers:
 *     sub_140247F34 @ 0x140247F34 (sub_140247F34.c)
 *     sub_14031B810 @ 0x14031B810 (sub_14031B810.c)
 *     sub_14031BF80 @ 0x14031BF80 (sub_14031BF80.c)
 * Callees:
 *     sub_14023CB20 @ 0x14023CB20 (sub_14023CB20.c)
 *     sub_14023CB68 @ 0x14023CB68 (sub_14023CB68.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405842C0 @ 0x1405842C0 (sub_1405842C0.c)
 */

__int64 __fastcall sub_14023C9F8(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  ULONG_PTR v4; // rsi
  __int64 v5; // rax
  unsigned int v6; // r14d
  ULONG_PTR v7; // rdi
  int v8; // edi
  _QWORD v10[14]; // [rsp+28h] [rbp-29h] BYREF

  memset(&v10[2], 0, 0x60uLL);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_DWORD *)(a1 + 96);
  LOWORD(v10[2]) = 2;
  v10[0] = v4 & 0xFFFFFFFFFFFFF000uLL;
  v10[1] = v5 - (v4 & 0xFFFFFFFFFFFFF000uLL);
  v10[4] = 1LL;
  v10[3] = v10;
  v7 = 0LL;
  memset(&v10[5], 0, 20);
  if ( v6 )
  {
    v7 = 2LL;
    if ( v6 == 3 )
    {
      v7 = 0LL;
    }
    else if ( (*(_BYTE *)(a1 + 72) & 0xF) == 6
           && (unsigned int)sub_14027B080(v4, v4 & 0xFFFFFFFFFFFFF000uLL, v2, v3) == 12 )
    {
      v7 = 0LL;
    }
  }
  sub_14023CB68(a1);
  v8 = sub_14031C860(v7, v4);
  if ( v8 < 0 && (*(_DWORD *)(a1 + 72) & 0xF) == 1 && *(_QWORD *)(*(_QWORD *)(a1 + 88) + 2240LL) )
    v8 = sub_1405842C0(v4, v6);
  sub_14023CB20(a1);
  return (unsigned int)v8;
}
