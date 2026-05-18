/*
 * XREFs of ?RemoveNode@SpectreNode@@UEAAXPEAUISpectreNode@@@Z @ 0x180014FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetScene@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x18001265C (-GetScene@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?RemoveNode@Scene@Engine@Spectre@@QEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x180041AA0 (-RemoveNode@Scene@Engine@Spectre@@QEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall SpectreNode::RemoveNode(SpectreNode *this, struct ISpectreNode *a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  std::_Ref_count_base *v6; // [rsp+28h] [rbp-30h]
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v8[24]; // [rsp+40h] [rbp-18h] BYREF

  if ( a2 )
  {
    Spectre::Engine::SceneNode::GetScene(*((_QWORD *)this + 4), &v5);
    v3 = v5;
    Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Lockable *)(v5 + 16));
    v4 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           &v7,
           (_QWORD *)a2 + 4);
    Spectre::Engine::Scene::RemoveNode(v3, v4);
    std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v8);
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
  }
}
