/*
 * XREFs of LdrLockLoaderLock @ 0x180051030
 * Callers:
 *     TppWorkCallbackPrologRelease @ 0x18004EB28 (TppWorkCallbackPrologRelease.c)
 *     TppIopExecuteCallback @ 0x18004EF70 (TppIopExecuteCallback.c)
 * Callees:
 *     LdrpAcquireLoaderLock @ 0x180051228 (LdrpAcquireLoaderLock.c)
 *     LdrpTryAcquireLoaderLock @ 0x1800D91DC (LdrpTryAcquireLoaderLock.c)
 *     LdrpGenericExceptionFilter @ 0x1800E19A8 (LdrpGenericExceptionFilter.c)
 *     RtlRaiseStatus @ 0x1801106D0 (RtlRaiseStatus.c)
 */

__int64 __fastcall LdrLockLoaderLock(int a1, int *a2, unsigned __int64 *a3)
{
  unsigned int v5; // ebx
  int v7; // edi
  int v8; // eax
  int UniqueThread; // eax
  int v10; // [rsp+40h] [rbp+8h]

  v5 = 0;
  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = 0LL;
  if ( (a1 & 0xFFFFFFFC) != 0 )
  {
    if ( (a1 & 1) != 0 )
      RtlRaiseStatus(3221225711LL);
    return (unsigned int)-1073741585;
  }
  else
  {
    if ( a3 )
    {
      if ( (a1 & 2) != 0 && !a2 )
      {
        if ( (a1 & 1) != 0 )
          RtlRaiseStatus(3221225712LL);
        return (unsigned int)-1073741584;
      }
      if ( LdrInitState != 3 )
        return v5;
      v7 = 1;
      if ( (a1 & 1) != 0 )
      {
        if ( (a1 & 2) != 0 )
        {
          if ( (unsigned __int8)LdrpTryAcquireLoaderLock() )
          {
            UniqueThread = (int)NtCurrentTeb()->ClientId.UniqueThread;
            *a3 = ((unsigned __int64)(UniqueThread & 0xFFF) << 48) | (unsigned __int16)(_InterlockedExchangeAdd(
                                                                                          &LdrpLoaderLockAcquisitionCount,
                                                                                          1u)
                                                                                      + 1) & 0xFFFE | 1LL;
          }
          else
          {
            v7 = 2;
          }
          *a2 = v7;
        }
        else
        {
          LdrpAcquireLoaderLock();
          if ( a2 )
            *a2 = 1;
          v8 = (int)NtCurrentTeb()->ClientId.UniqueThread;
          *a3 = ((unsigned __int64)(v8 & 0xFFF) << 48) | (unsigned __int16)(_InterlockedExchangeAdd(
                                                                              &LdrpLoaderLockAcquisitionCount,
                                                                              1u)
                                                                          + 1) & 0xFFFE | 1LL;
        }
        return v5;
      }
      if ( (a1 & 2) != 0 )
      {
        if ( !(unsigned __int8)LdrpTryAcquireLoaderLock() )
        {
          *a2 = 2;
          return v5;
        }
      }
      else
      {
        LdrpAcquireLoaderLock();
        if ( !a2 )
        {
LABEL_17:
          v10 = (int)NtCurrentTeb()->ClientId.UniqueThread;
          *a3 = ((unsigned __int64)(v10 & 0xFFF) << 48) | (unsigned __int16)(_InterlockedExchangeAdd(
                                                                               &LdrpLoaderLockAcquisitionCount,
                                                                               1u)
                                                                           + 1) & 0xFFFE | 1LL;
          return v5;
        }
      }
      *a2 = 1;
      goto LABEL_17;
    }
    if ( (a1 & 1) != 0 )
      RtlRaiseStatus(3221225713LL);
    return (unsigned int)-1073741583;
  }
}
