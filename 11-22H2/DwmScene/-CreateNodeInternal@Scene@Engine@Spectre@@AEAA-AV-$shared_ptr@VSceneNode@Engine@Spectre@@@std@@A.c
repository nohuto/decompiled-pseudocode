/*
 * XREFs of ?CreateNodeInternal@Scene@Engine@Spectre@@AEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@AEB_K@Z @ 0x180040B38
 * Callers:
 *     ?AddNodeInternal@Scene@Engine@Spectre@@AEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV45@AEBV?$shared_ptr@VSceneLayer@Engine@Spectre@@@5@@Z @ 0x180040548 (-AddNodeInternal@Scene@Engine@Spectre@@AEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV4.c)
 *     ?CreateLayer@Scene@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x1800408BC (-CreateLayer@Scene@Engine@Spectre@@QEAA-AV-$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V-$basi.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@2@XZ @ 0x180011D4C (-shared_from_this@-$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr@VSc.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ?VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A384 (-VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ.c)
 *     ??0SceneNode@Engine@Spectre@@AEAA@V?$shared_ptr@VScene@Engine@Spectre@@@std@@_K@Z @ 0x18003B028 (--0SceneNode@Engine@Spectre@@AEAA@V-$shared_ptr@VScene@Engine@Spectre@@@std@@_K@Z.c)
 *     ??$?0VSceneNode@Engine@Spectre@@$0A@@?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@QEAA@PEAVSceneNode@Engine@Spectre@@@Z @ 0x18003EF90 (--$-0VSceneNode@Engine@Spectre@@$0A@@-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@QEAA@PEAVScen.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall Spectre::Engine::Scene::CreateNodeInternal(__int64 a1, _QWORD *a2)
{
  Spectre::Engine::SceneNode *v4; // rax
  _QWORD *v5; // rax
  Spectre::Engine::SceneNode *v6; // r9
  __int64 v8; // [rsp+28h] [rbp-30h] BYREF
  std::_Ref_count_base *v9; // [rsp+30h] [rbp-28h]
  _QWORD v10[4]; // [rsp+38h] [rbp-20h] BYREF

  Spectre::Engine::Lockable::VerifyWriteAccess((Spectre::Engine::Lockable *)(a1 + 16));
  std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this(a1, &v8);
  v4 = (Spectre::Engine::SceneNode *)operator new(0x250uLL);
  if ( v4 )
  {
    v5 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           v10,
           &v8);
    v4 = Spectre::Engine::SceneNode::SceneNode(v6, v5);
  }
  std::shared_ptr<Spectre::Engine::SceneNode>::shared_ptr<Spectre::Engine::SceneNode>(a2, (__int64)v4);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  return a2;
}
