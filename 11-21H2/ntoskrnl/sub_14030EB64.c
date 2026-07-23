/*
 * XREFs of sub_14030EB64 @ 0x14030EB64
 * Callers:
 *     sub_140693498 @ 0x140693498 (sub_140693498.c)
 *     sub_1406F7D78 @ 0x1406F7D78 (sub_1406F7D78.c)
 *     sub_1406F89A4 @ 0x1406F89A4 (sub_1406F89A4.c)
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 *     sub_140709A08 @ 0x140709A08 (sub_140709A08.c)
 *     sub_140755920 @ 0x140755920 (sub_140755920.c)
 *     sub_1407B8B60 @ 0x1407B8B60 (sub_1407B8B60.c)
 *     sub_1407BA750 @ 0x1407BA750 (sub_1407BA750.c)
 *     sub_140852834 @ 0x140852834 (sub_140852834.c)
 *     sub_14096D8A8 @ 0x14096D8A8 (sub_14096D8A8.c)
 *     sub_1409736EC @ 0x1409736EC (sub_1409736EC.c)
 *     sub_140978F40 @ 0x140978F40 (sub_140978F40.c)
 *     sub_14097F038 @ 0x14097F038 (sub_14097F038.c)
 *     sub_140980A20 @ 0x140980A20 (sub_140980A20.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14030EB64(__int64 a1)
{
  if ( !_InterlockedIncrement((volatile signed __int32 *)(a1 + 36)) )
    __fastfail(0xEu);
}
