/*
 * XREFs of LdrUnlockLoaderLock @ 0x180050F30
 * Callers:
 *     TppWorkCallbackPrologRelease @ 0x18004EB28 (TppWorkCallbackPrologRelease.c)
 *     TppIopExecuteCallback @ 0x18004EF70 (TppIopExecuteCallback.c)
 * Callees:
 *     LdrpReleaseLoaderLock @ 0x180050FC4 (LdrpReleaseLoaderLock.c)
 *     LdrpLogError @ 0x180082B5C (LdrpLogError.c)
 *     LdrpGenericExceptionFilter @ 0x1800E19A8 (LdrpGenericExceptionFilter.c)
 *     RtlRaiseStatus @ 0x1801106D0 (RtlRaiseStatus.c)
 */

__int64 __fastcall LdrUnlockLoaderLock(int a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx

  if ( (a1 & 0xFFFFFFFE) != 0 )
  {
    if ( (a1 & 1) != 0 )
      RtlRaiseStatus(3221225711LL);
    return (unsigned int)-1073741585;
  }
  else
  {
    v2 = 0;
    if ( a2 )
    {
      v4 = a1 & 1;
      if ( a2 >= 0x1000000000000000LL || ((LODWORD(NtCurrentTeb()->ClientId.UniqueThread) ^ HIWORD(a2)) & 0xFFF) != 0 )
      {
        if ( (_DWORD)v4 )
          RtlRaiseStatus(3221225712LL);
        return (unsigned int)-1073741584;
      }
      else if ( (_DWORD)v4 )
      {
        LdrpReleaseLoaderLock(v4, 13LL);
      }
      else
      {
        LdrpReleaseLoaderLock(v4, 14LL);
      }
    }
  }
  return v2;
}
