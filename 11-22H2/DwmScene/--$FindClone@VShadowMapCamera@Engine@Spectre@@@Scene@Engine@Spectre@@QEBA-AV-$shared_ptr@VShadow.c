/*
 * XREFs of ??$FindClone@VShadowMapCamera@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VShadowMapCamera@Engine@Spectre@@@std@@V?$shared_ptr@VScene@Engine@Spectre@@@4@V?$shared_ptr@VComponent@Engine@Spectre@@@4@@Z @ 0x180062350
 * Callers:
 *     ?Clone@ViewerSceneData@ViewerEngine@Engine@Spectre@@UEAA?AV?$shared_ptr@USceneCustomData@Engine@Spectre@@@std@@AEBVScene@34@AEAV734@@Z @ 0x1800657E0 (-Clone@ViewerSceneData@ViewerEngine@Engine@Spectre@@UEAA-AV-$shared_ptr@USceneCustomData@Engine@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?VerifyReadAccess@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A2FC (-VerifyReadAccess@Lockable@Engine@Spectre@@QEBAXXZ.c)
 *     ??$GetComponent@VShadowMapCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VShadowMapCamera@Engine@Spectre@@@std@@XZ @ 0x180062688 (--$GetComponent@VShadowMapCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@.c)
 *     ?FindClone@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V?$shared_ptr@VScene@Engine@Spectre@@@5@V45@@Z @ 0x1800669E0 (-FindClone@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V-$shared_.c)
 */

_QWORD *__fastcall Spectre::Engine::Scene::FindClone<Spectre::Engine::ShadowMapCamera>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rax
  char v11; // bl
  std::_Ref_count_base *v12; // rcx
  std::_Ref_count_base *v13; // rcx
  __int64 v15; // [rsp+28h] [rbp-58h] BYREF
  std::_Ref_count_base *v16; // [rsp+30h] [rbp-50h]
  __int64 v17; // [rsp+38h] [rbp-48h] BYREF
  std::_Ref_count_base *v18; // [rsp+40h] [rbp-40h]
  __int64 v19; // [rsp+48h] [rbp-38h] BYREF
  std::_Ref_count_base *v20; // [rsp+50h] [rbp-30h]
  __int64 v21; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v22[8]; // [rsp+68h] [rbp-18h] BYREF
  std::_Ref_count_base *v23; // [rsp+70h] [rbp-10h]

  Spectre::Engine::Lockable::VerifyReadAccess((Spectre::Engine::Lockable *)(a1 + 16));
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock(*a4 + 56LL, &v19);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v17, &v19);
  v8 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v21,
         a3);
  Spectre::Engine::Scene::FindClone(a1, &v15, v8);
  if ( std::operator!=<Spectre::Engine::Scene>(&v15) )
  {
    v9 = (__int64 *)Spectre::Engine::SceneNode::GetComponent<Spectre::Engine::ShadowMapCamera>(v15, v22);
    v10 = *v9;
    v11 = 5;
  }
  else
  {
    v18 = 0LL;
    v9 = &v17;
    v10 = 0LL;
    v11 = 6;
  }
  *a2 = v10;
  a2[1] = v9[1];
  *v9 = 0LL;
  v9[1] = 0LL;
  if ( (v11 & 2) != 0 )
  {
    v11 &= ~2u;
    if ( v18 )
      std::_Ref_count_base::_Decref(v18);
  }
  if ( (v11 & 1) != 0 && v23 )
    std::_Ref_count_base::_Decref(v23);
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
  if ( v20 )
    std::_Ref_count_base::_Decref(v20);
  v12 = (std::_Ref_count_base *)a3[1];
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  v13 = (std::_Ref_count_base *)a4[1];
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  return a2;
}
