/*
 * XREFs of ?AttachDevice@Texture@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180055980
 * Callers:
 *     ?ApplyState@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@VShaderTypeGroup@23@@Z @ 0x1800846B8 (-ApplyState@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCommandList@Engine@Spectr.c)
 * Callees:
 *     ??$?8VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DD0 (--$-8VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ?GetID@RenderDevice@Engine@Spectre@@QEBA?AW4RenderDeviceID@23@XZ @ 0x1800265D0 (-GetID@RenderDevice@Engine@Spectre@@QEBA-AW4RenderDeviceID@23@XZ.c)
 *     ?AttachDevice@SharedResource@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800294D0 (-AttachDevice@SharedResource@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@.c)
 *     ?GetEngine@SharedResource@Engine@Spectre@@UEBAPEAV223@XZ @ 0x1800295B0 (-GetEngine@SharedResource@Engine@Spectre@@UEBAPEAV223@XZ.c)
 *     ?GetOption@RendererResource@Engine@Spectre@@QEBA_NW4EResourceOption@123@@Z @ 0x1800295E4 (-GetOption@RendererResource@Engine@Spectre@@QEBA_NW4EResourceOption@123@@Z.c)
 *     ?NotifyDeviceReady@SharedResource@Engine@Spectre@@IEAAXW4RenderDeviceID@23@@Z @ 0x180029680 (-NotifyDeviceReady@SharedResource@Engine@Spectre@@IEAAXW4RenderDeviceID@23@@Z.c)
 *     ?GetResourceOption@Engine@1Spectre@@QEBA_NW4EType@RendererResource@12@W4EResourceOption@412@@Z @ 0x180034764 (-GetResourceOption@Engine@1Spectre@@QEBA_NW4EType@RendererResource@12@W4EResourceOption@412@@Z.c)
 *     ??$_Find@W4RenderDeviceID@Engine@Spectre@@@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@PEAX@1@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x180043548 (--$_Find@W4RenderDeviceID@Engine@Spectre@@@-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spect.c)
 *     ?CreateDeviceTextureHelper@Texture@Engine@Spectre@@AEAAXAEBUTextureImageSetView@23@PEAVRenderDevice@23@@Z @ 0x180056368 (-CreateDeviceTextureHelper@Texture@Engine@Spectre@@AEAAXAEBUTextureImageSetView@23@PEAVRenderDev.c)
 *     ?reset@?$unique_ptr@UTextureImageSet@Engine@Spectre@@U?$default_delete@UTextureImageSet@Engine@Spectre@@@std@@@std@@QEAAXPEAUTextureImageSet@Engine@Spectre@@@Z @ 0x180056B34 (-reset@-$unique_ptr@UTextureImageSet@Engine@Spectre@@U-$default_delete@UTextureImageSet@Engine@S.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall Spectre::Engine::Texture::AttachDevice(Spectre::Engine::Texture *this, __int64 *a2)
{
  char result; // al
  unsigned int v5; // ebp
  __int64 v6; // rax
  const struct Spectre::Engine::TextureImageSetView *v7; // rdx
  Spectre::Engine::SharedResource *v8; // rcx
  struct Spectre::Engine::Engine *Engine; // rax
  unsigned int ID; // [rsp+38h] [rbp+10h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !result )
  {
    ID = Spectre::Engine::RenderDevice::GetID(*a2);
    v5 = ID;
    v6 = std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>::_Find<enum Spectre::Engine::RenderDeviceID>(
           (__int64)this + 112,
           (__int64)&ID);
    if ( v6 == *((_QWORD *)this + 14) || (result = std::operator==<Spectre::Engine::Scene>((_QWORD *)(v6 + 40))) != 0 )
    {
      result = Spectre::Engine::SharedResource::AttachDevice((__int64)this, a2);
      v7 = (const struct Spectre::Engine::TextureImageSetView *)*((_QWORD *)this + 17);
      if ( v7 )
      {
        Spectre::Engine::Texture::CreateDeviceTextureHelper(this, v7, (struct Spectre::Engine::RenderDevice *)*a2);
        Spectre::Engine::SharedResource::NotifyDeviceReady((__int64)this, v5);
        if ( Spectre::Engine::RendererResource::GetOption((__int64)this, 8) )
          return std::unique_ptr<Spectre::Engine::TextureImageSet>::reset((char *)this + 136, 0LL);
        Engine = Spectre::Engine::SharedResource::GetEngine(v8);
        result = Spectre::Engine::Engine::GetResourceOption((__int64)Engine, 1);
        if ( result )
          return std::unique_ptr<Spectre::Engine::TextureImageSet>::reset((char *)this + 136, 0LL);
      }
    }
  }
  return result;
}
