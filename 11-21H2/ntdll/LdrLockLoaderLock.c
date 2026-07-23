/*
 * XREFs of LdrLockLoaderLock @ 0x1800844D0
 * Callers:
 *     TppWorkCallbackPrologRelease @ 0x180022278 (TppWorkCallbackPrologRelease.c)
 *     TppIopExecuteCallback @ 0x180024270 (TppIopExecuteCallback.c)
 * Callees:
 *     LdrpAcquireLoaderLock @ 0x18004F230 (LdrpAcquireLoaderLock.c)
 *     LdrpGenericExceptionFilter @ 0x18008FD68 (LdrpGenericExceptionFilter.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     LdrpTryAcquireLoaderLock @ 0x1800D97B4 (LdrpTryAcquireLoaderLock.c)
 */

NTSTATUS __cdecl LdrLockLoaderLock(ULONG Flags, ULONG *Disposition, PVOID *Cookie)
{
  NTSTATUS v5; // ebx
  ULONG v7; // edi
  int v8; // eax
  int UniqueThread; // eax
  int v10; // [rsp+40h] [rbp+8h]

  v5 = 0;
  if ( Disposition )
    *Disposition = 0;
  if ( Cookie )
    *Cookie = 0LL;
  if ( (Flags & 0xFFFFFFFC) != 0 )
  {
    if ( (Flags & 1) != 0 )
      RtlRaiseStatus(-1073741585);
    return -1073741585;
  }
  else
  {
    if ( Cookie )
    {
      if ( (Flags & 2) != 0 && !Disposition )
      {
        if ( (Flags & 1) != 0 )
          RtlRaiseStatus(-1073741584);
        return -1073741584;
      }
      if ( LdrInitState != 3 )
        return v5;
      v7 = 1;
      if ( (Flags & 1) != 0 )
      {
        if ( (Flags & 2) != 0 )
        {
          if ( (unsigned __int8)LdrpTryAcquireLoaderLock() )
          {
            UniqueThread = (int)NtCurrentTeb()->ClientId.UniqueThread;
            *Cookie = (PVOID)(((unsigned __int64)(UniqueThread & 0xFFF) << 48) | (unsigned __int16)(_InterlockedExchangeAdd(&LdrpLoaderLockAcquisitionCount, 1u)
                                                                                                  + 1) & 0xFFFE | 1LL);
          }
          else
          {
            v7 = 2;
          }
          *Disposition = v7;
        }
        else
        {
          LdrpAcquireLoaderLock();
          if ( Disposition )
            *Disposition = 1;
          v8 = (int)NtCurrentTeb()->ClientId.UniqueThread;
          *Cookie = (PVOID)(((unsigned __int64)(v8 & 0xFFF) << 48) | (unsigned __int16)(_InterlockedExchangeAdd(
                                                                                          &LdrpLoaderLockAcquisitionCount,
                                                                                          1u)
                                                                                      + 1) & 0xFFFE | 1LL);
        }
        return v5;
      }
      if ( (Flags & 2) != 0 )
      {
        if ( !(unsigned __int8)LdrpTryAcquireLoaderLock() )
        {
          *Disposition = 2;
          return v5;
        }
      }
      else
      {
        LdrpAcquireLoaderLock();
        if ( !Disposition )
        {
LABEL_17:
          v10 = (int)NtCurrentTeb()->ClientId.UniqueThread;
          *Cookie = (PVOID)(((unsigned __int64)(v10 & 0xFFF) << 48) | (unsigned __int16)(_InterlockedExchangeAdd(
                                                                                           &LdrpLoaderLockAcquisitionCount,
                                                                                           1u)
                                                                                       + 1) & 0xFFFE | 1LL);
          return v5;
        }
      }
      *Disposition = 1;
      goto LABEL_17;
    }
    if ( (Flags & 1) != 0 )
      RtlRaiseStatus(-1073741583);
    return -1073741583;
  }
}
