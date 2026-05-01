/*
 * XREFs of ??1?$implements_delegate@U?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@winrt@@V_lambda_c63df5938b5e32cbd3483994e088b3e3_@@@impl@winrt@@QEAA@XZ @ 0x1802352A0
 * Callers:
 *     ?Release@?$implements_delegate@U?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@winrt@@V_lambda_c63df5938b5e32cbd3483994e088b3e3_@@@impl@winrt@@UEAAIXZ @ 0x180240ED0 (-Release@-$implements_delegate@U-$TypedEventHandler@UAppInstallItem@InstallControl@_ea_180240ED0.c)
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 */

void __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>,_lambda_c63df5938b5e32cbd3483994e088b3e3_>::~implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>,_lambda_c63df5938b5e32cbd3483994e088b3e3_>(
        __int64 a1)
{
  __int64 v2; // rdx

  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
  _lambda_c63df5938b5e32cbd3483994e088b3e3_::~_lambda_c63df5938b5e32cbd3483994e088b3e3_(
    (_lambda_c63df5938b5e32cbd3483994e088b3e3_ *)(a1 + 8),
    v2);
}
