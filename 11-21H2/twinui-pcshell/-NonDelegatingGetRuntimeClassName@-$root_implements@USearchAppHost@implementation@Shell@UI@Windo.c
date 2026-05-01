/*
 * XREFs of ?NonDelegatingGetRuntimeClassName@?$root_implements@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@U13456@UISearchAppHost2@3456@UISearchAppHost3@3456@@impl@winrt@@IEAAHPEAPEAX@Z @ 0x18019F810
 * Callers:
 *     ?GetRuntimeClassName@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppActivatedEventArgs2@3456@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18019EE40 (-GetRuntimeClassName@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@Windows.c)
 *     ?GetRuntimeClassName@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UIActivatedEventArgs@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18019EE60 (-GetRuntimeClassName@-$produce_base@USearchAppActivatedEventArgs@implementation@She_ea_18019EE60.c)
 *     ?GetRuntimeClassName@?$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost@3456@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18019EE80 (-GetRuntimeClassName@-$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UIS.c)
 *     ?GetRuntimeClassName@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UIActivatedEventArgsWithUser@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18039FFE0 (-GetRuntimeClassName@-$produce_base@USearchAppActivatedEventArgs@implementation@She_ea_18039FFE0.c)
 *     ?GetRuntimeClassName@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UIInitializeActivatedEventArgs@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1803A0000 (-GetRuntimeClassName@-$produce_base@USearchAppActivatedEventArgs@implementation@She_ea_1803A0000.c)
 *     ?GetRuntimeClassName@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UILaunchActivatedEventArgs2@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1803A0020 (-GetRuntimeClassName@-$produce_base@USearchAppActivatedEventArgs@implementation@She_ea_1803A0020.c)
 *     ?GetRuntimeClassName@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1803A0040 (-GetRuntimeClassName@-$produce_base@USearchAppActivatedEventArgs@implementation@She_ea_1803A0040.c)
 *     ?GetRuntimeClassName@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UIPrelaunchActivatedEventArgs@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1803A0060 (-GetRuntimeClassName@-$produce_base@USearchAppActivatedEventArgs@implementation@She_ea_1803A0060.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::ISearchAppHost2,winrt::WindowsUdk::UI::Shell::ISearchAppHost3>::NonDelegatingGetRuntimeClassName(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  volatile signed __int32 *v9; // [rsp+30h] [rbp+8h] BYREF

  try
  {
    v3 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
    v4 = *v3;
    *v3 = 0LL;
    *a2 = v4;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v9, v5, v6, v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v9);
  }
  return result;
}
