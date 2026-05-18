/*
 * XREFs of ?UpdateBounds@SpectreMeshComponent@@UEAAJXZ @ 0x1800148B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetScene@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x18001265C (-GetScene@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 *     ??$GetComponent@VBounds@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VBounds@Engine@Spectre@@@std@@XZ @ 0x180013E14 (--$GetComponent@VBounds@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VBounds@E.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?OnLayerModified@Scene@Engine@Spectre@@QEAAXV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x18004181C (-OnLayerModified@Scene@Engine@Spectre@@QEAAXV-$basic_string@_WU-$char_traits@_W@std@@V-$allocato.c)
 *     ?Set@Bounds@Engine@Spectre@@QEAAXAEBUBoundingBox@DirectX@@@Z @ 0x18004A584 (-Set@Bounds@Engine@Spectre@@QEAAXAEBUBoundingBox@DirectX@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall SpectreMeshComponent::UpdateBounds(SpectreMeshComponent *this)
{
  __int64 v2; // rax
  Spectre::Engine::Lockable *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 result; // rax
  Spectre::Engine::SceneNode *v8; // [rsp+20h] [rbp-68h] BYREF
  std::_Ref_count_base *v9; // [rsp+28h] [rbp-60h]
  Spectre::Engine::Bounds *v10; // [rsp+30h] [rbp-58h] BYREF
  std::_Ref_count_base *v11; // [rsp+38h] [rbp-50h]
  __int64 v12; // [rsp+40h] [rbp-48h] BYREF
  std::_Ref_count_base *v13; // [rsp+48h] [rbp-40h]
  _BYTE v14[16]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v15[5]; // [rsp+60h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  try
  {
    v2 = (*(__int64 (__fastcall **)(SpectreMeshComponent *))(*(_QWORD *)this + 24LL))(this);
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
      &v8,
      (_QWORD *)(v2 + 32));
    v3 = (Spectre::Engine::Lockable *)(*(_QWORD *)Spectre::Engine::SceneNode::GetScene((__int64)v8, &v12) + 16LL);
    Spectre::Engine::Lockable::GetExclusiveLockIfNecessary(v3);
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    Spectre::Engine::SceneNode::GetComponent<Spectre::Engine::Bounds>(v8, &v10);
    v4 = *((_QWORD *)this + 1);
    if ( v4 )
      Spectre::Engine::Bounds::Set(v10, (const struct DirectX::BoundingBox *)(v4 + 32));
    else
      (*(void (__fastcall **)(Spectre::Engine::Bounds *))(*(_QWORD *)v10 + 16LL))(v10);
    v5 = *(_QWORD *)Spectre::Engine::SceneNode::GetScene((__int64)v8, &v12);
    v6 = std::wstring::wstring(v15, (__int64)&Spectre::Engine::SceneLayerStandardID::kForeground);
    Spectre::Engine::Scene::OnLayerModified(v5, v6);
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v14);
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    result = 0LL;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x76,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectremeshcomponent.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  return result;
}
