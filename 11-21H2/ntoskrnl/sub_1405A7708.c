/*
 * XREFs of sub_1405A7708 @ 0x1405A7708
 * Callers:
 *     sub_14031D740 @ 0x14031D740 (sub_14031D740.c)
 *     sub_140353230 @ 0x140353230 (sub_140353230.c)
 * Callees:
 *     sub_140247C5C @ 0x140247C5C (sub_140247C5C.c)
 *     sub_14027B0B8 @ 0x14027B0B8 (sub_14027B0B8.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z @ 0x1402EA644 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_14033DBC0 @ 0x14033DBC0 (sub_14033DBC0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14045C4F6 @ 0x14045C4F6 (sub_14045C4F6.c)
 *     sub_14045C52A @ 0x14045C52A (sub_14045C52A.c)
 *     sub_1405A6DAC @ 0x1405A6DAC (sub_1405A6DAC.c)
 */

__int64 __fastcall sub_1405A7708(__int64 a1, unsigned __int64 a2)
{
  int v4; // r14d
  __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r9
  signed __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rbx
  _BYTE *v14; // rbx
  unsigned __int64 v15; // rdi
  _QWORD *v16; // rbx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 i; // rcx
  __int16 v21; // ax
  __int64 v22; // rax
  _QWORD v24[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v25[24]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v25, 0, 0xB8uLL);
  v4 = 1;
  v5 = 0x200000LL;
  v6 = (__int64)(a2 << 25) >> 16 << 25 >> 16;
  while ( v6 >= 0xFFFFF68000000000uLL && v6 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    ++v4;
    v6 = (__int64)(v6 << 25) >> 16;
    v5 <<= 9;
  }
  v7 = sub_140317A10(a2);
  v8 = *(_QWORD *)(a1 + 16);
  v9 = v7;
  v24[0] = v7;
  if ( (v8 & 1) != 0 && *(_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 80) & 0x20) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 8) & 2) != 0 )
    {
      if ( (v7 & 0x800) == 0 )
        return 3221225477LL;
      if ( (unsigned int)sub_14027B0B8(a1, (volatile signed __int64 *)a2, *(_QWORD *)a1, v8, 0, v7) )
      {
        WORD2(v25[0]) = 0;
        v25[2] = 0LL;
        v10 = *(_QWORD *)a1 & -v5;
        v25[3] = 0LL;
        LODWORD(v25[0]) = 1;
        LODWORD(v25[1]) = 20;
        sub_1402CF280((__int64)v25, v10, 1LL, v4);
        sub_14032F1B0((__int64)v25);
      }
    }
    if ( (*(_BYTE *)(a1 + 8) & 0x10) == 0 )
    {
LABEL_25:
      v13 = *(_QWORD *)(a1 + 16);
      if ( (v13 & 1) != 0 )
      {
        v14 = (_BYTE *)(v13 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( *v14 == 5 )
        {
          if ( (unsigned int)sub_14045C52A((unsigned __int64 *)a1, (__int64)v14, a2) )
          {
            v15 = *(_QWORD *)a1;
            v16 = (_QWORD *)sub_14045C4F6((__int64)v14, v15);
            v17 = sub_140317A10((unsigned __int64)v24);
            v18 = v15 >> 12;
            v19 = 1LL;
            for ( i = (v17 >> 12) & 0xFFFFFFFFFFLL; v4; --v4 )
            {
              v21 = v18;
              v18 >>= 9;
              v22 = v19 * (v21 & 0x1FF);
              v19 <<= 9;
              i += v22;
            }
            *v16 ^= (i ^ *v16) & 0xFFFFFFFFFFFFFLL;
          }
        }
      }
      return 0LL;
    }
    if ( v9 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 80) & 0x40) == 0 )
        sub_140247C5C(a1, v9, 7u);
      goto LABEL_25;
    }
    if ( sub_1405A6DAC(*((_QWORD *)KeGetCurrentThread() + 23), *(_QWORD *)a1) )
    {
      v11 = ((unsigned __int64)sub_140317A10((unsigned __int64)v24) >> 12) & 0xFFFFFFFFFFLL;
      if ( v11 <= qword_140C50840 && ((*(_QWORD *)(48 * v11 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      {
        v12 = v9 & 0x7FFFFFFFFFFFFFFFLL;
        v24[0] = v12;
        if ( (dword_140D06880 & 0x100) != 0 || (dword_140D06880 & 0x200) != 0 )
        {
          v12 |= 0x20uLL;
          v24[0] = v12;
        }
        sub_14033DBC0(a2, v12);
        if ( (dword_140D06880 & 0x100) == 0 && (dword_140D06880 & 0x200) == 0 )
          std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(*(_QWORD *)a1, 1u, 0);
        goto LABEL_25;
      }
    }
  }
  return 3221225477LL;
}
