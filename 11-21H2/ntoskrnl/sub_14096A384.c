/*
 * XREFs of sub_14096A384 @ 0x14096A384
 * Callers:
 *     sub_14031A4F0 @ 0x14031A4F0 (sub_14031A4F0.c)
 *     sub_1409DA634 @ 0x1409DA634 (sub_1409DA634.c)
 * Callees:
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_14030CF90 @ 0x14030CF90 (sub_14030CF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14096A384(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r14
  unsigned __int64 v6; // rsi
  __int64 result; // rax
  __m128i v8[11]; // [rsp+20h] [rbp-99h] BYREF
  int v9; // [rsp+D0h] [rbp+17h] BYREF
  __int64 v10; // [rsp+D4h] [rbp+1Bh]
  int v11; // [rsp+DCh] [rbp+23h]
  unsigned __int64 v12; // [rsp+E0h] [rbp+27h]

  LODWORD(v10) = 0;
  v4 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v5 = *((_QWORD *)KeGetCurrentThread() + 23);
  v10 = 0LL;
  v11 = 0;
  v9 = a4;
  v6 = ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12;
  v12 = v6;
  memset(v8, 0, sizeof(v8));
  v8[0].m128i_i32[0] = 39;
  v8[10].m128i_i64[1] = (__int64)&v9;
  v8[2].m128i_i64[0] = v4;
  v8[9].m128i_i64[1] = (__int64)sub_140584A30;
  v8[1].m128i_i64[1] = v5 + 1664;
  v8[2].m128i_i64[1] = v4 + (v6 << 12) - 1;
  v8[0].m128i_i8[7] = sub_1402CF4F0(v5 + 1664);
  LOBYTE(v4) = v8[0].m128i_i8[7];
  sub_14030CF90(v8);
  result = sub_1402B0CE0(v5 + 1664, v4);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 1280), -(__int64)v6);
  return result;
}
