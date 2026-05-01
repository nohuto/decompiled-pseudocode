/*
 * XREFs of ?RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x18049F070
 * Callers:
 *     ??$MakeAndInitialize@VCWinRTAppIconLoader@@V1@AEAPEAUIWinRTApplicationView@@AEBUtagSIZE@@AEBU3@AEBU3@AEAIAEAPEAUIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@YAJPEAPEAVCWinRTAppIconLoader@@AEAPEAUIWinRTApplicationView@@AEBUtagSIZE@@22AEAIAEAPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x18049E988 (--$MakeAndInitialize@VCWinRTAppIconLoader@@V1@AEAPEAUIWinRTApplicationView@@AEBUtagSIZE@@AEBU3@A.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x1800EE798 (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreation.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EEE90 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@UIAgileReference@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800FA2EC (--1-$com_ptr_t@UIAgileReference@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIAgileReference@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1803B5CB4 (-reset@-$com_ptr_t@UIAgileReference@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_33b4202f4967ef1cd2a31cded00016d1__&_ @ 0x18049EA6C (Windows--Internal--ComTaskPool--QueueTask__lambda_33b4202f4967ef1cd2a31cded00016d1__-_.c)
 *     _lambda_33b4202f4967ef1cd2a31cded00016d1_::_lambda_33b4202f4967ef1cd2a31cded00016d1_ @ 0x18049EC30 (_lambda_33b4202f4967ef1cd2a31cded00016d1_--_lambda_33b4202f4967ef1cd2a31cded00016d1_.c)
 *     _lambda_33b4202f4967ef1cd2a31cded00016d1_::__lambda_33b4202f4967ef1cd2a31cded00016d1_ @ 0x18049ECC0 (_lambda_33b4202f4967ef1cd2a31cded00016d1_--__lambda_33b4202f4967ef1cd2a31cded00016d1_.c)
 */

__int64 __fastcall CWinRTAppIconLoader::RuntimeClassInitialize(
        CWinRTAppIconLoader *this,
        struct IWinRTApplicationView *a2,
        struct tagSIZE *a3,
        struct tagSIZE *a4,
        struct tagSIZE *a5,
        int a6,
        struct IApplicationViewIconLoaderNotifications *a7)
{
  int AgileReference; // eax
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  struct IWinRTApplicationView *v15; // [rsp+40h] [rbp-40h] BYREF
  __int64 v16[7]; // [rsp+48h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  CreationThreadDispatcher *v18; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+28h] BYREF

  v18 = this;
  v15 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
  v19 = 0LL;
  wil::com_ptr_t<IAgileReference,wil::err_returncode_policy>::reset(&v19);
  AgileReference = RoGetAgileReference(1LL, &GUID_09bd08f6_5805_4a9c_b795_a08c46164aea, a7, &v19);
  v10 = AgileReference;
  if ( AgileReference >= 0 )
  {
    v18 = 0LL;
    Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((__int64 *)&v18);
    v11 = Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>(&v18);
    v10 = v11;
    if ( v11 >= 0 )
    {
      lambda_33b4202f4967ef1cd2a31cded00016d1_::_lambda_33b4202f4967ef1cd2a31cded00016d1_(
        (__int64)v16,
        &v15,
        a3,
        a4,
        a5,
        &a6,
        &v18,
        &v19);
      v13 = Windows::Internal::ComTaskPool::QueueTask__lambda_33b4202f4967ef1cd2a31cded00016d1____(v12, (__int64)v16);
      v10 = v13;
      if ( v13 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x46,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\immersiveappiconloader.cpp",
          (const char *)(unsigned int)v13);
      lambda_33b4202f4967ef1cd2a31cded00016d1_::__lambda_33b4202f4967ef1cd2a31cded00016d1_(v16);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\immersiveappiconloader.cpp",
        (const char *)(unsigned int)v11);
    }
    Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((__int64 *)&v18);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x698,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
      (const char *)(unsigned int)AgileReference);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\immersiveappiconloader.cpp",
      (const char *)v10);
  }
  wil::com_ptr_t<IAgileReference,wil::err_returncode_policy>::~com_ptr_t<IAgileReference,wil::err_returncode_policy>(&v19);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
  return v10;
}
