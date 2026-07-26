/*
 * XREFs of ?InitializeSubsystem@KnobNamespace@@SAXXZ @ 0x1C0153078
 * Callers:
 *     DriverEntry @ 0x1C0153778 (DriverEntry.c)
 * Callees:
 *     ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C0101134 (-Initialize@KPushLockManualConstruct@@QEAAXXZ.c)
 */

void KnobNamespace::InitializeSubsystem(void)
{
  qword_1C00ECDF0 = (__int64)&qword_1C00ECDE8;
  qword_1C00ECDE8 = (__int64)&qword_1C00ECDE8;
  KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&unk_1C00ECDE0);
}
