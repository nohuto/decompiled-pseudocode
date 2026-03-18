/*
 * XREFs of KiInitializeDpcList @ 0x14025E724
 * Callers:
 *     KiInitPrcb @ 0x140A57CB4 (KiInitPrcb.c)
 *     KiInitializeProcessor @ 0x140A5943C (KiInitializeProcessor.c)
 * Callees:
 *     <none>
 */

void __fastcall KiInitializeDpcList(_QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = a1;
}
