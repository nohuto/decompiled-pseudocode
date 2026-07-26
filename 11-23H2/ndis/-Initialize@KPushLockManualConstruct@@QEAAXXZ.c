/*
 * XREFs of ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C010C694
 * Callers:
 *     ?ndisInitializeWatchdogSubsystem@@YAXXZ @ 0x1C01601F8 (-ndisInitializeWatchdogSubsystem@@YAXXZ.c)
 *     ?InitializeSubsystem@KnobNamespace@@SAXXZ @ 0x1C016022C (-InitializeSubsystem@KnobNamespace@@SAXXZ.c)
 *     DriverEntry @ 0x1C01608CC (DriverEntry.c)
 *     ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x1C0161848 (-ndisMpHookNmrInitializeClient@@YAJXZ.c)
 *     ?ndisPcwInitialize@@YAJXZ @ 0x1C01621B0 (-ndisPcwInitialize@@YAJXZ.c)
 *     ?ndisInitializeDmaSubsystem@@YAXXZ @ 0x1C0162AA4 (-ndisInitializeDmaSubsystem@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall KPushLockManualConstruct::Initialize(KPushLockManualConstruct *this)
{
  *(_QWORD *)this = 0LL;
}
