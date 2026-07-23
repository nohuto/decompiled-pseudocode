/*
 * XREFs of sub_140419160 @ 0x140419160
 * Callers:
 *     sub_14027C784 @ 0x14027C784 (sub_14027C784.c)
 * Callees:
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_140333AA0 @ 0x140333AA0 (sub_140333AA0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_140419160(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rsi
  signed __int64 v8; // rax
  int v9; // eax
  _QWORD v10[24]; // [rsp+20h] [rbp-E8h] BYREF

  memset(v10, 0, 0xB8uLL);
  if ( !a2 )
  {
    v6 = *(_QWORD *)(a1 + 88);
    v7 = (__int64)(a3 << 25) >> 16;
    if ( v6 > (a3 & 0xFFFFFFFFFFFFF000uLL) + 4088 )
      v6 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( a3 <= v6 )
    {
      do
      {
        v8 = sub_140317A10(a3);
        if ( (v8 & 0x21) != 0x21 )
          break;
        if ( (dword_140D06880 & 0x4000000) != 0 )
          _mm_lfence();
        _InterlockedCompareExchange64((volatile signed __int64 *)a3, v8 & 0xFFFFFFFFFFFFFFDFuLL, v8);
        ++a2;
        a3 += 8LL;
      }
      while ( a3 <= v6 );
      if ( a2 )
      {
        v9 = sub_140333AA0(*(_QWORD *)(a1 + 24));
        WORD2(v10[0]) = 0;
        v10[2] = 0LL;
        v10[3] = 0LL;
        LODWORD(v10[0]) = v9;
        LODWORD(v10[1]) = 20;
        sub_1402CF280((__int64)v10, v7, a2, 0);
        sub_14032F1B0((__int64)v10);
      }
    }
  }
}
