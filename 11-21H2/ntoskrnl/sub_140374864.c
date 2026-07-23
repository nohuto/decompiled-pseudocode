/*
 * XREFs of sub_140374864 @ 0x140374864
 * Callers:
 *     sub_14037443C @ 0x14037443C (sub_14037443C.c)
 * Callees:
 *     sub_14030CF90 @ 0x14030CF90 (sub_14030CF90.c)
 *     sub_140333AA0 @ 0x140333AA0 (sub_140333AA0.c)
 *     sub_1403747E4 @ 0x1403747E4 (sub_1403747E4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140374864(__int64 a1, __int8 a2)
{
  unsigned __int128 v4; // rax
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  __int64 v7; // r10
  unsigned __int64 v8; // r9
  bool v9; // zf
  unsigned __int64 v10; // rax
  __m128i v12[11]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v13[32]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v14[24]; // [rsp+1D0h] [rbp+D0h] BYREF
  _DWORD v15[68]; // [rsp+290h] [rbp+190h] BYREF

  memset(v13, 0, sizeof(v13));
  memset(v14, 0, 0xB8uLL);
  memset(v12, 0, sizeof(v12));
  *(_QWORD *)&v4 = memset(v15, 0, 0x108uLL);
  if ( (*(_BYTE *)(a1 + 184) & 0x40) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 144);
    v4 = *(unsigned __int64 *)(a1 + 120) * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL;
    if ( v5 >= (*((_QWORD *)&v4 + 1) & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      v6 = *(_QWORD *)(a1 + 40);
      v4 = v5 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL;
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
      if ( v7 + v6 >= (*((_QWORD *)&v4 + 1) & 0xFFFFFFFFFFFFFFFCuLL) && v5 - v7 - v6 < 0x400 )
      {
        v8 = v6 >> 5;
        if ( v8 < 8 )
          v8 = 8LL;
        v13[6] = v8;
        LODWORD(v14[0]) = sub_140333AA0(a1);
        v9 = (*(_BYTE *)(a1 + 184) & 7) == 0;
        v13[7] = v14;
        WORD2(v14[0]) = 0;
        v14[2] = 0LL;
        LODWORD(v14[1]) = 20;
        v14[3] = 0LL;
        if ( v9 && *(_QWORD *)(a1 + 624) )
        {
          v15[1] = 32;
          v13[31] = v15;
        }
        LODWORD(v13[0]) |= 4u;
        v12[10].m128i_i64[1] = (__int64)v13;
        v12[1].m128i_i64[1] = a1;
        v12[0].m128i_i8[7] = a2;
        v10 = sub_1403747E4((__int64)v12);
        v12[2].m128i_i64[1] = -1LL;
        v12[3].m128i_i64[1] = v10;
        v12[9].m128i_i64[1] = (__int64)sub_140596EA0;
        v12[10].m128i_i64[0] = (__int64)sub_14045BD30;
        v12[0].m128i_i32[0] = 6;
        *(_QWORD *)&v4 = sub_14030CF90(v12);
      }
    }
  }
  return v4;
}
