/*
 * XREFs of ??4?$RefPtr@VCompositionShape@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1801414D0
 * Callers:
 *     ?RemoveCaster@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJPEAVCompositionProjectedShadowCaster@234@@Z @ 0x18000764C (-RemoveCaster@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJPEAVCompositionProjectedSh.c)
 *     ??$emplace@AEBV?$RefPtr@VCompositionShape@Composition@UI@Windows@@@WRL2@Microsoft@@@?$vector@V?$RefPtr@VCompositionShape@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionShape@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$RefPtr@VCompositionShape@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$RefPtr@VCompositionShape@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@@1@AEBV?$RefPtr@VCompositionShape@Composition@UI@Windows@@@WRL2@Microsoft@@@Z @ 0x180140E20 (--$emplace@AEBV-$RefPtr@VCompositionShape@Composition@UI@Windows@@@WRL2@Microsoft@@@-$vector@V-$.c)
 *     ?erase@?$vector@V?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@@2@@Z @ 0x1801448C0 (-erase@-$vector@V-$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@V-$all.c)
 *     ??$emplace@AEBV?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@@?$vector@V?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@@1@AEBV?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@@Z @ 0x180183634 (--$emplace@AEBV-$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsof.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 */

Microsoft::WRL2::NestableRuntimeClass **__fastcall Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionShape>::operator=(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        Microsoft::WRL2::NestableRuntimeClass **a2)
{
  Microsoft::WRL2::NestableRuntimeClass *v3; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v4; // rax
  Microsoft::WRL2::NestableRuntimeClass *v5; // rax
  Microsoft::WRL2::NestableRuntimeClass *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( &v7 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
    v3 = v4;
  }
  v5 = *a1;
  *a1 = v3;
  v7 = v5;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v7);
  return a1;
}
