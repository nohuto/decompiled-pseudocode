/*
 * XREFs of ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x180125520
 * Callers:
 *     ??1RotationWatcher@@QEAA@XZ @ 0x18005645C (--1RotationWatcher@@QEAA@XZ.c)
 *     ??0RotationWatcher@@AEAA@XZ @ 0x180124EF8 (--0RotationWatcher@@AEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::delete_wnf_subscription_state(
        wil::details *this,
        struct wil::details::wnf_subscription_state_base *a2)
{
  if ( this )
    (**(void (__fastcall ***)(wil::details *, __int64))this)(this, 1LL);
}
