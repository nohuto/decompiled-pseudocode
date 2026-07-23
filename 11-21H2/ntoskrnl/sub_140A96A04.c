/*
 * XREFs of sub_140A96A04 @ 0x140A96A04
 * Callers:
 *     sub_140B27E30 @ 0x140B27E30 (sub_140B27E30.c)
 * Callees:
 *     PsSetCreateProcessNotifyRoutine @ 0x140832620 (PsSetCreateProcessNotifyRoutine.c)
 */

NTSTATUS sub_140A96A04()
{
  NTSTATUS result; // eax

  result = PsSetCreateProcessNotifyRoutine((PCREATE_PROCESS_NOTIFY_ROUTINE)sub_14045F6A0, 0);
  dword_140D575F8 = 1;
  return result;
}
