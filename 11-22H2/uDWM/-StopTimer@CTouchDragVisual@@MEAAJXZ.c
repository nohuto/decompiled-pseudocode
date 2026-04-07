/*
 * XREFs of ?StopTimer@CTouchDragVisual@@MEAAJXZ @ 0x1800E7E20
 * Callers:
 *     <none>
 * Callees:
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18005836C (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CTouchDragVisual::StopTimer(CTouchDragVisual *this)
{
  CTouchVisual::UnRegisterGlobalTimer(this);
  return 0LL;
}
