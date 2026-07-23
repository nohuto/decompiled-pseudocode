/*
 * XREFs of RtlReleaseResource @ 0x180060400
 * Callers:
 *     <none>
 * Callees:
 *     ZwReleaseSemaphore @ 0x1800A0FF0 (ZwReleaseSemaphore.c)
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
 */

void __cdecl RtlReleaseResource(PRTL_RESOURCE Resource)
{
  LONG NumberOfActive; // eax
  signed int v3; // eax
  bool v4; // zf
  signed int NumberOfWaitingExclusive; // eax
  bool v6; // zf
  signed int v7; // ett
  int v8; // eax
  signed int v9; // ett
  int v10; // eax
  LONG v11; // ecx
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
        v11 = _InterlockedExchange((volatile __int32 *)&Resource->NumberOfWaitingShared, 0);
        if ( v11 )
        {
          v12 = ZwReleaseSemaphore(Resource->SharedSemaphore, v11, &PreviousCount);
          if ( v12 < 0 )
            RtlRaiseStatus(v12);
        }
      }
      NumberOfWaitingExclusive = Resource->NumberOfWaitingExclusive;
      v6 = NumberOfWaitingExclusive == 0;
      if ( NumberOfWaitingExclusive > 0 )
      {
        while ( 1 )
        {
          v7 = NumberOfWaitingExclusive;
          NumberOfWaitingExclusive = _InterlockedCompareExchange(
                                       (volatile signed __int32 *)&Resource->NumberOfWaitingExclusive,
                                       NumberOfWaitingExclusive - 1,
                                       NumberOfWaitingExclusive);
          if ( v7 == NumberOfWaitingExclusive )
            break;
          v6 = NumberOfWaitingExclusive == 0;
          if ( NumberOfWaitingExclusive <= 0 )
            goto LABEL_11;
        }
      }
      else
      {
LABEL_11:
        if ( v6 )
          return;
      }
      v8 = ZwReleaseSemaphore(Resource->ExclusiveSemaphore, 1, &PreviousCount);
      if ( v8 < 0 )
        RtlRaiseStatus(v8);
    }
  }
  else
  {
    if ( _InterlockedExchangeAdd(&Resource->NumberOfActive, 0xFFFFFFFF) != 1 )
      return;
    v3 = Resource->NumberOfWaitingExclusive;
    v4 = v3 == 0;
    if ( v3 > 0 )
    {
      while ( 1 )
      {
        v9 = v3;
        v3 = _InterlockedCompareExchange((volatile signed __int32 *)&Resource->NumberOfWaitingExclusive, v3 - 1, v3);
        if ( v9 == v3 )
          break;
        v4 = v3 == 0;
        if ( v3 <= 0 )
          goto LABEL_4;
      }
    }
    else
    {
LABEL_4:
      if ( v4 )
        return;
    }
    v10 = ZwReleaseSemaphore(Resource->ExclusiveSemaphore, 1, &PreviousCount);
    if ( v10 < 0 )
      RtlRaiseStatus(v10);
  }
}
