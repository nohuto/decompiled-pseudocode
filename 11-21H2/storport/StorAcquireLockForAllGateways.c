/*
 * XREFs of StorAcquireLockForAllGateways @ 0x1C0023AE8
 * Callers:
 *     StorResumeIoGateway @ 0x1C0059444 (StorResumeIoGateway.c)
 * Callees:
 *     <none>
 */

char __fastcall StorAcquireLockForAllGateways(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 5928) )
    return 0;
  if ( *(_DWORD *)(a1 + 840) )
  {
    do
    {
      KeAcquireInStackQueuedSpinLock(
        (PKSPIN_LOCK)(*(_QWORD *)(a1 + 832) + 320LL * v1),
        (PKLOCK_QUEUE_HANDLE)(*(_QWORD *)(a1 + 5928) + 24LL * v1));
      ++v1;
    }
    while ( v1 < *(_DWORD *)(a1 + 840) );
  }
  return 1;
}
