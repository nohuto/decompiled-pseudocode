/*
 * XREFs of ?SetCallback@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIInputSwitchExperienceManagerCallback@@@Z @ 0x1805E2190
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::SetCallback(
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *this,
        struct IInputSwitchExperienceManagerCallback *a2)
{
  _QWORD *v3; // rdi

  v3 = (_QWORD *)((char *)this + 200);
  if ( *((struct IInputSwitchExperienceManagerCallback **)this + 25) != a2 )
  {
    if ( *v3 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 25);
    *v3 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IInputSwitchExperienceManagerCallback *))(*(_QWORD *)a2 + 8LL))(a2);
  }
  return 0LL;
}
