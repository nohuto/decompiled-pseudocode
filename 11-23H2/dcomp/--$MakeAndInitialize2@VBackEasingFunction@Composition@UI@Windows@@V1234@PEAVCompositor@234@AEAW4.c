/*
 * XREFs of ??$MakeAndInitialize2@VBackEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW4CompositionEasingFunctionMode@234@AEAM@Details@WRL2@Microsoft@@YAJPEAPEAVBackEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAW4CompositionEasingFunctionMode@456@AEAM@Z @ 0x18012DDC8
 * Callers:
 *     ?CreateBackEasingFunction@CompositionEasingFunctionStatics@Composition@UI@Windows@@UEAAJPEAUICompositor@234@W4CompositionEasingFunctionMode@234@MPEAPEAUIBackEasingFunction@234@@Z @ 0x18012E390 (-CreateBackEasingFunction@CompositionEasingFunctionStatics@Composition@UI@Windows@@UEAAJPEAUICom.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0BackEasingFunction@Composition@UI@Windows@@QEAA@XZ @ 0x1801226B8 (--0BackEasingFunction@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VBackEasingFunction@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVBackEasingFunction@Composition@UI@Windows@@@Z @ 0x180124984 (-Attach@-$ComPtr@VBackEasingFunction@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVBackEasing.c)
 *     ?RuntimeClassInitialize@BackEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4CompositionEasingFunctionMode@234@M@Z @ 0x18017523C (-RuntimeClassInitialize@BackEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4Com.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::BackEasingFunction,Windows::UI::Composition::BackEasingFunction,Windows::UI::Composition::Compositor *,enum Windows::UI::Composition::CompositionEasingFunctionMode &,float &>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        _QWORD *a2,
        unsigned int *a3)
{
  void *v6; // rax
  int v7; // edi
  Windows::UI::Composition::BackEasingFunction *v8; // rax
  Microsoft::WRL2::NestableRuntimeClass *v9; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v10; // rcx
  void *v12; // [rsp+20h] [rbp-28h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v13 = 0LL;
  v6 = DefaultHeap::Alloc(0xB0uLL);
  v12 = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
LABEL_6:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v12);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v13);
    return (unsigned int)v7;
  }
  v8 = (Windows::UI::Composition::BackEasingFunction *)memset_0(v6, 0, 0xB0uLL);
  if ( v8 )
    v8 = Windows::UI::Composition::BackEasingFunction::BackEasingFunction(v8);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::BackEasingFunction>::Attach(&v13, v8);
  v9 = v13;
  v12 = 0LL;
  v10 = v13;
  *((_QWORD *)v13 + 1) = &Windows::UI::Composition::BackEasingFunction::s_InterfaceType;
  v7 = Windows::UI::Composition::BackEasingFunction::RuntimeClassInitialize(v10, *a2, *a3);
  if ( v7 < 0 )
    goto LABEL_6;
  *a1 = v9;
  return 0LL;
}
