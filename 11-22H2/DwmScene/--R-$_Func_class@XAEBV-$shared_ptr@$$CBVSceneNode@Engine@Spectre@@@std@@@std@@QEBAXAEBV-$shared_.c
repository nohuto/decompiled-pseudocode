/*
 * XREFs of ??R?$_Func_class@XAEBV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@@std@@QEBAXAEBV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@1@@Z @ 0x180040184
 * Callers:
 *     _anonymous_namespace_::ForEachNode_Internal_std::function_void___cdecl(std::shared_ptr_Spectre::Engine::SceneNode_const___const_&)__std::shared_ptr_Spectre::Engine::SceneNode___ @ 0x18003F130 (_anonymous_namespace_--ForEachNode_Internal_std--function_void___cdecl(std--shared_ptr_Spectre--.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_class<void,std::shared_ptr<Spectre::Engine::SceneNode const> const &>::operator()(
        __int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 56);
  if ( !v1 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
