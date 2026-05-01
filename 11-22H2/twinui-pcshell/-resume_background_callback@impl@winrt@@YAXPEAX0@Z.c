/*
 * XREFs of ?resume_background_callback@impl@winrt@@YAXPEAX0@Z @ 0x1801BFA40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall winrt::impl::resume_background_callback(
        PTP_CALLBACK_INSTANCE Instance,
        void (__fastcall **Context)(_QWORD))
{
  (*Context)(Context);
}
