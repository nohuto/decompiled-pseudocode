/*
 * XREFs of ??$MakeAndInitialize2@VSharedReadCaptureController@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVSharedReadCaptureController@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAPEAX@Z @ 0x180121604
 * Callers:
 *     ?OpenSharedReadCaptureControllerFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAVSharedReadCaptureController@Internal@234@@Z @ 0x1801288BC (-OpenSharedReadCaptureControllerFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0CaptureControllerBase@Internal@Composition@UI@Windows@@QEAA@XZ @ 0x180122728 (--0CaptureControllerBase@Internal@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345@_NPEAX1@Z @ 0x18018A1F0 (-RuntimeClassInitialize@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJPEAVComposit.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Internal::SharedReadCaptureController,Windows::UI::Composition::Internal::SharedReadCaptureController,Windows::UI::Composition::Compositor *,void * &>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        struct Windows::UI::Composition::Compositor **a2,
        void **a3)
{
  void *v6; // rax
  Windows::UI::Composition::Internal::CaptureControllerBase *v8; // rax
  Microsoft::WRL2::NestableRuntimeClass *v9; // rbx
  void *v10; // r9
  struct Windows::UI::Composition::Compositor *v11; // rdx
  int v12; // eax
  unsigned int v13; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v15; // [rsp+50h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v16; // [rsp+68h] [rbp+20h] BYREF

  *a1 = 0LL;
  v16 = 0LL;
  v6 = DefaultHeap::Alloc(0xD0uLL);
  v15 = v6;
  if ( v6 )
  {
    v8 = (Windows::UI::Composition::Internal::CaptureControllerBase *)memset_0(v6, 0, 0xD0uLL);
    v9 = v8;
    if ( v8 )
    {
      Windows::UI::Composition::Internal::CaptureControllerBase::CaptureControllerBase(v8);
      *(_QWORD *)v9 = &Windows::UI::Composition::Internal::SharedReadCaptureController::`vftable';
      *((_QWORD *)v9 + 24) = &Windows::UI::Composition::Internal::SharedReadCaptureController::Partner::`vftable';
    }
    else
    {
      v9 = 0LL;
    }
    v15 = 0LL;
    *((_QWORD *)v9 + 1) = &Windows::UI::Composition::Internal::SharedReadCaptureController::s_InterfaceType;
    v10 = *a3;
    v11 = *a2;
    v16 = v9;
    v12 = Windows::UI::Composition::Internal::CaptureControllerBase::RuntimeClassInitialize(v9, v11, 1, v10, 0);
    v13 = v12;
    if ( v12 >= 0 )
    {
      *a1 = v9;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtsharedreadcapturecontroller.cpp",
        (const char *)(unsigned int)v12);
      Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v15);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v16);
      return v13;
    }
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v15);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v16);
    return 2147942414LL;
  }
}
