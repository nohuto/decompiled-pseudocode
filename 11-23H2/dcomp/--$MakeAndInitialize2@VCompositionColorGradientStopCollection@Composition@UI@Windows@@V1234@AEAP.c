/*
 * XREFs of ??$MakeAndInitialize2@VCompositionColorGradientStopCollection@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@PEAVCompositionGradientBrush@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionColorGradientStopCollection@Composition@UI@Windows@@AEAPEAVCompositor@456@$$QEAPEAVCompositionGradientBrush@456@@Z @ 0x18005DFD0
 * Callers:
 *     ?RuntimeClassInitialize@CompositionGradientBrush@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I@Z @ 0x18005DF4C (-RuntimeClassInitialize@CompositionGradientBrush@Composition@UI@Windows@@QEAAJPEAVCompositor@234.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ??0CompositionColorGradientStopCollection@Composition@UI@Windows@@QEAA@XZ @ 0x18005E07C (--0CompositionColorGradientStopCollection@Composition@UI@Windows@@QEAA@XZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionColorGradientStopCollection,Windows::UI::Composition::CompositionColorGradientStopCollection,Windows::UI::Composition::Compositor * &,Windows::UI::Composition::CompositionGradientBrush *>(
        Windows::UI::Composition::CompositionObject **a1,
        struct Windows::UI::Composition::Compositor **a2,
        __int64 *a3)
{
  void *v6; // rax
  Windows::UI::Composition::CompositionColorGradientStopCollection *v7; // rax
  Windows::UI::Composition::CompositionObject *v8; // rbx
  struct Windows::UI::Composition::Compositor *v9; // rdx
  __int64 v10; // rsi
  int v11; // eax
  unsigned int v12; // edi
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v15; // [rsp+40h] [rbp+8h] BYREF
  Windows::UI::Composition::CompositionObject *v16; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v16 = 0LL;
  v6 = DefaultHeap::Alloc(0xC8uLL);
  v15 = v6;
  if ( v6 )
  {
    v7 = (Windows::UI::Composition::CompositionColorGradientStopCollection *)memset_0(v6, 0, 0xC8uLL);
    if ( v7 )
      v8 = (Windows::UI::Composition::CompositionObject *)Windows::UI::Composition::CompositionColorGradientStopCollection::CompositionColorGradientStopCollection(v7);
    else
      v8 = 0LL;
    v15 = 0LL;
    *((_QWORD *)v8 + 1) = &Windows::UI::Composition::CompositionColorGradientStopCollection::s_InterfaceType;
    v9 = *a2;
    v10 = *a3;
    v16 = v8;
    v11 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(v8, v9);
    v12 = v11;
    if ( v11 >= 0 )
    {
      *((_QWORD *)v8 + 24) = v10;
      result = 0LL;
      *a1 = v8;
      return result;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioncolorgradientstopcollection.cpp",
      (const char *)(unsigned int)v11);
  }
  else
  {
    v12 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v15);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v16);
  return v12;
}
