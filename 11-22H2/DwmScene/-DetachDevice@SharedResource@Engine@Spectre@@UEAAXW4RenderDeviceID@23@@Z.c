/*
 * XREFs of ?DetachDevice@SharedResource@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x180029520
 * Callers:
 *     ?DetachDevice@FrameBuffer@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x180028890 (-DetachDevice@FrameBuffer@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z.c)
 *     ?DetachDevice@Material@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x1800442A0 (-DetachDevice@Material@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z.c)
 *     ?DetachDevice@Mesh@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x180048750 (-DetachDevice@Mesh@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z.c)
 *     ?DetachDevice@Sampler@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x180054A50 (-DetachDevice@Sampler@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z.c)
 *     ?DetachDevice@Texture@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x1800565B0 (-DetachDevice@Texture@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z.c)
 *     ?DetachDevice@DepthBuffer@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x18006FAC0 (-DetachDevice@DepthBuffer@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z.c)
 *     ?DetachDevice@RenderState@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x180088580 (-DetachDevice@RenderState@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z.c)
 *     ?DetachDevice@ArrayBuffer@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x180088B30 (-DetachDevice@ArrayBuffer@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z.c)
 *     ?DetachDevice@Shader@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x18008AEE0 (-DetachDevice@Shader@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z.c)
 *     ?DetachDevice@VertexLayout@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x18008C2E0 (-DetachDevice@VertexLayout@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@_NU?$less@W4RenderDeviceID@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@_N@std@@@5@$0A@@std@@@std@@QEAA_KAEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x18002984C (-erase@-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@_NU-$less@W4RenderDeviceID@Engin.c)
 */

__int64 __fastcall Spectre::Engine::SharedResource::DetachDevice(__int64 a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,bool,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,bool>>,0>>::erase(
           a1 + 80,
           &v3);
}
