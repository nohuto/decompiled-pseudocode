/*
 * XREFs of ?RenderScene@ShadowMapCamera@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18008E9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??$GetComponent@VLight@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VLight@Engine@Spectre@@@std@@XZ @ 0x180011ED4 (--$GetComponent@VLight@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VLight@Eng.c)
 *     ?SetProjectionType@Camera@Engine@Spectre@@QEAAXW4EProjectionType@123@@Z @ 0x18001AFFC (-SetProjectionType@Camera@Engine@Spectre@@QEAAXW4EProjectionType@123@@Z.c)
 *     ?GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ @ 0x1800347F0 (-GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ.c)
 *     ?SetGlobalTexture@ShaderManager@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@5@@Z @ 0x180050764 (-SetGlobalTexture@ShaderManager@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V.c)
 *     ?SetGlobalTextureSampler@ShaderManager@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@VSampler@Engine@Spectre@@@5@@Z @ 0x18005079C (-SetGlobalTextureSampler@ShaderManager@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D.c)
 *     ?RenderScene@Camera@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005C210 (-RenderScene@Camera@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AE.c)
 *     ?SetScissorRect@Camera@Engine@Spectre@@QEAAXUScissorRect@23@@Z @ 0x18005D3D4 (-SetScissorRect@Camera@Engine@Spectre@@QEAAXUScissorRect@23@@Z.c)
 *     ?GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ @ 0x18008139C (-GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?ApplyRenderState@ShadowMapCamera@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18008DB9C (-ApplyRenderState@ShadowMapCamera@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spe.c)
 *     ?GetColorSampler@ShadowMapCamera@Engine@Spectre@@QEBA?AV?$shared_ptr@VSampler@Engine@Spectre@@@std@@XZ @ 0x18008E1A0 (-GetColorSampler@ShadowMapCamera@Engine@Spectre@@QEBA-AV-$shared_ptr@VSampler@Engine@Spectre@@@s.c)
 *     ?GetColorTexture@ShadowMapCamera@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ @ 0x18008E1C8 (-GetColorTexture@ShadowMapCamera@Engine@Spectre@@QEBA-AV-$shared_ptr@VTexture@Engine@Spectre@@@s.c)
 *     ?GetDepthSampler@ShadowMapCamera@Engine@Spectre@@QEBA?AV?$shared_ptr@VSampler@Engine@Spectre@@@std@@XZ @ 0x18008E284 (-GetDepthSampler@ShadowMapCamera@Engine@Spectre@@QEBA-AV-$shared_ptr@VSampler@Engine@Spectre@@@s.c)
 *     ?GetDepthTexture@ShadowMapCamera@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ @ 0x18008E2AC (-GetDepthTexture@ShadowMapCamera@Engine@Spectre@@QEBA-AV-$shared_ptr@VTexture@Engine@Spectre@@@s.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall Spectre::Engine::ShadowMapCamera::RenderScene(
        Spectre::Engine::ShadowMapCamera *this,
        __int64 *a2,
        _QWORD *a3)
{
  Spectre::Engine::Engine *Engine; // rax
  struct Spectre::Engine::ShaderManager *ShaderManager; // rsi
  std::_Ref_count_base *v8; // rdi
  int v9; // edx
  int v10; // edx
  unsigned int v11; // r8d
  int v12; // eax
  int v13; // eax
  Spectre::Engine::Component *v14; // rcx
  _QWORD *DepthTexture; // rax
  _QWORD *ColorTexture; // rax
  _QWORD *DepthSampler; // rax
  _QWORD *ColorSampler; // rax
  __int128 v19; // [rsp+20h] [rbp-20h] BYREF
  std::_Ref_count_base *v20[2]; // [rsp+30h] [rbp-10h] BYREF

  Engine = Spectre::Engine::Component::GetEngine(this);
  ShaderManager = Spectre::Engine::Engine::GetShaderManager(Engine);
  *(_OWORD *)v20 = 0LL;
  Spectre::Engine::ShaderManager::SetGlobalTexture((__int64)ShaderManager, (__int64)this + 1768, v20);
  *(_OWORD *)v20 = 0LL;
  Spectre::Engine::ShaderManager::SetGlobalTexture((__int64)ShaderManager, (__int64)this + 1848, v20);
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)this + 56, &v19);
  Spectre::Engine::SceneNode::GetComponent<Spectre::Engine::Light>((Spectre::Engine::SceneNode *)v19, v20);
  if ( *((_QWORD *)&v19 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v19 + 1));
  v8 = v20[0];
  if ( *((_BYTE *)v20[0] + 124) && *((float *)v20[0] + 26) > 0.0 )
  {
    Spectre::Engine::ShadowMapCamera::ApplyRenderState(this);
    if ( *((_DWORD *)this + 490) )
    {
      v9 = 3;
      if ( *((_DWORD *)v8 + 30) != 2 )
        v9 = 1;
    }
    else
    {
      if ( *((_DWORD *)this + 486) )
      {
        v10 = 4;
        if ( *((_DWORD *)v8 + 30) != 2 )
          v10 = 2;
        Spectre::Engine::Camera::SetProjectionType(this, v10);
        *((_DWORD *)this + 103) = 6;
        *((_DWORD *)this + 78) = v12;
        goto LABEL_16;
      }
      v9 = 3;
      if ( *((_DWORD *)v8 + 30) != 2 )
        v9 = 1;
    }
    Spectre::Engine::Camera::SetProjectionType(this, v9);
    *((_DWORD *)this + 103) = 3;
    *((_DWORD *)this + 78) = 1065353216;
LABEL_16:
    v13 = *((_DWORD *)this + 485) - 1;
    LODWORD(v19) = v11;
    *(_QWORD *)((char *)&v19 + 4) = __PAIR64__(v13, v11);
    HIDWORD(v19) = v13;
    Spectre::Engine::Camera::SetScissorRect((__int64)this, &v19);
    Spectre::Engine::Camera::RenderScene(v14, a2, a3);
    DepthTexture = Spectre::Engine::ShadowMapCamera::GetDepthTexture((__int64)this, &v19);
    Spectre::Engine::ShaderManager::SetGlobalTexture((__int64)ShaderManager, (__int64)this + 1768, DepthTexture);
    if ( *((_QWORD *)&v19 + 1) )
      std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v19 + 1));
    ColorTexture = Spectre::Engine::ShadowMapCamera::GetColorTexture((__int64)this, &v19);
    Spectre::Engine::ShaderManager::SetGlobalTexture((__int64)ShaderManager, (__int64)this + 1848, ColorTexture);
    if ( *((_QWORD *)&v19 + 1) )
      std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v19 + 1));
  }
  DepthSampler = (_QWORD *)Spectre::Engine::ShadowMapCamera::GetDepthSampler((__int64)this, &v19);
  Spectre::Engine::ShaderManager::SetGlobalTextureSampler((__int64)ShaderManager, (__int64)this + 1768, DepthSampler);
  if ( *((_QWORD *)&v19 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v19 + 1));
  ColorSampler = (_QWORD *)Spectre::Engine::ShadowMapCamera::GetColorSampler((__int64)this, &v19);
  Spectre::Engine::ShaderManager::SetGlobalTextureSampler((__int64)ShaderManager, (__int64)this + 1848, ColorSampler);
  if ( *((_QWORD *)&v19 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v19 + 1));
  if ( v20[1] )
    std::_Ref_count_base::_Decref(v20[1]);
}
