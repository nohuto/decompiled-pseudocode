/*
 * XREFs of ??1?$implements_delegate@U?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@winrt@@V_lambda_adefc463c2a6e43ea1280e21dd7410de_@@@impl@winrt@@QEAA@XZ @ 0x180235274
 * Callers:
 *     ?Release@?$implements_delegate@U?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@winrt@@V_lambda_adefc463c2a6e43ea1280e21dd7410de_@@@impl@winrt@@UEAAIXZ @ 0x180240E80 (-Release@-$implements_delegate@U-$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store.c)
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 */

void __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>,_lambda_adefc463c2a6e43ea1280e21dd7410de_>::~implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>,_lambda_adefc463c2a6e43ea1280e21dd7410de_>(
        __int64 a1)
{
  __int64 v2; // rdx

  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
  _lambda_adefc463c2a6e43ea1280e21dd7410de_::~_lambda_adefc463c2a6e43ea1280e21dd7410de_(
    (_lambda_adefc463c2a6e43ea1280e21dd7410de_ *)(a1 + 8),
    v2);
}
