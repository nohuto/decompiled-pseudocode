/*
 * XREFs of KiInitializeDpcList @ 0x14036F0E0
 * Callers:
 *     KiInitPrcb @ 0x140A8BB8C (KiInitPrcb.c)
 *     KiInitializeProcessor @ 0x140A8EA9C (KiInitializeProcessor.c)
 * Callees:
 *     <none>
 */

void __fastcall KiInitializeDpcList(_QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = a1;
}
