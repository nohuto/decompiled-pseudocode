/*
 * XREFs of ?CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ @ 0x180174D70
 * Callers:
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18002B450 (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18002C12C (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x18002C730 (-OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowSta.c)
 *     ?ResetViews@CSingleViewShellExperience@@AEAAXXZ @ 0x180174504 (-ResetViews@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x180174C24 (--1CSingleViewShellExperience@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180083EB8 (--1CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0_N@Z @ 0x180083EE4 (-StartActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B9624 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18010DABC (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_Tl_ea_18010DABC.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180174EA4 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CSingleViewShellExperience::CancelWaitForWindowReadyForPresentation(HSTRING *this)
{
  const unsigned __int16 *StringRawBuffer; // rdi
  const unsigned __int16 *v3; // rbx
  int v4; // eax
  int v5; // eax
  int v6; // edx
  __int64 v7[2]; // [rsp+20h] [rbp-168h] BYREF
  __int64 v8[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  if ( this[15] )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(this[2], 0LL);
    v3 = WindowsGetStringRawBuffer(this[1], 0LL);
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)v8,
      (__int64)"CancelWaitForWindowReadyForPresentation");
    v8[0] = (__int64)&SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation::`vftable';
    SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation::StartActivity(
      (SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation *)v8,
      v3,
      StringRawBuffer,
      1);
    v7[0] = 0LL;
    v4 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
           this + 3,
           v7);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3DB,
        (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v4);
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v7[0] + 88LL))(v7[0], this[15]);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3DD,
          (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v5);
      this[15] = 0LL;
    }
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v8,
      v6);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v7);
    SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation::~CancelWaitForWindowReadyForPresentation((SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation *)v8);
  }
}
