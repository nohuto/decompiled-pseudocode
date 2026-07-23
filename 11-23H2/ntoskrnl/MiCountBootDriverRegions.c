/*
 * XREFs of MiCountBootDriverRegions @ 0x140B6F12C
 * Callers:
 *     MiInitializeDynamicVa @ 0x140B6F0BC (MiInitializeDynamicVa.c)
 * Callees:
 *     MiWalkPageTables @ 0x14025BF90 (MiWalkPageTables.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 MiCountBootDriverRegions()
{
  __int64 v1; // [rsp+20h] [rbp-D8h] BYREF
  __m128i v2[11]; // [rsp+30h] [rbp-C8h] BYREF

  memset(v2, 0, sizeof(v2));
  v1 = 0LL;
  v2[10].m128i_i64[1] = (__int64)&v1;
  v2[2].m128i_i64[0] = qword_140C6A5B8;
  v2[2].m128i_i64[1] = qword_140C6A5B8 + 0x7FFFFFFFFFLL;
  v2[0].m128i_i32[0] = 67584;
  v2[9].m128i_i64[1] = (__int64)MiCountBootDriverRegionPtes;
  MiWalkPageTables(v2);
  return v1;
}
