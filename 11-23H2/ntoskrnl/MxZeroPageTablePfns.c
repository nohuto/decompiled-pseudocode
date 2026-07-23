/*
 * XREFs of MxZeroPageTablePfns @ 0x140B57DE4
 * Callers:
 *     MiInitNucleus @ 0x140B41888 (MiInitNucleus.c)
 * Callees:
 *     MiWalkPageTables @ 0x14025BF90 (MiWalkPageTables.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MxInitializePageTablePfns @ 0x140B57E80 (MxInitializePageTablePfns.c)
 */

__int64 MxZeroPageTablePfns()
{
  __m128i v1[11]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v1, 0, sizeof(v1));
  v1[2] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffff0000000000000000);
  v1[9].m128i_i64[1] = (__int64)MxInitializePageTablePfns;
  v1[0].m128i_i32[0] = 67584;
  MxInitializePageTablePfns(v1, 0xFFFFF6FB7DBEDF68uLL, 3LL);
  return MiWalkPageTables(v1);
}
