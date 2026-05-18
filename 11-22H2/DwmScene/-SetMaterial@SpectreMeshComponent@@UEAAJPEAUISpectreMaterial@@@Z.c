/*
 * XREFs of ?SetMaterial@SpectreMeshComponent@@UEAAJPEAUISpectreMaterial@@@Z @ 0x1800144E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetScene@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x18001265C (-GetScene@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 *     ??$GetComponent@VMeshInstance@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VMeshInstance@Engine@Spectre@@@std@@XZ @ 0x180013E78 (--$GetComponent@VMeshInstance@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VMe.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?SetMaterial@MeshInstance@Engine@Spectre@@QEAAXV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Z @ 0x18004C98C (-SetMaterial@MeshInstance@Engine@Spectre@@QEAAXV-$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall SpectreMeshComponent::SetMaterial(SpectreMeshComponent *this, struct ISpectreMaterial *a2)
{
  __int64 v3; // rax
  Spectre::Engine::Lockable *v4; // rcx
  _QWORD *v5; // rax
  char v6; // bl
  _QWORD *v7; // rdx
  __int64 v8; // r8
  __int64 result; // rax
  Spectre::Engine::SceneNode *v10; // [rsp+20h] [rbp-68h] BYREF
  std::_Ref_count_base *v11; // [rsp+28h] [rbp-60h]
  std::_Ref_count_base *v12[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v13; // [rsp+40h] [rbp-48h] BYREF
  std::_Ref_count_base *v14; // [rsp+48h] [rbp-40h]
  __int64 v15; // [rsp+50h] [rbp-38h] BYREF
  __int64 v16; // [rsp+60h] [rbp-28h] BYREF
  std::_Ref_count_base *v17; // [rsp+68h] [rbp-20h]
  _BYTE v18[24]; // [rsp+70h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  try
  {
    v3 = (*(__int64 (__fastcall **)(SpectreMeshComponent *))(*(_QWORD *)this + 24LL))(this);
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
      &v10,
      (_QWORD *)(v3 + 32));
    v4 = (Spectre::Engine::Lockable *)(*(_QWORD *)Spectre::Engine::SceneNode::GetScene((__int64)v10, v12) + 16LL);
    Spectre::Engine::Lockable::GetExclusiveLockIfNecessary(v4);
    if ( v12[1] )
      std::_Ref_count_base::_Decref(v12[1]);
    Spectre::Engine::SceneNode::GetComponent<Spectre::Engine::MeshInstance>(v10, &v13);
    if ( a2 )
    {
      v5 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
             &v16,
             (_QWORD *)a2 + 2);
      v6 = 1;
    }
    else
    {
      *(_OWORD *)v12 = 0LL;
      v5 = v12;
      v6 = 2;
    }
    v7 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           &v15,
           v5);
    Spectre::Engine::MeshInstance::SetMaterial(v8, v7);
    if ( (v6 & 2) != 0 )
    {
      v6 &= ~2u;
      if ( v12[1] )
        std::_Ref_count_base::_Decref(v12[1]);
    }
    if ( (v6 & 1) != 0 && v17 )
      std::_Ref_count_base::_Decref(v17);
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
    std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v18);
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    result = 0LL;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectremeshcomponent.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  return result;
}
