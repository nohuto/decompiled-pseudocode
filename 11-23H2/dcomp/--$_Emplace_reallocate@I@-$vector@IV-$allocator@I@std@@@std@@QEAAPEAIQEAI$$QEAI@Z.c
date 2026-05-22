/*
 * XREFs of ??$_Emplace_reallocate@I@?$vector@IV?$allocator@I@std@@@std@@QEAAPEAIQEAI$$QEAI@Z @ 0x180041510
 * Callers:
 *     ?ResolveProperties_Callback_Base@AnimationHelper@Composition@UI@Windows@@YAJV?$span@U?$pair@PEAVCompositionAnimation@Composition@UI@Windows@@V?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@std@@$0?0@gsl@@PEAVCompositionObject@234@PEAUIAnimationObject@234@V?$span@VHString@Wrappers@WRL@Microsoft@@$0?0@6@@Z @ 0x18001F728 (-ResolveProperties_Callback_Base@AnimationHelper@Composition@UI@Windows@@YAJV-$span@U-$pair@PEAV.c)
 *     ?RebuildInternal@ShapeVisual@Composition@UI@Windows@@UEAAJXZ @ 0x180033D40 (-RebuildInternal@ShapeVisual@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?RebuildInternal@CompositionContainerShape@Composition@UI@Windows@@UEAAJXZ @ 0x180033E30 (-RebuildInternal@CompositionContainerShape@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?RebuildInternal@AnimationController@Composition@UI@Windows@@UEAAJXZ @ 0x180034290 (-RebuildInternal@AnimationController@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?CreateConditionalExpressionAnimator@VisualInteractionSource@Interactions@Composition@UI@Windows@@AEAAJV?$span@PEAUICompositionConditionalValue@Interactions@Composition@UI@Windows@@$0?0@gsl@@W4SourceModifierIndex@@PEAPEAVCompositionPropertyAnimator@345@@Z @ 0x18011D350 (-CreateConditionalExpressionAnimator@VisualInteractionSource@Interactions@Composition@UI@Windows.c)
 *     ?ConfigureCenterPointInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAJV?$span@PEAUICompositionConditionalValue@Interactions@Composition@UI@Windows@@$0?0@gsl@@W4ScrollAxis@@@Z @ 0x180137548 (-ConfigureCenterPointInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@AE.c)
 *     ?UpdateChildren@?$SceneNodeGeneratedT@VSceneObject@Scenes@Composition@UI@Windows@@@Scenes@Composition@UI@Windows@@QEAAJXZ @ 0x1801445F4 (-UpdateChildren@-$SceneNodeGeneratedT@VSceneObject@Scenes@Composition@UI@Windows@@@Scenes@Compos.c)
 *     ?UpdateComponents@?$SceneNodeGeneratedT@VSceneObject@Scenes@Composition@UI@Windows@@@Scenes@Composition@UI@Windows@@QEAAJXZ @ 0x1801446EC (-UpdateComponents@-$SceneNodeGeneratedT@VSceneObject@Scenes@Composition@UI@Windows@@@Scenes@Comp.c)
 *     ?GenerateAnimators@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@AEAAJXZ @ 0x180186C5C (-GenerateAnimators@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?_Change_array@?$vector@IV?$allocator@I@std@@@std@@AEAAXQEAI_K1@Z @ 0x180041334 (-_Change_array@-$vector@IV-$allocator@I@std@@@std@@AEAAXQEAI_K1@Z.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x18004490C (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@IV?$allocator@I@std@@@std@@AEBA_K_K@Z @ 0x18004497C (-_Calculate_growth@-$vector@IV-$allocator@I@std@@@std@@AEBA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

char *__fastcall std::vector<unsigned int>::_Emplace_reallocate<unsigned int>(__int64 *a1, const void *a2, _DWORD *a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r15
  __int64 v9; // r12
  SIZE_T size_of; // rax
  char *v11; // rsi
  char *v12; // r14
  void *v13; // rcx
  __int64 v14; // r8
  const void *v15; // rdx
  size_t v16; // r8

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 2;
  if ( v6 == 0x3FFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error((const char *)0x3FFFFFFFFFFFFFFFLL);
  v8 = v6 + 1;
  v9 = std::vector<unsigned int>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<4>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = &v11[4 * (((__int64)a2 - v3) >> 2)];
  *(_DWORD *)v12 = *a3;
  v13 = v11;
  v14 = a1[1];
  v15 = (const void *)*a1;
  if ( a2 == (const void *)v14 )
  {
    v16 = v14 - (_QWORD)v15;
  }
  else
  {
    memmove_0(v11, v15, (size_t)a2 - *a1);
    v13 = v12 + 4;
    v16 = a1[1] - (_QWORD)a2;
    v15 = a2;
  }
  memmove_0(v13, v15, v16);
  std::vector<unsigned int>::_Change_array(a1, (__int64)v11, v8, v9);
  return &v11[4 * (((__int64)a2 - v3) >> 2)];
}
