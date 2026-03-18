/*
 * XREFs of WdipSemRollBackProviderTable @ 0x1409DDB84
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x140830D04 (WdipSemLoadScenarioTable.c)
 * Callees:
 *     WdipSemFastFree @ 0x140831860 (WdipSemFastFree.c)
 */

PSLIST_ENTRY __fastcall WdipSemRollBackProviderTable(int a1)
{
  unsigned int i; // esi
  PSLIST_ENTRY result; // rax

  for ( i = a1; i < dword_140C34AA0; ++i )
  {
    result = WdipSemFastFree(2, (struct _SLIST_ENTRY *)WdipSemProviderTable[i]);
    WdipSemProviderTable[i] = 0LL;
  }
  dword_140C34AA0 = a1;
  return result;
}
