/*
 * XREFs of KfRaiseIrql @ 0x1402AD500
 * Callers:
 *     sub_140432080 @ 0x140432080 (sub_140432080.c)
 * Callees:
 *     <none>
 */

KIRQL __stdcall KfRaiseIrql(KIRQL NewIrql)
{
  KIRQL result; // al
  __int64 v2; // r10

  result = KeGetCurrentIrql();
  __writecr8(NewIrql);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && result <= 0xFu && (unsigned __int8)(NewIrql - 2) <= 0xDu )
  {
    v2 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v2 + 20) |= ((1LL << (NewIrql + 1)) - 1) & ~((1LL << (result + 1)) - 1) & 0xFFFFFFFC;
  }
  return result;
}
