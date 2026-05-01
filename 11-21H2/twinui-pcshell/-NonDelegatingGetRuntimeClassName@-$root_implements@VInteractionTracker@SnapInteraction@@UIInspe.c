/*
 * XREFs of ?NonDelegatingGetRuntimeClassName@?$root_implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@impl@winrt@@IEAAHPEAPEAX@Z @ 0x1805942C0
 * Callers:
 *     ?GetRuntimeClassName@?$produce_base@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180593DC0 (-GetRuntimeClassName@-$produce_base@VInteractionTracker@SnapInteraction@@UIInspectable@Foundatio.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?get@?$runtime_class_name@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x1805982E4 (-get@-$runtime_class_name@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@SA-AUhstring@3@X.c)
 */

__int64 __fastcall winrt::impl::root_implements<SnapInteraction::InteractionTracker,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IWindowSnappingEvents>::NonDelegatingGetRuntimeClassName(
        volatile signed __int32 *a1,
        volatile signed __int32 **a2)
{
  volatile signed __int32 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 result; // rax
  volatile signed __int32 *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  try
  {
    winrt::impl::runtime_class_name<winrt::Windows::Foundation::IInspectable,void>::get(&v8);
    v3 = v8;
    v8 = 0LL;
    *a2 = v3;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v8, v4, v5, v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v8);
  }
  return result;
}
