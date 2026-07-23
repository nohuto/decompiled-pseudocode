/*
 * XREFs of RtlConvertSharedToExclusive @ 0x18007FC30
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireResourceExclusive @ 0x1800602C0 (RtlAcquireResourceExclusive.c)
 *     ZwReleaseSemaphore @ 0x1800A0FF0 (ZwReleaseSemaphore.c)
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
 */

void __cdecl RtlConvertSharedToExclusive(PRTL_RESOURCE Resource)
{
  LONG NumberOfActive; // eax
  LONG v3; // ett
  LONG v4; // eax
  LONG v5; // ecx
  int v6; // eax
  signed int v7; // eax
  bool i; // zf
  signed int v9; // ett
  int v10; // eax
  signed int NumberOfWaitingExclusive; // eax
  bool v12; // zf
  signed int v13; // ett
  int v14; // eax
  LONG PreviousCount; // [rsp+30h] [rbp+8h] BYREF

  NumberOfActive = Resource->NumberOfActive;
  if ( NumberOfActive < 0 )
    return;
  if ( NumberOfActive != 1 )
  {
LABEL_7:
    v4 = Resource->NumberOfActive;
    if ( v4 >= 0 )
    {
      if ( _InterlockedExchangeAdd(&Resource->NumberOfActive, 0xFFFFFFFF) == 1 )
      {
        NumberOfWaitingExclusive = Resource->NumberOfWaitingExclusive;
        v12 = NumberOfWaitingExclusive == 0;
        if ( NumberOfWaitingExclusive <= 0 )
        {
LABEL_25:
          if ( v12 )
            goto LABEL_28;
        }
        else
        {
          while ( 1 )
          {
            v13 = NumberOfWaitingExclusive;
            NumberOfWaitingExclusive = _InterlockedCompareExchange(
                                         (volatile signed __int32 *)&Resource->NumberOfWaitingExclusive,
                                         NumberOfWaitingExclusive - 1,
                                         NumberOfWaitingExclusive);
            if ( v13 == NumberOfWaitingExclusive )
              break;
            v12 = NumberOfWaitingExclusive == 0;
            if ( NumberOfWaitingExclusive <= 0 )
              goto LABEL_25;
          }
        }
        v14 = ZwReleaseSemaphore(Resource->ExclusiveSemaphore, 1, &PreviousCount);
        if ( v14 < 0 )
          RtlRaiseStatus(v14);
      }
    }
    else
    {
      if ( v4 == -1 )
        Resource->ExclusiveOwnerThread = 0LL;
      if ( _InterlockedIncrement(&Resource->NumberOfActive) )
        goto LABEL_28;
      if ( Resource->NumberOfWaitingShared )
      {
        v5 = _InterlockedExchange((volatile __int32 *)&Resource->NumberOfWaitingShared, 0);
        if ( v5 )
        {
          v6 = ZwReleaseSemaphore(Resource->SharedSemaphore, v5, &PreviousCount);
          if ( v6 < 0 )
            RtlRaiseStatus(v6);
        }
      }
      v7 = Resource->NumberOfWaitingExclusive;
      for ( i = v7 == 0; v7 > 0; i = v7 == 0 )
      {
        v9 = v7;
        v7 = _InterlockedCompareExchange((volatile signed __int32 *)&Resource->NumberOfWaitingExclusive, v7 - 1, v7);
        if ( v9 == v7 )
          goto LABEL_19;
      }
      if ( !i )
      {
LABEL_19:
        v10 = ZwReleaseSemaphore(Resource->ExclusiveSemaphore, 1, &PreviousCount);
        if ( v10 < 0 )
          RtlRaiseStatus(v10);
      }
    }
LABEL_28:
    RtlAcquireResourceExclusive(Resource, 1u);
    return;
  }
  while ( 1 )
  {
    v3 = NumberOfActive;
    NumberOfActive = _InterlockedCompareExchange(&Resource->NumberOfActive, -1, NumberOfActive);
    if ( v3 == NumberOfActive )
      break;
    if ( NumberOfActive != 1 )
      goto LABEL_7;
  }
  Resource->ExclusiveOwnerThread = NtCurrentTeb()->ClientId.UniqueThread;
}
