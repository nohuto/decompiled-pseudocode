/*
 * XREFs of ??$MakeAndInitialize2@VNaturalMotionAnimator@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVNaturalMotionAnimation@234@V?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@AEAPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Details@WRL2@Microsoft@@YAJPEAPEAVNaturalMotionAnimator@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAW4DCOMPOSITION_EXPRESSION_TYPE@@$$QEAPEAVNaturalMotionAnimation@456@$$QEAV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@AEAPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x1801889E8
 * Callers:
 *     ?GenerateInstance@NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@PEAVCompositionObject@234@PEAUHSTRING__@@PEAVSubchannelMaskInfo@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x180188B00 (-GenerateInstance@NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@2.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VInteropDwmCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18008D740 (-InternalRelease@-$ComPtr@VInteropDwmCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CompositionPropertyAnimator@Composition@UI@Windows@@QEAA@XZ @ 0x1801618D8 (--0CompositionPropertyAnimator@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@NaturalMotionAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAVNaturalMotionAnimation@234@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x1801A1A84 (-RuntimeClassInitialize@NaturalMotionAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::NaturalMotionAnimator,Windows::UI::Composition::NaturalMotionAnimator,Windows::UI::Composition::Compositor *,enum DCOMPOSITION_EXPRESSION_TYPE &,Windows::UI::Composition::NaturalMotionAnimation *,gsl::span<Windows::UI::Composition::AnimationHelper::AnimatedProperty const * const,-1>,std::unordered_map<std::wstring,Windows::UI::Composition::ParameterOverrideEntry> * &>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        __int64 *a2,
        int *a3,
        __int64 *a4,
        __int64 a5,
        __int64 *a6)
{
  void *v10; // rax
  int v11; // edi
  Windows::UI::Composition::CompositionPropertyAnimator *v12; // rax
  Microsoft::WRL2::NestableRuntimeClass *v13; // rbx
  __int64 v14; // r9
  int v15; // r8d
  __int64 v16; // rdx
  __int64 v18; // [rsp+28h] [rbp-30h]
  void *v19; // [rsp+30h] [rbp-28h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v20; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v20 = 0LL;
  v10 = DefaultHeap::Alloc(0x130uLL);
  v19 = v10;
  if ( v10 )
  {
    v12 = (Windows::UI::Composition::CompositionPropertyAnimator *)memset_0(v10, 0, 0x130uLL);
    v13 = v12;
    if ( v12 )
    {
      Windows::UI::Composition::CompositionPropertyAnimator::CompositionPropertyAnimator(v12);
      *(_QWORD *)v13 = &Windows::UI::Composition::NaturalMotionAnimator::`vftable';
      *((_QWORD *)v13 + 36) = 0LL;
      *((_QWORD *)v13 + 37) = 0LL;
    }
    else
    {
      v13 = 0LL;
    }
    v19 = 0LL;
    *((_QWORD *)v13 + 1) = &Windows::UI::Composition::CompositionPropertyAnimator::s_InterfaceType;
    v14 = *a4;
    v15 = *a3;
    v16 = *a2;
    v18 = *a6;
    v20 = v13;
    v11 = Windows::UI::Composition::NaturalMotionAnimator::RuntimeClassInitialize((_DWORD)v13, v16, v15, v14, a5, v18);
    if ( v11 >= 0 )
    {
      v20 = 0LL;
      v11 = 0;
      *a1 = v13;
      goto LABEL_9;
    }
  }
  else
  {
    v11 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v19);
LABEL_9:
  Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropDwmCompositor>::InternalRelease(&v20);
  return (unsigned int)v11;
}
