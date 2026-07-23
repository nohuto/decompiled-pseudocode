/*
 * XREFs of LdrUnlockLoaderLock @ 0x180050F30
 * Callers:
 *     TppWorkCallbackPrologRelease @ 0x18004EB28 (TppWorkCallbackPrologRelease.c)
 *     TppIopExecuteCallback @ 0x18004EF70 (TppIopExecuteCallback.c)
 * Callees:
 *     LdrpReleaseLoaderLock @ 0x180050FC4 (LdrpReleaseLoaderLock.c)
 *     LdrpLogError @ 0x180082B5C (LdrpLogError.c)
 *     LdrpGenericExceptionFilter @ 0x1800E19A8 (LdrpGenericExceptionFilter.c)
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
 */

NTSTATUS __cdecl LdrUnlockLoaderLock(ULONG Flags, PVOID Cookie)
{
  NTSTATUS v2; // ebx
  __int64 v4; // rcx

  if ( (Flags & 0xFFFFFFFE) != 0 )
  {
    if ( (Flags & 1) != 0 )
      RtlRaiseStatus(-1073741585);
    return -1073741585;
  }
  else
  {
    v2 = 0;
    if ( Cookie )
    {
      v4 = Flags & 1;
      if ( (unsigned __int64)Cookie >= 0x1000000000000000LL
        || ((LODWORD(NtCurrentTeb()->ClientId.UniqueThread) ^ ((unsigned __int64)Cookie >> 48)) & 0xFFF) != 0 )
      {
        if ( (_DWORD)v4 )
          RtlRaiseStatus(-1073741584);
        return -1073741584;
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
