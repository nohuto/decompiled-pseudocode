/*
 * XREFs of sub_1407FF67C @ 0x1407FF67C
 * Callers:
 *     sub_140A4A768 @ 0x140A4A768 (sub_140A4A768.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

NTSTATUS __fastcall sub_1407FF67C(char a1)
{
  char v1; // al
  struct _WORK_QUEUE_ITEM *v3; // rcx
  char v4; // al
  __int64 v5; // rax

  if ( a1 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C23C60, 0LL);
    byte_140C23C78 = 1;
    v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C23C60, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v1 & 2) != 0 && (v1 & 4) == 0 )
      ExfTryToWakePushLock(&qword_140C23C60);
    sub_1402AFC00((ULONG_PTR)&qword_140C23C60);
    return KeWaitForSingleObject(&stru_140C23C80, Executive, 0, 0, 0LL);
  }
  else
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C23C60, 0LL);
    byte_140C23C78 = 0;
    while ( 1 )
    {
      v3 = (struct _WORK_QUEUE_ITEM *)qword_140C23C68;
      if ( (__int64 *)qword_140C23C68 == &qword_140C23C68 )
        break;
      if ( *(__int64 **)(qword_140C23C68 + 8) != &qword_140C23C68
        || (v5 = *(_QWORD *)qword_140C23C68, *(_QWORD *)(*(_QWORD *)qword_140C23C68 + 8LL) != qword_140C23C68) )
      {
        __fastfail(3u);
      }
      qword_140C23C68 = *(_QWORD *)qword_140C23C68;
      *(_QWORD *)(v5 + 8) = &qword_140C23C68;
      ExQueueWorkItem(v3 + 1, DelayedWorkQueue);
    }
    v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C23C60, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
      ExfTryToWakePushLock(&qword_140C23C60);
    return sub_1402AFC00((ULONG_PTR)&qword_140C23C60);
  }
}
