/*
 * XREFs of ??$MakeAndInitialize2@VSharedWriteCaptureController@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVSharedWriteCaptureController@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x180121710
 * Callers:
 *     ?CreateSharedWriteCaptureController@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIWriteCaptureController@1345@@Z @ 0x18010F1E0 (-CreateSharedWriteCaptureController@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIWri.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0SharedWriteCaptureController@Internal@Composition@UI@Windows@@QEAA@XZ @ 0x180122C3C (--0SharedWriteCaptureController@Internal@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VSharedWriteCaptureController@Internal@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVSharedWriteCaptureController@Internal@Composition@UI@Windows@@@Z @ 0x180124ABC (-Attach@-$ComPtr@VSharedWriteCaptureController@Internal@Composition@UI@Windows@@@WRL@Microsoft@@.c)
 *     ?RuntimeClassInitialize@SharedWriteCaptureController@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345@PEAX@Z @ 0x180182880 (-RuntimeClassInitialize@SharedWriteCaptureController@Internal@Composition@UI@Windows@@QEAAJPEAVC.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Internal::SharedWriteCaptureController,Windows::UI::Composition::Internal::SharedWriteCaptureController,Windows::UI::Composition::Compositor *>(
        Windows::UI::Composition::Internal::SharedWriteCaptureController **a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  void *v4; // rax
  int v5; // edi
  Windows::UI::Composition::Internal::SharedWriteCaptureController *v6; // rax
  Windows::UI::Composition::Internal::SharedWriteCaptureController *v7; // rbx
  Windows::UI::Composition::Internal::SharedWriteCaptureController *v8; // rcx
  Windows::UI::Composition::Internal::SharedWriteCaptureController *v10; // [rsp+30h] [rbp+8h] BYREF
  void *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v10 = 0LL;
  v4 = DefaultHeap::Alloc(0xD0uLL);
  v11 = v4;
  if ( !v4 )
  {
    v5 = -2147024882;
LABEL_6:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v11);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v10);
    return (unsigned int)v5;
  }
  v6 = (Windows::UI::Composition::Internal::SharedWriteCaptureController *)memset_0(v4, 0, 0xD0uLL);
  if ( v6 )
    v6 = (Windows::UI::Composition::Internal::SharedWriteCaptureController *)Windows::UI::Composition::Internal::SharedWriteCaptureController::SharedWriteCaptureController(v6);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::Internal::SharedWriteCaptureController>::Attach(&v10, v6);
  v7 = v10;
  v11 = 0LL;
  v8 = v10;
  *((_QWORD *)v10 + 1) = &Windows::UI::Composition::Internal::SharedWriteCaptureController::s_InterfaceType;
  v5 = Windows::UI::Composition::Internal::SharedWriteCaptureController::RuntimeClassInitialize(v8, *a2, 0LL);
  if ( v5 < 0 )
    goto LABEL_6;
  *a1 = v7;
  return 0LL;
}
