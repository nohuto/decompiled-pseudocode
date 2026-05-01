/*
 * XREFs of ?CreateTitlebarConfiguration@KioskPositioner@@AEAA?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1805A7D4C
 * Callers:
 *     ?GetChromeConfigurationForView@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1805A8180 (-GetChromeConfigurationForView@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicati.c)
 *     std::_Func_impl_no_alloc__lambda_cec8775a2fe12adc7fff08f1d1b8cc11__wil::com_ptr_t_IApplicationViewTitlebarConfiguration_wil::err_exception_policy___::_Do_call @ 0x1805A9F50 (std--_Func_impl_no_alloc__lambda_cec8775a2fe12adc7fff08f1d1b8cc11__wil--com_ptr_t_I_ea_1805A9F50.c)
 * Callees:
 *     ??$MakeAndInitializeOrThrow@VApplicationViewTitlebarConfiguration@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@XZ @ 0x180026200 (--$MakeAndInitializeOrThrow@VApplicationViewTitlebarConfiguration@@$$V@wil@@YA-AV-$ComPtr@VAppli.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ @ 0x18004D7B0 (-InternalRelease@-$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall KioskPositioner::CreateTitlebarConfiguration(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  wil::MakeAndInitializeOrThrow<ApplicationViewTitlebarConfiguration,>(&v9);
  *((_WORD *)v9 + 24) = 1;
  v3 = (__int64)v9;
  *((_DWORD *)v9 + 13) = 1;
  *(_DWORD *)(v3 + 56) = 1;
  v4 = (__int64)v9;
  *((_DWORD *)v9 + 16) = 0;
  *(_DWORD *)(v4 + 60) = 55;
  v5 = (__int64)v9;
  *((_DWORD *)v9 + 18) = 0;
  *(_DWORD *)(v5 + 68) = 255;
  *((_DWORD *)v9 + 19) = 128;
  v6 = (__int64)v9;
  *((_DWORD *)v9 + 20) = 0;
  *(_BYTE *)(v6 + 84) = 1;
  *((_DWORD *)v9 + 22) = 0;
  v7 = (__int64)v9;
  v9 = 0LL;
  *a2 = v7;
  Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::InternalRelease((__int64 *)&v9);
  return a2;
}
