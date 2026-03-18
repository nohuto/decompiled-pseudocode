/*
 * XREFs of KiEpfDrainCompletionQueue @ 0x140578F8C
 * Callers:
 *     KeWaitPhysicalFaultCompletion @ 0x140578D88 (KeWaitPhysicalFaultCompletion.c)
 *     KiEpfCompletionDpcRoutine @ 0x140578F70 (KiEpfCompletionDpcRoutine.c)
 *     KiEpfHandleNotification @ 0x140579010 (KiEpfHandleNotification.c)
 *     KeInitSystem @ 0x140B4DED4 (KeInitSystem.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140250500 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402515B0 (KxAcquireSpinLock.c)
 *     KiEpfComplete @ 0x140578E80 (KiEpfComplete.c)
 */

void KiEpfDrainCompletionQueue()
{
  unsigned __int64 v0; // rbx
  __int64 v1; // rax
  char v2; // di

  v0 = 0LL;
  if ( KiEpfCompletionQueue )
  {
    while ( 1 )
    {
      KxAcquireSpinLock(&KiEpfCompletionQueueSpinLock);
      v1 = *(_QWORD *)KiEpfCompletionQueue;
      if ( *(_QWORD *)KiEpfCompletionQueue == *(_QWORD *)(KiEpfCompletionQueue + 8) )
      {
        v2 = 0;
      }
      else
      {
        v0 = *(_QWORD *)(KiEpfCompletionQueue + 8 * v1 + 16);
        v2 = 1;
        *(_QWORD *)KiEpfCompletionQueue = (v1 + 1) % (unsigned __int64)(unsigned int)KiEpfCompletionQueueSize;
      }
      KxReleaseSpinLock((volatile signed __int64 *)&KiEpfCompletionQueueSpinLock);
      if ( !v2 )
        break;
      KiEpfComplete(v0);
    }
  }
}
