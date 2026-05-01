/*
 * XREFs of ?DispatcherQueue@?$consume_Windows_System_IDispatcherQueueController@UIDispatcherQueueController@System@Windows@winrt@@@impl@winrt@@QEBA?AU0System@Windows@3@XZ @ 0x180035584
 * Callers:
 *     ?OnControlCenterVisibilityChanged@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAJPEAUIBaseExperienceManager@Experience@345@PEAUIVisibilityChangedEventArgs@8345@@Z @ 0x1800354A0 (-OnControlCenterVisibilityChanged@InputSwitchingManager@implementation@Shell@Internal@Windows@wi.c)
 *     ?HandleWnfCallback@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXK@Z @ 0x1805E15AC (-HandleWnfCallback@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXK@Z.c)
 *     ?TryStartNextAction@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1805E2538 (-TryStartNextAction@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_System_IDispatcherQueueController<winrt::Windows::System::IDispatcherQueueController>::DispatcherQueue(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  int v4; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  *a2 = v6;
  return a2;
}
