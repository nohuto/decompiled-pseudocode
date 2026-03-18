/*
 * XREFs of FsRtlpOplockWaitCompleteRoutine @ 0x14093E690
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 */

LONG __fastcall FsRtlpOplockWaitCompleteRoutine(struct _KEVENT *a1)
{
  return KeSetEvent(a1, 0, 0);
}
