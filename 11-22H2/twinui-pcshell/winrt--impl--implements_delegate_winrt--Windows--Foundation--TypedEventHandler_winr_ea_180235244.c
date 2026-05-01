/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable___lambda_8f44ff5c8977fc530aba29e054e0c967___::_implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable___lambda_8f44ff5c8977fc530aba29e054e0c967___ @ 0x180235244
 * Callers:
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable___lambda_8f44ff5c8977fc530aba29e054e0c967___::Release @ 0x180240E30 (winrt--impl--implements_delegate_winrt--Windows--Foundation--TypedEventHandler_winr_ea_180240E30.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 */

void __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable___lambda_8f44ff5c8977fc530aba29e054e0c967___::_implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable___lambda_8f44ff5c8977fc530aba29e054e0c967___(
        __int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
  v2 = *(std::_Ref_count_base **)(a1 + 16);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}
