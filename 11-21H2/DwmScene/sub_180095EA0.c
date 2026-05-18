/*
 * XREFs of sub_180095EA0 @ 0x180095EA0
 * Callers:
 *     sub_1800A956C @ 0x1800A956C (sub_1800A956C.c)
 * Callees:
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_180095A64 @ 0x180095A64 (sub_180095A64.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180095EA0(_QWORD *a1, __int64 a2)
{
  __int64 v5[4]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6[4]; // [rsp+40h] [rbp-20h] BYREF

  v5[2] = 0LL;
  v5[3] = 15LL;
  LOBYTE(v5[0]) = 0;
  sub_180012190(v5, byte_180128042, 0LL);
  v6[2] = 0LL;
  v6[3] = 15LL;
  LOBYTE(v6[0]) = 0;
  sub_180012190(v6, byte_180128042, 0LL);
  return sub_180095A64(a1, (__int64)v6, a2, (__int64)v5);
}
