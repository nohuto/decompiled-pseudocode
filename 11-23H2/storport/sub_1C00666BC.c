/*
 * XREFs of sub_1C00666BC @ 0x1C00666BC
 * Callers:
 *     sub_1C0019DB4 @ 0x1C0019DB4 (sub_1C0019DB4.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1C00666BC(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 6024) )
    return 0;
  if ( *(_DWORD *)(a1 + 904) )
  {
    do
    {
      KeAcquireInStackQueuedSpinLock(
        (PKSPIN_LOCK)(*(_QWORD *)(a1 + 896) + 320LL * v1),
        (PKLOCK_QUEUE_HANDLE)(*(_QWORD *)(a1 + 6024) + 24LL * v1));
      ++v1;
    }
    while ( v1 < *(_DWORD *)(a1 + 904) );
  }
  return 1;
}
