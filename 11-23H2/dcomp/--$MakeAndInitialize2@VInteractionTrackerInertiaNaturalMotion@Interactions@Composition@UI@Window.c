/*
 * XREFs of ??$MakeAndInitialize2@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x18013E04C
 * Callers:
 *     ?Create@InteractionTrackerInertiaNaturalMotionStatics@Interactions@Composition@UI@Windows@@UEAAJPEAUICompositor@345@PEAPEAUIInteractionTrackerInertiaNaturalMotion@2345@@Z @ 0x18013E1D0 (-Create@InteractionTrackerInertiaNaturalMotionStatics@Interactions@Composition@UI@Windows@@UEAAJ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0InteractionTrackerInertiaModifier@Interactions@Composition@UI@Windows@@QEAA@XZ @ 0x18013D540 (--0InteractionTrackerInertiaModifier@Interactions@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@InteractionTrackerInertiaModifier@Interactions@Composition@UI@Windows@@QEAAJPEAVCompositor@345@W4InertiaModifierType@@@Z @ 0x18019048C (-RuntimeClassInitialize@InteractionTrackerInertiaModifier@Interactions@Composition@UI@Windows@@Q.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion,Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion,Windows::UI::Composition::Compositor *>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        __int64 *a2)
{
  void *v4; // rax
  Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier *v6; // rax
  Microsoft::WRL2::NestableRuntimeClass *v7; // rbx
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v12; // [rsp+30h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v13 = 0LL;
  v4 = DefaultHeap::Alloc(0xC0uLL);
  v12 = v4;
  if ( v4 )
  {
    v6 = (Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier *)memset_0(v4, 0, 0xC0uLL);
    v7 = v6;
    if ( v6 )
    {
      Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier::InteractionTrackerInertiaModifier(v6);
      *(_QWORD *)v7 = &Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion::`vftable';
      *((_QWORD *)v7 + 23) = 0LL;
      *((_QWORD *)v7 + 21) = &Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion::Api::`vftable';
    }
    else
    {
      v7 = 0LL;
    }
    v12 = 0LL;
    *((_QWORD *)v7 + 1) = &Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion::s_InterfaceType;
    v8 = *a2;
    v13 = v7;
    v9 = Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier::RuntimeClassInitialize(v7, v8, 3LL);
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
        (void *)0x1C,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontrackerinertianaturalmotion.cpp",
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
