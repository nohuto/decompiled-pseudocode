/*
 * XREFs of ?GetSceneLockless@Display@Engine@Spectre@@AEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x180057A00
 * Callers:
 *     ?AddCamera@Display@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@UVector2@Math@Utils@3@1W4EViewportMode@Camera@23@@Z @ 0x180057470 (-AddCamera@Display@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCamera@Engine@Spectre@@@std@@UVector2@.c)
 *     ?RenderInternal@Display@Engine@Spectre@@AEAAXXZ @ 0x180057BA4 (-RenderInternal@Display@Engine@Spectre@@AEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?GetScene@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x18001265C (-GetScene@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 */

_QWORD *__fastcall Spectre::Engine::Display::GetSceneLockless(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v6; // [rsp+28h] [rbp-10h]

  v2 = *(_QWORD **)(a1 + 40);
  if ( v2 == *(_QWORD **)(a1 + 48) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    std::weak_ptr<Spectre::Engine::RenderDevice>::lock(*v2 + 56LL, &v5);
    Spectre::Engine::SceneNode::GetScene(v5, a2);
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
  }
  return a2;
}
