/*
 * XREFs of ?InitializeSubsystem@KnobNamespace@@SAXXZ @ 0x1C016022C
 * Callers:
 *     DriverEntry @ 0x1C01608CC (DriverEntry.c)
 * Callees:
 *     ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C010C694 (-Initialize@KPushLockManualConstruct@@QEAAXXZ.c)
 */

void KnobNamespace::InitializeSubsystem(void)
{
  qword_1C00F5DD8 = (__int64)&qword_1C00F5DD0;
  qword_1C00F5DD0 = (__int64)&qword_1C00F5DD0;
  KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&unk_1C00F5DC8);
}
