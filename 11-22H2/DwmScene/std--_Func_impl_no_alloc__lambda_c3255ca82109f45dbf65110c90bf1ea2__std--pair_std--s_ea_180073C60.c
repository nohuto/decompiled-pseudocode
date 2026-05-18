/*
 * XREFs of std::_Func_impl_no_alloc__lambda_c3255ca82109f45dbf65110c90bf1ea2__std::pair_std::shared_ptr_Spectre::Engine::SceneNode__std::shared_ptr_Spectre::Engine::Mesh_____::_Do_call @ 0x180073C60
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?AddNode@Scene@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x18004049C (-AddNode@Scene@Engine@Spectre@@QEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV-$basic_s.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_c3255ca82109f45dbf65110c90bf1ea2__std::pair_std::shared_ptr_Spectre::Engine::SceneNode__std::shared_ptr_Spectre::Engine::Mesh_____::_Do_call(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rax
  _QWORD v7[2]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v8[2]; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v9[5]; // [rsp+48h] [rbp-30h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 288LL);
  v5 = std::wstring::wstring(v9, (__int64)&Spectre::Engine::SceneLayerStandardID::kImageProcessing);
  Spectre::Engine::Scene::AddNode(v4, (__int64)v7, -1LL, (__int64)v5);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    v8,
    (_QWORD *)(*(_QWORD *)(a1 + 8) + 320LL));
  *a2 = v7[0];
  a2[1] = v7[1];
  a2[2] = v8[0];
  a2[3] = v8[1];
  return a2;
}
