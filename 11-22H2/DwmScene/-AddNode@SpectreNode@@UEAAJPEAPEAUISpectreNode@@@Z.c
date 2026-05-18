/*
 * XREFs of ?AddNode@SpectreNode@@UEAAJPEAPEAUISpectreNode@@@Z @ 0x180014CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000F024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetScene@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x18001265C (-GetScene@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 *     ??$MakeAndInitialize@VSpectreNode@@V1@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VSpectreNode@@@WRL@Microsoft@@@012@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x180014AC4 (--$MakeAndInitialize@VSpectreNode@@V1@AEAV-$shared_ptr@VSceneNode@Engine@Spectre@@@_ea_180014AC4.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?AddNode@Scene@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV45@@Z @ 0x18004033C (-AddNode@Scene@Engine@Spectre@@QEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV45@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpectreNode::AddNode(SpectreNode *this, struct ISpectreNode **a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  _QWORD *v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  struct ISpectreNode *v9; // rax
  _BYTE v10[8]; // [rsp+20h] [rbp-40h] BYREF
  std::_Ref_count_base *v11; // [rsp+28h] [rbp-38h]
  __int64 v12; // [rsp+30h] [rbp-30h] BYREF
  std::_Ref_count_base *v13; // [rsp+38h] [rbp-28h]
  _BYTE v14[16]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct ISpectreNode *v17; // [rsp+80h] [rbp+20h] BYREF

  v3 = (_QWORD *)((char *)this + 32);
  Spectre::Engine::SceneNode::GetScene(*((_QWORD *)this + 4), &v12);
  v4 = v12;
  Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Lockable *)(v12 + 16));
  v5 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v15,
         v3);
  Spectre::Engine::Scene::AddNode(v4, v10, -1LL, v5);
  v17 = 0LL;
  v6 = Microsoft::WRL::Details::MakeAndInitialize<SpectreNode,SpectreNode,std::shared_ptr<Spectre::Engine::SceneNode> &>(
         (__int64 *)&v17,
         (__int64)v10);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = v17;
    v17 = 0LL;
    *a2 = v9;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v14);
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x52,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrenode.cpp",
      (const char *)(unsigned int)v6);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v14);
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    return v7;
  }
}
