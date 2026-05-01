/*
 * XREFs of ?TryEnqueue@?$consume_Windows_System_IDispatcherQueue@UIDispatcherQueue@System@Windows@winrt@@@impl@winrt@@QEBA@AEBUDispatcherQueueHandler@System@Windows@3@@Z @ 0x1802EB25C
 * Callers:
 *     ?TryStartNextAction@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1802EB2A4 (-TryStartNextAction@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
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
