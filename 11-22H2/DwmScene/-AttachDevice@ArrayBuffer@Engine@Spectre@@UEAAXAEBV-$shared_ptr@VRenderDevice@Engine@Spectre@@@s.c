/*
 * XREFs of ?AttachDevice@ArrayBuffer@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800888F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?GetID@RenderDevice@Engine@Spectre@@QEBA?AW4RenderDeviceID@23@XZ @ 0x1800265D0 (-GetID@RenderDevice@Engine@Spectre@@QEBA-AW4RenderDeviceID@23@XZ.c)
 *     ?GetOption@RendererResource@Engine@Spectre@@QEBA_NW4EResourceOption@123@@Z @ 0x1800295E4 (-GetOption@RendererResource@Engine@Spectre@@QEBA_NW4EResourceOption@123@@Z.c)
 *     ?IsDeviceReady@SharedResource@Engine@Spectre@@QEBA_NW4RenderDeviceID@23@@Z @ 0x180029600 (-IsDeviceReady@SharedResource@Engine@Spectre@@QEBA_NW4RenderDeviceID@23@@Z.c)
 *     ??$_Find@W4RenderDeviceID@Engine@Spectre@@@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@PEAX@1@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x180043548 (--$_Find@W4RenderDeviceID@Engine@Spectre@@@-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spect.c)
 *     ?CreateDeviceBufferHelper@ArrayBuffer@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180088A38 (-CreateDeviceBufferHelper@ArrayBuffer@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VRenderDevice@Engine.c)
 *     ?UpdateDeviceBuffer@ArrayBuffer@Engine@Spectre@@AEAAXAEAVRenderDevice@23@@Z @ 0x180088EEC (-UpdateDeviceBuffer@ArrayBuffer@Engine@Spectre@@AEAAXAEAVRenderDevice@23@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::ArrayBuffer::AttachDevice(Spectre::Engine::ArrayBuffer *this, __int64 *a2)
{
  unsigned int v4; // ebp
  __int64 v5; // rax
  std::_Ref_count_base *v6[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int ID; // [rsp+58h] [rbp+10h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2) && *((_QWORD *)this + 17) )
  {
    ID = Spectre::Engine::RenderDevice::GetID(*a2);
    v4 = ID;
    if ( std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>::_Find<enum Spectre::Engine::RenderDeviceID>(
           (__int64)this + 120,
           (__int64)&ID) == *((_QWORD *)this + 15) )
    {
      Spectre::Engine::ArrayBuffer::CreateDeviceBufferHelper(this);
    }
    else if ( !Spectre::Engine::SharedResource::IsDeviceReady((__int64)this, v4) )
    {
      Spectre::Engine::ArrayBuffer::UpdateDeviceBuffer(this, (struct Spectre::Engine::RenderDevice *)*a2);
    }
    if ( Spectre::Engine::RendererResource::GetOption((__int64)this, 8) )
    {
      v5 = *((_QWORD *)this + 14);
      if ( !v5 || *(_DWORD *)(v5 + 24) != 2 )
      {
        *(_OWORD *)v6 = 0LL;
        std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 17, (__int64 *)v6);
        if ( v6[1] )
          std::_Ref_count_base::_Decref(v6[1]);
      }
    }
  }
}
