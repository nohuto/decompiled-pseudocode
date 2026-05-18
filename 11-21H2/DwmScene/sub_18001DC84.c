/*
 * XREFs of sub_18001DC84 @ 0x18001DC84
 * Callers:
 *     sub_1800400C8 @ 0x1800400C8 (sub_1800400C8.c)
 *     sub_1800457FC @ 0x1800457FC (sub_1800457FC.c)
 *     sub_180046470 @ 0x180046470 (sub_180046470.c)
 *     sub_180052D40 @ 0x180052D40 (sub_180052D40.c)
 *     sub_180055C48 @ 0x180055C48 (sub_180055C48.c)
 *     sub_1800561F8 @ 0x1800561F8 (sub_1800561F8.c)
 *     sub_180056668 @ 0x180056668 (sub_180056668.c)
 *     sub_180056C78 @ 0x180056C78 (sub_180056C78.c)
 *     sub_180057018 @ 0x180057018 (sub_180057018.c)
 *     sub_180057880 @ 0x180057880 (sub_180057880.c)
 *     sub_180069B6C @ 0x180069B6C (sub_180069B6C.c)
 *     sub_180069D0C @ 0x180069D0C (sub_180069D0C.c)
 *     sub_18007EEFC @ 0x18007EEFC (sub_18007EEFC.c)
 *     sub_18008E4F0 @ 0x18008E4F0 (sub_18008E4F0.c)
 *     sub_18008F6BC @ 0x18008F6BC (sub_18008F6BC.c)
 *     sub_18008FBE8 @ 0x18008FBE8 (sub_18008FBE8.c)
 *     sub_1800904EC @ 0x1800904EC (sub_1800904EC.c)
 *     sub_1800909C8 @ 0x1800909C8 (sub_1800909C8.c)
 *     sub_180095A64 @ 0x180095A64 (sub_180095A64.c)
 *     sub_1800AE960 @ 0x1800AE960 (sub_1800AE960.c)
 *     sub_1800B83D0 @ 0x1800B83D0 (sub_1800B83D0.c)
 *     sub_1800BAB48 @ 0x1800BAB48 (sub_1800BAB48.c)
 *     sub_1800BB174 @ 0x1800BB174 (sub_1800BB174.c)
 *     sub_1800C2234 @ 0x1800C2234 (sub_1800C2234.c)
 *     sub_1800C2530 @ 0x1800C2530 (sub_1800C2530.c)
 *     sub_1800C2990 @ 0x1800C2990 (sub_1800C2990.c)
 *     sub_1800C530C @ 0x1800C530C (sub_1800C530C.c)
 *     sub_1800E201C @ 0x1800E201C (sub_1800E201C.c)
 *     sub_1800ED91C @ 0x1800ED91C (sub_1800ED91C.c)
 *     sub_1800EDBD0 @ 0x1800EDBD0 (sub_1800EDBD0.c)
 *     sub_1800EF710 @ 0x1800EF710 (sub_1800EF710.c)
 * Callees:
 *     sub_18001F640 @ 0x18001F640 (sub_18001F640.c)
 */

__int64 __fastcall sub_18001DC84(__int64 a1, void *a2)
{
  __int64 v3; // rax

  v3 = sub_18001F640(a2);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v3;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(v3 + 16);
  *(_QWORD *)(v3 + 16) = 0LL;
  *(_QWORD *)(v3 + 24) = 15LL;
  *(_BYTE *)v3 = 0;
  return a1;
}
