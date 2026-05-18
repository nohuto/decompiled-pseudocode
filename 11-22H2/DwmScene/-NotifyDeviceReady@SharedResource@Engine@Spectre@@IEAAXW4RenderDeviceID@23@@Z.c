/*
 * XREFs of ?NotifyDeviceReady@SharedResource@Engine@Spectre@@IEAAXW4RenderDeviceID@23@@Z @ 0x180029680
 * Callers:
 *     ?CreateDeviceFrameBufferHelper@FrameBuffer@Engine@Spectre@@IEAAXPEAVRenderDevice@23@@Z @ 0x180028690 (-CreateDeviceFrameBufferHelper@FrameBuffer@Engine@Spectre@@IEAAXPEAVRenderDevice@23@@Z.c)
 *     ?AttachDevice@Material@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180044120 (-AttachDevice@Material@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@.c)
 *     ?AttachDevice@Mesh@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180047E90 (-AttachDevice@Mesh@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ?AttachDeviceSamplerInternal@Sampler@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@Z @ 0x18005482C (-AttachDeviceSamplerInternal@Sampler@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VDeviceSampler@Engine.c)
 *     ?AttachDevice@Texture@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180055980 (-AttachDevice@Texture@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@.c)
 *     ?AttachDevice@DepthBuffer@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18006F500 (-AttachDevice@DepthBuffer@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 *     ?AttachDevice@RenderState@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180088210 (-AttachDevice@RenderState@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 *     ?CreateDeviceBufferHelper@ArrayBuffer@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180088A38 (-CreateDeviceBufferHelper@ArrayBuffer@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VRenderDevice@Engine.c)
 *     ?UpdateDeviceBuffer@ArrayBuffer@Engine@Spectre@@AEAAXAEAVRenderDevice@23@@Z @ 0x180088EEC (-UpdateDeviceBuffer@ArrayBuffer@Engine@Spectre@@AEAAXAEAVRenderDevice@23@@Z.c)
 * Callees:
 *     ??$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@?$map@W4RenderDeviceID@Engine@Spectre@@_NU?$less@W4RenderDeviceID@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@_N@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@_N@std@@PEAX@std@@_N@1@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x180029004 (--$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@-$map@W4RenderDeviceID@Engine@Spectre@@_.c)
 */

__int64 __fastcall Spectre::Engine::SharedResource::NotifyDeviceReady(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = a2;
  result = std::map<enum Spectre::Engine::RenderDeviceID,bool>::_Try_emplace<enum Spectre::Engine::RenderDeviceID const &,>(
             (__int64 *)(a1 + 80),
             (__int64)v3,
             &v4);
  *(_BYTE *)(*(_QWORD *)result + 32LL) = 1;
  return result;
}
