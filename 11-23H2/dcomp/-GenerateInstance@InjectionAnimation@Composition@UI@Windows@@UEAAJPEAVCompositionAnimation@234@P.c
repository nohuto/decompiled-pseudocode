/*
 * XREFs of ?GenerateInstance@InjectionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@PEAVCompositionObject@234@PEAUHSTRING__@@PEAVSubchannelMaskInfo@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x1801627C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??$MakeAndInitialize2@VInjectionAnimator@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVInjectionAnimation@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInjectionAnimator@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAVInjectionAnimation@456@@Z @ 0x180162424 (--$MakeAndInitialize2@VInjectionAnimator@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVIn.c)
 */

__int64 __fastcall Windows::UI::Composition::InjectionAnimation::GenerateInstance(
        struct Windows::UI::Composition::InjectionAnimation *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        _QWORD *a7)
{
  struct Windows::UI::Composition::Compositor *v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  struct Windows::UI::Composition::InjectionAnimation *v11; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::UI::Composition::Compositor *v12; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v14; // [rsp+40h] [rbp+8h] BYREF

  v7 = (struct Windows::UI::Composition::Compositor *)*((_QWORD *)a1 + 3);
  v14 = 0LL;
  v11 = a1;
  v12 = v7;
  v8 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InjectionAnimator,Windows::UI::Composition::InjectionAnimator,Windows::UI::Composition::Compositor *,Windows::UI::Composition::InjectionAnimation *>(
         &v14,
         &v12,
         &v11);
  v9 = v8;
  if ( v8 >= 0 )
  {
    *a7 = v14;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6A,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinjectionanimation.cpp",
      (const char *)(unsigned int)v8);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v14);
    return v9;
  }
}
