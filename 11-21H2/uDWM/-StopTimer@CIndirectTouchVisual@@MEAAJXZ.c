/*
 * XREFs of ?StopTimer@CIndirectTouchVisual@@MEAAJXZ @ 0x1800C14E0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18005F94C (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ @ 0x1800C1414 (-StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CIndirectTouchVisual::StopTimer(CIndirectTouchVisual *this)
{
  CTouchVisual *v1; // rcx

  CIndirectTouchVisual::StopAllTimelines(this);
  CTouchVisual::UnRegisterGlobalTimer(v1);
  return 0LL;
}
