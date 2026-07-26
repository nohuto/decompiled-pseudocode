/*
 * XREFs of ?WaitForAllHookedDriversToDeregister@MINIPORT_HOOK_DRIVER@@AEAAXXZ @ 0x1C013DD68
 * Callers:
 *     ?Deregister@MINIPORT_HOOK_DRIVER@@QEAAPEAXXZ @ 0x1C013DBB8 (-Deregister@MINIPORT_HOOK_DRIVER@@QEAAPEAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall MINIPORT_HOOK_DRIVER::WaitForAllHookedDriversToDeregister(struct _EX_RUNDOWN_REF *this)
{
  ExWaitForRundownProtectionRelease(this + 1);
}
