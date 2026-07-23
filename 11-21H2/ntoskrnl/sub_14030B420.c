/*
 * XREFs of sub_14030B420 @ 0x14030B420
 * Callers:
 *     sub_140693498 @ 0x140693498 (sub_140693498.c)
 *     sub_1406AC778 @ 0x1406AC778 (sub_1406AC778.c)
 *     sub_1406BF9AC @ 0x1406BF9AC (sub_1406BF9AC.c)
 *     sub_1406C3FB4 @ 0x1406C3FB4 (sub_1406C3FB4.c)
 *     sub_1406F8D30 @ 0x1406F8D30 (sub_1406F8D30.c)
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 *     sub_1407B8B60 @ 0x1407B8B60 (sub_1407B8B60.c)
 *     sub_140852834 @ 0x140852834 (sub_140852834.c)
 *     sub_140978F40 @ 0x140978F40 (sub_140978F40.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14030B420(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 24) = a2;
  *(_BYTE *)(a1 + 32) = BYTE4(a2);
}
