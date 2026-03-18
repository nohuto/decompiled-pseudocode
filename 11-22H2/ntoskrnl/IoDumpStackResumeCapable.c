/*
 * XREFs of IoDumpStackResumeCapable @ 0x14054FC38
 * Callers:
 *     PopSaveHiberContext @ 0x140AA4A40 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 IoDumpStackResumeCapable()
{
  __int64 result; // rax

  result = 0LL;
  if ( CrashdmpImageEntry )
  {
    if ( qword_140C6AD68 )
      return ((__int64 (*)(void))qword_140C6AD68)();
  }
  return result;
}
