/*
 * XREFs of ?ResolveReadableDepth@Camera@Engine@Spectre@@IEBA_NAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@Z @ 0x18005CD30
 * Callers:
 *     ?RenderScene@Camera@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005C210 (-RenderScene@Camera@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AE.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?empty@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA_NXZ @ 0x18001F7CC (-empty@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA_NXZ.c)
 *     ?GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ @ 0x1800347F0 (-GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ.c)
 *     ?SetGlobalMatrix@ShaderManager@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMatrix@Math@Utils@3@@Z @ 0x18005072C (-SetGlobalMatrix@ShaderManager@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ?SetGlobalTexture@ShaderManager@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@5@@Z @ 0x180050764 (-SetGlobalTexture@ShaderManager@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V.c)
 *     ?SetGlobalTextureSampler@ShaderManager@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@VSampler@Engine@Spectre@@@5@@Z @ 0x18005079C (-SetGlobalTextureSampler@ShaderManager@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D.c)
 *     ?GetTransformMatrix@Camera@Engine@Spectre@@QEBAAEBUMatrix@Math@Utils@3@W4CoordinateSystem@23@0@Z @ 0x18005BB34 (-GetTransformMatrix@Camera@Engine@Spectre@@QEBAAEBUMatrix@Math@Utils@3@W4CoordinateSystem@23@0@Z.c)
 *     ?Transpose@Matrix@Math@Utils@Spectre@@QEBA?AU1234@XZ @ 0x18005D788 (-Transpose@Matrix@Math@Utils@Spectre@@QEBA-AU1234@XZ.c)
 *     ?GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ @ 0x18008139C (-GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall Spectre::Engine::Camera::ResolveReadableDepth(Spectre::Engine::Component *this, __int64 a2)
{
  __int64 v4; // rdi
  char v5; // r12
  char v6; // al
  char v7; // r15
  Spectre::Engine::Engine *Engine; // rax
  struct Spectre::Engine::ShaderManager *ShaderManager; // r14
  __int128 *TransformMatrix; // rax
  __int128 *v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int128 v14; // xmm3
  __int64 v16; // [rsp+28h] [rbp-79h] BYREF
  std::_Ref_count_base *v17; // [rsp+30h] [rbp-71h]
  __int64 v18; // [rsp+38h] [rbp-69h] BYREF
  std::_Ref_count_base *v19; // [rsp+40h] [rbp-61h]
  __int64 v20; // [rsp+48h] [rbp-59h] BYREF
  std::_Ref_count_base *v21; // [rsp+50h] [rbp-51h]
  __int128 v22; // [rsp+58h] [rbp-49h] BYREF
  __int128 v23; // [rsp+68h] [rbp-39h]
  __int128 v24; // [rsp+78h] [rbp-29h]
  __int128 v25; // [rsp+88h] [rbp-19h]
  _BYTE v26[8]; // [rsp+98h] [rbp-9h] BYREF
  std::_Ref_count_base *v27; // [rsp+A0h] [rbp-1h]
  _BYTE v28[64]; // [rsp+A8h] [rbp+7h] BYREF

  if ( *((_DWORD *)this + 43) )
  {
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
      &v20,
      (_QWORD *)this + 19);
    v4 = v20;
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v20 + 48LL))(v20, v26);
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v4 + 72LL))(
           v4,
           a2,
           *((unsigned int *)this + 43));
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 72LL))(v4, a2, 3LL);
    v7 = v6;
    if ( v5 || v6 )
    {
      Engine = Spectre::Engine::Component::GetEngine(this);
      ShaderManager = Spectre::Engine::Engine::GetShaderManager(Engine);
      if ( !std::string::empty((__int64)this + 184) && v5 )
      {
        (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v4 + 56LL))(
          v4,
          &v16,
          *((unsigned int *)this + 43));
        (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v4 + 64LL))(
          v4,
          &v18,
          *((unsigned int *)this + 43));
        Spectre::Engine::ShaderManager::SetGlobalTexture((__int64)ShaderManager, (__int64)this + 184, &v16);
        Spectre::Engine::ShaderManager::SetGlobalTextureSampler((__int64)ShaderManager, (__int64)this + 184, &v18);
        if ( v19 )
          std::_Ref_count_base::_Decref(v19);
        if ( v17 )
          std::_Ref_count_base::_Decref(v17);
      }
      if ( !std::string::empty((__int64)this + 216) )
      {
        if ( v7 )
        {
          (*(void (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v4 + 56LL))(v4, &v16, 3LL);
          Spectre::Engine::ShaderManager::SetGlobalTexture((__int64)ShaderManager, (__int64)this + 216, &v16);
          if ( v17 )
            std::_Ref_count_base::_Decref(v17);
        }
      }
      if ( !std::string::empty((__int64)this + 248) )
      {
        TransformMatrix = (__int128 *)Spectre::Engine::Camera::GetTransformMatrix(this, 2, 0);
        v22 = *TransformMatrix;
        v23 = TransformMatrix[1];
        v24 = TransformMatrix[2];
        v25 = TransformMatrix[3];
        v11 = (__int128 *)Spectre::Utils::Math::Matrix::Transpose(&v22, v28);
        v12 = v11[1];
        v13 = v11[2];
        v14 = v11[3];
        v22 = *v11;
        v23 = v12;
        v24 = v13;
        v25 = v14;
        Spectre::Engine::ShaderManager::SetGlobalMatrix((__int64)ShaderManager);
      }
    }
    if ( v27 )
      std::_Ref_count_base::_Decref(v27);
    if ( v21 )
      std::_Ref_count_base::_Decref(v21);
  }
  return 1;
}
