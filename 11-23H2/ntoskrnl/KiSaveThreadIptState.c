/*
 * XREFs of KiSaveThreadIptState @ 0x140573350
 * Callers:
 *     SwapContext @ 0x140428750 (SwapContext.c)
 * Callees:
 *     KiSaveIptState @ 0x140573250 (KiSaveIptState.c)
 */

void __fastcall KiSaveThreadIptState(__int64 a1)
{
  KiSaveIptState(*(unsigned __int64 **)(a1 + 1112));
}
