/*
 * XREFs of ??$MakeAndInitialize2@VCompositionLinearGradientBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionLinearGradientBrush@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18005DE5C
 * Callers:
 *     ?CreateLinearGradientBrush@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionLinearGradientBrush@345@@Z @ 0x18005E100 (-CreateLinearGradientBrush@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIComposition.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CompositionGradientBrush@Composition@UI@Windows@@IEAA@XZ @ 0x18005DDC4 (--0CompositionGradientBrush@Composition@UI@Windows@@IEAA@XZ.c)
 *     ?RuntimeClassInitialize@CompositionGradientBrush@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I@Z @ 0x18005DF4C (-RuntimeClassInitialize@CompositionGradientBrush@Composition@UI@Windows@@QEAAJPEAVCompositor@234.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionLinearGradientBrush,Windows::UI::Composition::CompositionLinearGradientBrush,Windows::UI::Composition::Compositor *>(
        Windows::UI::Composition::CompositionGradientBrush **a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  void *v4; // rax
  Windows::UI::Composition::CompositionGradientBrush *v5; // rax
  Windows::UI::Composition::CompositionGradientBrush *v6; // rbx
  struct Windows::UI::Composition::Compositor *v7; // rdx
  int v8; // eax
  unsigned int v9; // edi
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v12; // [rsp+30h] [rbp+8h] BYREF
  Windows::UI::Composition::CompositionGradientBrush *v13; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v13 = 0LL;
  v4 = DefaultHeap::Alloc(0x110uLL);
  v12 = v4;
  if ( v4 )
  {
    v5 = (Windows::UI::Composition::CompositionGradientBrush *)memset_0(v4, 0, 0x110uLL);
    v6 = v5;
    if ( v5 )
    {
      Windows::UI::Composition::CompositionGradientBrush::CompositionGradientBrush(v5);
      *(_QWORD *)v6 = &Windows::UI::Composition::CompositionLinearGradientBrush::`vftable'{for `Windows::UI::Composition::CompositionGradientBrushT<Windows::UI::Composition::CompositionGradientBrush,Windows::UI::Composition::CompositionBrush>'};
      *((_QWORD *)v6 + 22) = &Windows::UI::Composition::CompositionLinearGradientBrush::`vftable'{for `DirectComposition::CRebuildableObject'};
      *((_QWORD *)v6 + 30) = &Windows::UI::Composition::CompositionLinearGradientBrush::Api::`vftable';
    }
    else
    {
      v6 = 0LL;
    }
    v12 = 0LL;
    *((_QWORD *)v6 + 1) = &Windows::UI::Composition::CompositionLinearGradientBrush::s_InterfaceType;
    v7 = *a2;
    v13 = v6;
    v8 = Windows::UI::Composition::CompositionGradientBrush::RuntimeClassInitialize(v6, v7, 0x63u);
    v9 = v8;
    if ( v8 >= 0 )
    {
      *((_DWORD *)v6 + 64) = 0;
      *((_DWORD *)v6 + 65) = 0;
      *((_DWORD *)v6 + 67) = 0;
      *((_DWORD *)v6 + 66) = 1065353216;
      result = 0LL;
      *a1 = v6;
      return result;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionlineargradientbrush.cpp",
      (const char *)(unsigned int)v8);
  }
  else
  {
    v9 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v12);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v13);
  return v9;
}
