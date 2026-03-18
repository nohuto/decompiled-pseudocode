/*
 * XREFs of KiInitializeDpcList @ 0x14036EF40
 * Callers:
 *     KiInitPrcb @ 0x140A8BB8C (KiInitPrcb.c)
 *     KiInitializeProcessor @ 0x140A8EC24 (KiInitializeProcessor.c)
 * Callees:
 *     <none>
 */

void __fastcall KiInitializeDpcList(_QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = a1;
}
