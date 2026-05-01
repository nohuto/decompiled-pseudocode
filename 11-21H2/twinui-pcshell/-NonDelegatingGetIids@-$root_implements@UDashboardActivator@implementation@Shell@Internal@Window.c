/*
 * XREFs of ?NonDelegatingGetIids@?$root_implements@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@U13456@UIClassFactory@@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1805BD9EC
 * Callers:
 *     ?GetIids@?$produce_base@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@UIDashboardActivator@3456@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1805BD6D0 (-GetIids@-$produce_base@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@UIDashb.c)
 * Callees:
 *     __Platform_CoTaskMemAlloc @ 0x180189A6B (__Platform_CoTaskMemAlloc.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::DashboardActivator,winrt::Windows::Internal::Shell::DashboardActivator,IClassFactory>::NonDelegatingGetIids(
        __int64 a1,
        unsigned int *a2,
        _QWORD *a3)
{
  unsigned int v5; // eax
  void *v6; // rax
  unsigned int v8; // [rsp+20h] [rbp-18h] BYREF
  void *Src; // [rsp+28h] [rbp-10h]

  if ( !a1 )
    a1 = 16LL;
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 32LL))(a1, &v8);
  v5 = v8;
  if ( v8 )
  {
    *a2 = v8;
    v6 = _Platform_CoTaskMemAlloc(16LL * v5);
    *a3 = v6;
    if ( !v6 )
      return 2147942414LL;
    memmove_0(v6, Src, 16LL * v8);
  }
  else
  {
    *a2 = 0;
    *a3 = 0LL;
  }
  return 0LL;
}
