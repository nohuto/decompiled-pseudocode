/*
 * XREFs of MmQueryTransitionPagesMadeColdCount @ 0x1402F6204
 * Callers:
 *     PfSnCheckActionsNeeded @ 0x14074E1E8 (PfSnCheckActionsNeeded.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmQueryTransitionPagesMadeColdCount(unsigned int *a1)
{
  *a1 = ((unsigned int)HvlEnlightenments >> 21) & 1;
  return (unsigned int)MiTransitionPagesMadeCold;
}
