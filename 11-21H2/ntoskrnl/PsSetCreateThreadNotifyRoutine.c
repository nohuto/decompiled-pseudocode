/*
 * XREFs of PsSetCreateThreadNotifyRoutine @ 0x1408325E0
 * Callers:
 *     sub_14061A880 @ 0x14061A880 (sub_14061A880.c)
 * Callees:
 *     sub_140832884 @ 0x140832884 (sub_140832884.c)
 */

NTSTATUS __stdcall PsSetCreateThreadNotifyRoutine(PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine)
{
  return sub_140832884(NotifyRoutine, 0LL);
}
