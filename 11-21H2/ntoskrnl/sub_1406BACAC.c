/*
 * XREFs of sub_1406BACAC @ 0x1406BACAC
 * Callers:
 *     sub_14065F3BC @ 0x14065F3BC (sub_14065F3BC.c)
 *     sub_14065F7D4 @ 0x14065F7D4 (sub_14065F7D4.c)
 *     sub_1406BA720 @ 0x1406BA720 (sub_1406BA720.c)
 *     sub_1406BA8F4 @ 0x1406BA8F4 (sub_1406BA8F4.c)
 *     sub_140789AEC @ 0x140789AEC (sub_140789AEC.c)
 *     sub_140789CFC @ 0x140789CFC (sub_140789CFC.c)
 *     sub_140789E04 @ 0x140789E04 (sub_140789E04.c)
 *     sub_14078A748 @ 0x14078A748 (sub_14078A748.c)
 *     sub_140806A24 @ 0x140806A24 (sub_140806A24.c)
 *     sub_14081C354 @ 0x14081C354 (sub_14081C354.c)
 *     sub_140954BA8 @ 0x140954BA8 (sub_140954BA8.c)
 *     sub_140954D10 @ 0x140954D10 (sub_140954D10.c)
 *     sub_140954E2C @ 0x140954E2C (sub_140954E2C.c)
 *     sub_140955184 @ 0x140955184 (sub_140955184.c)
 *     sub_140955274 @ 0x140955274 (sub_140955274.c)
 *     sub_1409554B0 @ 0x1409554B0 (sub_1409554B0.c)
 *     sub_140955BAC @ 0x140955BAC (sub_140955BAC.c)
 *     sub_140955CA4 @ 0x140955CA4 (sub_140955CA4.c)
 *     sub_14095644C @ 0x14095644C (sub_14095644C.c)
 * Callees:
 *     sub_1402DF554 @ 0x1402DF554 (sub_1402DF554.c)
 */

__int64 __fastcall sub_1406BACAC(__int64 a1)
{
  void *v1; // rdx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    sub_1402DF554(*((_BYTE *)KeGetCurrentThread() + 562), v1);
  return 0LL;
}
