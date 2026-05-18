/*
 * XREFs of _anonymous_namespace_::ForEachNode_Internal_std::function_void___cdecl(std::shared_ptr_Spectre::Engine::SceneNode_const___const_&)__std::shared_ptr_Spectre::Engine::SceneNode___ @ 0x18003F130
 * Callers:
 *     _anonymous_namespace_::ForEachNode_Internal_std::function_void___cdecl(std::shared_ptr_Spectre::Engine::SceneNode_const___const_&)__std::shared_ptr_Spectre::Engine::SceneNode___ @ 0x18003F130 (_anonymous_namespace_--ForEachNode_Internal_std--function_void___cdecl(std--shared_ptr_Spectre--.c)
 *     ?ForEachNode@Scene@Engine@Spectre@@QEBAXAEBV?$function@$$A6AXAEBV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@@Z@std@@@Z @ 0x180040E6C (-ForEachNode@Scene@Engine@Spectre@@QEBAXAEBV-$function@$$A6AXAEBV-$shared_ptr@$$CBVSceneNode@Eng.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?0VDefaultSceneNodeTraversal@Engine@Spectre@@$0A@@?$shared_ptr@VISceneNodeTraversal@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VDefaultSceneNodeTraversal@Engine@Spectre@@@1@@Z @ 0x180011DA0 (--$-0VDefaultSceneNodeTraversal@Engine@Spectre@@$0A@@-$shared_ptr@VISceneNodeTraversal@Engine@Sp.c)
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     _anonymous_namespace_::ForEachNode_Internal_std::function_void___cdecl(std::shared_ptr_Spectre::Engine::SceneNode_const___const_&)__std::shared_ptr_Spectre::Engine::SceneNode___ @ 0x18003F130 (_anonymous_namespace_--ForEachNode_Internal_std--function_void___cdecl(std--shared_ptr_Spectre--.c)
 *     ??R?$_Func_class@XAEBV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@@std@@QEBAXAEBV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@1@@Z @ 0x180040184 (--R-$_Func_class@XAEBV-$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@@std@@QEBAXAEBV-$shared_.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall anonymous_namespace_::ForEachNode_Internal_std::function_void___cdecl_std::shared_ptr_Spectre::Engine::SceneNode_const___const_____std::shared_ptr_Spectre::Engine::SceneNode___(
        __int64 a1,
        Spectre::Engine::SceneNode **a2)
{
  Spectre::Engine::SceneNode *v4; // rbx
  __int64 v5; // rdi
  __int64 i; // rbx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-10h]

  std::shared_ptr<Spectre::Engine::ISceneNodeTraversal>::shared_ptr<Spectre::Engine::ISceneNodeTraversal>(&v7, a2);
  std::_Func_class<void,std::shared_ptr<Spectre::Engine::SceneNode const> const &>::operator()(a1, &v7);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  v4 = *a2;
  Spectre::Engine::SceneNode::VerifyReadAccess(v4);
  v5 = *((_QWORD *)v4 + 5);
  for ( i = *((_QWORD *)v4 + 4); i != v5; i += 16LL )
    anonymous_namespace_::ForEachNode_Internal_std::function_void___cdecl_std::shared_ptr_Spectre::Engine::SceneNode_const___const_____std::shared_ptr_Spectre::Engine::SceneNode___(
      a1,
      i);
}
