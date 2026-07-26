/*
 * XREFs of ?ndisIfExternalProvidedInterfaceSubsystemInitialize@@YAXXZ @ 0x1C0112994
 * Callers:
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x1C01535AC (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void ndisIfExternalProvidedInterfaceSubsystemInitialize(void)
{
  KeInitializeSpinLock(&qword_1C00EE1B0);
  qword_1C00EE1A8 = (__int64)&qword_1C00EE1A0;
  qword_1C00EE1A0 = (__int64)&qword_1C00EE1A0;
}
