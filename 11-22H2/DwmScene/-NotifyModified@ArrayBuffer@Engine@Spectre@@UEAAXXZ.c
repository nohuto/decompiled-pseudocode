/*
 * XREFs of ?NotifyModified@ArrayBuffer@Engine@Spectre@@UEAAXXZ @ 0x180088C00
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x180013300 (-_Tidy@-$vector@V-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VLigh.c)
 *     ?GetOption@RendererResource@Engine@Spectre@@QEBA_NW4EResourceOption@123@@Z @ 0x1800295E4 (-GetOption@RendererResource@Engine@Spectre@@QEBA_NW4EResourceOption@123@@Z.c)
 *     ?NotifyModified@SharedResource@Engine@Spectre@@MEAAXXZ @ 0x1800296B0 (-NotifyModified@SharedResource@Engine@Spectre@@MEAAXXZ.c)
 *     ?SafeGetDeviceList@Engine@1Spectre@@QEAA?AV?$vector@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x1800364DC (-SafeGetDeviceList@Engine@1Spectre@@QEAA-AV-$vector@V-$shared_ptr@VRenderDevice@Engine@Spectre@@.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x180054C00 (-clear@-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V-$shared_ptr@VDeviceSampler@Eng.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::ArrayBuffer::NotifyModified(Spectre::Engine::ArrayBuffer *this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 i; // rdi
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  Spectre::Engine::SharedResource::NotifyModified(this);
  v2 = *((_QWORD *)this + 14);
  if ( !v2 || *(_DWORD *)(v2 + 24) != 2 )
    std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>::clear((_QWORD *)this + 15);
  if ( Spectre::Engine::RendererResource::GetOption((__int64)this, 1) )
  {
    v3 = (*(__int64 (**)(void))(*(_QWORD *)this + 32LL))();
    Spectre::Engine::Engine::SafeGetDeviceList(v3, v6);
    v4 = v6[1];
    for ( i = v6[0]; i != v4; i += 16LL )
      (*(void (__fastcall **)(Spectre::Engine::ArrayBuffer *, __int64))(*(_QWORD *)this + 16LL))(this, i);
    std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::_Tidy((__int64)v6);
  }
}
