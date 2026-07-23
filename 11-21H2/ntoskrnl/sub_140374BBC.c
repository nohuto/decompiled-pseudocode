/*
 * XREFs of sub_140374BBC @ 0x140374BBC
 * Callers:
 *     sub_1402598CC @ 0x1402598CC (sub_1402598CC.c)
 *     sub_1406D59B8 @ 0x1406D59B8 (sub_1406D59B8.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_140273234 @ 0x140273234 (sub_140273234.c)
 *     sub_14027428C @ 0x14027428C (sub_14027428C.c)
 *     sub_140274D10 @ 0x140274D10 (sub_140274D10.c)
 *     sub_14027D6E0 @ 0x14027D6E0 (sub_14027D6E0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402C1D70 @ 0x1402C1D70 (sub_1402C1D70.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_1403336E0 @ 0x1403336E0 (sub_1403336E0.c)
 *     sub_140333AA0 @ 0x140333AA0 (sub_140333AA0.c)
 *     sub_14033A410 @ 0x14033A410 (sub_14033A410.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140374BBC(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  int v8; // eax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r15
  __int64 v11; // rcx
  unsigned __int8 v12; // al
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rdi
  char v15; // r13
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int8 v21; // [rsp+20h] [rbp-E0h]
  unsigned int v22; // [rsp+24h] [rbp-DCh]
  int v23; // [rsp+28h] [rbp-D8h] BYREF
  int v24; // [rsp+2Ch] [rbp-D4h]
  unsigned __int64 v25; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v27[24]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v27, 0, 0xB8uLL);
  v22 = a4 & 7;
  v8 = sub_140333AA0(a3);
  v27[2] = 0LL;
  v27[3] = 0LL;
  LODWORD(v27[0]) = v8;
  v24 = dword_140C52B68;
  WORD2(v27[0]) = 4;
  LODWORD(v27[1]) = 20;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = 0LL;
  v25 = v9 + 8 * a2;
  v12 = sub_1402CF4F0(v11);
  v21 = v12;
  if ( v9 >= v25 )
    return sub_1402B0CE0(a3, v12);
  do
  {
    v13 = v9 >> 9;
    if ( v10 )
    {
      if ( v10 == (v13 & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        goto LABEL_4;
      if ( HIDWORD(v27[1]) )
        sub_1402C1D70(a3, (__int64)v27, 0);
      sub_14020D8D0(a3, v10);
    }
    v10 = sub_14027D6E0(a3, v9, &v26);
    if ( v10 != (v13 & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    {
      sub_14020D8D0(a3, v10);
      v10 = 0LL;
      v9 = (v9 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      goto LABEL_20;
    }
LABEL_4:
    if ( (*(_BYTE *)v9 & 1) != 0 )
    {
      v14 = 48 * (((unsigned __int64)sub_140317A10(v9) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v15 = sub_14033A410(0xFFFFFFFFFFLL, (__int64)(v9 << 25) >> 16) & 0xF;
      if ( v15 != 9 )
      {
        if ( !_bittest64((const signed __int64 *)(v14 + 40), 0x28u) )
        {
          v16 = *(_QWORD *)(v14 + 8);
          if ( v16 > 0 )
            sub_1403336E0(a3, v9, v16 | 0x8000000000000000uLL);
        }
        if ( (a4 & 8) == 0 && v22 != (unsigned int)sub_140273234(v14) )
        {
          v23 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
          {
            do
              sub_1402F32E0(&v23, v17, v18, v19);
            while ( *(__int64 *)(v14 + 24) < 0 );
          }
          sub_14027428C(v14, v22, 1);
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        if ( (a4 & 0x10) != 0 && v15 != 8 )
        {
          if ( v24 )
            sub_140274D10(a3, (_BYTE *)v9);
          sub_1402CF280((__int64)v27, (__int64)(v9 << 25) >> 16, 1LL, 0);
          if ( HIDWORD(v27[1]) == LODWORD(v27[1]) )
            sub_1402C1D70(a3, (__int64)v27, 0);
        }
      }
    }
LABEL_20:
    v9 += 8LL;
  }
  while ( v9 < v25 );
  if ( v10 )
  {
    if ( HIDWORD(v27[1]) )
      sub_1402C1D70(a3, (__int64)v27, 0);
    sub_14020D8D0(a3, v10);
  }
  v12 = v21;
  return sub_1402B0CE0(a3, v12);
}
