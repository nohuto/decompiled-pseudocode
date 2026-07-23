/*
 * XREFs of sub_14068DD88 @ 0x14068DD88
 * Callers:
 *     sub_14068DCD4 @ 0x14068DCD4 (sub_14068DCD4.c)
 * Callees:
 *     sub_14020B57C @ 0x14020B57C (sub_14020B57C.c)
 */

void __fastcall sub_14068DD88(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  char v10; // al
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 < a4 )
  {
    LODWORD(v11) = 0;
    v5 = a3;
    do
    {
      v8 = *(_QWORD *)(a2 + 24);
      v9 = (unsigned __int64)(v5 - v8) >> 12;
      v10 = *(_BYTE *)(v9 + a2 + 72);
      if ( (v10 & 2) != 0 )
      {
        sub_14020B57C(
          (ULONG_PTR)&v11,
          *(void ***)(a1 + 24),
          (void *)(v5 + *(_QWORD *)(a2 + 56) - v8),
          0x1000uLL,
          ((~v10 & 0xFC) << 29) | 2,
          (ULONG *)&v11);
        *(_BYTE *)(v9 + a2 + 72) &= 0xF5u;
      }
      v5 += 4096LL;
    }
    while ( v5 < a4 );
  }
}
