/*
 * XREFs of ??1RotationWatcher@@QEAA@XZ @ 0x1800556CC
 * Callers:
 *     _RotationWatcher::Initialize_::_3_::_dynamic_atexit_destructor_for__rotationWatcherInstance__ @ 0x180070090 (_RotationWatcher--Initialize_--_3_--_dynamic_atexit_destructor_for__rotationWatcherInstance__.c)
 *     _RotationWatcher::RotationWatcher_::_1_::dtor$0 @ 0x180116FEF (_RotationWatcher--RotationWatcher_--_1_--dtor$0.c)
 * Callees:
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1801174B0 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 */

void __fastcall RotationWatcher::~RotationWatcher(
        wil::details **this,
        struct wil::details::wnf_subscription_state_base *a2)
{
  wil::details *v2; // rcx

  v2 = *this;
  if ( v2 )
    wil::details::delete_wnf_subscription_state(v2, a2);
}
