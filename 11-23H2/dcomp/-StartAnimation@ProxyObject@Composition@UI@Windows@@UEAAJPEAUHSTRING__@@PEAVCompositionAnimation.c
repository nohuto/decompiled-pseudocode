/*
 * XREFs of ?StartAnimation@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAVCompositionAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x180075F00
 * Callers:
 *     ?StartAnimation@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAVCompositionAnimation@345@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@345@@Z @ 0x18011E190 (-StartAnimation@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJPEAUHSTRING__@.c)
 *     ?StartInjectionAnimation@CompositionManipulation@Composition@UI@Windows@@QEAAJPEAVInjectionAnimation@234@@Z @ 0x180161704 (-StartInjectionAnimation@CompositionManipulation@Composition@UI@Windows@@QEAAJPEAVInjectionAnima.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::ProxyObject::StartAnimation(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v5; // rax
  int v6; // ebx
  __int64 v8; // rdx
  int v9[2]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = *a1;
  *(_QWORD *)v9 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *))(v5 + 120))(a1);
  if ( v6 < 0 )
  {
    v8 = 577LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtproxyobject.cpp",
      (const char *)(unsigned int)v6);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(v9);
    return (unsigned int)v6;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v9 + 392LL))(*(_QWORD *)v9);
  if ( v6 < 0 )
  {
    v8 = 579LL;
    goto LABEL_9;
  }
  if ( a5 )
    *a5 = *(_QWORD *)v9;
  return 0LL;
}
