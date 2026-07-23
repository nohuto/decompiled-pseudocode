/*
 * XREFs of sub_140386DC4 @ 0x140386DC4
 * Callers:
 *     sub_1407FABA0 @ 0x1407FABA0 (sub_1407FABA0.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14031F940 @ 0x14031F940 (sub_14031F940.c)
 *     sub_14032CE60 @ 0x14032CE60 (sub_14032CE60.c)
 *     sub_140395864 @ 0x140395864 (sub_140395864.c)
 */

__int64 __fastcall sub_140386DC4(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v3; // r14
  unsigned __int64 v4; // r12
  ULONG_PTR v5; // rsi
  unsigned __int64 v6; // rbp
  __int64 v7; // r9
  unsigned __int8 v8; // r15
  unsigned __int64 v9; // rax
  int v10; // ebx

  v3 = *((_QWORD *)KeGetCurrentThread() + 23) + 1664LL;
  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = v4;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = sub_1402CF4F0(v3);
  if ( v4 > v6 )
  {
LABEL_4:
    sub_1402B0CE0(v3, v8);
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      LOBYTE(v7) = v8;
      sub_14032CE60(v5, 0LL, 0, v7, 0);
      v9 = sub_140317A10(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v10 = sub_14031F940(48 * ((v9 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 2uLL);
      sub_14020D8D0(v3, ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      if ( !v10 )
        break;
      v5 = (v5 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      if ( v5 > v6 )
        goto LABEL_4;
    }
    sub_1402B0CE0(v3, v8);
    if ( v5 != v4 )
      sub_140395864(a1, (__int64)((v5 - 8) << 25) >> 16);
    return 3221225626LL;
  }
}
