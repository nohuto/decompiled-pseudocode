/*
 * XREFs of ?ndisCmLazyInitializeCleanup@@YAXXZ @ 0x1C00B6CEC
 * Callers:
 *     NdisSetSessionCompartmentId @ 0x1C00B6E90 (NdisSetSessionCompartmentId.c)
 * Callees:
 *     <none>
 */

void ndisCmLazyInitializeCleanup(void)
{
  if ( !_InterlockedCompareExchange(&dword_1C00F79BC, 1, 0) )
    KeSetCoalescableTimer(&Timer, (LARGE_INTEGER)-300000000LL, 0x7530u, 0x1D4Cu, &Dpc);
}
