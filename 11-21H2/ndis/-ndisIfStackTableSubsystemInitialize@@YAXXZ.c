/*
 * XREFs of ?ndisIfStackTableSubsystemInitialize@@YAXXZ @ 0x1C011295C
 * Callers:
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x1C01535AC (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void ndisIfStackTableSubsystemInitialize(void)
{
  KeInitializeSpinLock(&qword_1C00ECDB0);
  qword_1C00ECDA8 = (__int64)&P;
  P = &P;
}
