/*
 * XREFs of ?AddCamera@Engine@1Spectre@@QEAA_KV?$shared_ptr@VCamera@Engine@Spectre@@@std@@@Z @ 0x1800326EC
 * Callers:
 *     ?ApplySceneStandardContent@Engine@1Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180032880 (-ApplySceneStandardContent@Engine@1Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@@.c)
 *     ?ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180064E70 (-ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spec.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?GetScene@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x18001265C (-GetScene@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 *     ??$?0VScene@Engine@Spectre@@$0A@@?$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x180015604 (--$-0VScene@Engine@Spectre@@$0A@@-$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 *     ??$_Emplace_reallocate@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VCamera@Engine@Spectre@@@1@QEAV21@$$QEAV21@@Z @ 0x18002E72C (--$_Emplace_reallocate@V-$shared_ptr@VCamera@Engine@Spectre@@@std@@@-$vector@V-$shared_ptr@VCame.c)
 *     ??$_Try_emplace@V?$weak_ptr@VScene@Engine@Spectre@@@std@@$$V@?$map@V?$weak_ptr@VScene@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@2@U?$owner_less@V?$weak_ptr@VScene@Engine@Spectre@@@std@@@2@V?$allocator@U?$pair@$$CBV?$weak_ptr@VScene@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@2@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VScene@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@2@@std@@PEAX@std@@_N@1@$$QEAV?$weak_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x18002FE88 (--$_Try_emplace@V-$weak_ptr@VScene@Engine@Spectre@@@std@@$$V@-$map@V-$weak_ptr@VScene@Engine@Spe.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Spectre::Engine::Engine::AddCamera(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 *v5; // rcx
  _QWORD *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  std::_Ref_count_base *v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-30h] BYREF
  std::_Ref_count_base *v12; // [rsp+28h] [rbp-28h]
  __int64 v13; // [rsp+30h] [rbp-20h] BYREF
  std::_Ref_count_base *v14; // [rsp+38h] [rbp-18h]
  _BYTE v15[16]; // [rsp+40h] [rbp-10h] BYREF

  std::weak_ptr<Spectre::Engine::RenderDevice>::lock(*a2 + 56LL, &v13);
  Spectre::Engine::SceneNode::GetScene(v13, &v11);
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(&v13, &v11);
  v4 = std::map<std::weak_ptr<Spectre::Engine::Scene>,std::vector<std::shared_ptr<Spectre::Engine::Camera>>,std::owner_less<std::weak_ptr<Spectre::Engine::Scene>>,std::allocator<std::pair<std::weak_ptr<Spectre::Engine::Scene> const,std::vector<std::shared_ptr<Spectre::Engine::Camera>>>>>::_Try_emplace<std::weak_ptr<Spectre::Engine::Scene>,>(
         (__int64 *)(a1 + 728),
         (__int64)v15,
         (__int64)&v13);
  v5 = (__int64 *)(*(_QWORD *)v4 + 48LL);
  v6 = *(_QWORD **)(*(_QWORD *)v4 + 56LL);
  if ( v6 == *(_QWORD **)(*(_QWORD *)v4 + 64LL) )
  {
    std::vector<std::shared_ptr<Spectre::Engine::Camera>>::_Emplace_reallocate<std::shared_ptr<Spectre::Engine::Camera>>(
      v5,
      (__int64)v6,
      a2);
  }
  else
  {
    *v6 = 0LL;
    v6[1] = 0LL;
    *v6 = *a2;
    v6[1] = a2[1];
    *a2 = 0LL;
    a2[1] = 0LL;
    v5[1] += 16LL;
  }
  if ( v14 )
    std::_Ref_count_base::_Decwref(v14);
  std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(&v13, &v11);
  v7 = std::map<std::weak_ptr<Spectre::Engine::Scene>,std::vector<std::shared_ptr<Spectre::Engine::Camera>>,std::owner_less<std::weak_ptr<Spectre::Engine::Scene>>,std::allocator<std::pair<std::weak_ptr<Spectre::Engine::Scene> const,std::vector<std::shared_ptr<Spectre::Engine::Camera>>>>>::_Try_emplace<std::weak_ptr<Spectre::Engine::Scene>,>(
         (__int64 *)(a1 + 728),
         (__int64)v15,
         (__int64)&v13);
  v8 = (__int64)(*(_QWORD *)(*(_QWORD *)v7 + 56LL) - *(_QWORD *)(*(_QWORD *)v7 + 48LL)) >> 4;
  if ( v14 )
    std::_Ref_count_base::_Decwref(v14);
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  v9 = (std::_Ref_count_base *)a2[1];
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  return v8 - 1;
}
