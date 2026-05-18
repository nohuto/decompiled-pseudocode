/*
 * XREFs of ?DetachDevice@Mesh@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x180048750
 * Callers:
 *     ?AttachDevice@Mesh@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180047E90 (-AttachDevice@Mesh@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x180028E68 (-erase@-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V-$shared_ptr@VDeviceDepthBuffer.c)
 *     ?GetBuffers@Mesh@Engine@Spectre@@IEAA?AV?$array@PEAVArrayBuffer@Engine@Spectre@@$08@std@@XZ @ 0x1800487D8 (-GetBuffers@Mesh@Engine@Spectre@@IEAA-AV-$array@PEAVArrayBuffer@Engine@Spectre@@$08@std@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Spectre::Engine::Mesh::DetachDevice(__int64 a1, unsigned int a2)
{
  char *v4; // rbx
  _BYTE v6[72]; // [rsp+20h] [rbp-58h] BYREF
  char v7; // [rsp+68h] [rbp-10h] BYREF
  unsigned int v8; // [rsp+88h] [rbp+10h] BYREF

  v8 = a2;
  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceDepthBuffer>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceDepthBuffer>>>,0>>::erase(
    (__int64 *)(a1 + 128),
    &v8);
  Spectre::Engine::Mesh::GetBuffers(a1, v6);
  v4 = v6;
  do
  {
    if ( *(_QWORD *)v4 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v4 + 24LL))(*(_QWORD *)v4, a2);
    v4 += 8;
  }
  while ( v4 != &v7 );
  return Spectre::Engine::SharedResource::DetachDevice(a1, a2);
}
