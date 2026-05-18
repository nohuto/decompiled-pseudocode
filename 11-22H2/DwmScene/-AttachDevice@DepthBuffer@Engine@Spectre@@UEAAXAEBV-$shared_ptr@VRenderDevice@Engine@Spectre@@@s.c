/*
 * XREFs of ?AttachDevice@DepthBuffer@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18006F500
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetID@RenderDevice@Engine@Spectre@@QEBA?AW4RenderDeviceID@23@XZ @ 0x1800265D0 (-GetID@RenderDevice@Engine@Spectre@@QEBA-AW4RenderDeviceID@23@XZ.c)
 *     ?AttachDevice@SharedResource@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800294D0 (-AttachDevice@SharedResource@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@.c)
 *     ?GetName@RendererResource@Engine@Spectre@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x1800295BC (-GetName@RendererResource@Engine@Spectre@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloca.c)
 *     ?NotifyDeviceReady@SharedResource@Engine@Spectre@@IEAAXW4RenderDeviceID@23@@Z @ 0x180029680 (-NotifyDeviceReady@SharedResource@Engine@Spectre@@IEAAXW4RenderDeviceID@23@@Z.c)
 *     ?SetName@RendererResource@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800297A4 (-SetName@RendererResource@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 *     ??$_Find@W4RenderDeviceID@Engine@Spectre@@@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@PEAX@1@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x180043548 (--$_Find@W4RenderDeviceID@Engine@Spectre@@@-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spect.c)
 *     ?GetHeight@DepthBuffer@Engine@Spectre@@QEBAIXZ @ 0x18005BA64 (-GetHeight@DepthBuffer@Engine@Spectre@@QEBAIXZ.c)
 *     ?GetWidth@DepthBuffer@Engine@Spectre@@QEBAIXZ @ 0x18005BC50 (-GetWidth@DepthBuffer@Engine@Spectre@@QEBAIXZ.c)
 *     ??$CreateResource@VDeviceDepthBuffer@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@XZ @ 0x18006EDDC (--$CreateResource@VDeviceDepthBuffer@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA-AV-$shar.c)
 *     ?AttachBufferInternal@DepthBuffer@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@@Z @ 0x18006F288 (-AttachBufferInternal@DepthBuffer@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VDeviceDepthBuffer@Engin.c)
 *     ?GetFormat@DepthBuffer@Engine@Spectre@@QEBA?AW4Format@23@XZ @ 0x18006FB50 (-GetFormat@DepthBuffer@Engine@Spectre@@QEBA-AW4Format@23@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::DepthBuffer::AttachDevice(Spectre::Engine::DepthBuffer *this, __int64 *a2)
{
  unsigned int ID; // ebp
  __int64 v5; // rbx
  void **Name; // rax
  void (__fastcall *v7)(__int64, _QWORD); // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int Width; // eax
  __int64 v11; // r11
  __int64 v12; // [rsp+30h] [rbp-38h] BYREF
  std::_Ref_count_base *v13; // [rsp+38h] [rbp-30h]
  _QWORD v14[4]; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+78h] [rbp+10h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2) )
  {
    ID = Spectre::Engine::RenderDevice::GetID(*a2);
    v15 = ID;
    if ( std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>::_Find<enum Spectre::Engine::RenderDeviceID>(
           (__int64)this + 256,
           (__int64)&v15) == *((_QWORD *)this + 32) )
    {
      Spectre::Engine::SharedResource::AttachDevice((__int64)this, a2);
      Spectre::Engine::RenderDevice::CreateResource<Spectre::Engine::DeviceDepthBuffer>(*a2, &v12);
      v5 = v12;
      Name = (void **)Spectre::Engine::RendererResource::GetName((__int64)this, v14);
      Spectre::Engine::RendererResource::SetName(v5, Name);
      v7 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 40LL);
      v8 = *(_QWORD *)(*((_QWORD *)this + 14) + 128LL);
      if ( v8 )
        v9 = *(unsigned int *)(v8 + 20);
      else
        v9 = 0LL;
      Spectre::Engine::DepthBuffer::GetFormat(this, v9);
      Spectre::Engine::DepthBuffer::GetHeight(this);
      Width = Spectre::Engine::DepthBuffer::GetWidth(this);
      v7(v11, Width);
      Spectre::Engine::DepthBuffer::AttachBufferInternal((__int64 *)this, &v12);
      Spectre::Engine::SharedResource::NotifyDeviceReady((__int64)this, ID);
      if ( v13 )
        std::_Ref_count_base::_Decref(v13);
    }
  }
}
