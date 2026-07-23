/*
 * XREFs of KeRaiseIrqlToDpcLevel @ 0x1402AFCC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KIRQL KeRaiseIrqlToDpcLevel(void)
{
  KIRQL CurrentIrql; // dl
  _DWORD *SchedulerAssist; // r8
  __int64 v2; // r9

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v2) = 4;
    else
      v2 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v2;
  }
  return CurrentIrql;
}
