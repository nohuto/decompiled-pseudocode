/*
 * XREFs of ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C0101134
 * Callers:
 *     ?InitializeSubsystem@KnobNamespace@@SAXXZ @ 0x1C0153078 (-InitializeSubsystem@KnobNamespace@@SAXXZ.c)
 *     ?ndisInitializeWatchdogSubsystem@@YAXXZ @ 0x1C01530AC (-ndisInitializeWatchdogSubsystem@@YAXXZ.c)
 *     DriverEntry @ 0x1C0153778 (DriverEntry.c)
 *     ?ndisPcwInitialize@@YAJXZ @ 0x1C015645C (-ndisPcwInitialize@@YAJXZ.c)
 *     ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x1C01565C4 (-ndisMpHookNmrInitializeClient@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall KPushLockManualConstruct::Initialize(KPushLockManualConstruct *this)
{
  *(_QWORD *)this = 0LL;
}
