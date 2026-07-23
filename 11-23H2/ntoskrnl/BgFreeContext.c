/*
 * XREFs of BgFreeContext @ 0x140AF1238
 * Callers:
 *     BgkResumeFinished @ 0x140A998A8 (BgkResumeFinished.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140385840 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140385890 (BgpFwAcquireLock.c)
 *     ResFwFreeContext @ 0x140AF1EE4 (ResFwFreeContext.c)
 */

char BgFreeContext()
{
  PVOID v0; // rbx
  char result; // al

  v0 = qword_140D183D0;
  result = KeGetCurrentIrql();
  if ( (unsigned __int8)result <= 2u && qword_140D183D0 )
  {
    BgpFwAcquireLock();
    if ( (dword_140C0E4B0 & 1) != 0 )
      ResFwFreeContext(v0);
    return BgpFwReleaseLock();
  }
  return result;
}
