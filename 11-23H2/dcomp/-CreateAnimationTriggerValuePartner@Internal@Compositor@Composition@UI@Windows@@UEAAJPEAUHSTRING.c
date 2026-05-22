/*
 * XREFs of ?CreateAnimationTriggerValuePartner@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUIAnimationObject@345@PEAUICompositionAnimationBase@345@PEAPEAUICompositionAnimationTriggerValuePartner@1345@@Z @ 0x18010E9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??$MakeAndInitialize2@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAPEAUHSTRING__@@AEAPEAUIAnimationObject@345@AEAPEAUICompositionAnimationBase@345@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAPEAUHSTRING__@@AEAPEAUIAnimationObject@567@AEAPEAUICompositionAnimationBase@567@@Z @ 0x180120130 (--$MakeAndInitialize2@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::Internal::CreateAnimationTriggerValuePartner(
        Windows::UI::Composition::Compositor::Internal *this,
        HSTRING a2,
        struct Windows::UI::Composition::IAnimationObject *a3,
        struct Windows::UI::Composition::ICompositionAnimationBase *a4,
        struct Windows::UI::Composition::Internal::ICompositionAnimationTriggerValuePartner **a5)
{
  struct Windows::UI::Composition::Internal::ICompositionAnimationTriggerValuePartner **v5; // rsi
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  unsigned int v10; // ebx
  int v11; // eax
  struct Windows::UI::Composition::IAnimationObject *v13; // [rsp+30h] [rbp-20h] BYREF
  HSTRING v14; // [rsp+38h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct Windows::UI::Composition::ICompositionAnimationBase *v17; // [rsp+70h] [rbp+20h] BYREF

  v5 = a5;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 1112);
  *a5 = 0LL;
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1112));
  if ( (v6->SpinCount & 2) != 0 )
  {
    a5 = 0LL;
    v17 = a4;
    v13 = a3;
    v14 = a2;
    v15 = v6;
    v11 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,Windows::UI::Composition::Compositor *,HSTRING__ * &,Windows::UI::Composition::IAnimationObject * &,Windows::UI::Composition::ICompositionAnimationBase * &>(
            (unsigned int)&a5,
            (unsigned int)&v15,
            (unsigned int)&v14,
            (unsigned int)&v13,
            (__int64)&v17);
    v10 = v11;
    if ( v11 >= 0 )
    {
      *v5 = (struct Windows::UI::Composition::Internal::ICompositionAnimationTriggerValuePartner *)((unsigned __int64)(a5 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)a5 >> 64));
      v10 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1583,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
        (const char *)(unsigned int)v11);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>((Microsoft::WRL2::NestableRuntimeClass **)&a5);
      DoStackCaptureDirect(v10, 0x7BCu);
    }
  }
  else
  {
    v10 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v6);
  return v10;
}
