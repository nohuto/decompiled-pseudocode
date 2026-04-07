/*
 * XREFs of ??$find@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@Uiid_finder@23@@?$interface_list@U?$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@U?$IIterable@UUserResizeVisual@Transitions@Udwm@winrt@@@2345@@impl@winrt@@SAPEAXPEBU?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@12@AEBUiid_finder@12@@Z @ 0x180100A94
 * Callers:
 *     ?find_interface@?$implements@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@U?$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@5673@U?$IIterable@UUserResizeVisual@Transitions@Udwm@winrt@@@5673@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180103EB0 (-find_interface@-$implements@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Foundation::Collections::IVectorView<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Windows::Foundation::Collections::IIterable<winrt::Udwm::Transitions::UserResizeVisual>>::find<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v7; // rax

  v3 = *a2;
  v4 = **a2
     - winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IVectorView<winrt::Udwm::Transitions::UserResizeVisual>>;
  if ( !v4 )
    v4 = v3[1] - 0x15353155B0C7238DLL;
  v5 = 0LL;
  if ( !v4 )
    return (a1 + 24) & -(__int64)(a1 != 0);
  v7 = *v3
     - winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IIterable<winrt::Udwm::Transitions::UserResizeVisual>>;
  if ( *v3 == winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IIterable<winrt::Udwm::Transitions::UserResizeVisual>> )
    v7 = v3[1] + 0x2886D6EC73D6673LL;
  if ( !v7 )
    return (a1 + 32) & -(__int64)(a1 != 0);
  return v5;
}
