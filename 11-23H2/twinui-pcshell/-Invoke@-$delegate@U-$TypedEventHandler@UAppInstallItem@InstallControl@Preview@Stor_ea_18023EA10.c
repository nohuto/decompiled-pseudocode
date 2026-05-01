/*
 * XREFs of ?Invoke@?$delegate@U?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@winrt@@V_lambda_c63df5938b5e32cbd3483994e088b3e3_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x18023EA10
 * Callers:
 *     <none>
 * Callees:
 *     ??R_lambda_c63df5938b5e32cbd3483994e088b3e3_@@QEAA@AEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@AEBUIInspectable@Foundation@67@@Z @ 0x1802375D4 (--R_lambda_c63df5938b5e32cbd3483994e088b3e3_@@QEAA@AEBUAppInstallItem@InstallControl@Preview@Sto.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>,_lambda_c63df5938b5e32cbd3483994e088b3e3_>::Invoke(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v3 = a1 + 8;
  try
  {
    _lambda_c63df5938b5e32cbd3483994e088b3e3_::operator()(v3, (__int64)&v6, a3);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v5);
  }
  return result;
}
