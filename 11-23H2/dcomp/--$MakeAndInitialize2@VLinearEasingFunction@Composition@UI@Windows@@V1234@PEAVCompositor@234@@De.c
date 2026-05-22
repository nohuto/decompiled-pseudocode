/*
 * XREFs of ??$MakeAndInitialize2@VLinearEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVLinearEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x1800799C8
 * Callers:
 *     ?CreateLinearEasingFunction@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVLinearEasingFunction@234@@Z @ 0x180079978 (-CreateLinearEasingFunction@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVLinearEasingFun.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::LinearEasingFunction,Windows::UI::Composition::LinearEasingFunction,Windows::UI::Composition::Compositor *>(
        Windows::UI::Composition::CompositionObject **a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  void *v4; // rax
  Windows::UI::Composition::CompositionObject *v5; // rax
  Windows::UI::Composition::CompositionObject *v6; // rbx
  struct Windows::UI::Composition::Compositor *v7; // rdx
  int v8; // eax
  unsigned int v9; // edi
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v12; // [rsp+30h] [rbp+8h] BYREF
  Windows::UI::Composition::CompositionObject *v13; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v13 = 0LL;
  v4 = DefaultHeap::Alloc(0xA8uLL);
  v12 = v4;
  if ( v4 )
  {
    v5 = (Windows::UI::Composition::CompositionObject *)memset_0(v4, 0, 0xA8uLL);
    v6 = v5;
    if ( v5 )
    {
      Windows::UI::Composition::CompositionObject::CompositionObject(v5);
      *((_QWORD *)v6 + 16) = &Windows::UI::Composition::CompositionEasingFunction::Api::`vftable';
      *(_QWORD *)v6 = &Windows::UI::Composition::LinearEasingFunction::`vftable';
      *((_QWORD *)v6 + 19) = &Windows::UI::Composition::Scenes::SceneMaterialInput::Api::`vftable';
    }
    else
    {
      v6 = 0LL;
    }
    v12 = 0LL;
    *((_QWORD *)v6 + 1) = &Windows::UI::Composition::LinearEasingFunction::s_InterfaceType;
    v7 = *a2;
    v13 = v6;
    v8 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(v6, v7);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3C,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioneasingfunction.cpp",
        (const char *)(unsigned int)v8);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtlineareasingfunction.cpp",
        (const char *)v9);
      Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v12);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v13);
      return v9;
    }
    else
    {
      *((_DWORD *)v6 + 36) = 0;
      result = 0LL;
      *a1 = v6;
    }
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v12);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v13);
    return 2147942414LL;
  }
  return result;
}
