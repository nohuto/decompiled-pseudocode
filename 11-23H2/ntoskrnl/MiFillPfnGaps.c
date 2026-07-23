/*
 * XREFs of MiFillPfnGaps @ 0x140B75174
 * Callers:
 *     MiInitNucleus @ 0x140B41888 (MiInitNucleus.c)
 * Callees:
 *     MiWalkPageTables @ 0x14025BF90 (MiWalkPageTables.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 MiFillPfnGaps()
{
  __int64 result; // rax
  __m128i v1[11]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v1, 0, sizeof(v1));
  v1[0].m128i_i32[0] = 67584;
  v1[10].m128i_i64[1] = (__int64)&qword_140C69758;
  v1[2].m128i_i64[0] = 0xFFFFDE0000000000uLL;
  v1[2].m128i_i64[1] = 48 * qword_140C65BA0 - 0x21FFFFFFFFD1LL;
  v1[9].m128i_i64[1] = (__int64)MiFillGapPtes;
  result = MiWalkPageTables(v1);
  LODWORD(MiFlags) = MiFlags | 0x20000000;
  return result;
}
