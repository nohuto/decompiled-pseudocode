/*
 * XREFs of sub_1403744D8 @ 0x1403744D8
 * Callers:
 *     sub_14030C260 @ 0x14030C260 (sub_14030C260.c)
 *     sub_14037432C @ 0x14037432C (sub_14037432C.c)
 *     sub_14037443C @ 0x14037443C (sub_14037443C.c)
 * Callees:
 *     sub_14030CF90 @ 0x14030CF90 (sub_14030CF90.c)
 *     sub_140333AA0 @ 0x140333AA0 (sub_140333AA0.c)
 *     sub_140374708 @ 0x140374708 (sub_140374708.c)
 *     sub_1403747E4 @ 0x1403747E4 (sub_1403747E4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1403744D8(__int64 a1, unsigned __int64 a2, __int8 a3, unsigned int a4, int a5)
{
  __int64 v6; // r14
  int v9; // eax
  int v10; // eax
  int v11; // r11d
  bool v12; // zf
  __int64 *v13; // r10
  __int64 *v14; // rdx
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rax
  __m128i v21[11]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v22[52]; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD v23[68]; // [rsp+280h] [rbp+180h] BYREF

  v6 = a4;
  memset(v22, 0, sizeof(v22));
  memset(v21, 0, sizeof(v21));
  memset(v23, 0, 0x108uLL);
  v9 = v6 & 0xF;
  LODWORD(v22[0]) = v9;
  if ( (a5 & 2) != 0 )
  {
    v9 |= 0x200u;
    LODWORD(v22[0]) = v9;
  }
  if ( (a5 & 4) != 0 )
  {
    v9 |= 0x400u;
    LODWORD(v22[0]) = v9;
  }
  if ( (a5 & 1) != 0 )
  {
    v9 |= 0x800u;
    LODWORD(v22[0]) = v9;
  }
  if ( (a5 & 8) != 0 )
  {
    v9 |= 0x1000u;
    LODWORD(v22[0]) = v9;
  }
  if ( (a5 & 0x40) != 0 )
  {
    v9 |= 0x10000u;
    LODWORD(v22[0]) = v9;
  }
  if ( (a5 & 0x10) != 0 )
  {
    LODWORD(v22[0]) = v9 | 0x4000;
    v22[7] = *(_QWORD *)(a1 + 144);
    if ( a2 > v22[7] )
      a2 = v22[7];
    v9 = v22[0];
    if ( (a5 & 0x20) != 0 )
    {
      v9 = LODWORD(v22[0]) | 0x8000;
      LODWORD(v22[0]) |= 0x8000u;
    }
  }
  if ( dword_140C52B68 )
    LODWORD(v22[0]) = v9 | 0x100;
  HIDWORD(v22[9]) = 0;
  v10 = sub_140333AA0(a1);
  v22[10] = 0LL;
  v22[11] = 0LL;
  v12 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  LODWORD(v22[8]) = v10;
  WORD2(v22[8]) = 4;
  LODWORD(v22[9]) = 20;
  if ( v12 && *(_QWORD *)(a1 + 624) )
  {
    v23[1] = 32;
    v22[31] = v23;
  }
  v22[6] = 0LL;
  v13 = *(__int64 **)(a1 + 16);
  if ( (unsigned int)v6 >= 8 )
    return 0LL;
  v14 = (__int64 *)(a1 + 8 * (v6 + 5));
  v15 = (unsigned int)(8 - v6);
  do
  {
    v16 = *v14++;
    v17 = v22[6] + v16;
    v22[6] = v17;
    --v15;
  }
  while ( v15 );
  if ( !v17 )
    return 0LL;
  v22[1] = a2;
  v21[0].m128i_i8[5] = v22[0] & 0xF;
  v21[10].m128i_i64[1] = (__int64)v22;
  v21[9].m128i_i64[1] = (__int64)sub_1403731C0;
  v21[10].m128i_i64[0] = (__int64)sub_1403737D0;
  v21[0].m128i_i32[0] = 22;
  v21[1].m128i_i64[1] = a1;
  v21[0].m128i_i8[7] = a3;
  if ( (v11 & v22[0]) != 0 )
  {
    v18 = sub_1403747E4(v21);
    v21[3].m128i_i64[1] = v18;
  }
  else
  {
    v18 = *v13;
    v21[3].m128i_i64[1] = *v13;
  }
  v19 = v21[2].m128i_i64[1];
  if ( !v18 )
    v19 = -1LL;
  v21[2].m128i_i64[1] = v19;
  sub_14030CF90(v21);
  sub_140374708(a1, v22[5], v22[2], v6, a5);
  return v22[2];
}
