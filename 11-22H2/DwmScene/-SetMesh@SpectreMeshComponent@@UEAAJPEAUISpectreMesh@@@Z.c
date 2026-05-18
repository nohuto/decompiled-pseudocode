/*
 * XREFs of ?SetMesh@SpectreMeshComponent@@UEAAJPEAUISpectreMesh@@@Z @ 0x180014650
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetScene@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x18001265C (-GetScene@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 *     ??$GetComponent@VMeshInstance@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VMeshInstance@Engine@Spectre@@@std@@XZ @ 0x180013E78 (--$GetComponent@VMeshInstance@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VMe.c)
 *     ?SetMesh@MeshInstance@Engine@Spectre@@QEAAXV?$shared_ptr@VMesh@Engine@Spectre@@@std@@@Z @ 0x180014620 (-SetMesh@MeshInstance@Engine@Spectre@@QEAAXV-$shared_ptr@VMesh@Engine@Spectre@@@std@@@Z.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall SpectreMeshComponent::SetMesh(SpectreMeshComponent *this, struct ISpectreMesh *a2)
{
  __int64 v4; // rax
  Spectre::Engine::Lockable *v5; // rcx
  char *v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  Spectre::Engine::SceneNode *v10; // [rsp+20h] [rbp-48h] BYREF
  std::_Ref_count_base *v11; // [rsp+28h] [rbp-40h]
  __int64 v12; // [rsp+30h] [rbp-38h] BYREF
  std::_Ref_count_base *v13; // [rsp+38h] [rbp-30h]
  __int64 v14; // [rsp+40h] [rbp-28h] BYREF
  std::_Ref_count_base *v15; // [rsp+48h] [rbp-20h]
  _BYTE v16[24]; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  try
  {
    v4 = (*(__int64 (__fastcall **)(SpectreMeshComponent *))(*(_QWORD *)this + 24LL))(this);
    if ( v4 )
    {
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
        &v10,
        (_QWORD *)(v4 + 32));
      v5 = (Spectre::Engine::Lockable *)(*(_QWORD *)Spectre::Engine::SceneNode::GetScene((__int64)v10, &v14) + 16LL);
      Spectre::Engine::Lockable::GetExclusiveLockIfNecessary(v5);
      if ( v15 )
        std::_Ref_count_base::_Decref(v15);
      Spectre::Engine::SceneNode::GetComponent<Spectre::Engine::MeshInstance>(v10, &v12);
      if ( a2 )
        v6 = (char *)a2 + 16;
      else
        v6 = (char *)SpectreRenderer::s_pInstance + 96;
      v7 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
             &v14,
             v6);
      Spectre::Engine::MeshInstance::SetMesh(v12, v7);
      if ( *((struct ISpectreMesh **)this + 1) != a2 )
      {
        if ( a2 )
          (*(void (__fastcall **)(struct ISpectreMesh *))(*(_QWORD *)a2 + 8LL))(a2);
        v8 = *((_QWORD *)this + 1);
        *((_QWORD *)this + 1) = a2;
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      if ( v13 )
        std::_Ref_count_base::_Decref(v13);
      std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v16);
      if ( v11 )
        std::_Ref_count_base::_Decref(v11);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectremeshcomponent.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  return result;
}
