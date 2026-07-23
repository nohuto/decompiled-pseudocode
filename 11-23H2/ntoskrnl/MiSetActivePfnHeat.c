/*
 * XREFs of MiSetActivePfnHeat @ 0x140654E08
 * Callers:
 *     MmSetPfnListInfo @ 0x14038C4B0 (MmSetPfnListInfo.c)
 *     MiMakeTransitionHeatBatch @ 0x140654808 (MiMakeTransitionHeatBatch.c)
 * Callees:
 *     MiSetNonResidentPteHeat @ 0x1402D9340 (MiSetNonResidentPteHeat.c)
 */

unsigned __int64 __fastcall MiSetActivePfnHeat(__int64 a1, int a2)
{
  if ( a2 && (*(_BYTE *)(a1 + 34) & 7) != 6 )
    _InterlockedIncrement(&MiTransitionPagesMadeCold);
  return MiSetNonResidentPteHeat((unsigned __int64 *)(a1 + 16), a2);
}
