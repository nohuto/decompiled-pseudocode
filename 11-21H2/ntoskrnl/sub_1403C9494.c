/*
 * XREFs of sub_1403C9494 @ 0x1403C9494
 * Callers:
 *     sub_1403C8EF8 @ 0x1403C8EF8 (sub_1403C8EF8.c)
 * Callees:
 *     sub_1402285E8 @ 0x1402285E8 (sub_1402285E8.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_1403C9494(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v6; // rbp
  __int64 v7; // rsi
  signed __int64 v8; // rax
  __int64 i; // rdi
  _QWORD v10[24]; // [rsp+20h] [rbp-E8h] BYREF

  memset(v10, 0, 0xB8uLL);
  v10[3] = 0LL;
  LODWORD(v10[1]) = 20;
  v6 = (__int64)(a1 << 25) >> 16;
  if ( a2 )
  {
    v7 = a2;
    do
    {
      v8 = sub_140317A10(a1);
      if ( (v8 & 0x20) != 0 )
      {
        if ( (dword_140D06880 & 0x4000000) != 0 )
          _mm_lfence();
        _InterlockedCompareExchange64((volatile signed __int64 *)a1, v8 & 0xFFFFFFFFFFFFFFDFuLL, v8);
      }
      a1 += 8LL;
      --v7;
    }
    while ( v7 );
  }
  if ( a3 )
  {
    for ( i = a1 - 8 * a2; a2; --a2 )
    {
      sub_1402285E8((__int64)v10, a3, i);
      i += 8LL;
    }
  }
  else
  {
    sub_1402CF280((__int64)v10, v6, a2, 0);
  }
  sub_14032F1B0((__int64)v10);
}
