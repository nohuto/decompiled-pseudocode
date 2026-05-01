/*
 * XREFs of ?DispatcherQueue@?$consume_Windows_System_IDispatcherQueueController@UIDispatcherQueueController@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800AF608
 * Callers:
 *     ??0WindowsTracker@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800AF4D8 (--0WindowsTracker@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?TryStartNextAction@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1802EB2A4 (-TryStartNextAction@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_System_IDispatcherQueueController<winrt::Windows::System::IDispatcherQueueController>::DispatcherQueue(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  int v4; // eax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  *a2 = v6;
  return a2;
}
