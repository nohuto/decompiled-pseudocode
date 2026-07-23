/*
 * XREFs of sub_14030B7F0 @ 0x14030B7F0
 * Callers:
 *     sub_140693498 @ 0x140693498 (sub_140693498.c)
 *     sub_1406BF9AC @ 0x1406BF9AC (sub_1406BF9AC.c)
 *     sub_1406F7D78 @ 0x1406F7D78 (sub_1406F7D78.c)
 *     sub_1406F89A4 @ 0x1406F89A4 (sub_1406F89A4.c)
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 *     sub_140709A08 @ 0x140709A08 (sub_140709A08.c)
 *     sub_140755920 @ 0x140755920 (sub_140755920.c)
 *     sub_1407B8B60 @ 0x1407B8B60 (sub_1407B8B60.c)
 *     sub_1407BA750 @ 0x1407BA750 (sub_1407BA750.c)
 *     sub_1407BE3C0 @ 0x1407BE3C0 (sub_1407BE3C0.c)
 *     sub_140852834 @ 0x140852834 (sub_140852834.c)
 *     sub_140971DC0 @ 0x140971DC0 (sub_140971DC0.c)
 *     sub_140972F98 @ 0x140972F98 (sub_140972F98.c)
 *     sub_140976DFC @ 0x140976DFC (sub_140976DFC.c)
 *     sub_140978F40 @ 0x140978F40 (sub_140978F40.c)
 *     sub_14097A228 @ 0x14097A228 (sub_14097A228.c)
 *     sub_14097A714 @ 0x14097A714 (sub_14097A714.c)
 *     sub_14097AB60 @ 0x14097AB60 (sub_14097AB60.c)
 *     sub_140980A20 @ 0x140980A20 (sub_140980A20.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall sub_14030B7F0(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 40, 0LL);
  *(_BYTE *)(a1 + 1384) |= 0x80u;
}
