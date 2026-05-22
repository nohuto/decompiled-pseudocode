/*
 * XREFs of ?erase@?$vector@V?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@@2@@Z @ 0x1801448C0
 * Callers:
 *     ?RemoveAt@?$VectorBasedCollection@V?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@@Composition@UI@Windows@@QEAAJI@Z @ 0x180143F2C (-RemoveAt@-$VectorBasedCollection@V-$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ??4?$RefPtr@VCompositionShape@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1801414D0 (--4-$RefPtr@VCompositionShape@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

_QWORD *__fastcall std::vector<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Scenes::SceneComponent>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  Microsoft::WRL2::NestableRuntimeClass **v3; // rbp
  Microsoft::WRL2::NestableRuntimeClass **i; // rdi
  _QWORD *result; // rax

  v3 = *(Microsoft::WRL2::NestableRuntimeClass ***)(a1 + 8);
  for ( i = (Microsoft::WRL2::NestableRuntimeClass **)(a3 + 8); i != v3; ++i )
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionShape>::operator=(i - 1, i);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)(*(_QWORD *)(a1 + 8) - 8LL));
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
