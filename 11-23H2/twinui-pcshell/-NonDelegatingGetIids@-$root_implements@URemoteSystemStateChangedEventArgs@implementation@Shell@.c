/*
 * XREFs of ?NonDelegatingGetIids@?$root_implements@URemoteSystemStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x18022AFC0
 * Callers:
 *     ?GetIids@?$produce_base@U?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@U?$IVector@URegistrationData@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x18022A4D0 (-GetIids@-$produce_base@U-$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V-$vector.c)
 *     ?GetIids@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UIActivatedEventArgs@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x18023C260 (-GetIids@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@U.c)
 *     ?GetIids@?$produce_base@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x18023C280 (-GetIids@-$produce_base@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeTelem.c)
 *     ?GetIids@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UIInitializeActivatedEventArgs@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x180467D20 (-GetIids@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@Window_ea_180467D20.c)
 *     ?GetIids@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UIActivatedEventArgsWithUser@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x18047F2D0 (-GetIids@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@Window_ea_18047F2D0.c)
 *     ?GetIids@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UILaunchActivatedEventArgs2@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x18047F2F0 (-GetIids@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@Window_ea_18047F2F0.c)
 *     ?GetIids@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x18047F310 (-GetIids@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@Window_ea_18047F310.c)
 *     ?GetIids@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UIPrelaunchActivatedEventArgs@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x18047F330 (-GetIids@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@Window_ea_18047F330.c)
 * Callees:
 *     __Platform_CoTaskMemAlloc @ 0x1801C7A89 (__Platform_CoTaskMemAlloc.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs,winrt::Windows::Internal::Shell::RemoteSystemStateChangedEventArgs>::NonDelegatingGetIids(
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
