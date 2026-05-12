/*
 * XREFs of StorAcquireLockForAllGateways @ 0x1C0065E8C
 * Callers:
 *     StorResumeIoGateway @ 0x1C0019100 (StorResumeIoGateway.c)
 * Callees:
 *     <none>
 */

char __fastcall StorAcquireLockForAllGateways(__int64 a1)
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
