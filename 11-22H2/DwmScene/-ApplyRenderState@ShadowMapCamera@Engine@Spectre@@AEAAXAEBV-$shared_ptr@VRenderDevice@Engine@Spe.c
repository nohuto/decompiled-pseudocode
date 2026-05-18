/*
 * XREFs of ?ApplyRenderState@ShadowMapCamera@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18008DB9C
 * Callers:
 *     ?RenderScene@ShadowMapCamera@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18008E9C0 (-RenderScene@ShadowMapCamera@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$?8VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DD0 (--$-8VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetFormat@FrameBuffer@Engine@Spectre@@QEBA?AW4Format@23@XZ @ 0x180028970 (-GetFormat@FrameBuffer@Engine@Spectre@@QEBA-AW4Format@23@XZ.c)
 *     ?GetWidth@FrameBuffer@Engine@Spectre@@QEBAIXZ @ 0x180028A10 (-GetWidth@FrameBuffer@Engine@Spectre@@QEBAIXZ.c)
 *     ?GetWidth@DepthBuffer@Engine@Spectre@@QEBAIXZ @ 0x18005BC50 (-GetWidth@DepthBuffer@Engine@Spectre@@QEBAIXZ.c)
 *     ?SetDepthBuffer@Camera@Engine@Spectre@@QEAAXV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@@Z @ 0x18005D038 (-SetDepthBuffer@Camera@Engine@Spectre@@QEAAXV-$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@@Z.c)
 *     ?SetFrameBuffer@Camera@Engine@Spectre@@QEAAXV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@Z @ 0x18005D1EC (-SetFrameBuffer@Camera@Engine@Spectre@@QEAAXV-$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@Z.c)
 *     ?SetRenderPassEnabled@Camera@Engine@Spectre@@QEAAXH_N@Z @ 0x18005D30C (-SetRenderPassEnabled@Camera@Engine@Spectre@@QEAAXH_N@Z.c)
 *     ?SetShaderProperty@Camera@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UVector4@Math@Utils@3@H@Z @ 0x18005D3F0 (-SetShaderProperty@Camera@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 *     ?GetColorFrameBuffer@ShadowMapCamera@Engine@Spectre@@QEBA?AV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@XZ @ 0x18008E178 (-GetColorFrameBuffer@ShadowMapCamera@Engine@Spectre@@QEBA-AV-$shared_ptr@VFrameBuffer@Engine@Spe.c)
 *     ?RecreateColorFrameBuffer@ShadowMapCamera@Engine@Spectre@@AEAAXW4Format@23@@Z @ 0x18008E728 (-RecreateColorFrameBuffer@ShadowMapCamera@Engine@Spectre@@AEAAXW4Format@23@@Z.c)
 *     ?RecreateDepthBuffer@ShadowMapCamera@Engine@Spectre@@AEAAXXZ @ 0x18008E838 (-RecreateDepthBuffer@ShadowMapCamera@Engine@Spectre@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::ShadowMapCamera::ApplyRenderState(Spectre::Engine::ShadowMapCamera *this)
{
  Spectre::Engine::DepthBuffer **v2; // rdi
  __int64 *v3; // rax
  __int64 *v4; // rax
  int Format; // eax
  int v6; // edx
  __int64 *ColorFrameBuffer; // rax
  int v8; // xmm1_4
  unsigned int v9; // xmm2_4
  _QWORD *v10; // rax
  __int128 v11; // [rsp+20h] [rbp-40h] BYREF
  Spectre::Engine::FrameBuffer *v12[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v13[4]; // [rsp+40h] [rbp-20h] BYREF

  if ( *((_DWORD *)this + 490) )
  {
    Spectre::Engine::ShadowMapCamera::GetColorFrameBuffer(this, v12);
    if ( std::operator==<Spectre::Engine::Scene>(v12)
      || (unsigned int)Spectre::Engine::FrameBuffer::GetWidth(v12[0]) != *((_DWORD *)this + 485)
      || (Format = Spectre::Engine::FrameBuffer::GetFormat((__int64)v12[0]), Format != v6) )
    {
      Spectre::Engine::ShadowMapCamera::RecreateColorFrameBuffer(this);
    }
    ColorFrameBuffer = (__int64 *)Spectre::Engine::ShadowMapCamera::GetColorFrameBuffer(this, &v11);
    Spectre::Engine::Camera::SetFrameBuffer(this, ColorFrameBuffer);
    v11 = 0LL;
    Spectre::Engine::Camera::SetDepthBuffer(this, (__int64 *)&v11);
    Spectre::Engine::Camera::SetRenderPassEnabled(this, *((_DWORD *)this + 482), 0);
    Spectre::Engine::Camera::SetRenderPassEnabled(this, *((_DWORD *)this + 483), 1);
    Spectre::Engine::Camera::SetRenderPassEnabled(this, *((_DWORD *)this + 484), 1);
    *((_BYTE *)this + 465) |= 1u;
    v8 = *((_DWORD *)this + 101);
    v9 = *((_DWORD *)this + 102);
    LODWORD(v11) = *((_DWORD *)this + 100);
    DWORD1(v11) = v8;
    *((_QWORD *)&v11 + 1) = v9;
    v10 = std::string::string(v13, (__int64)&Spectre::Engine::ShaderConstants::kGlobal_DepthBiasSettings);
    Spectre::Engine::Camera::SetShaderProperty((__int64)this, (__int64)v10, &v11, -1);
    if ( v12[1] )
      std::_Ref_count_base::_Decref(v12[1]);
  }
  else
  {
    v2 = (Spectre::Engine::DepthBuffer **)((char *)this + 1832);
    if ( std::operator==<Spectre::Engine::Scene>((_QWORD *)this + 229)
      || (unsigned int)Spectre::Engine::DepthBuffer::GetWidth(*v2) != *((_DWORD *)this + 485) )
    {
      Spectre::Engine::ShadowMapCamera::RecreateDepthBuffer(this);
    }
    *(_OWORD *)v12 = 0LL;
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 239, (__int64 *)v12);
    if ( v12[1] )
      std::_Ref_count_base::_Decref(v12[1]);
    v3 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           v12,
           (_QWORD *)this + 239);
    Spectre::Engine::Camera::SetFrameBuffer(this, v3);
    v4 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           v12,
           v2);
    Spectre::Engine::Camera::SetDepthBuffer(this, v4);
    Spectre::Engine::Camera::SetRenderPassEnabled(this, *((_DWORD *)this + 482), 1);
    Spectre::Engine::Camera::SetRenderPassEnabled(this, *((_DWORD *)this + 483), 0);
    Spectre::Engine::Camera::SetRenderPassEnabled(this, *((_DWORD *)this + 484), 0);
    *((_BYTE *)this + 465) &= ~1u;
  }
}
