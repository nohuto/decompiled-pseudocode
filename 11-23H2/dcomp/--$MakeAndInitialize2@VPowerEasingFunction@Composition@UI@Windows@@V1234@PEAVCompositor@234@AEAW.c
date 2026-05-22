/*
 * XREFs of ??$MakeAndInitialize2@VPowerEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW4CompositionEasingFunctionMode@234@AEAM@Details@WRL2@Microsoft@@YAJPEAPEAVPowerEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAW4CompositionEasingFunctionMode@456@AEAM@Z @ 0x18012E1F8
 * Callers:
 *     ?CreatePowerEasingFunction@CompositionEasingFunctionStatics@Composition@UI@Windows@@UEAAJPEAUICompositor@234@W4CompositionEasingFunctionMode@234@MPEAPEAUIPowerEasingFunction@234@@Z @ 0x18012EE60 (-CreatePowerEasingFunction@CompositionEasingFunctionStatics@Composition@UI@Windows@@UEAAJPEAUICo.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?RuntimeClassInitialize@PowerEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4CompositionEasingFunctionMode@234@M@Z @ 0x180079640 (-RuntimeClassInitialize@PowerEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4Co.c)
 *     ??0PowerEasingFunction@Composition@UI@Windows@@QEAA@XZ @ 0x180079798 (--0PowerEasingFunction@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VPowerEasingFunction@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVPowerEasingFunction@Composition@UI@Windows@@@Z @ 0x180079E98 (-Attach@-$ComPtr@VPowerEasingFunction@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVPowerEasi.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::PowerEasingFunction,Windows::UI::Composition::PowerEasingFunction,Windows::UI::Composition::Compositor *,enum Windows::UI::Composition::CompositionEasingFunctionMode &,float &>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        __int64 *a2,
        unsigned int *a3,
        float *a4)
{
  void *v8; // rax
  int v9; // edi
  Windows::UI::Composition::PowerEasingFunction *v10; // rax
  Microsoft::WRL2::NestableRuntimeClass *v11; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v12; // rcx
  void *v14; // [rsp+20h] [rbp-28h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v15; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v15 = 0LL;
  v8 = DefaultHeap::Alloc(0xB0uLL);
  v14 = v8;
  if ( !v8 )
  {
    v9 = -2147024882;
LABEL_6:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v14);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v15);
    return (unsigned int)v9;
  }
  v10 = (Windows::UI::Composition::PowerEasingFunction *)memset_0(v8, 0, 0xB0uLL);
  if ( v10 )
    v10 = Windows::UI::Composition::PowerEasingFunction::PowerEasingFunction(v10);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::PowerEasingFunction>::Attach(&v15, v10);
  v11 = v15;
  v14 = 0LL;
  v12 = v15;
  *((_QWORD *)v15 + 1) = &Windows::UI::Composition::PowerEasingFunction::s_InterfaceType;
  v9 = Windows::UI::Composition::PowerEasingFunction::RuntimeClassInitialize((__int64)v12, *a2, *a3, *a4);
  if ( v9 < 0 )
    goto LABEL_6;
  *a1 = v11;
  return 0LL;
}
