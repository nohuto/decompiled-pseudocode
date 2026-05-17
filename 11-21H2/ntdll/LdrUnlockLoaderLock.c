/*
 * XREFs of LdrUnlockLoaderLock @ 0x180085240
 * Callers:
 *     TppWorkCallbackPrologRelease @ 0x180022278 (TppWorkCallbackPrologRelease.c)
 *     TppIopExecuteCallback @ 0x180024270 (TppIopExecuteCallback.c)
 * Callees:
 *     LdrpReleaseLoaderLock @ 0x18004F1D0 (LdrpReleaseLoaderLock.c)
 *     LdrpLogError @ 0x180053F2C (LdrpLogError.c)
 *     LdrpGenericExceptionFilter @ 0x18008FD68 (LdrpGenericExceptionFilter.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 */

__int64 __fastcall LdrUnlockLoaderLock(int a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx

  if ( (a1 & 0xFFFFFFFE) != 0 )
  {
    if ( (a1 & 1) != 0 )
    {
      RtlRaiseStatus(3221225711LL);
      __debugbreak();
    }
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
        {
          RtlRaiseStatus(3221225712LL);
          JUMPOUT(0x1800D1D2DLL);
        }
        return (unsigned int)-1073741584;
      }
      else if ( (_DWORD)v4 )
      {
        LdrpReleaseLoaderLock(v4, 13, 0);
      }
      else
      {
        LdrpReleaseLoaderLock(v4, 14, 0);
      }
    }
  }
  return v2;
}
