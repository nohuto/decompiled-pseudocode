/*
 * XREFs of IoDumpStackResumeCapable @ 0x140550258
 * Callers:
 *     PopSaveHiberContext @ 0x140AA47F0 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
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
