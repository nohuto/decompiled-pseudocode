/*
 * XREFs of ?CreateTitlebarConfiguration@KioskPositioner@@AEAA?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1804EFF3C
 * Callers:
 *     ?GetChromeConfigurationForView@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1804F0350 (-GetChromeConfigurationForView@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicati.c)
 *     std::_Func_impl_no_alloc__lambda_cec8775a2fe12adc7fff08f1d1b8cc11__wil::com_ptr_t_IApplicationViewTitlebarConfiguration_wil::err_exception_policy___::_Do_call @ 0x1804F20C0 (std--_Func_impl_no_alloc__lambda_cec8775a2fe12adc7fff08f1d1b8cc11__wil--com_ptr_t_I_ea_1804F20C0.c)
 * Callees:
 *     ??$MakeAndInitializeOrThrow@VApplicationViewTitlebarConfiguration@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@XZ @ 0x1800F1E74 (--$MakeAndInitializeOrThrow@VApplicationViewTitlebarConfiguration@@$$V@wil@@YA-AV-$ComPtr@VAppli.c)
 */

_QWORD *__fastcall KioskPositioner::CreateTitlebarConfiguration(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  wil::MakeAndInitializeOrThrow<ApplicationViewTitlebarConfiguration,>(&v6);
  *((_WORD *)v6 + 24) = 1;
  v3 = v6;
  *((_DWORD *)v6 + 13) = 1;
  *((_DWORD *)v3 + 14) = 1;
  *(_QWORD *)((char *)v6 + 60) = 55LL;
  *(_QWORD *)((char *)v6 + 68) = 255LL;
  *((_DWORD *)v6 + 19) = 128;
  v4 = v6;
  *((_DWORD *)v6 + 20) = 0;
  *((_BYTE *)v4 + 84) = 1;
  *((_DWORD *)v6 + 22) = 0;
  *a2 = v6;
  return a2;
}
