/*
 * XREFs of sub_18001DD3C @ 0x18001DD3C
 * Callers:
 *     sub_180029B1C @ 0x180029B1C (sub_180029B1C.c)
 *     sub_1800400C8 @ 0x1800400C8 (sub_1800400C8.c)
 *     sub_1800457FC @ 0x1800457FC (sub_1800457FC.c)
 *     sub_180046470 @ 0x180046470 (sub_180046470.c)
 *     sub_180057018 @ 0x180057018 (sub_180057018.c)
 *     sub_18006E9E4 @ 0x18006E9E4 (sub_18006E9E4.c)
 *     sub_180079E88 @ 0x180079E88 (sub_180079E88.c)
 *     sub_18007B960 @ 0x18007B960 (sub_18007B960.c)
 *     sub_18007EEFC @ 0x18007EEFC (sub_18007EEFC.c)
 *     sub_18008F5A4 @ 0x18008F5A4 (sub_18008F5A4.c)
 *     sub_1800907FC @ 0x1800907FC (sub_1800907FC.c)
 *     sub_180092E0C @ 0x180092E0C (sub_180092E0C.c)
 *     sub_180092F68 @ 0x180092F68 (sub_180092F68.c)
 *     sub_18009341C @ 0x18009341C (sub_18009341C.c)
 *     sub_180093640 @ 0x180093640 (sub_180093640.c)
 *     sub_1800AB0F0 @ 0x1800AB0F0 (sub_1800AB0F0.c)
 *     sub_1800AE960 @ 0x1800AE960 (sub_1800AE960.c)
 *     sub_1800B83D0 @ 0x1800B83D0 (sub_1800B83D0.c)
 *     sub_1800BAB48 @ 0x1800BAB48 (sub_1800BAB48.c)
 *     sub_1800BB174 @ 0x1800BB174 (sub_1800BB174.c)
 *     sub_1800C2234 @ 0x1800C2234 (sub_1800C2234.c)
 *     sub_1800C2530 @ 0x1800C2530 (sub_1800C2530.c)
 *     sub_1800C2990 @ 0x1800C2990 (sub_1800C2990.c)
 *     sub_1800C530C @ 0x1800C530C (sub_1800C530C.c)
 * Callees:
 *     sub_18001F6CC @ 0x18001F6CC (sub_18001F6CC.c)
 */

__int64 __fastcall sub_18001DD3C(__int64 a1, __int64 a2, void *a3)
{
  __int64 v4; // r9
  __int64 v5; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( *(_BYTE *)(a2 + v4) );
  v5 = sub_18001F6CC(a3);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v5;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(v5 + 16);
  *(_QWORD *)(v5 + 16) = 0LL;
  *(_QWORD *)(v5 + 24) = 15LL;
  *(_BYTE *)v5 = 0;
  return a1;
}
