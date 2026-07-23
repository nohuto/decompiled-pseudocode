/*
 * XREFs of RtlAcquireResourceExclusive @ 0x1800602C0
 * Callers:
 *     RtlConvertSharedToExclusive @ 0x18007FC30 (RtlConvertSharedToExclusive.c)
 * Callees:
 *     DbgPrintEx @ 0x1800538D0 (DbgPrintEx.c)
 *     NtWaitForSingleObject @ 0x1800A0F30 (NtWaitForSingleObject.c)
 *     RtlpPossibleDeadlock @ 0x1800F4EB4 (RtlpPossibleDeadlock.c)
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
 */

BOOLEAN __cdecl RtlAcquireResourceExclusive(PRTL_RESOURCE Resource, BOOLEAN Wait)
{
  LONG NumberOfActive; // r9d
  BOOLEAN result; // al
  int v6; // ebp
  LARGE_INTEGER *v7; // r14
  int v8; // eax
  signed int NumberOfWaitingExclusive; // eax
  bool v10; // zf
  signed int v11; // ett

  NumberOfActive = Resource->NumberOfActive;
  if ( NumberOfActive < 0 && Resource->ExclusiveOwnerThread == NtCurrentTeb()->ClientId.UniqueThread )
  {
    _InterlockedDecrement(&Resource->NumberOfActive);
    return 1;
  }
  while ( 1 )
  {
    while ( !NumberOfActive )
    {
      NumberOfActive = _InterlockedCompareExchange(&Resource->NumberOfActive, -1, 0);
      if ( !NumberOfActive )
      {
        result = 1;
        Resource->ExclusiveOwnerThread = NtCurrentTeb()->ClientId.UniqueThread;
        return result;
      }
    }
    if ( !Wait )
      return 0;
    ++Resource->DebugInfo->ContentionCount;
    _InterlockedIncrement((volatile signed __int32 *)&Resource->NumberOfWaitingExclusive);
    NumberOfActive = Resource->NumberOfActive;
    if ( NumberOfActive )
    {
LABEL_9:
      v6 = 0;
      while ( 1 )
      {
        v7 = (LARGE_INTEGER *)&RtlpTimeout;
        if ( (Resource->Flags & 1) != 0 )
          v7 = 0LL;
        v8 = NtWaitForSingleObject(Resource->ExclusiveSemaphore, 0, v7);
        if ( v8 != 258 )
          break;
        DbgPrintEx(
          0x65u,
          0,
          "RTL: Acquire Exclusive Sem Timeout %d (%I64u secs)\n",
          v6,
          ((unsigned __int64)(((unsigned __int128)(v7->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v7->QuadPart) >> 63)
        + ((__int64)(((unsigned __int128)(v7->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v7->QuadPart) >> 23));
        DbgPrintEx(0x65u, 0, "RTL: Resource at %p\n", Resource);
        if ( (unsigned int)++v6 > 2 )
          RtlpPossibleDeadlock(Resource);
        DbgPrintEx(0x65u, 0, "RTL: Re-Waiting\n");
      }
      if ( v8 < 0 )
        RtlRaiseStatus(v8);
      NumberOfActive = Resource->NumberOfActive;
    }
    else
    {
      NumberOfWaitingExclusive = Resource->NumberOfWaitingExclusive;
      v10 = NumberOfWaitingExclusive == 0;
      if ( NumberOfWaitingExclusive > 0 )
      {
        while ( 1 )
        {
          v11 = NumberOfWaitingExclusive;
          NumberOfWaitingExclusive = _InterlockedCompareExchange(
                                       (volatile signed __int32 *)&Resource->NumberOfWaitingExclusive,
                                       NumberOfWaitingExclusive - 1,
                                       NumberOfWaitingExclusive);
          if ( v11 == NumberOfWaitingExclusive )
            break;
          v10 = NumberOfWaitingExclusive == 0;
          if ( NumberOfWaitingExclusive <= 0 )
            goto LABEL_16;
        }
      }
      else
      {
LABEL_16:
        if ( v10 )
          goto LABEL_9;
      }
    }
  }
}
