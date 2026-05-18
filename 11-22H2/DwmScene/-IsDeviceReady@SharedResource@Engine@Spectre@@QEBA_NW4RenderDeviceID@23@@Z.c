/*
 * XREFs of ?IsDeviceReady@SharedResource@Engine@Spectre@@QEBA_NW4RenderDeviceID@23@@Z @ 0x180029600
 * Callers:
 *     ?AttachDevice@FrameBuffer@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800281C0 (-AttachDevice@FrameBuffer@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 *     ?Render@Mesh@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K@Z @ 0x180048C04 (-Render@Mesh@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K@Z.c)
 *     ?AttachDevice@ArrayBuffer@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800888F0 (-AttachDevice@ArrayBuffer@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 * Callees:
 *     ??$_Find_lower_bound@W4RenderDeviceID@Engine@Spectre@@@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@_NU?$less@W4RenderDeviceID@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@_N@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@_N@std@@PEAX@std@@@1@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x180028F84 (--$_Find_lower_bound@W4RenderDeviceID@Engine@Spectre@@@-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@.c)
 */

char __fastcall Spectre::Engine::SharedResource::IsDeviceReady(__int64 a1, unsigned int a2)
{
  __int64 *v2; // rbx
  unsigned int v3; // r11d
  char v4; // r10
  unsigned int v5; // r11d
  __int64 v6; // rdx
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  unsigned int v10; // [rsp+58h] [rbp+10h] BYREF

  v2 = (__int64 *)(a1 + 80);
  v10 = a2;
  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,bool,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,bool>>,0>>::_Find_lower_bound<enum Spectre::Engine::RenderDeviceID>(
    (__int64 *)(a1 + 80),
    (__int64)v8,
    &v10);
  v4 = 0;
  if ( !*(_BYTE *)(v9 + 25) && v3 >= *(_DWORD *)(v9 + 28) && v9 != *v2 )
  {
    v10 = v3;
    std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,bool,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,bool>>,0>>::_Find_lower_bound<enum Spectre::Engine::RenderDeviceID>(
      v2,
      (__int64)v8,
      &v10);
    v6 = v9;
    if ( *(_BYTE *)(v9 + 25) != v4 || v5 < *(_DWORD *)(v9 + 28) )
      v6 = *v2;
    if ( *(_BYTE *)(v6 + 32) != v4 )
      return 1;
  }
  return v4;
}
