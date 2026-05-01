/*
 * XREFs of ?TryEnqueue@?$consume_Windows_System_IDispatcherQueue@UIDispatcherQueue@System@Windows@winrt@@@impl@winrt@@QEBA_NAEBUDispatcherQueueHandler@System@Windows@3@@Z @ 0x18003553C
 * Callers:
 *     ?OnControlCenterVisibilityChanged@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAJPEAUIBaseExperienceManager@Experience@345@PEAUIVisibilityChangedEventArgs@8345@@Z @ 0x1800354A0 (-OnControlCenterVisibilityChanged@InputSwitchingManager@implementation@Shell@Internal@Windows@wi.c)
 *     ?HandleWnfCallback@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXK@Z @ 0x1805E15AC (-HandleWnfCallback@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXK@Z.c)
 *     ?TryStartNextAction@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1805E2538 (-TryStartNextAction@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

char __fastcall winrt::impl::consume_Windows_System_IDispatcherQueue<winrt::Windows::System::IDispatcherQueue>::TryEnqueue(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v5 = 0;
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v2 + 56LL))(v2, *a2, &v5);
  if ( v3 < 0 )
    winrt::throw_hresult((unsigned int)v3);
  return v5;
}
