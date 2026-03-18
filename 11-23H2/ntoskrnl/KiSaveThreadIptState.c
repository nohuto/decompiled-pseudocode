/*
 * XREFs of KiSaveThreadIptState @ 0x140572E10
 * Callers:
 *     SwapContext @ 0x1404283C0 (SwapContext.c)
 * Callees:
 *     KiSaveIptState @ 0x140572D10 (KiSaveIptState.c)
 */

void __fastcall KiSaveThreadIptState(__int64 a1)
{
  KiSaveIptState(*(unsigned __int64 **)(a1 + 1112));
}
