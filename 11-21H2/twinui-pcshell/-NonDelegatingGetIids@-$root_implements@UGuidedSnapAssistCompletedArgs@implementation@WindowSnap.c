/*
 * XREFs of ?NonDelegatingGetIids@?$root_implements@UGuidedSnapAssistCompletedArgs@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@U134567@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x18019F78C
 * Callers:
 *     ?GetIids@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppActivatedEventArgs2@3456@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x18019EDB0 (-GetIids@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@U.c)
 *     ?GetIids@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UIActivatedEventArgs@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x18019EDD0 (-GetIids@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@Window_ea_18019EDD0.c)
 *     ?GetIids@?$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost@3456@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x18019EDF0 (-GetIids@-$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost.c)
 *     ?GetIids@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UIActivatedEventArgsWithUser@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x18039FF40 (-GetIids@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@Window_ea_18039FF40.c)
 *     ?GetIids@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UIInitializeActivatedEventArgs@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x18039FF60 (-GetIids@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@Window_ea_18039FF60.c)
 *     ?GetIids@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UILaunchActivatedEventArgs2@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x18039FF80 (-GetIids@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@Window_ea_18039FF80.c)
 *     ?GetIids@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x18039FFA0 (-GetIids@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@Window_ea_18039FFA0.c)
 *     ?GetIids@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UIPrelaunchActivatedEventArgs@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x18039FFC0 (-GetIids@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@Window_ea_18039FFC0.c)
 * Callees:
 *     __Platform_CoTaskMemAlloc @ 0x180189A6B (__Platform_CoTaskMemAlloc.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::WindowSnapping::implementation::GuidedSnapAssistCompletedArgs,winrt::Windows::Internal::Shell::WindowSnapping::GuidedSnapAssistCompletedArgs>::NonDelegatingGetIids(
        __int64 a1,
        unsigned int *a2,
        _QWORD *a3)
{
  unsigned int v5; // eax
  void *v6; // rax
  unsigned int v8; // [rsp+20h] [rbp-18h] BYREF
  void *Src; // [rsp+28h] [rbp-10h]

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
