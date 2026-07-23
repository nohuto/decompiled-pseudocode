/*
 * XREFs of RtlConvertSharedToExclusive @ 0x1800850D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireResourceExclusive @ 0x180069AA0 (RtlAcquireResourceExclusive.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     ZwReleaseSemaphore @ 0x1800A41B0 (ZwReleaseSemaphore.c)
 */

void __cdecl RtlConvertSharedToExclusive(PRTL_RESOURCE Resource)
{
  LONG NumberOfActive; // eax
  LONG v3; // ett
  LONG v4; // eax
  LONG v5; // ecx
  int v6; // eax
  signed int v7; // r8d
  bool v8; // zf
  int v9; // eax
  int v10; // eax
  signed int NumberOfWaitingExclusive; // edx
  bool v12; // zf
  int v13; // eax
  int v14; // eax
  LONG PreviousCount; // [rsp+30h] [rbp+8h] BYREF

  NumberOfActive = Resource->NumberOfActive;
  if ( NumberOfActive >= 0 )
  {
    if ( NumberOfActive == 1 )
    {
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
    else
    {
LABEL_7:
      v4 = Resource->NumberOfActive;
      if ( v4 >= 0 )
      {
        if ( _InterlockedExchangeAdd(&Resource->NumberOfActive, 0xFFFFFFFF) == 1 )
        {
          NumberOfWaitingExclusive = Resource->NumberOfWaitingExclusive;
          v12 = NumberOfWaitingExclusive == 0;
          if ( NumberOfWaitingExclusive > 0 )
          {
            do
            {
              v13 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&Resource->NumberOfWaitingExclusive,
                      NumberOfWaitingExclusive - 1,
                      NumberOfWaitingExclusive);
              if ( NumberOfWaitingExclusive == v13 )
                break;
              NumberOfWaitingExclusive = v13;
            }
            while ( v13 > 0 );
            v12 = NumberOfWaitingExclusive == 0;
          }
          if ( !v12 )
          {
            v14 = ZwReleaseSemaphore(Resource->ExclusiveSemaphore, 1, &PreviousCount);
            if ( v14 < 0 )
              RtlRaiseStatus(v14);
          }
        }
      }
      else
      {
        if ( v4 == -1 )
          Resource->ExclusiveOwnerThread = 0LL;
        if ( !_InterlockedIncrement(&Resource->NumberOfActive) )
        {
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
          v8 = v7 == 0;
          if ( v7 > 0 )
          {
            do
            {
              v9 = _InterlockedCompareExchange(
                     (volatile signed __int32 *)&Resource->NumberOfWaitingExclusive,
                     v7 - 1,
                     v7);
              if ( v7 == v9 )
                break;
              v7 = v9;
            }
            while ( v9 > 0 );
            v8 = v7 == 0;
          }
          if ( !v8 )
          {
            v10 = ZwReleaseSemaphore(Resource->ExclusiveSemaphore, 1, &PreviousCount);
            if ( v10 < 0 )
              RtlRaiseStatus(v10);
          }
        }
      }
      RtlAcquireResourceExclusive(Resource, 1u);
    }
  }
}
