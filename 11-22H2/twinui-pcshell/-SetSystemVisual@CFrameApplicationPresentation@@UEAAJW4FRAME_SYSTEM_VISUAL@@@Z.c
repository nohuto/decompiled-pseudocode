/*
 * XREFs of ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x180023D80
 * Callers:
 *     <none>
 * Callees:
 *     ?StartActivity@SetSystemVisual@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@W4FRAME_SYSTEM_VISUAL@@PEBG@Z @ 0x1800213CC (-StartActivity@SetSystemVisual@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@W4FRAME_SYSTEM_VIS.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180023A54 (--0-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0Is.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_31520e38682400c193ecfa4924368fd9___ @ 0x180023CB0 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_31520e38682400c193ecfa4924368fd9___.c)
 *     ??1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ @ 0x180023F24 (--1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180024060 (--0-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflecto_ea_180024060.c)
 *     ??0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z @ 0x1800244F8 (--0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z.c)
 *     ??1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ @ 0x1800245A4 (--1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ.c)
 *     ??1SplashScreenSuppressed@CFramePresentationTelemetry@@QEAA@XZ @ 0x18002A47C (--1SplashScreenSuppressed@CFramePresentationTelemetry@@QEAA@XZ.c)
 *     ?TransferToCurrentThread@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAA?AV12@XZ @ 0x18002AC7C (-TransferToCurrentThread@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAA-AV12@XZ.c)
 *     ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x18002ACB8 (-ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppress.c)
 *     ?Stop@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXK@Z @ 0x18002AF14 (-Stop@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXK@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_Ld @ 0x1803AA2E4 (WPP_SF_Ld.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CFrameApplicationPresentation::SetSystemVisual(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdi
  __int64 *v5; // rbx
  __int64 v6; // rcx
  _BYTE *v7; // rbx
  bool v8; // r15
  char v9; // r12
  CFramePresentationTelemetry::SplashScreenSuppressed *v11; // rax
  _BYTE v12[16]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v13; // [rsp+40h] [rbp-C0h] BYREF
  bool v14; // [rsp+44h] [rbp-BCh]
  char v15; // [rsp+45h] [rbp-BBh]
  __int64 v16; // [rsp+48h] [rbp-B8h]
  void **v17; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v18[40]; // [rsp+190h] [rbp+90h] BYREF

  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_Ld(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      15LL,
      &WPP_2c90db7e24993e53cb0c5ea1cdf0809e_Traceguids,
      a2,
      *(_DWORD *)(a1 + 48));
  v4 = *(_QWORD *)(a1 + 608);
  v5 = *(__int64 **)(a1 + 112);
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v18,
    (__int64)"SetSystemVisual");
  v18[0] = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
  CFramePresentationTelemetry::SetSystemVisual::StartActivity((__int64)v18, *(_DWORD *)(a1 + 48), *v5, a2, v4);
  v6 = **(_QWORD **)(a1 + 104);
  if ( v6 )
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v6 + 208LL))(v6, *(_QWORD *)(a1 + 128), 3LL);
  if ( *(_DWORD *)(a1 + 228) != 1 || a2 == 1 )
  {
    v7 = (_BYTE *)(a1 + 52);
    v8 = 0;
LABEL_6:
    v9 = 0;
    goto LABEL_7;
  }
  v7 = (_BYTE *)(a1 + 52);
  v8 = *(_BYTE *)(a1 + 52) != 0;
  if ( *(_DWORD *)(a1 + 560) != 1 )
    goto LABEL_6;
  v9 = 1;
LABEL_7:
  CFrameApplicationPresentation::PresentedWindowChangeHandler::PresentedWindowChangeHandler(
    (CFrameApplicationPresentation::PresentedWindowChangeHandler *)v12,
    (struct CFrameApplicationPresentation *)a1);
  if ( a2 != *(_DWORD *)(a1 + 224) )
  {
    *(_BYTE *)(a1 + 552) = 0;
    if ( *(_DWORD *)(a1 + 228) == 1 )
    {
      v11 = (CFramePresentationTelemetry::SplashScreenSuppressed *)CFramePresentationTelemetry::SplashScreenSuppressed::TransferToCurrentThread(
                                                                     a1 + 232,
                                                                     &v13);
      CFramePresentationTelemetry::SplashScreenSuppressed::Stop(v11, 1u);
      CFramePresentationTelemetry::SplashScreenSuppressed::~SplashScreenSuppressed((CFramePresentationTelemetry::SplashScreenSuppressed *)&v13);
    }
    *(_DWORD *)(a1 + 228) = 0;
  }
  *(_DWORD *)(a1 + 224) = a2;
  CFrameApplicationPresentation::PresentedWindowChangeHandler::~PresentedWindowChangeHandler((CFrameApplicationPresentation::PresentedWindowChangeHandler *)v12);
  if ( a2 == 1 && *v7 && *(_DWORD *)(a1 + 228) != 1 )
    CFrameApplicationPresentation::FrameSystemVisual::ShowSplashScreen(a1 + 224, 0LL);
  v13 = a2;
  v14 = v8;
  v15 = v9;
  v16 = a1;
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    &v17,
    v18);
  v17 = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
  CFrameApplicationPresentation::_AddTaskToQueue__lambda_31520e38682400c193ecfa4924368fd9___(
    (unsigned int *)a1,
    (int *)&v13);
  CFramePresentationTelemetry::SetSystemVisual::~SetSystemVisual((CFramePresentationTelemetry::SetSystemVisual *)v18);
  return 0LL;
}
