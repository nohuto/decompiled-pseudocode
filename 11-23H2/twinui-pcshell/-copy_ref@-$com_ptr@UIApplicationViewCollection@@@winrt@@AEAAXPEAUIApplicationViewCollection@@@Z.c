/*
 * XREFs of ?copy_ref@?$com_ptr@UIApplicationViewCollection@@@winrt@@AEAAXPEAUIApplicationViewCollection@@@Z @ 0x1801A8FD0
 * Callers:
 *     ?Initialize@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180144ED0 (-Initialize@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServi.c)
 *     ?SubscribeToServices@InteractionTracker@SnapInteraction@@QEAAJPEAUISnapComponent@@PEAUIApplicationViewCollection@@@Z @ 0x1801B5CDC (-SubscribeToServices@InteractionTracker@SnapInteraction@@QEAAJPEAUISnapComponent@@PEAUIApplicati.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::com_ptr<IApplicationViewCollection>::copy_ref(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  if ( *a1 != a2 )
  {
    if ( *a1 )
      result = winrt::com_ptr<ISnapComponent>::unconditional_release_ref(a1);
    *a1 = a2;
    if ( a2 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  }
  return result;
}
