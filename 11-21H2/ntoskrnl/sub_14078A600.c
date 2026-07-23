/*
 * XREFs of sub_14078A600 @ 0x14078A600
 * Callers:
 *     sub_14065F3BC @ 0x14065F3BC (sub_14065F3BC.c)
 *     sub_14065F7D4 @ 0x14065F7D4 (sub_14065F7D4.c)
 *     sub_1406BA720 @ 0x1406BA720 (sub_1406BA720.c)
 *     sub_1406BA8F4 @ 0x1406BA8F4 (sub_1406BA8F4.c)
 *     sub_1406CFE50 @ 0x1406CFE50 (sub_1406CFE50.c)
 *     sub_1406DC724 @ 0x1406DC724 (sub_1406DC724.c)
 *     sub_140764DB0 @ 0x140764DB0 (sub_140764DB0.c)
 *     sub_14076DD0C @ 0x14076DD0C (sub_14076DD0C.c)
 *     sub_140789AEC @ 0x140789AEC (sub_140789AEC.c)
 *     sub_140806A24 @ 0x140806A24 (sub_140806A24.c)
 *     sub_14081C354 @ 0x14081C354 (sub_14081C354.c)
 *     sub_140954434 @ 0x140954434 (sub_140954434.c)
 *     sub_140954BA8 @ 0x140954BA8 (sub_140954BA8.c)
 *     sub_140954D10 @ 0x140954D10 (sub_140954D10.c)
 *     sub_140954E2C @ 0x140954E2C (sub_140954E2C.c)
 *     sub_140955184 @ 0x140955184 (sub_140955184.c)
 *     sub_140955274 @ 0x140955274 (sub_140955274.c)
 *     sub_1409554B0 @ 0x1409554B0 (sub_1409554B0.c)
 *     sub_140955EF8 @ 0x140955EF8 (sub_140955EF8.c)
 *     sub_14095618C @ 0x14095618C (sub_14095618C.c)
 *     sub_140956298 @ 0x140956298 (sub_140956298.c)
 *     sub_14095644C @ 0x14095644C (sub_14095644C.c)
 * Callees:
 *     sub_14078A644 @ 0x14078A644 (sub_14078A644.c)
 */

char __fastcall sub_14078A600(ACCESS_MASK a1)
{
  char v1; // bl
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  LOBYTE(v3) = 0;
  if ( (int)sub_14078A644(a1, qword_140C54ED0, (PGENERIC_MAPPING)&stru_140010C70, 0LL, (__int64)&v3) >= 0 )
    return v3;
  return v1;
}
