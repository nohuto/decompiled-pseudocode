/*
 * XREFs of ?GetCameraByName@Engine@1Spectre@@UEBA?AV?$shared_ptr@VCamera@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@V?$shared_ptr@VScene@Engine@Spectre@@@4@@Z @ 0x180033F10
 * Callers:
 *     <none>
 * Callees:
 *     memcmp_0 @ 0x18000CA6D (memcmp_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?0VScene@Engine@Spectre@@$0A@@?$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x180015604 (--$-0VScene@Engine@Spectre@@$0A@@-$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 *     ??$_Find@V?$weak_ptr@VScene@Engine@Spectre@@@std@@@?$_Tree@V?$_Tmap_traits@V?$weak_ptr@VScene@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@2@U?$owner_less@V?$weak_ptr@VScene@Engine@Spectre@@@std@@@2@V?$allocator@U?$pair@$$CBV?$weak_ptr@VScene@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@2@@std@@@2@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VScene@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@2@@std@@PEAX@1@AEBV?$weak_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x18002EADC (--$_Find@V-$weak_ptr@VScene@Engine@Spectre@@@std@@@-$_Tree@V-$_Tmap_traits@V-$weak_ptr@VScene@En.c)
 *     ?GetDefaultScene@Engine@1Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x180034098 (-GetDefaultScene@Engine@1Spectre@@QEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Spectre::Engine::Engine::GetCameraByName(__int64 a1, _QWORD *a2, const void **a3, _QWORD *a4)
{
  __int64 *DefaultScene; // rax
  __int64 v9; // rbx
  _QWORD *v10; // r14
  _QWORD *v11; // rbx
  _QWORD *v12; // rcx
  const void *v13; // rdx
  size_t v14; // r8
  std::_Ref_count_base *v15; // rcx
  __int64 v17; // [rsp+28h] [rbp-30h] BYREF
  std::_Ref_count_base *v18; // [rsp+30h] [rbp-28h]

  if ( !*a4 )
  {
    DefaultScene = (__int64 *)Spectre::Engine::Engine::GetDefaultScene(a1, &v17);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(a4, DefaultScene);
    if ( v18 )
      std::_Ref_count_base::_Decref(v18);
  }
  std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(&v17, a4);
  v9 = std::_Tree<std::_Tmap_traits<std::weak_ptr<Spectre::Engine::Scene>,std::vector<std::shared_ptr<Spectre::Engine::Camera>>,std::owner_less<std::weak_ptr<Spectre::Engine::Scene>>,std::allocator<std::pair<std::weak_ptr<Spectre::Engine::Scene> const,std::vector<std::shared_ptr<Spectre::Engine::Camera>>>>,0>>::_Find<std::weak_ptr<Spectre::Engine::Scene>>(
         a1 + 728,
         (__int64)&v17);
  if ( v18 )
    std::_Ref_count_base::_Decwref(v18);
  v10 = *(_QWORD **)(v9 + 48);
  v11 = *(_QWORD **)(v9 + 56);
  while ( v10 != v11 )
  {
    v12 = (_QWORD *)(*v10 + 24LL);
    v13 = a3;
    if ( (unsigned __int64)a3[3] >= 0x10 )
      v13 = *a3;
    v14 = *(_QWORD *)(*v10 + 40LL);
    if ( *(_QWORD *)(*v10 + 48LL) >= 0x10uLL )
      v12 = (_QWORD *)*v12;
    if ( (const void *)v14 == a3[2] && !memcmp_0(v12, v13, v14) )
    {
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(a2, v10);
      goto LABEL_17;
    }
    v10 += 2;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
LABEL_17:
  v15 = (std::_Ref_count_base *)a4[1];
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  return a2;
}
