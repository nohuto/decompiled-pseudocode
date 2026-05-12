/*
 * XREFs of StorReleaseLockForAllGateways @ 0x1C0066420
 * Callers:
 *     StorResumeIoGateway @ 0x1C0019100 (StorResumeIoGateway.c)
 * Callees:
 *     <none>
 */

void __fastcall StorReleaseLockForAllGateways(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *(_QWORD *)(a1 + 6024) && *(_DWORD *)(a1 + 904) )
  {
    do
      KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)(*(_QWORD *)(a1 + 6024) + 24LL * v1++));
    while ( v1 < *(_DWORD *)(a1 + 904) );
  }
}
