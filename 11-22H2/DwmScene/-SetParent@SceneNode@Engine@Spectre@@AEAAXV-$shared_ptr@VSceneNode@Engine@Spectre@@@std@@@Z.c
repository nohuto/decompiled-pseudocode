/*
 * XREFs of ?SetParent@SceneNode@Engine@Spectre@@AEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18003D484
 * Callers:
 *     ??1SceneNode@Engine@Spectre@@UEAA@XZ @ 0x18003B364 (--1SceneNode@Engine@Spectre@@UEAA@XZ.c)
 *     ?AddNodeInternal@Scene@Engine@Spectre@@AEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV45@AEBV?$shared_ptr@VSceneLayer@Engine@Spectre@@@5@@Z @ 0x180040548 (-AddNodeInternal@Scene@Engine@Spectre@@AEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV4.c)
 *     ?InsertNode@Scene@Engine@Spectre@@QEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@0@Z @ 0x1800414F0 (-InsertNode@Scene@Engine@Spectre@@QEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@0@Z.c)
 *     ?RemoveNode@Scene@Engine@Spectre@@QEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x180041AA0 (-RemoveNode@Scene@Engine@Spectre@@QEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?shared_from_this@?$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@2@XZ @ 0x180011D4C (-shared_from_this@-$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr@VSc.c)
 *     ??$?8VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DD0 (--$-8VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??$?9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@0@Z @ 0x180011DF0 (--$-9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@0@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetParent@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ @ 0x180012624 (-GetParent@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ.c)
 *     ?GetScene@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x18001265C (-GetScene@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 *     ?NotifyTransformChanged@SceneNode@Engine@Spectre@@AEAAXXZ @ 0x180012728 (-NotifyTransformChanged@SceneNode@Engine@Spectre@@AEAAXXZ.c)
 *     ??$?4VScene@Engine@Spectre@@@?$weak_ptr@VScene@Engine@Spectre@@@std@@QEAAAEAV01@AEBV?$shared_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x18002A670 (--$-4VScene@Engine@Spectre@@@-$weak_ptr@VScene@Engine@Spectre@@@std@@QEAAAEAV01@AEBV-$shared_ptr.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ?AddChild@SceneNode@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18003B6A8 (-AddChild@SceneNode@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ?GetNextInTree@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@AEBV45@@Z @ 0x18003C170 (-GetNextInTree@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@AE.c)
 *     ?RemoveChild@SceneNode@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18003CFFC (-RemoveChild@SceneNode@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ?TreeContains@SceneNode@Engine@Spectre@@AEAA_NV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18003DECC (-TreeContains@SceneNode@Engine@Spectre@@AEAA_NV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ?TryAttachToScene@SceneNode@Engine@Spectre@@AEAAXXZ @ 0x18003DF88 (-TryAttachToScene@SceneNode@Engine@Spectre@@AEAAXXZ.c)
 *     ?TryDetachFromScene@SceneNode@Engine@Spectre@@AEAAXXZ @ 0x18003E048 (-TryDetachFromScene@SceneNode@Engine@Spectre@@AEAAXXZ.c)
 *     ?VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2F0 (-VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     ?DeregisterNode@Scene@Engine@Spectre@@AEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x180040BD8 (-DeregisterNode@Scene@Engine@Spectre@@AEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ?RegisterNode@Scene@Engine@Spectre@@AEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x180041920 (-RegisterNode@Scene@Engine@Spectre@@AEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall Spectre::Engine::SceneNode::SetParent(Spectre::Engine::SceneNode *this, __int64 *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // r8
  char v9; // si
  char v10; // r14
  char v11; // r8
  char v12; // dl
  char v13; // r8
  __int64 *Scene; // rax
  __int64 *NextInTree; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 *v18; // rax
  std::_Ref_count_base *v19; // rcx
  const struct Spectre::Engine::SceneNode *v20; // [rsp+30h] [rbp-D0h] BYREF
  std::_Ref_count_base *v21; // [rsp+38h] [rbp-C8h]
  Spectre::Engine::SceneNode *v22; // [rsp+40h] [rbp-C0h] BYREF
  std::_Ref_count_base *v23; // [rsp+48h] [rbp-B8h]
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  std::_Ref_count_base *v25; // [rsp+58h] [rbp-A8h]
  std::_Ref_count_base *v26[2]; // [rsp+60h] [rbp-A0h] BYREF
  Spectre::Engine::SceneNode *v27; // [rsp+70h] [rbp-90h] BYREF
  std::_Ref_count_base *v28; // [rsp+78h] [rbp-88h]
  __int64 v29; // [rsp+80h] [rbp-80h] BYREF
  std::_Ref_count_base *v30; // [rsp+88h] [rbp-78h]
  __int64 v31; // [rsp+90h] [rbp-70h] BYREF
  std::_Ref_count_base *v32; // [rsp+98h] [rbp-68h]
  __int64 *v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v35[4]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+E8h] [rbp-18h] BYREF

  v33 = a2;
  Spectre::Engine::SceneNode::VerifyWriteAccess(this);
  std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this((__int64)this + 8, &v22);
  if ( !*((_QWORD *)this + 46) )
  {
    std::string::string(
      v35,
      (__int64)"SceneNode::SetParent() -- Unique ID zero is reserved for root-level nodes -- this node must not be given a parent.");
    v4 = std::string::string(
           &v31,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scenenode.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v4,
      v5,
      (__int64)v35,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( std::operator!=<Spectre::Engine::Scene>(a2) )
  {
    v6 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           &v27,
           a2);
    if ( (unsigned __int8)Spectre::Engine::SceneNode::TreeContains(this, v6) )
    {
      std::string::string(
        v35,
        (__int64)"SceneNode::SetParent() -- A node's parent cannot be set to node that is within the node's own tree (cyc"
                 "lic graph prohibited).");
      v7 = std::string::string(
             &v31,
             (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engi"
                      "ne\\scenenode.cpp");
      Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
        pExceptionObject,
        (__int64)v7,
        v8,
        (__int64)v35,
        0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
  }
  Spectre::Engine::SceneNode::GetParent(this, &v27);
  Spectre::Engine::SceneNode::GetScene((__int64)this, &v29);
  *(_OWORD *)v26 = 0LL;
  v9 = 0;
  v10 = 0;
  if ( std::operator!=<Spectre::Engine::Scene>(&v27) )
  {
    v9 = 0;
    if ( std::operator==<Spectre::Engine::Scene>(a2) )
      v9 = v11;
  }
  if ( std::operator==<Spectre::Engine::Scene>(&v27) )
  {
    v10 = 0;
    if ( std::operator!=<Spectre::Engine::Scene>(a2) )
      v10 = v13;
  }
  if ( v12 )
    Spectre::Engine::SceneNode::RemoveChild(v27, &v22);
  if ( std::operator!=<Spectre::Engine::Scene>(a2) )
  {
    Spectre::Engine::SceneNode::AddChild(*a2, &v22);
    Scene = (__int64 *)Spectre::Engine::SceneNode::GetScene(*a2, &v20);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v26, Scene);
    if ( v21 )
      std::_Ref_count_base::_Decref(v21);
  }
  std::weak_ptr<Spectre::Engine::Scene>::operator=<Spectre::Engine::Scene>((__int64 *)this + 7, a2);
  if ( std::operator!=<Spectre::Engine::Scene,Spectre::Engine::Scene>(&v29, v26) )
  {
    Spectre::Engine::SceneNode::TryDetachFromScene(this);
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
      &v20,
      &v22);
    while ( std::operator!=<Spectre::Engine::Scene>(&v20) )
    {
      std::weak_ptr<Spectre::Engine::Scene>::operator=<Spectre::Engine::Scene>((__int64 *)v20 + 9, v26);
      NextInTree = Spectre::Engine::SceneNode::GetNextInTree(v22, &v24, &v20);
      std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(&v20, NextInTree);
      if ( v25 )
        std::_Ref_count_base::_Decref(v25);
    }
    if ( v21 )
      std::_Ref_count_base::_Decref(v21);
    Spectre::Engine::SceneNode::TryAttachToScene(this);
  }
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v20, &v22);
  while ( std::operator!=<Spectre::Engine::Scene>(&v20) )
  {
    if ( v10 && std::operator!=<Spectre::Engine::Scene>(v26) )
    {
      v16 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
              &v34,
              &v20);
      Spectre::Engine::Scene::RegisterNode(v26[0], v16);
    }
    if ( v9 && std::operator!=<Spectre::Engine::Scene>(&v29) )
    {
      v17 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
              v35,
              &v20);
      Spectre::Engine::Scene::DeregisterNode(v29, v17);
    }
    v18 = Spectre::Engine::SceneNode::GetNextInTree(v22, &v31, &v20);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(&v20, v18);
    if ( v32 )
      std::_Ref_count_base::_Decref(v32);
  }
  if ( v21 )
    std::_Ref_count_base::_Decref(v21);
  Spectre::Engine::SceneNode::NotifyTransformChanged(this);
  if ( v26[1] )
    std::_Ref_count_base::_Decref(v26[1]);
  if ( v30 )
    std::_Ref_count_base::_Decref(v30);
  if ( v28 )
    std::_Ref_count_base::_Decref(v28);
  if ( v23 )
    std::_Ref_count_base::_Decref(v23);
  v19 = (std::_Ref_count_base *)a2[1];
  if ( v19 )
    std::_Ref_count_base::_Decref(v19);
}
