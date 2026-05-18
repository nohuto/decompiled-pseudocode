/*
 * XREFs of ?AddDepthOnlyShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@_N@Z @ 0x180099D68
 * Callers:
 *     ?AddShaderPipelines@StandardShaderExtension@Engine@Spectre@@MEAAXPEAVShaderManager@23@@Z @ 0x18007D290 (-AddShaderPipelines@StandardShaderExtension@Engine@Spectre@@MEAAXPEAVShaderManager@23@@Z.c)
 *     ?AddShaderPipelines@UnlitShaderExtension@Engine@Spectre@@MEAAXPEAVShaderManager@23@@Z @ 0x18007FB90 (-AddShaderPipelines@UnlitShaderExtension@Engine@Spectre@@MEAAXPEAVShaderManager@23@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$CreateResource@VRenderState@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VRenderState@Engine@Spectre@@@std@@XZ @ 0x180043528 (--$CreateResource@VRenderState@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ea_180043528.c)
 *     ?GetEngine@ShaderManager@Engine@Spectre@@QEBAPEAV223@XZ @ 0x18004FA78 (-GetEngine@ShaderManager@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?GetOptionGroup@ShaderManager@Engine@Spectre@@QEBA_KAEBV?$initializer_list@W4ShaderOption@Engine@Spectre@@@std@@@Z @ 0x18004FAB0 (-GetOptionGroup@ShaderManager@Engine@Spectre@@QEBA_KAEBV-$initializer_list@W4ShaderOption@Engine.c)
 *     ?CreatePipeline@ShaderFamily@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@_K0_N@Z @ 0x1800602F8 (-CreatePipeline@ShaderFamily@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPipeline@En_ea_1800602F8.c)
 *     ?FindOption@ShaderFamily@Engine@Spectre@@QEBA?AW4ShaderOption@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180060910 (-FindOption@ShaderFamily@Engine@Spectre@@QEBA-AW4ShaderOption@23@AEBV-$basic_string@DU-$char_tra.c)
 *     ?ShaderOptionIterateCombination@Engine@Spectre@@YA_NAEA_K_K@Z @ 0x180061480 (-ShaderOptionIterateCombination@Engine@Spectre@@YA_NAEA_K_K@Z.c)
 *     ?SetBackfaceCulledInvertedRenderState@ShaderPipeline@Engine@Spectre@@QEAAXV?$shared_ptr@VRenderState@Engine@Spectre@@@std@@@Z @ 0x180087548 (-SetBackfaceCulledInvertedRenderState@ShaderPipeline@Engine@Spectre@@QEAAXV-$shared_ptr@VRenderS.c)
 *     ?SetBackfaceCulledRenderState@ShaderPipeline@Engine@Spectre@@QEAAXV?$shared_ptr@VRenderState@Engine@Spectre@@@std@@@Z @ 0x180087578 (-SetBackfaceCulledRenderState@ShaderPipeline@Engine@Spectre@@QEAAXV-$shared_ptr@VRenderState@Eng.c)
 *     ?SetInvertedRenderState@ShaderPipeline@Engine@Spectre@@QEAAXV?$shared_ptr@VRenderState@Engine@Spectre@@@std@@@Z @ 0x1800875A8 (-SetInvertedRenderState@ShaderPipeline@Engine@Spectre@@QEAAXV-$shared_ptr@VRenderState@Engine@Sp.c)
 *     ?SetRenderState@ShaderPipeline@Engine@Spectre@@QEAAXV?$shared_ptr@VRenderState@Engine@Spectre@@@std@@@Z @ 0x1800875D8 (-SetRenderState@ShaderPipeline@Engine@Spectre@@QEAAXV-$shared_ptr@VRenderState@Engine@Spectre@@@.c)
 *     ?SetShader@ShaderPipeline@Engine@Spectre@@QEAAXW4EShaderType@23@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180087710 (-SetShader@ShaderPipeline@Engine@Spectre@@QEAAXW4EShaderType@23@V-$basic_string@DU-$char_traits@.c)
 *     ?SetVertexLayout@ShaderPipeline@Engine@Spectre@@QEAAXVVertexLayoutDesc@VertexLayoutBase@23@@Z @ 0x180087BBC (-SetVertexLayout@ShaderPipeline@Engine@Spectre@@QEAAXVVertexLayoutDesc@VertexLayoutBase@23@@Z.c)
 *     ?Create@RenderState@Engine@Spectre@@UEAAXAEBURenderStateDesc@23@PEAVRenderDevice@23@@Z @ 0x180088360 (-Create@RenderState@Engine@Spectre@@UEAAXAEBURenderStateDesc@23@PEAVRenderDevice@23@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@1@QEAV21@AEBV21@@Z @ 0x1800983CC (--$_Emplace_reallocate@AEBV-$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@-$vector@V-$share.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::BaseShaderExtension::AddDepthOnlyShaderPipelines(
        Spectre::Engine::BaseShaderExtension *this,
        struct Spectre::Engine::ShaderManager *a2,
        char a3)
{
  struct Spectre::Engine::Engine *Engine; // r13
  int v6; // edx
  int v7; // eax
  unsigned int Option; // ebx
  unsigned int v9; // esi
  unsigned int v10; // r14d
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  Spectre::Engine::RenderState **v14; // rax
  unsigned __int64 OptionGroup; // r12
  unsigned __int64 v16; // r8
  __int64 v17; // r15
  __int64 v18; // r14
  char v19; // si
  __int64 v20; // r8
  __int64 v21; // rbx
  _QWORD *v22; // rax
  __int64 v23; // r8
  __int64 *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // r8
  __int64 *v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // r8
  __int64 *v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // r8
  unsigned __int64 *v33; // rbx
  void **v34; // rax
  _QWORD *v35; // rcx
  unsigned __int64 *v37; // [rsp+38h] [rbp-C8h] BYREF
  std::_Ref_count_base *v38; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v39; // [rsp+48h] [rbp-B8h] BYREF
  Spectre::Engine::RenderState *v40; // [rsp+50h] [rbp-B0h] BYREF
  std::_Ref_count_base *v41; // [rsp+58h] [rbp-A8h]
  __int64 v42; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v43; // [rsp+68h] [rbp-98h]
  __int128 v44; // [rsp+70h] [rbp-90h]
  __int64 v45; // [rsp+80h] [rbp-80h]
  _BYTE v46[20]; // [rsp+88h] [rbp-78h]
  char v47; // [rsp+9Ch] [rbp-64h]
  int v48; // [rsp+9Dh] [rbp-63h]
  int v49; // [rsp+A4h] [rbp-5Ch]
  unsigned int v50; // [rsp+B0h] [rbp-50h]
  int v51; // [rsp+B4h] [rbp-4Ch]
  __int64 v52; // [rsp+B8h] [rbp-48h]
  __int64 v53; // [rsp+C0h] [rbp-40h] BYREF
  char v54[8]; // [rsp+D0h] [rbp-30h] BYREF
  std::_Ref_count_base *v55; // [rsp+D8h] [rbp-28h]
  __int64 v56; // [rsp+E0h] [rbp-20h] BYREF
  char v57[8]; // [rsp+F0h] [rbp-10h] BYREF
  std::_Ref_count_base *v58; // [rsp+F8h] [rbp-8h]
  __int64 v59; // [rsp+100h] [rbp+0h] BYREF
  char v60[8]; // [rsp+110h] [rbp+10h] BYREF
  std::_Ref_count_base *v61; // [rsp+118h] [rbp+18h]
  __int64 v62; // [rsp+120h] [rbp+20h] BYREF
  _DWORD v63[3]; // [rsp+130h] [rbp+30h] BYREF
  char v64; // [rsp+13Ch] [rbp+3Ch] BYREF

  Engine = Spectre::Engine::ShaderManager::GetEngine(a2);
  v6 = 23;
  if ( *((int *)this + 26) < 40960 )
    v6 = 0;
  v7 = 0;
  if ( (*((_BYTE *)Engine + 560) & 2) == 0 )
    v7 = v6;
  v51 = v7;
  Option = Spectre::Engine::ShaderFamily::FindOption(*((_QWORD *)this + 7));
  v9 = Spectre::Engine::ShaderFamily::FindOption(*((_QWORD *)this + 7));
  v10 = Spectre::Engine::ShaderFamily::FindOption(*((_QWORD *)this + 7));
  v11 = Spectre::Engine::ShaderFamily::FindOption(*((_QWORD *)this + 7));
  v50 = v11;
  v12 = Option;
  v13 = 1LL << Option;
  v52 = v13;
  if ( a3 )
  {
    v63[0] = v9;
    v63[1] = v10;
    v63[2] = v11;
    v37 = (unsigned __int64 *)v63;
    v14 = (Spectre::Engine::RenderState **)&v64;
  }
  else
  {
    v39 = __PAIR64__(v10, v9);
    v37 = &v39;
    v14 = &v40;
  }
  v38 = (std::_Ref_count_base *)v14;
  OptionGroup = Spectre::Engine::ShaderManager::GetOptionGroup(v12, (_DWORD **)&v37);
  v16 = 0LL;
  v39 = 0LL;
  v17 = 1LL << v9;
  v18 = 1LL << v10;
  v19 = 0;
  while ( 1 )
  {
    v20 = v13 | v16;
    if ( a3 && _bittest64(&v20, v50) )
      v19 = 1;
    v21 = v20 & v17;
    if ( v19 && (v21 || (v20 & v18) != 0) )
    {
      v19 = 0;
    }
    else
    {
      Spectre::Engine::ShaderFamily::CreatePipeline(*((__int64 **)this + 7), &v37, v20, OptionGroup & ~v20, 1);
      *(_QWORD *)&v44 = 0LL;
      BYTE8(v44) = 0;
      *(_OWORD *)&v46[4] = 0LL;
      v49 = 3;
      LODWORD(v42) = 0;
      HIDWORD(v42) = 2 - (v19 != 0);
      v43 = v51 & (unsigned int)-(v21 != 0);
      v48 = 16843009;
      HIDWORD(v44) = 2;
      v45 = 0x200000002LL;
      *(_DWORD *)v46 = 7;
      v47 = 1;
      Spectre::Engine::Engine::CreateResource<Spectre::Engine::RenderState,>((__int64 *)Engine, (__int64)&v40);
      Spectre::Engine::RenderState::Create(v40, (const struct Spectre::Engine::RenderStateDesc *)&v42, 0LL);
      v22 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
              &v53,
              &v40);
      Spectre::Engine::ShaderPipeline::SetRenderState(v23, v22);
      if ( v19 )
      {
        v19 = 0;
      }
      else
      {
        HIDWORD(v42) = 1;
        v24 = (__int64 *)Spectre::Engine::Engine::CreateResource<Spectre::Engine::RenderState,>(
                           (__int64 *)Engine,
                           (__int64)v54);
        std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(&v40, v24);
        v19 = 0;
        if ( v55 )
          std::_Ref_count_base::_Decref(v55);
        Spectre::Engine::RenderState::Create(v40, (const struct Spectre::Engine::RenderStateDesc *)&v42, 0LL);
        v25 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
                &v56,
                &v40);
        Spectre::Engine::ShaderPipeline::SetBackfaceCulledRenderState(v26, v25);
        HIBYTE(v48) = 0;
        v27 = (__int64 *)Spectre::Engine::Engine::CreateResource<Spectre::Engine::RenderState,>(
                           (__int64 *)Engine,
                           (__int64)v57);
        std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(&v40, v27);
        if ( v58 )
          std::_Ref_count_base::_Decref(v58);
        Spectre::Engine::RenderState::Create(v40, (const struct Spectre::Engine::RenderStateDesc *)&v42, 0LL);
        v28 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
                &v59,
                &v40);
        Spectre::Engine::ShaderPipeline::SetBackfaceCulledInvertedRenderState(v29, v28);
        HIDWORD(v42) = 2;
        v30 = (__int64 *)Spectre::Engine::Engine::CreateResource<Spectre::Engine::RenderState,>(
                           (__int64 *)Engine,
                           (__int64)v60);
        std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(&v40, v30);
        if ( v61 )
          std::_Ref_count_base::_Decref(v61);
        Spectre::Engine::RenderState::Create(v40, (const struct Spectre::Engine::RenderStateDesc *)&v42, 0LL);
        v31 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
                &v62,
                &v40);
        Spectre::Engine::ShaderPipeline::SetInvertedRenderState(v32, v31);
      }
      LODWORD(v42) = 0;
      v45 = 0LL;
      *(_QWORD *)v46 = 0LL;
      v44 = 0LL;
      if ( v21 )
      {
        v43 = *((_QWORD *)this + 14);
        Spectre::Engine::ShaderPipeline::SetVertexLayout((__int64)v37, (__int64)&v42);
      }
      else
      {
        v43 = *((_QWORD *)this + 15);
        Spectre::Engine::ShaderPipeline::SetVertexLayout((__int64)v37, (__int64)&v42);
        v33 = v37;
        v34 = (void **)std::string::string(&v42, (__int64)word_180106082);
        Spectre::Engine::ShaderPipeline::SetShader(v33, 5, v34);
      }
      v35 = (_QWORD *)*((_QWORD *)this + 17);
      if ( v35 == *((_QWORD **)this + 18) )
      {
        std::vector<std::shared_ptr<Spectre::Engine::ShaderPipeline>>::_Emplace_reallocate<std::shared_ptr<Spectre::Engine::ShaderPipeline> const &>(
          (char **)this + 16,
          *((char **)this + 17),
          &v37);
      }
      else
      {
        std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          v35,
          &v37);
        *((_QWORD *)this + 17) += 16LL;
      }
      if ( v41 )
        std::_Ref_count_base::_Decref(v41);
      if ( v38 )
        std::_Ref_count_base::_Decref(v38);
    }
    if ( !Spectre::Engine::ShaderOptionIterateCombination((Spectre::Engine *)&v39, OptionGroup) )
      break;
    v16 = v39;
    v13 = v52;
  }
}
