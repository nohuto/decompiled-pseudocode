/*
 * XREFs of ?AddChild@SceneNode@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18003B6A8
 * Callers:
 *     ?SetParent@SceneNode@Engine@Spectre@@AEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18003D484 (-SetParent@SceneNode@Engine@Spectre@@AEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@1@QEAV21@AEBV21@@Z @ 0x18002E528 (--$_Emplace_reallocate@AEBV-$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@-$vector@V-$shared_p.c)
 *     ?SetNextNode@SceneNode@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18003D450 (-SetNextNode@SceneNode@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ?SetPreviousNode@SceneNode@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18003D834 (-SetPreviousNode@SceneNode@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VSceneNode@Engine@Spectre@@@std.c)
 *     ?VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2F0 (-VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Spectre::Engine::SceneNode::AddChild(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rcx
  _QWORD *result; // rax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v7; // [rsp+28h] [rbp-10h]

  Spectre::Engine::SceneNode::VerifyWriteAccess((Spectre::Engine::SceneNode *)a1);
  if ( (__int64)(*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32)) >> 4 )
  {
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
      &v6,
      (_QWORD *)(*(_QWORD *)(a1 + 40) - 16LL));
    Spectre::Engine::SceneNode::SetNextNode(v6, a2);
    Spectre::Engine::SceneNode::SetPreviousNode(*a2, &v6);
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
  }
  v4 = *(_QWORD **)(a1 + 40);
  if ( v4 == *(_QWORD **)(a1 + 48) )
    return std::vector<std::shared_ptr<Spectre::Engine::FrameBuffer>>::_Emplace_reallocate<std::shared_ptr<Spectre::Engine::FrameBuffer> const &>(
             (_QWORD *)(a1 + 32),
             *(char **)(a1 + 40),
             a2);
  result = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
             v4,
             a2);
  *(_QWORD *)(a1 + 40) += 16LL;
  return result;
}
