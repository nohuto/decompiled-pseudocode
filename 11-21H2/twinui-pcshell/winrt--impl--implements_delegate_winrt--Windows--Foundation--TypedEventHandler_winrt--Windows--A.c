/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable___lambda_7e117e86fbbf7389a420f5618d976754___::_implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable___lambda_7e117e86fbbf7389a420f5618d976754___ @ 0x18019BC84
 * Callers:
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::DeferralCompletedHandler__lambda_4c7cf74572be3be5d52cc677d169632e___::Release @ 0x1801A0380 (winrt--impl--implements_delegate_winrt--Windows--Foundation--DeferralCompletedHandl_ea_1801A0380.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable___lambda_7e117e86fbbf7389a420f5618d976754___::Release @ 0x1801C9EA0 (winrt--impl--implements_delegate_winrt--Windows--Foundation--TypedEventHandler_winr_ea_1801C9EA0.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800FA060 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 */

void __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable___lambda_7e117e86fbbf7389a420f5618d976754___::_implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable___lambda_7e117e86fbbf7389a420f5618d976754___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  std::_Ref_count_base *v5; // rcx

  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock, a2, a3, a4);
  v5 = *(std::_Ref_count_base **)(a1 + 16);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
}
