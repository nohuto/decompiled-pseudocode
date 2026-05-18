/*
 * XREFs of ?DetachDevice@Camera@Engine@Spectre@@UEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18005B860
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetID@RenderDevice@Engine@Spectre@@QEBA?AW4RenderDeviceID@23@XZ @ 0x1800265D0 (-GetID@RenderDevice@Engine@Spectre@@QEBA-AW4RenderDeviceID@23@XZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x180054C40 (-erase@-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V-$shared_ptr@VCommandList@Engin.c)
 *     ?SetDepthBuffer@Camera@Engine@Spectre@@QEAAXV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@@Z @ 0x18005D038 (-SetDepthBuffer@Camera@Engine@Spectre@@QEAAXV-$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@@Z.c)
 *     ?SetFrameBuffer@Camera@Engine@Spectre@@QEAAXV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@Z @ 0x18005D1EC (-SetFrameBuffer@Camera@Engine@Spectre@@QEAAXV-$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@Z.c)
 */

void __fastcall Spectre::Engine::Camera::DetachDevice(Spectre::Engine::Camera *this, __int64 *a2)
{
  std::_Ref_count_base *v4; // rcx
  std::_Ref_count_base *v5; // rcx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  unsigned int ID; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 32) )
  {
    Spectre::Engine::Camera::SetFrameBuffer(this);
    v6 = 0LL;
    Spectre::Engine::Camera::SetDepthBuffer(this);
  }
  ID = Spectre::Engine::RenderDevice::GetID(*a2);
  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::CommandList>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::CommandList>>>,0>>::erase(
    (__int64 *)this + 56,
    &ID);
  v4 = (std::_Ref_count_base *)std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
                                 &v6,
                                 a2)[1];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  v5 = (std::_Ref_count_base *)a2[1];
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
}
