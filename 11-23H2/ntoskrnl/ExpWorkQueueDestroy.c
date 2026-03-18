/*
 * XREFs of ExpWorkQueueDestroy @ 0x140A00AC4
 * Callers:
 *     ExpPartitionCreatePoolInternal @ 0x1408497C0 (ExpPartitionCreatePoolInternal.c)
 *     ExpPartitionDestroy @ 0x140A008E8 (ExpPartitionDestroy.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1402AF870 (KeInitializeEvent.c)
 *     KeRundownPriQueue @ 0x14057EA50 (KeRundownPriQueue.c)
 */

NTSTATUS __fastcall ExpWorkQueueDestroy(unsigned __int64 a1)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett
  __int16 v4; // bx
  NTSTATUS result; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *(_QWORD *)(a1 + 728) = &Event;
  _m_prefetchw((const void *)(a1 + 712));
  v2 = *(_DWORD *)(a1 + 712);
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 712), v2 | 0x8000, v2);
  }
  while ( v3 != v2 );
  v4 = v2;
  result = KeRundownPriQueue(a1);
  if ( (v4 & 0x3FFF) != 0 )
    return KeWaitForSingleObject(*(PVOID *)(a1 + 728), Executive, 0, 0, 0LL);
  return result;
}
