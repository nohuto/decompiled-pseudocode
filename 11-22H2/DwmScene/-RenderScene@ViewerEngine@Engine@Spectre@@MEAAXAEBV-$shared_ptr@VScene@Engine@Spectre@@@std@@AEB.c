/*
 * XREFs of ?RenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@5@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180067B00
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ @ 0x1800347F0 (-GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ.c)
 *     ?_Tidy@?$vector@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x180038548 (-_Tidy@-$vector@V-$shared_ptr@VComponent@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VCompo.c)
 *     ?SetGlobalTexture@ShaderManager@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@5@@Z @ 0x180050764 (-SetGlobalTexture@ShaderManager@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V.c)
 *     ?SetGlobalTextureSampler@ShaderManager@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@VSampler@Engine@Spectre@@@5@@Z @ 0x18005079C (-SetGlobalTextureSampler@ShaderManager@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VCamera@Engine@Spectre@@@1@QEAV21@AEBV21@@Z @ 0x180056C54 (--$_Emplace_reallocate@AEBV-$shared_ptr@VCamera@Engine@Spectre@@@std@@@-$vector@V-$shared_ptr@VC.c)
 *     ??0?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x180057058 (--0-$vector@V-$shared_ptr@VCamera@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VCamera@Engin.c)
 *     ??$?0PEBV?$shared_ptr@VShadowMapCamera@Engine@Spectre@@@std@@$0A@@?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@QEAA@PEBV?$shared_ptr@VShadowMapCamera@Engine@Spectre@@@1@0AEBV?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@1@@Z @ 0x18006164C (--$-0PEBV-$shared_ptr@VShadowMapCamera@Engine@Spectre@@@std@@$0A@@-$vector@V-$shared_ptr@VCamera.c)
 *     ??$GetComponents@VCamera@Engine@Spectre@@@Scene@Engine@Spectre@@QEAA?AV?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x180062750 (--$GetComponents@VCamera@Engine@Spectre@@@Scene@Engine@Spectre@@QEAA-AV-$vector@V-$shared_ptr@VC.c)
 *     ??$GetCustomData@UViewerSceneData@ViewerEngine@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAAEAUViewerSceneData@ViewerEngine@12@XZ @ 0x180062848 (--$GetCustomData@UViewerSceneData@ViewerEngine@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAAEAUVi.c)
 *     ??$stable_sort@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@std@@@std@@@std@@P6A_NAEBV?$shared_ptr@VCamera@Engine@Spectre@@@2@0@Z@std@@YAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@std@@@std@@@0@0P6A_NAEBV?$shared_ptr@VCamera@Engine@Spectre@@@0@1@Z@Z @ 0x180063AAC (--$stable_sort@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@VCamera@Engine@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall Spectre::Engine::ViewerEngine::RenderScene(
        Spectre::Engine::Engine *this,
        __int64 *a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 *v8; // rdi
  __int64 *v9; // rbx
  char *v10; // rcx
  __int64 v11; // rax
  struct Spectre::Engine::ShaderManager *ShaderManager; // rbx
  __int128 v13; // [rsp+38h] [rbp-31h] BYREF
  char *v14; // [rsp+48h] [rbp-21h]
  __int128 v15; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v16; // [rsp+60h] [rbp-9h] BYREF
  __int64 *v17; // [rsp+68h] [rbp-1h]
  __int64 *v18[3]; // [rsp+78h] [rbp+Fh] BYREF
  _QWORD v19[3]; // [rsp+90h] [rbp+27h] BYREF

  if ( *a3 != a3[1] )
  {
    std::vector<std::shared_ptr<Spectre::Engine::Camera>>::vector<std::shared_ptr<Spectre::Engine::Camera>>(
      v18,
      (__int64)a3);
    std::stable_sort<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::shared_ptr<Spectre::Engine::Camera>>>>,bool (*)(std::shared_ptr<Spectre::Engine::Camera> const &,std::shared_ptr<Spectre::Engine::Camera> const &)>(
      v18[0],
      v18[1]);
    Spectre::Engine::Scene::GetComponents<Spectre::Engine::Camera>(*a2, (__int64)&v16);
    std::stable_sort<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::shared_ptr<Spectre::Engine::Camera>>>>,bool (*)(std::shared_ptr<Spectre::Engine::Camera> const &,std::shared_ptr<Spectre::Engine::Camera> const &)>(
      v16,
      v17);
    v13 = 0LL;
    v14 = 0LL;
    v8 = v17;
    v9 = v16;
    if ( v16 != v17 )
    {
      v10 = (char *)*((_QWORD *)&v13 + 1);
      do
      {
        if ( (*(_DWORD *)(*v9 + 440) & 0x200) != 0 )
        {
          if ( v10 == v14 )
          {
            std::vector<std::shared_ptr<Spectre::Engine::Camera>>::_Emplace_reallocate<std::shared_ptr<Spectre::Engine::Camera> const &>(
              (char **)&v13,
              v10,
              v9);
            v10 = (char *)*((_QWORD *)&v13 + 1);
          }
          else
          {
            std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
              v10,
              v9);
            v10 = (char *)(*((_QWORD *)&v13 + 1) + 16LL);
            *((_QWORD *)&v13 + 1) += 16LL;
          }
        }
        v9 += 2;
      }
      while ( v9 != v8 );
    }
    v11 = Spectre::Engine::Scene::GetCustomData<Spectre::Engine::ViewerEngine::ViewerSceneData>(*a2);
    std::vector<std::shared_ptr<Spectre::Engine::Camera>>::vector<std::shared_ptr<Spectre::Engine::Camera>>(
      v19,
      (char *)(v11 + 136),
      (char *)(v11 + 184));
    ShaderManager = Spectre::Engine::Engine::GetShaderManager(this);
    v15 = 0LL;
    Spectre::Engine::ShaderManager::SetGlobalTexture(
      (__int64)ShaderManager,
      (__int64)&Spectre::Engine::ShaderConstants::kGlobal_PlanarReflection,
      &v15);
    v15 = 0LL;
    Spectre::Engine::ShaderManager::SetGlobalTextureSampler(
      (__int64)ShaderManager,
      (__int64)&Spectre::Engine::ShaderConstants::kGlobal_PlanarReflection,
      &v15);
    (*(void (__fastcall **)(Spectre::Engine::Engine *, __int64 *, __int64, __int64))(*(_QWORD *)this + 112LL))(
      this,
      a2,
      a4,
      a5);
    (*(void (__fastcall **)(Spectre::Engine::Engine *, _QWORD *, __int64, __int64))(*(_QWORD *)this + 160LL))(
      this,
      v19,
      a4,
      a5);
    (*(void (__fastcall **)(Spectre::Engine::Engine *, __int128 *, __int64, __int64))(*(_QWORD *)this + 160LL))(
      this,
      &v13,
      a4,
      a5);
    (*(void (__fastcall **)(Spectre::Engine::Engine *, __int64 **, __int64, __int64))(*(_QWORD *)this + 160LL))(
      this,
      v18,
      a4,
      a5);
    (*(void (__fastcall **)(Spectre::Engine::Engine *, __int64 *, __int64, __int64))(*(_QWORD *)this + 136LL))(
      this,
      a2,
      a4,
      a5);
    std::vector<std::shared_ptr<Spectre::Engine::Component>>::_Tidy((__int64)v19);
    std::vector<std::shared_ptr<Spectre::Engine::Component>>::_Tidy((__int64)&v13);
    std::vector<std::shared_ptr<Spectre::Engine::Component>>::_Tidy((__int64)&v16);
    std::vector<std::shared_ptr<Spectre::Engine::Component>>::_Tidy((__int64)v18);
  }
}
