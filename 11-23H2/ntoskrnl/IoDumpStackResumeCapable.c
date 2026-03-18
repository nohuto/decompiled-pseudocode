/*
 * XREFs of IoDumpStackResumeCapable @ 0x14054FB98
 * Callers:
 *     PopSaveHiberContext @ 0x140AA4980 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 IoDumpStackResumeCapable()
{
  __int64 result; // rax

  result = 0LL;
  if ( CrashdmpImageEntry )
  {
    if ( qword_140C6AC88 )
      return ((__int64 (*)(void))qword_140C6AC88)();
  }
  return result;
}
