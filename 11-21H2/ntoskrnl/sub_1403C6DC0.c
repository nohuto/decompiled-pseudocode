/*
 * XREFs of sub_1403C6DC0 @ 0x1403C6DC0
 * Callers:
 *     <none>
 * Callees:
 *     KeAttachProcess @ 0x140252530 (KeAttachProcess.c)
 *     sub_1402A8980 @ 0x1402A8980 (sub_1402A8980.c)
 *     sub_1402B3140 @ 0x1402B3140 (sub_1402B3140.c)
 */

void __noreturn sub_1403C6DC0()
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _KPRCB *CurrentPrcb; // rbx

  CurrentThread = KeGetCurrentThread();
  CurrentPrcb = KeGetCurrentPrcb();
  KeAttachProcess(PsInitialSystemProcess);
  while ( 1 )
  {
    _disable();
    _InterlockedAnd16((volatile signed __int16 *)CurrentPrcb + 6622, 0xFF7Fu);
    sub_1402A8980((__int64)CurrentPrcb);
    *((_DWORD *)CurrentPrcb + 59) &= ~0x1000u;
    _enable();
    *((_BYTE *)CurrentThread + 390) = 2;
    sub_1402B3140((__int64)CurrentThread, (__int64)CurrentPrcb, 0LL);
  }
}
