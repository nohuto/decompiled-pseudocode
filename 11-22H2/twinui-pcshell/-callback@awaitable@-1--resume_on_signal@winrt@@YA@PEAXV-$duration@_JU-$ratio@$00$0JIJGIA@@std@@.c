/*
 * XREFs of ?callback@awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@CAX000I@Z @ 0x1801C2790
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall `winrt::resume_on_signal'::`2'::awaitable::callback(
        PTP_CALLBACK_INSTANCE Instance,
        void (***Context)(void),
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  *((_DWORD *)Context + 8) = WaitResult;
  (*Context[5])();
}
