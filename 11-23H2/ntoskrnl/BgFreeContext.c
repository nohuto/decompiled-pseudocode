/*
 * XREFs of BgFreeContext @ 0x140AF1228
 * Callers:
 *     BgkResumeFinished @ 0x140A99A38 (BgkResumeFinished.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140385660 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1403856B0 (BgpFwAcquireLock.c)
 *     ResFwFreeContext @ 0x140AF1ED4 (ResFwFreeContext.c)
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
