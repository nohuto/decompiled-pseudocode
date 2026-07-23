/*
 * XREFs of sub_1405B2A90 @ 0x1405B2A90
 * Callers:
 *     StartRoutine @ 0x14026C240 (StartRoutine.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402359C4 @ 0x1402359C4 (sub_1402359C4.c)
 *     sub_140235E10 @ 0x140235E10 (sub_140235E10.c)
 *     sub_14026C61C @ 0x14026C61C (sub_14026C61C.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140424F50 @ 0x140424F50 (sub_140424F50.c)
 *     memset @ 0x140435E00 (memset.c)
 */

unsigned __int64 __fastcall sub_1405B2A90(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v6; // eax
  unsigned __int64 v7; // rbp
  ULONG_PTR v8; // rbx
  unsigned __int8 *v9; // rdi
  unsigned __int64 v11; // rax
  _QWORD *v12; // rsi
  unsigned __int64 v13; // r15
  int v14; // eax
  unsigned __int64 v15; // rdi
  __int64 i; // r13
  unsigned __int64 v17; // rbx
  int v18; // eax
  unsigned __int64 j; // rcx
  unsigned __int64 v20; // [rsp+28h] [rbp-120h]
  unsigned __int64 v21; // [rsp+30h] [rbp-118h]
  _QWORD v22[24]; // [rsp+40h] [rbp-108h] BYREF

  if ( _bittest64((const signed __int64 *)(a3 + 40), 0x28u) && (v6 = sub_140235E10(a3), v6 <= 2) )
    v7 = qword_14001C780[v6];
  else
    v7 = 1LL;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((a3 + 0x220000000000LL) >> 4);
  if ( !a1 )
  {
    if ( v7 )
    {
      v9 = (unsigned __int8 *)(a3 + 34);
      do
      {
        sub_1402359C4(v8++, 1, *v9 >> 6);
        v9 += 48;
        --v7;
      }
      while ( v7 );
    }
    return 0LL;
  }
  v11 = v7;
  v12 = (_QWORD *)a1;
  if ( a2 < v7 )
    v11 = a2;
  v21 = v11;
  v13 = (__int64)(a1 << 25) >> 16;
  v14 = sub_14026C61C(4, a3);
  v15 = sub_1402CBD10(a1, 0xAAAAAAAAAAAAAAABuLL * ((a3 + 0x220000000000LL) >> 4), v14 | 0xA0000000);
  v20 = 0LL;
  for ( i = 0LL; v20 < v7; ++v20 )
  {
    v17 = v15;
    if ( sub_140317A80((unsigned __int64)v12) )
    {
      if ( (unsigned int)sub_140229550() )
      {
        v18 = 1;
        if ( !HIBYTE(word_140C51864) && (v15 & 1) != 0 )
          v17 = v15 | 0x8000000000000000uLL;
        goto LABEL_22;
      }
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v15 & 1) != 0 )
        v17 = v15 | 0x8000000000000000uLL;
    }
    v18 = 0;
LABEL_22:
    *v12 = v17;
    if ( v18 )
      sub_1402294F0((__int64)v12, v17);
    ++v12;
    ++i;
    v15 ^= (v15 ^ (v15 + 4096)) & 0xFFFFFFFFFF000LL;
    if ( i == a2 )
    {
      memset(v22, 0, 0xB8uLL);
      sub_140424F50((__m128i *)v13, (__int64)((__int64)v12 - a1) >> 3 << 12);
      if ( v20 + 1 == v7 )
        return v21;
      for ( j = 0LL; j < a2; ++j )
        *(_QWORD *)(a1 + 8 * j) = 0LL;
      v22[1] = 20LL;
      LODWORD(v22[0]) = 0;
      WORD2(v22[0]) = 0;
      v22[2] = 0LL;
      v22[3] = 0LL;
      sub_1402CF280((__int64)v22, v13, a2, 0);
      sub_14032F1B0((__int64)v22);
      v12 = (_QWORD *)a1;
      i = 0LL;
    }
  }
  if ( v13 )
    sub_140424F50((__m128i *)v13, (__int64)((__int64)v12 - a1) >> 3 << 12);
  return v21;
}
