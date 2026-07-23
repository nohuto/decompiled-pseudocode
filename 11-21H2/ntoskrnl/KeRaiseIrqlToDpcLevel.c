/*
 * XREFs of KeRaiseIrqlToDpcLevel @ 0x1402AD4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KIRQL KeRaiseIrqlToDpcLevel(void)
{
  KIRQL CurrentIrql; // r10
  __int64 v1; // r9

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v1 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v1 + 20) |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
  }
  return CurrentIrql;
}
