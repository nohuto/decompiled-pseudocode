/*
 * XREFs of ?CreateDeviceTextureHelper@Texture@Engine@Spectre@@AEAAXAEBUTextureImageSetView@23@PEAVRenderDevice@23@@Z @ 0x180056368
 * Callers:
 *     ?AttachDevice@Texture@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180055980 (-AttachDevice@Texture@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@.c)
 *     ?Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z @ 0x180055E20 (-Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$CreateResource@VDeviceTexture@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@XZ @ 0x180015EE4 (--$CreateResource@VDeviceTexture@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA-AV-$shared_p.c)
 *     ?GetID@RenderDevice@Engine@Spectre@@QEBA?AW4RenderDeviceID@23@XZ @ 0x1800265D0 (-GetID@RenderDevice@Engine@Spectre@@QEBA-AW4RenderDeviceID@23@XZ.c)
 *     ?GetName@RendererResource@Engine@Spectre@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x1800295BC (-GetName@RendererResource@Engine@Spectre@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloca.c)
 *     ?SetName@RendererResource@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800297A4 (-SetName@RendererResource@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 *     ??$_Find@W4RenderDeviceID@Engine@Spectre@@@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@PEAX@1@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x180043548 (--$_Find@W4RenderDeviceID@Engine@Spectre@@@-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spect.c)
 *     ?AttachDeviceTextureInternal@Texture@Engine@Spectre@@AEAAXV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@@Z @ 0x180055C68 (-AttachDeviceTextureInternal@Texture@Engine@Spectre@@AEAAXV-$shared_ptr@VDeviceTexture@Engine@Sp.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::Texture::CreateDeviceTextureHelper(
        Spectre::Engine::Texture *this,
        const struct Spectre::Engine::TextureImageSetView *a2,
        struct Spectre::Engine::RenderDevice *a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rcx
  __int64 *v8; // rax
  __int64 *v9; // rax
  void **Name; // rax
  std::_Ref_count_base *v11; // rbx
  std::_Ref_count_base *v12[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v13; // [rsp+30h] [rbp-20h] BYREF
  std::_Ref_count_base *v14; // [rsp+38h] [rbp-18h]
  int ID; // [rsp+70h] [rbp+20h] BYREF

  *(_OWORD *)v12 = 0LL;
  ID = Spectre::Engine::RenderDevice::GetID((__int64)a3);
  v6 = std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>::_Find<enum Spectre::Engine::RenderDeviceID>(
         (__int64)this + 112,
         (__int64)&ID);
  if ( v6 == *((_QWORD *)this + 14) || !std::operator!=<Spectre::Engine::Scene>((_QWORD *)(v6 + 40)) )
  {
    v8 = Spectre::Engine::RenderDevice::CreateResource<Spectre::Engine::DeviceTexture>((__int64)a3, &v13);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v12, v8);
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
    v9 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           &v13,
           v12);
    Spectre::Engine::Texture::AttachDeviceTextureInternal((__int64)this, v9);
  }
  else
  {
    std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)v12, v7);
  }
  Name = (void **)Spectre::Engine::RendererResource::GetName((__int64)this, &v13);
  v11 = v12[0];
  Spectre::Engine::RendererResource::SetName((__int64)v12[0], Name);
  (*(void (__fastcall **)(std::_Ref_count_base *, _QWORD, const struct Spectre::Engine::TextureImageSetView *))(*(_QWORD *)v11 + 40LL))(
    v11,
    *((_QWORD *)this + 16),
    a2);
  if ( v12[1] )
    std::_Ref_count_base::_Decref(v12[1]);
}
