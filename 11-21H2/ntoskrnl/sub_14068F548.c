/*
 * XREFs of sub_14068F548 @ 0x14068F548
 * Callers:
 *     sub_14068D0DC @ 0x14068D0DC (sub_14068D0DC.c)
 *     sub_14068E154 @ 0x14068E154 (sub_14068E154.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char __fastcall sub_14068F548(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  void *v7; // rax
  void *v8; // rsi
  __int64 v9; // rcx

  if ( a4 >= 0x400 )
    return 0;
  while ( a3 <= a4 )
  {
    v7 = (void *)sub_14042A5E0(12288LL, 0LL);
    v8 = v7;
    if ( !v7 )
      return 0;
    memset(v7, 0, 0x3000uLL);
    v9 = a3++;
    *(_QWORD *)(a2 + 8 * v9) = v8;
  }
  return 1;
}
