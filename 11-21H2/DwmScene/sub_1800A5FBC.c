/*
 * XREFs of sub_1800A5FBC @ 0x1800A5FBC
 * Callers:
 *     sub_1800A6130 @ 0x1800A6130 (sub_1800A6130.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_1800A5FBC(_QWORD *a1)
{
  __int64 v1; // r14
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+28h] [rbp-18h]
  __int128 v14; // [rsp+30h] [rbp-10h] BYREF

  v1 = (__int64)(a1 + 23);
  *a1 = &Spectre::Engine::ImageProcessingEffectBloom::`vftable';
  v3 = a1[23];
  a1[23] = 0LL;
  v12 = v3;
  v4 = a1[24];
  a1[24] = 0LL;
  v13 = v4;
  v14 = 0LL;
  sub_180010910((__int64)&v12);
  sub_180010910((__int64)&v14);
  v5 = a1[31];
  a1[31] = 0LL;
  v12 = v5;
  v6 = a1[32];
  a1[32] = 0LL;
  v13 = v6;
  v14 = 0LL;
  sub_180010910((__int64)&v12);
  sub_180010910((__int64)&v14);
  v7 = a1[25];
  a1[25] = 0LL;
  v12 = v7;
  v8 = a1[26];
  a1[26] = 0LL;
  v13 = v8;
  v14 = 0LL;
  sub_180010910((__int64)&v12);
  sub_180010910((__int64)&v14);
  v9 = a1[29];
  a1[29] = 0LL;
  v12 = v9;
  v10 = a1[30];
  a1[30] = 0LL;
  v13 = v10;
  v14 = 0LL;
  sub_180010910((__int64)&v12);
  sub_180010910((__int64)&v14);
  sub_180010910((__int64)(a1 + 33));
  sub_180010910((__int64)(a1 + 31));
  sub_180010910((__int64)(a1 + 29));
  sub_180010910((__int64)(a1 + 27));
  sub_180010910((__int64)(a1 + 25));
  sub_180010910(v1);
  return sub_1800A86F4(a1);
}
