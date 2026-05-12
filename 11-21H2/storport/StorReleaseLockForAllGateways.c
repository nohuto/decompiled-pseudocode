/*
 * XREFs of StorReleaseLockForAllGateways @ 0x1C0023BEC
 * Callers:
 *     StorResumeIoGateway @ 0x1C0059444 (StorResumeIoGateway.c)
 * Callees:
 *     <none>
 */

void __fastcall StorReleaseLockForAllGateways(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *(_QWORD *)(a1 + 5928) && *(_DWORD *)(a1 + 840) )
  {
    do
      KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)(*(_QWORD *)(a1 + 5928) + 24LL * v1++));
    while ( v1 < *(_DWORD *)(a1 + 840) );
  }
}
