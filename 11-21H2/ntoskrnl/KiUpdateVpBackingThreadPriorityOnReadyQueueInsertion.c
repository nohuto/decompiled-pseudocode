/*
 * XREFs of KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion @ 0x140210BE8
 * Callers:
 *     KiAddThreadToPrcbQueue @ 0x140210664 (KiAddThreadToPrcbQueue.c)
 *     KiAddThreadToScbQueue @ 0x140210988 (KiAddThreadToScbQueue.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x140577654 (KiReadGuestSchedulerAssistPriority.c)
 */

void __fastcall KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion(__int64 a1)
{
  bool v2; // di
  _QWORD *v3; // rbx
  _QWORD *v4; // rax

  if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
  {
    v2 = 0;
    if ( (unsigned int)KiReadGuestSchedulerAssistPriority(a1, 0LL) != *(_DWORD *)(a1 + 1024) )
    {
      KxAcquireSpinLock(&KiUpdateVpThreadPriorityLock);
      v3 = (_QWORD *)(a1 + 1008);
      if ( *v3 == 1LL )
      {
        v4 = (_QWORD *)qword_140C2BA28;
        v2 = KiUpdateVpThreadPriorityListHead == (_QWORD)&KiUpdateVpThreadPriorityListHead;
        if ( *(__int64 **)qword_140C2BA28 != &KiUpdateVpThreadPriorityListHead )
          __fastfail(3u);
        *v3 = &KiUpdateVpThreadPriorityListHead;
        v3[1] = v4;
        *v4 = v3;
        qword_140C2BA28 = (__int64)v3;
      }
      KxReleaseSpinLock(&KiUpdateVpThreadPriorityLock);
      if ( v2 )
        KeInsertQueueDpc(&KiUpdateVpThreadPriorityDpc, 0LL, 0LL);
    }
  }
}
