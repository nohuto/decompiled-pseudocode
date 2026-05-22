/*
 * XREFs of ??$MakeAndInitialize2@VCaptureController@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVCaptureController@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x18011FC08
 * Callers:
 *     ?CreateCaptureController@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUICaptureControllerBase@1345@@Z @ 0x18010EAD0 (-CreateCaptureController@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUICaptureControl.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0CaptureControllerBase@Internal@Composition@UI@Windows@@QEAA@XZ @ 0x180122728 (--0CaptureControllerBase@Internal@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345@_NPEAX1@Z @ 0x18018A1F0 (-RuntimeClassInitialize@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJPEAVComposit.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Internal::CaptureController,Windows::UI::Composition::Internal::CaptureController,Windows::UI::Composition::Compositor *>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  void *v4; // rax
  Windows::UI::Composition::Internal::CaptureControllerBase *v6; // rax
  Microsoft::WRL2::NestableRuntimeClass *v7; // rbx
  struct Windows::UI::Composition::Compositor *v8; // rdx
  int v9; // eax
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v12; // [rsp+40h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+50h] [rbp+18h] BYREF

  *a1 = 0LL;
  v13 = 0LL;
  v4 = DefaultHeap::Alloc(0xD8uLL);
  v12 = v4;
  if ( v4 )
  {
    v6 = (Windows::UI::Composition::Internal::CaptureControllerBase *)memset_0(v4, 0, 0xD8uLL);
    v7 = v6;
    if ( v6 )
    {
      Windows::UI::Composition::Internal::CaptureControllerBase::CaptureControllerBase(v6);
      *(_QWORD *)v7 = &Windows::UI::Composition::Internal::CaptureController::`vftable';
      *((_QWORD *)v7 + 24) = &Windows::UI::Composition::Internal::CaptureController::Partner::`vftable'{for `Windows::UI::Composition::Internal::IWriteCaptureController'};
      *((_QWORD *)v7 + 25) = &Windows::UI::Composition::Internal::CaptureController::Partner::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::Internal::IReadCaptureController>'};
    }
    else
    {
      v7 = 0LL;
    }
    v12 = 0LL;
    *((_QWORD *)v7 + 1) = &Windows::UI::Composition::Internal::CaptureController::s_InterfaceType;
    v8 = *a2;
    v13 = v7;
    v9 = Windows::UI::Composition::Internal::CaptureControllerBase::RuntimeClassInitialize(v7, v8, 0, 0LL, 1);
    v10 = v9;
    if ( v9 >= 0 )
    {
      *a1 = v7;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x33,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcapturecontroller.cpp",
        (const char *)(unsigned int)v9);
      Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v12);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v13);
      return v10;
    }
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v12);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v13);
    return 2147942414LL;
  }
}
