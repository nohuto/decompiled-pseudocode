/*
 * XREFs of sub_140B2F9C4 @ 0x140B2F9C4
 * Callers:
 *     sub_140B05E40 @ 0x140B05E40 (sub_140B05E40.c)
 * Callees:
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_14026E1F4 @ 0x14026E1F4 (sub_14026E1F4.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_14030CF90 @ 0x14030CF90 (sub_14030CF90.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

_BOOL8 sub_140B2F9C4()
{
  char *v0; // rax
  __int64 v1; // rsi
  __int32 v2; // edx
  volatile LONG *v3; // rbx
  KIRQL v4; // al
  __m128i v6[11]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v7[46]; // [rsp+D8h] [rbp-30h] BYREF

  memset(v6, 0, sizeof(v6));
  memset(v7, 0, 0x168uLL);
  sub_14026E1F4(v7);
  v0 = sub_14026DFC0(1);
  v6[2].m128i_i64[1] = -1LL;
  v1 = (__int64)v0;
  v6[1].m128i_i64[1] = (__int64)v0;
  v6[10].m128i_i64[1] = (__int64)v7;
  v6[0].m128i_i32[0] = v2;
  v6[9].m128i_i64[1] = (__int64)sub_140B1A250;
  v3 = (volatile LONG *)sub_140282AD0((__int64)v0);
  v4 = ExAcquireSpinLockExclusive(v3);
  *((_DWORD *)v3 + 1) = 0;
  v6[0].m128i_i8[7] = v4;
  LODWORD(v3) = sub_14030CF90(v6);
  sub_14030FA80(v1, v6[0].m128i_u8[7]);
  return (_DWORD)v3 != 5;
}
