/*
 * XREFs of ?CreateDeviceFrameBufferHelper@FrameBuffer@Engine@Spectre@@IEAAXPEAVRenderDevice@23@@Z @ 0x180028690
 * Callers:
 *     ?AttachDevice@FrameBuffer@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800281C0 (-AttachDevice@FrameBuffer@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 *     ?Create@FrameBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z @ 0x18002836C (-Create@FrameBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$CreateResource@VDeviceFrameBuffer@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@XZ @ 0x18001071C (--$CreateResource@VDeviceFrameBuffer@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA-AV-$shar.c)
 *     ?shared_from_this@?$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@2@XZ @ 0x180011D4C (-shared_from_this@-$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr@VSc.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?GetID@RenderDevice@Engine@Spectre@@QEBA?AW4RenderDeviceID@23@XZ @ 0x1800265D0 (-GetID@RenderDevice@Engine@Spectre@@QEBA-AW4RenderDeviceID@23@XZ.c)
 *     ??$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@?$map@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@@std@@PEAX@std@@_N@1@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x180027C68 (--$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@-$map@W4RenderDeviceID@Engine@Spectre@@V.c)
 *     ?GetFormat@FrameBuffer@Engine@Spectre@@QEBA?AW4Format@23@XZ @ 0x180028970 (-GetFormat@FrameBuffer@Engine@Spectre@@QEBA-AW4Format@23@XZ.c)
 *     ?GetHeight@FrameBuffer@Engine@Spectre@@QEBAIXZ @ 0x1800289C0 (-GetHeight@FrameBuffer@Engine@Spectre@@QEBAIXZ.c)
 *     ?GetWidth@FrameBuffer@Engine@Spectre@@QEBAIXZ @ 0x180028A10 (-GetWidth@FrameBuffer@Engine@Spectre@@QEBAIXZ.c)
 *     ?AttachDevice@SharedResource@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800294D0 (-AttachDevice@SharedResource@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@.c)
 *     ?GetName@RendererResource@Engine@Spectre@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x1800295BC (-GetName@RendererResource@Engine@Spectre@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloca.c)
 *     ?NotifyDeviceReady@SharedResource@Engine@Spectre@@IEAAXW4RenderDeviceID@23@@Z @ 0x180029680 (-NotifyDeviceReady@SharedResource@Engine@Spectre@@IEAAXW4RenderDeviceID@23@@Z.c)
 *     ?SetName@RendererResource@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800297A4 (-SetName@RendererResource@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 *     ?AttachDeviceTexture@Texture@Engine@Spectre@@QEAAXV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@@Z @ 0x180055A68 (-AttachDeviceTexture@Texture@Engine@Spectre@@QEAAXV-$shared_ptr@VDeviceTexture@Engine@Spectre@@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::FrameBuffer::CreateDeviceFrameBufferHelper(
        Spectre::Engine::FrameBuffer *this,
        struct Spectre::Engine::RenderDevice *a2)
{
  __int64 v4; // rdx
  unsigned int ID; // esi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 Name; // rax
  __int64 v9; // rbx
  unsigned int Width; // eax
  void (__fastcall *v11)(__int64, _QWORD); // r11
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // [rsp+30h] [rbp-50h] BYREF
  std::_Ref_count_base *v18; // [rsp+38h] [rbp-48h]
  __int64 v19; // [rsp+40h] [rbp-40h] BYREF
  std::_Ref_count_base *v20; // [rsp+48h] [rbp-38h]
  _BYTE v21[32]; // [rsp+60h] [rbp-20h] BYREF
  unsigned int v22; // [rsp+A0h] [rbp+20h] BYREF

  ID = Spectre::Engine::RenderDevice::GetID((__int64)a2);
  if ( ID )
  {
    v6 = std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this(v4 + 8, &v19);
    Spectre::Engine::SharedResource::AttachDevice(this, v6);
    if ( v20 )
      std::_Ref_count_base::_Decref(v20);
    Spectre::Engine::RenderDevice::CreateResource<Spectre::Engine::DeviceFrameBuffer>((__int64)a2, &v17);
    v7 = v17;
    Name = Spectre::Engine::RendererResource::GetName(this, &v19);
    Spectre::Engine::RendererResource::SetName(v7, Name);
    v9 = v17;
    Spectre::Engine::FrameBuffer::GetFormat(this, *((unsigned int *)this + 28));
    Spectre::Engine::FrameBuffer::GetHeight(this);
    Width = Spectre::Engine::FrameBuffer::GetWidth(this);
    v11(v9, Width);
    v22 = ID;
    v12 = std::map<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceFrameBuffer>>::_Try_emplace<enum Spectre::Engine::RenderDeviceID const &,>(
            (_QWORD *)this + 15,
            (__int64)&v19,
            &v22);
    std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(*(_QWORD *)v12 + 40LL), &v17);
    if ( *((_QWORD *)this + 17) )
    {
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
        &v19,
        (_QWORD *)(v17 + 96));
      Spectre::Engine::Texture::AttachDeviceTexture(v13, &v19);
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
        &v19,
        (_QWORD *)(v17 + 96));
      v14 = Spectre::Engine::RendererResource::GetName(*((_QWORD *)this + 17), v21);
      Spectre::Engine::RendererResource::SetName(v19, v14);
      if ( v20 )
        std::_Ref_count_base::_Decref(v20);
    }
    if ( *((_QWORD *)this + 19) )
    {
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
        &v19,
        (_QWORD *)(v17 + 112));
      Spectre::Engine::Texture::AttachDeviceTexture(v15, &v19);
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
        &v19,
        (_QWORD *)(v17 + 112));
      v16 = Spectre::Engine::RendererResource::GetName(*((_QWORD *)this + 19), v21);
      Spectre::Engine::RendererResource::SetName(v19, v16);
      if ( v20 )
        std::_Ref_count_base::_Decref(v20);
    }
    Spectre::Engine::SharedResource::NotifyDeviceReady(this, ID);
    if ( v18 )
      std::_Ref_count_base::_Decref(v18);
  }
}
