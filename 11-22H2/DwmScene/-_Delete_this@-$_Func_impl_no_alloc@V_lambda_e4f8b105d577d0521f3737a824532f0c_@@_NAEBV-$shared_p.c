/*
 * XREFs of ?_Delete_this@?$_Func_impl_no_alloc@V_lambda_e4f8b105d577d0521f3737a824532f0c_@@_NAEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@EEAAX_N@Z @ 0x1800131B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc<_lambda_e4f8b105d577d0521f3737a824532f0c_,bool,std::shared_ptr<Spectre::Engine::SceneNode> const &>::_Delete_this(
        void *a1,
        char a2)
{
  if ( a2 )
    operator delete(a1);
}
