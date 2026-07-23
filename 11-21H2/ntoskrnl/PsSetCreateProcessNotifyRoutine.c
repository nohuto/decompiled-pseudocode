/*
 * XREFs of PsSetCreateProcessNotifyRoutine @ 0x140832620
 * Callers:
 *     sub_14061A750 @ 0x14061A750 (sub_14061A750.c)
 *     sub_140A82328 @ 0x140A82328 (sub_140A82328.c)
 *     sub_140A96A04 @ 0x140A96A04 (sub_140A96A04.c)
 *     sub_140A96CA8 @ 0x140A96CA8 (sub_140A96CA8.c)
 * Callees:
 *     sub_140832928 @ 0x140832928 (sub_140832928.c)
 */

NTSTATUS __stdcall PsSetCreateProcessNotifyRoutine(PCREATE_PROCESS_NOTIFY_ROUTINE NotifyRoutine, BOOLEAN Remove)
{
  return sub_140832928(NotifyRoutine, Remove != 0);
}
