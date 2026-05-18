/*
 * XREFs of _anonymous_namespace_::ForEachNodeIf_Internal_std::function_bool___cdecl(std::shared_ptr_Spectre::Engine::SceneNode__const_&)__std::shared_ptr_Spectre::Engine::SceneNode___ @ 0x18003F084
 * Callers:
 *     _anonymous_namespace_::ForEachNodeIf_Internal_std::function_bool___cdecl(std::shared_ptr_Spectre::Engine::SceneNode__const_&)__std::shared_ptr_Spectre::Engine::SceneNode___ @ 0x18003F084 (_anonymous_namespace_--ForEachNodeIf_Internal_std--function_bool___cdecl(std--shared_ptr_Spectre.c)
 *     ?ForEachNodeIf@Scene@Engine@Spectre@@QEAAXAEBV?$function@$$A6A_NAEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x180040EE4 (-ForEachNodeIf@Scene@Engine@Spectre@@QEAAXAEBV-$function@$$A6A_NAEBV-$shared_ptr@VSceneNode@Engi.c)
 * Callees:
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     _anonymous_namespace_::ForEachNodeIf_Internal_std::function_bool___cdecl(std::shared_ptr_Spectre::Engine::SceneNode__const_&)__std::shared_ptr_Spectre::Engine::SceneNode___ @ 0x18003F084 (_anonymous_namespace_--ForEachNodeIf_Internal_std--function_bool___cdecl(std--shared_ptr_Spectre.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall anonymous_namespace_::ForEachNodeIf_Internal_std::function_bool___cdecl_std::shared_ptr_Spectre::Engine::SceneNode__const_____std::shared_ptr_Spectre::Engine::SceneNode___(
        __int64 a1,
        Spectre::Engine::SceneNode **a2)
{
  Spectre::Engine::SceneNode *v2; // rbx
  __int64 v5; // rcx
  char v6; // di
  __int64 v7; // rbp
  __int64 i; // rbx

  v2 = *a2;
  Spectre::Engine::SceneNode::VerifyReadAccess(*a2);
  v5 = *(_QWORD *)(a1 + 56);
  v6 = 0;
  if ( !v5 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, Spectre::Engine::SceneNode **))(*(_QWORD *)v5 + 16LL))(v5, a2) )
  {
    v7 = *((_QWORD *)v2 + 5);
    for ( i = *((_QWORD *)v2 + 4); i != v7; i += 16LL )
    {
      if ( !(unsigned __int8)anonymous_namespace_::ForEachNodeIf_Internal_std::function_bool___cdecl_std::shared_ptr_Spectre::Engine::SceneNode__const_____std::shared_ptr_Spectre::Engine::SceneNode___(
                               a1,
                               i) )
        return v6;
    }
    return 1;
  }
  return v6;
}
