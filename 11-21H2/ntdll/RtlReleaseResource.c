/*
 * XREFs of RtlReleaseResource @ 0x180069BE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     ZwReleaseSemaphore @ 0x1800A41B0 (ZwReleaseSemaphore.c)
 */

void __cdecl RtlReleaseResource(PRTL_RESOURCE Resource)
{
  LONG NumberOfActive; // eax
  signed int v3; // edx
  bool v4; // zf
  signed int NumberOfWaitingExclusive; // r8d
  bool v6; // zf
  int v7; // eax
  int v8; // eax
  LONG v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  LONG PreviousCount; // [rsp+30h] [rbp+8h] BYREF

  NumberOfActive = Resource->NumberOfActive;
  if ( NumberOfActive < 0 )
  {
    if ( NumberOfActive == -1 )
      Resource->ExclusiveOwnerThread = 0LL;
    if ( !_InterlockedIncrement(&Resource->NumberOfActive) )
    {
      if ( Resource->NumberOfWaitingShared )
      {
        v9 = _InterlockedExchange((volatile __int32 *)&Resource->NumberOfWaitingShared, 0);
        if ( v9 )
        {
          v10 = ZwReleaseSemaphore(Resource->SharedSemaphore, v9, &PreviousCount);
          if ( v10 < 0 )
            RtlRaiseStatus(v10);
        }
      }
      NumberOfWaitingExclusive = Resource->NumberOfWaitingExclusive;
      v6 = NumberOfWaitingExclusive == 0;
      if ( NumberOfWaitingExclusive > 0 )
      {
        do
        {
          v8 = _InterlockedCompareExchange(
                 (volatile signed __int32 *)&Resource->NumberOfWaitingExclusive,
                 NumberOfWaitingExclusive - 1,
                 NumberOfWaitingExclusive);
          if ( NumberOfWaitingExclusive == v8 )
            break;
          NumberOfWaitingExclusive = v8;
        }
        while ( v8 > 0 );
        v6 = NumberOfWaitingExclusive == 0;
      }
      if ( !v6 )
      {
        v7 = ZwReleaseSemaphore(Resource->ExclusiveSemaphore, 1, &PreviousCount);
        if ( v7 < 0 )
          RtlRaiseStatus(v7);
      }
    }
  }
  else if ( _InterlockedExchangeAdd(&Resource->NumberOfActive, 0xFFFFFFFF) == 1 )
  {
    v3 = Resource->NumberOfWaitingExclusive;
    v4 = v3 == 0;
    if ( v3 > 0 )
    {
      do
      {
        v11 = _InterlockedCompareExchange((volatile signed __int32 *)&Resource->NumberOfWaitingExclusive, v3 - 1, v3);
        if ( v3 == v11 )
          break;
        v3 = v11;
      }
      while ( v11 > 0 );
      v4 = v3 == 0;
    }
    if ( !v4 )
    {
      v12 = ZwReleaseSemaphore(Resource->ExclusiveSemaphore, 1, &PreviousCount);
      if ( v12 < 0 )
        RtlRaiseStatus(v12);
    }
  }
}
