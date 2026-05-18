/*
 * XREFs of ?RemoveChild@SceneNode@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18003CFFC
 * Callers:
 *     ?SetParent@SceneNode@Engine@Spectre@@AEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18003D484 (-SetParent@SceneNode@Engine@Spectre@@AEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??$?8VTween@Tweening@Utils@Spectre@@V0123@@std@@YA_NAEBV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@0@0@Z @ 0x180015678 (--$-8VTween@Tweening@Utils@Spectre@@V0123@@std@@YA_NAEBV-$shared_ptr@VTween@Tweening@Utils@Spect.c)
 *     ?GetNext@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ @ 0x18003C014 (-GetNext@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ.c)
 *     ?SetNextNode@SceneNode@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18003D450 (-SetNextNode@SceneNode@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ?SetPreviousNode@SceneNode@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18003D834 (-SetPreviousNode@SceneNode@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VSceneNode@Engine@Spectre@@@std.c)
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     ?VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2F0 (-VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::SceneNode::RemoveChild(
        Spectre::Engine::SceneNode *a1,
        Spectre::Engine::SceneNode **a2)
{
  _QWORD *i; // rcx
  __int64 *v5; // rsi
  __int64 *j; // rbx
  std::_Ref_count_base *v7; // rcx
  Spectre::Engine::SceneNode *v8; // rbx
  __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  std::_Ref_count_base *v10; // [rsp+28h] [rbp-28h]
  __int64 v11; // [rsp+30h] [rbp-20h] BYREF
  std::_Ref_count_base *v12; // [rsp+38h] [rbp-18h]
  __int128 v13; // [rsp+40h] [rbp-10h] BYREF

  Spectre::Engine::SceneNode::VerifyWriteAccess(a1);
  for ( i = (_QWORD *)*((_QWORD *)a1 + 4);
        i != *((_QWORD **)a1 + 5)
     && !std::operator==<Spectre::Utils::Tweening::Tween,Spectre::Utils::Tweening::Tween>(i, a2);
        i += 2 )
  {
    ;
  }
  v5 = (__int64 *)*((_QWORD *)a1 + 5);
  for ( j = i + 2; j != v5; j += 2 )
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(j - 2, j);
  v7 = *(std::_Ref_count_base **)(*((_QWORD *)a1 + 5) - 8LL);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  *((_QWORD *)a1 + 5) -= 16LL;
  v8 = *a2;
  Spectre::Engine::SceneNode::VerifyReadAccess(*a2);
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)v8 + 112, &v11);
  Spectre::Engine::SceneNode::GetNext(*a2, &v9);
  if ( v11 )
  {
    Spectre::Engine::SceneNode::SetNextNode(v11, &v9);
    v13 = 0LL;
    Spectre::Engine::SceneNode::SetPreviousNode(*a2, &v13);
  }
  if ( v9 )
  {
    Spectre::Engine::SceneNode::SetPreviousNode(v9, &v11);
    v13 = 0LL;
    Spectre::Engine::SceneNode::SetNextNode(*a2, &v13);
  }
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
}
