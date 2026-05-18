/*
 * XREFs of ?Clone@DefaultSceneNodeTraversal@Engine@Spectre@@UEAA?AV?$shared_ptr@VISceneNodeTraversal@Engine@Spectre@@@std@@XZ @ 0x180070DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$make_shared@VDefaultSceneNodeTraversal@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VDefaultSceneNodeTraversal@Engine@Spectre@@@0@XZ @ 0x1800252CC (--$make_shared@VDefaultSceneNodeTraversal@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VDefaultSce.c)
 */

_QWORD *__fastcall Spectre::Engine::DefaultSceneNodeTraversal::Clone(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-10h]

  v3 = std::make_shared<Spectre::Engine::DefaultSceneNodeTraversal,>(&v7);
  v4 = *v3;
  *v3 = 0LL;
  *a2 = v4;
  v5 = v3[1];
  v3[1] = 0LL;
  a2[1] = v5;
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  return a2;
}
