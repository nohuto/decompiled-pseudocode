/*
 * XREFs of ??$MakeAndInitialize2@VVector2KeyFrameAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVVector2KeyFrameAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18005EE60
 * Callers:
 *     ?CreateVector2KeyFrameAnimation@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIVector2KeyFrameAnimation@345@@Z @ 0x18005EDD0 (-CreateVector2KeyFrameAnimation@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIVector2KeyFr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ??0CompositionAnimation@Composition@UI@Windows@@QEAA@XZ @ 0x18005EFE4 (--0CompositionAnimation@Composition@UI@Windows@@QEAA@XZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Vector2KeyFrameAnimation,Windows::UI::Composition::Vector2KeyFrameAnimation,Windows::UI::Composition::Compositor *>(
        Windows::UI::Composition::CompositionAnimation **a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  HANDLE ProcessHeap; // rax
  void *v5; // rax
  Windows::UI::Composition::CompositionAnimation *v6; // rax
  Windows::UI::Composition::CompositionAnimation *v7; // rbx
  struct Windows::UI::Composition::Compositor *v8; // rdx
  int v9; // eax
  unsigned int v10; // edi
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v13; // [rsp+30h] [rbp+8h] BYREF
  Windows::UI::Composition::CompositionAnimation *v14; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v14 = 0LL;
  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0x200uLL);
  v13 = v5;
  if ( v5 )
  {
    v6 = (Windows::UI::Composition::CompositionAnimation *)memset_0(v5, 0, 0x200uLL);
    v7 = v6;
    if ( v6 )
    {
      Windows::UI::Composition::CompositionAnimation::CompositionAnimation(v6);
      *((_QWORD *)v7 + 61) = 0LL;
      *((_QWORD *)v7 + 43) = &Windows::UI::Composition::KeyFrameAnimation::Api::`vftable';
      *((_QWORD *)v7 + 44) = &Windows::UI::Composition::KeyFrameAnimation::Api::`vftable'{for `Windows::UI::Composition::IKeyFrameAnimation2'};
      *((_QWORD *)v7 + 45) = &Windows::UI::Composition::KeyFrameAnimation::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::IKeyFrameAnimation3>'};
      *((_QWORD *)v7 + 47) = &Windows::UI::Composition::KeyFrameAnimation::Partner::`vftable';
      *((_QWORD *)v7 + 49) = &Windows::UI::Composition::KeyFrameAnimation::Internal::`vftable'{for `Windows::UI::Composition::Internal::ICompositionAnimationTelemetryInternal'};
      *((_QWORD *)v7 + 50) = &Windows::UI::Composition::KeyFrameAnimation::Internal::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::Internal::IKeyFrameAnimationInternal>'};
      *(_QWORD *)v7 = &Windows::UI::Composition::Vector2KeyFrameAnimation::`vftable';
      *((_QWORD *)v7 + 62) = &Windows::UI::Composition::Vector2KeyFrameAnimation::Api::`vftable';
    }
    else
    {
      v7 = 0LL;
    }
    v13 = 0LL;
    *((_QWORD *)v7 + 1) = &Windows::UI::Composition::Vector2KeyFrameAnimation::s_InterfaceType;
    v8 = *a2;
    *((_QWORD *)v7 + 53) = 0LL;
    *((_QWORD *)v7 + 54) = 0LL;
    *((_DWORD *)v7 + 117) = 0;
    *((_DWORD *)v7 + 116) = 0;
    *((_DWORD *)v7 + 115) = 0;
    *((_DWORD *)v7 + 121) = 0;
    *((_QWORD *)v7 + 55) = 2500000LL;
    *((_DWORD *)v7 + 104) = 35;
    *((_DWORD *)v7 + 118) = 1065353216;
    v14 = v7;
    v9 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(v7, v8);
    v10 = v9;
    if ( v9 >= 0 )
    {
      *((_DWORD *)v7 + 74) = 1;
      result = 0LL;
      *a1 = v7;
      return result;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionanimation.cpp",
      (const char *)(unsigned int)v9);
  }
  else
  {
    v10 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v13);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v14);
  return v10;
}
