/*
 * XREFs of ?Release@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEBGV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAAKXZ @ 0x1801AF128
 * Callers:
 *     ?Release@?$produce_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEBGV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAAIXZ @ 0x1801AF110 (-Release@-$produce_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@W_ea_1801AF110.c)
 *     ?Release@?$produce_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEBGV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@experimental@std@@UIAsyncInfo@Foundation@Windows@winrt@@X@impl@winrt@@UEAAIXZ @ 0x1806979B0 (-Release@-$produce_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@W_ea_1806979B0.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@UDesktopTaskGroupsSwitchItemController@factory_implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@IEAAIXZ @ 0x1800B1C58 (-subtract_reference@-$root_implements@UDesktopTaskGroupsSwitchItemController@factory_implementat.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,unsigned short const *,std::chrono::duration<__int64,std::ratio<1,1000>>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::Release(
        __int64 a1)
{
  unsigned int v2; // ebx

  v2 = winrt::impl::root_implements<winrt::Windows::Internal::Shell::DesktopTaskGroups::factory_implementation::DesktopTaskGroupsSwitchItemController,winrt::Windows::Foundation::IActivationFactory>::subtract_reference(a1);
  if ( !v2 )
  {
    *(_QWORD *)(a1 + 104) |= 1uLL;
    (*(void (__fastcall **)(__int64))(a1 + 96))(a1 + 96);
  }
  return v2;
}
