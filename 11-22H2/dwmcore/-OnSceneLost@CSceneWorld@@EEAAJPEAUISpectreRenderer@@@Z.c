/*
 * XREFs of ?OnSceneLost@CSceneWorld@@EEAAJPEAUISpectreRenderer@@@Z @ 0x180263E10
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180100300 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?DehydrateSpectreResources@CSceneNode@@QEAAXXZ @ 0x180250EB8 (-DehydrateSpectreResources@CSceneNode@@QEAAXXZ.c)
 */

__int64 __fastcall CSceneWorld::OnSceneLost(CSceneWorld *this, struct ISpectreRenderer *a2)
{
  CSceneNode::DehydrateSpectreResources(*((CSceneNode **)this + 3));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 2);
  return 0LL;
}
