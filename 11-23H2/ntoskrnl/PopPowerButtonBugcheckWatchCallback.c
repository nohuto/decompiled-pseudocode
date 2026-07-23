/*
 * XREFs of PopPowerButtonBugcheckWatchCallback @ 0x140996D60
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerButtonBugcheckConfigure @ 0x14085AA68 (PopPowerButtonBugcheckConfigure.c)
 */

NTSTATUS __fastcall PopPowerButtonBugcheckWatchCallback(void *a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  return PopPowerButtonBugcheckConfigure(a1, 1, &v2);
}
