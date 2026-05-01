/*
 * XREFs of ?resume_background_callback@impl@winrt@@YAXPEAX0@Z @ 0x180182AB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall winrt::impl::resume_background_callback(
        PTP_CALLBACK_INSTANCE Instance,
        void (__fastcall **Context)(_QWORD))
{
  (*Context)(Context);
}
