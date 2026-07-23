/*
 * XREFs of PiUEventDequeuePendingEventWorker @ 0x14078226C
 * Callers:
 *     PiUEventNotifyClient @ 0x14077E7CC (PiUEventNotifyClient.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14077EE78 (PiUEventFreeClientRegistrationContext.c)
 *     PiUEventHandleGetEvent @ 0x14077F518 (PiUEventHandleGetEvent.c)
 *     PiUEventHandleVetoEvent @ 0x140882B88 (PiUEventHandleVetoEvent.c)
 * Callees:
 *     PiUEventDereferenceEventEntry @ 0x140782408 (PiUEventDereferenceEventEntry.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PiUEventDequeuePendingEventWorker(__int64 a1, void *a2, char a3)
{
  void **v4; // rdx
  void **v5; // rax

  v4 = *(void ***)a2;
  if ( v4[1] != a2 || (v5 = (void **)*((_QWORD *)a2 + 1), *v5 != a2) )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  if ( !a3 )
    --*(_DWORD *)(a1 + 128);
  PiUEventDereferenceEventEntry(*((PVOID *)a2 + 3));
  ExFreePoolWithTag(a2, 0x59706E50u);
}
