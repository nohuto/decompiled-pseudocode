/*
 * XREFs of ExpWorkQueueDestroy @ 0x140A02158
 * Callers:
 *     ExpPartitionCreatePoolInternal @ 0x1408520BC (ExpPartitionCreatePoolInternal.c)
 *     ExpPartitionDestroy @ 0x140A01F78 (ExpPartitionDestroy.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeRundownPriQueue @ 0x14057B42C (KeRundownPriQueue.c)
 */

char __fastcall ExpWorkQueueDestroy(char *SystemArgument1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _DWORD *v4; // r9
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  __int16 v7; // bx
  char result; // al
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *((_QWORD *)SystemArgument1 + 91) = &Event;
  _m_prefetchw(SystemArgument1 + 712);
  v5 = *((_DWORD *)SystemArgument1 + 178);
  do
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)SystemArgument1 + 178, v5 | 0x8000, v5);
  }
  while ( v6 != v5 );
  v7 = v5;
  result = KeRundownPriQueue((volatile signed __int32 *)SystemArgument1, v2, v3, v4);
  if ( (v7 & 0x3FFF) != 0 )
    return KeWaitForSingleObject(*((PVOID *)SystemArgument1 + 91), Executive, 0, 0, 0LL);
  return result;
}
