/*
 * XREFs of ?SetLayer@SceneNode@Engine@Spectre@@AEAAXV?$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@@Z @ 0x18003D3A4
 * Callers:
 *     ?CreateLayer@Scene@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x1800408BC (-CreateLayer@Scene@Engine@Spectre@@QEAA-AV-$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V-$basi.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2F0 (-VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::SceneNode::SetLayer(Spectre::Engine::SceneNode *a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  std::_Ref_count_base *v7; // rcx
  std::_Ref_count_base *v8; // rcx

  Spectre::Engine::SceneNode::VerifyWriteAccess(a1);
  v4 = a2[1];
  v5 = 0LL;
  v6 = 0LL;
  if ( v4 )
  {
    v5 = *a2;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
    v6 = v4;
  }
  *((_QWORD *)a1 + 11) = v5;
  v7 = (std::_Ref_count_base *)*((_QWORD *)a1 + 12);
  *((_QWORD *)a1 + 12) = v6;
  if ( v7 )
    std::_Ref_count_base::_Decwref(v7);
  v8 = (std::_Ref_count_base *)a2[1];
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
}
