/*
 * XREFs of IsInputProcessingActivated @ 0x1C00C5730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char IsInputProcessingActivated()
{
  CInputThreadBase *v0; // rdi
  char *v1; // rbx

  v0 = gpInputThread;
  v1 = (char *)gpInputThread + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  LOBYTE(v0) = *((_DWORD *)v0 + 6) == 2;
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return (char)v0;
}
