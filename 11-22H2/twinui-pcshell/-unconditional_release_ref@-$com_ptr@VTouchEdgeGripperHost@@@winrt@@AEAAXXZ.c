/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ @ 0x180182FBC
 * Callers:
 *     ?DelayInitialize@TouchEdgeGestureManager@@QEAAXXZ @ 0x1800DBDF8 (-DelayInitialize@TouchEdgeGestureManager@@QEAAXXZ.c)
 *     ??1TouchEdgeGestureManager@@UEAA@XZ @ 0x180142CD8 (--1TouchEdgeGestureManager@@UEAA@XZ.c)
 *     ??1?$com_ptr@VTouchEdgeGripperHost@@@winrt@@QEAA@XZ @ 0x18064C968 (--1-$com_ptr@VTouchEdgeGripperHost@@@winrt@@QEAA@XZ.c)
 *     ?release_ref@?$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ @ 0x18064E058 (-release_ref@-$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ.c)
 *     _lambda_7c27b082a2d594abdbf5dd9e5359180a_::_lambda_invoker_cdecl_ @ 0x1806562D0 (_lambda_7c27b082a2d594abdbf5dd9e5359180a_--_lambda_invoker_cdecl_.c)
 *     _lambda_e0b0b8eaa13602b9fabc447bd0975459_::operator()_winrt::Windows::System::Threading::ThreadPoolTimer_const_&_ @ 0x180656348 (_lambda_e0b0b8eaa13602b9fabc447bd0975459_--operator()_winrt--Windows--System--Threading--ThreadP.c)
 *     ??$make@Uiterator@?$iterable_base@U?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@URegistrationData@Shell@Internal@Windows@3@Ucollection_version@23@@winrt@@PEAU?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@3@@winrt@@YA?A_P$$QEAPEAU?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@0@@Z @ 0x180702A18 (--$make@Uiterator@-$iterable_base@U-$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@.c)
 *     ??_G?$heap_implements@Uiterator@?$iterable_base@U?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@URegistrationData@Shell@Internal@Windows@3@Ucollection_version@23@@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1807057F0 (--_G-$heap_implements@Uiterator@-$iterable_base@U-$vector_impl@URegistrationData@Shell@Internal@.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@UDesktopTaskGroupsSwitchItemController@factory_implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@IEAAIXZ @ 0x1800B1C58 (-subtract_reference@-$root_implements@UDesktopTaskGroupsSwitchItemController@factory_implementat.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::com_ptr<TouchEdgeGripperHost>::unconditional_release_ref(volatile __int64 **a1)
{
  volatile __int64 *v1; // rbx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  result = winrt::impl::root_implements<winrt::Windows::Internal::Shell::DesktopTaskGroups::factory_implementation::DesktopTaskGroupsSwitchItemController,winrt::Windows::Foundation::IActivationFactory>::subtract_reference((__int64)v1);
  if ( !(_DWORD)result )
  {
    result = _InterlockedExchange64(v1 + 1, 1LL);
    if ( v1 )
      return (*(__int64 (__fastcall **)(volatile __int64 *, __int64))(*v1 + 8))(v1, 1LL);
  }
  return result;
}
