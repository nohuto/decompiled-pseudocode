/*
 * XREFs of sub_1408642EC @ 0x1408642EC
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_140A09D2C @ 0x140A09D2C (sub_140A09D2C.c)
 */

__int64 sub_1408642EC()
{
  unsigned int v0; // edi
  bool v1; // bl

  v0 = 0;
  ExAcquireFastMutex((PFAST_MUTEX)&stru_140C0E9A8.AttachedDevice);
  byte_140CE1AD4 = 1;
  v1 = stru_140C0E9A8.Queue.ListEntry.Blink != (struct _LIST_ENTRY *)&stru_140C0E9A8.Queue.Wcb.DmaWaitEntry.Blink;
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&stru_140C0E9A8.AttachedDevice);
  if ( v1 )
    return (unsigned int)sub_140A09D2C();
  return v0;
}
