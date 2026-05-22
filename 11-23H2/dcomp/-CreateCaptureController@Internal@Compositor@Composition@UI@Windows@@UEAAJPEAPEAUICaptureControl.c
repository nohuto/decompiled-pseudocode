/*
 * XREFs of ?CreateCaptureController@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUICaptureControllerBase@1345@@Z @ 0x18010EAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??$ToPartner@UICaptureControllerBase@Internal@Composition@UI@Windows@@@CaptureControllerBase@Internal@Composition@UI@Windows@@SAXPEAV01234@V?$ComPtrRef@V?$ComPtr@UICaptureControllerBase@Internal@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18010E0F8 (--$ToPartner@UICaptureControllerBase@Internal@Composition@UI@Windows@@@CaptureControllerBase@Int.c)
 *     ??$MakeAndInitialize2@VCaptureController@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVCaptureController@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x18011FC08 (--$MakeAndInitialize2@VCaptureController@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::Internal::CreateCaptureController(
        Windows::UI::Composition::Compositor::Internal *this,
        struct Windows::UI::Composition::Internal::ICaptureControllerBase **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  unsigned int v4; // edi
  int v5; // eax
  struct Windows::UI::Composition::Internal::ICaptureControllerBase *v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v9; // [rsp+40h] [rbp+8h] BYREF
  struct Windows::UI::Composition::Internal::ICaptureControllerBase *v10; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 1112);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1112));
  if ( (v2->SpinCount & 2) != 0 )
  {
    v9 = 0LL;
    v11 = v2;
    v5 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Internal::CaptureController,Windows::UI::Composition::Internal::CaptureController,Windows::UI::Composition::Compositor *>(
           &v9,
           &v11);
    v4 = v5;
    if ( v5 >= 0 )
    {
      v10 = 0LL;
      Windows::UI::Composition::Internal::CaptureControllerBase::ToPartner<Windows::UI::Composition::Internal::ICaptureControllerBase>(
        v9,
        (__int64 *)&v10);
      v6 = v10;
      v10 = 0LL;
      v4 = 0;
      *a2 = v6;
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v10);
      if ( v9 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA9C,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
        (const char *)(unsigned int)v5);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v9);
      DoStackCaptureDirect(v4, 0x5A7u);
    }
  }
  else
  {
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v4;
}
