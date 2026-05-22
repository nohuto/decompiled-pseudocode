/*
 * XREFs of ?ActivateInstance@SceneLightingEffectFactory@Effects@Composition@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z @ 0x18000DE50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0NestableRuntimeClass@WRL2@Microsoft@@QEAA@XZ @ 0x180040E8C (--0NestableRuntimeClass@WRL2@Microsoft@@QEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::Effects::SceneLightingEffectFactory::ActivateInstance(
        Windows::UI::Composition::Effects::SceneLightingEffectFactory *this,
        struct IInspectable **a2)
{
  void *v3; // rax
  Microsoft::WRL2::NestableRuntimeClass *v4; // rax
  Microsoft::WRL2::NestableRuntimeClass *v5; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  v9 = 0LL;
  v3 = DefaultHeap::Alloc(0x70uLL);
  v8 = v3;
  if ( v3 )
  {
    v4 = (Microsoft::WRL2::NestableRuntimeClass *)memset_0(v3, 0, 0x70uLL);
    v5 = v4;
    if ( v4 )
    {
      Microsoft::WRL2::NestableRuntimeClass::NestableRuntimeClass(v4);
      *(_QWORD *)v5 = &Windows::UI::Composition::Effects::SceneLightingEffect::`vftable';
      *((_QWORD *)v5 + 12) = 0LL;
      *((_QWORD *)v5 + 13) = 0LL;
      *((_QWORD *)v5 + 3) = &Windows::UI::Composition::Effects::SceneLightingEffect::Api::`vftable';
      *((_QWORD *)v5 + 4) = &Windows::UI::Composition::Effects::SceneLightingEffect::Api::`vftable'{for `Windows::Graphics::Effects::IGraphicsEffect'};
      *((_QWORD *)v5 + 5) = &Windows::UI::Composition::Effects::WhiteNoiseEffect::Api::`vftable'{for `Windows::Graphics::Effects::IGraphicsEffectSource'};
      *((_QWORD *)v5 + 6) = &Windows::UI::Composition::Effects::SceneLightingEffect::Api::`vftable'{for `Windows::Graphics::Effects::IGraphicsEffectD2D1Interop'};
      *((_QWORD *)v5 + 7) = &Windows::UI::Composition::Effects::SceneLightingEffect::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::Effects::ISceneLightingEffect2>'};
    }
    else
    {
      v5 = 0LL;
    }
    *((_QWORD *)v5 + 1) = &Windows::UI::Composition::Effects::SceneLightingEffect::s_InterfaceType;
    *((_DWORD *)v5 + 22) = 0;
    *((_DWORD *)v5 + 18) = 1065353216;
    *((_DWORD *)v5 + 19) = 1065353216;
    *((_DWORD *)v5 + 21) = 1065353216;
    *((_DWORD *)v5 + 20) = 1098907648;
    *a2 = (struct IInspectable *)(((unsigned __int64)v5 + 24) & -(__int64)(v5 != 0LL));
    return 0LL;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v8);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v9);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F7,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtscenelightingeffect.cpp",
      (const char *)0x8007000ELL);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v10);
    return 2147942414LL;
  }
}
