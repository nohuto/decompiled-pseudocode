/*
 * XREFs of ??$MakeAndInitialize2@VAnimationPropertyInfo@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVAnimationPropertyInfo@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18001EEE8
 * Callers:
 *     ?ResolveProperties_Callback_Base@AnimationHelper@Composition@UI@Windows@@YAJV?$span@U?$pair@PEAVCompositionAnimation@Composition@UI@Windows@@V?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@std@@$0?0@gsl@@PEAVCompositionObject@234@PEAUIAnimationObject@234@V?$span@VHString@Wrappers@WRL@Microsoft@@$0?0@6@@Z @ 0x18001F728 (-ResolveProperties_Callback_Base@AnimationHelper@Composition@UI@Windows@@YAJV-$span@U-$pair@PEAV.c)
 *     ?CreateAnimationPropertyInfo@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIAnimationPropertyInfo@345@@Z @ 0x180124C70 (-CreateAnimationPropertyInfo@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIAnimation.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::AnimationPropertyInfo,Windows::UI::Composition::AnimationPropertyInfo,Windows::UI::Composition::Compositor *>(
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
  v4 = DefaultHeap::Alloc(0xC0uLL);
  v12 = v4;
  if ( v4 )
  {
    v5 = (Windows::UI::Composition::CompositionObject *)memset_0(v4, 0, 0xC0uLL);
    v6 = v5;
    if ( v5 )
    {
      Windows::UI::Composition::CompositionObject::CompositionObject(v5);
      *(_QWORD *)v6 = &Windows::UI::Composition::AnimationPropertyInfo::`vftable';
      *((_QWORD *)v6 + 19) = 0LL;
      *((_QWORD *)v6 + 21) = 0LL;
      *((_QWORD *)v6 + 16) = &Windows::UI::Composition::AnimationPropertyInfo::Api::`vftable'{for `Windows::UI::Composition::IAnimationPropertyInfo'};
      *((_QWORD *)v6 + 17) = &Windows::UI::Composition::AnimationPropertyInfo::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::IAnimationPropertyInfo2>'};
    }
    else
    {
      v6 = 0LL;
    }
    v12 = 0LL;
    *((_QWORD *)v6 + 1) = &Windows::UI::Composition::AnimationPropertyInfo::s_InterfaceType;
    v7 = *a2;
    v13 = v6;
    v8 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(v6, v7);
    v9 = v8;
    if ( v8 >= 0 )
    {
      *((_DWORD *)v6 + 40) = 0;
      *((_DWORD *)v6 + 41) = 0;
      *((_DWORD *)v6 + 44) = 0;
      *((_DWORD *)v6 + 45) = 0;
      *((_DWORD *)v6 + 46) = 0;
      result = 0LL;
      *a1 = v6;
      return result;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtanimationpropertyinfo.cpp",
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
