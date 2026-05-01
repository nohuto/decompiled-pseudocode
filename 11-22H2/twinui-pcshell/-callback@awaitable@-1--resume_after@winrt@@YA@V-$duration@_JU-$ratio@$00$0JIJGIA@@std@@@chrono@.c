/*
 * XREFs of ?callback@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@CAXPEAX11@Z @ 0x1801C0A90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall `winrt::resume_after'::`2'::awaitable::callback(
        PTP_CALLBACK_INSTANCE Instance,
        void (***Context)(void),
        PTP_TIMER Timer)
{
  (*Context[3])();
}
