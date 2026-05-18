/*
 * XREFs of ?Clone@ShadowMapCamera@Engine@Spectre@@UEBA?AV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV?$shared_ptr@VSceneNode@Engine@Spectre@@@5@@Z @ 0x18008DDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?0VDefaultSceneNodeTraversal@Engine@Spectre@@$0A@@?$shared_ptr@VISceneNodeTraversal@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VDefaultSceneNodeTraversal@Engine@Spectre@@@1@@Z @ 0x180011DA0 (--$-0VDefaultSceneNodeTraversal@Engine@Spectre@@$0A@@-$shared_ptr@VISceneNodeTraversal@Engine@Sp.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??$_Set_ptr_rep_and_enable_shared@VShadowMapCamera@Engine@Spectre@@@?$shared_ptr@VShadowMapCamera@Engine@Spectre@@@std@@AEAAXQEAVShadowMapCamera@Engine@Spectre@@QEAV_Ref_count_base@1@@Z @ 0x180062D9C (--$_Set_ptr_rep_and_enable_shared@VShadowMapCamera@Engine@Spectre@@@-$shared_ptr@VShadowMapCamer.c)
 *     ??0ShadowMapCamera@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@I@Z @ 0x18008D604 (--0ShadowMapCamera@Engine@Spectre@@QEAA@AEBV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@I@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_OWORD *__fastcall Spectre::Engine::ShadowMapCamera::Clone(__int64 a1, _OWORD *a2, __int64 a3, _QWORD *a4)
{
  _DWORD *v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rax
  void (__fastcall *v11)(__int64, _QWORD *, __int64); // r9
  std::_Ref_count_base *v12; // rcx
  __int128 v14; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v15[3]; // [rsp+38h] [rbp-30h] BYREF

  v8 = operator new(0x7D0uLL);
  v9 = (__int64)v8;
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    v8[2] = 1;
    v8[3] = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<Spectre::Engine::ShadowMapCamera>::`vftable';
    Spectre::Engine::ShadowMapCamera::ShadowMapCamera((Spectre::Engine::Camera *)(v8 + 4), a4);
  }
  else
  {
    v9 = 0LL;
  }
  v14 = 0LL;
  std::shared_ptr<Spectre::Engine::ShadowMapCamera>::_Set_ptr_rep_and_enable_shared<Spectre::Engine::ShadowMapCamera>(
    &v14,
    v9 + 16,
    v9);
  v10 = std::shared_ptr<Spectre::Engine::ISceneNodeTraversal>::shared_ptr<Spectre::Engine::ISceneNodeTraversal>(
          v15,
          &v14);
  v11(a1, v10, a3);
  *a2 = v14;
  v12 = (std::_Ref_count_base *)a4[1];
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  return a2;
}
