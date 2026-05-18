/*
 * XREFs of ?AttachDeviceSamplerInternal@Sampler@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@Z @ 0x18005482C
 * Callers:
 *     ?AttachDevice@Sampler@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180054610 (-AttachDevice@Sampler@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@.c)
 *     ?AttachDeviceSampler@Sampler@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@Z @ 0x180054710 (-AttachDeviceSampler@Sampler@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VDeviceSampler@Engine@Spectre.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?AttachDevice@SharedResource@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800294D0 (-AttachDevice@SharedResource@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@.c)
 *     ?NotifyDeviceReady@SharedResource@Engine@Spectre@@IEAAXW4RenderDeviceID@23@@Z @ 0x180029680 (-NotifyDeviceReady@SharedResource@Engine@Spectre@@IEAAXW4RenderDeviceID@23@@Z.c)
 *     ??$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@?$map@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@@std@@PEAX@std@@_N@1@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x1800541F0 (--$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@-$map@W4RenderDeviceID@Engi_ea_1800541F0.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::Sampler::AttachDeviceSamplerInternal(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v7; // [rsp+28h] [rbp-20h]
  _BYTE v8[24]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF

  std::weak_ptr<Spectre::Engine::RenderDevice>::lock(*a2 + 72LL, &v6);
  v4 = *(_DWORD *)(*a2 + 88LL);
  Spectre::Engine::SharedResource::AttachDevice(a1, &v6);
  v9 = v4;
  v5 = std::map<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceShader>>::_Try_emplace<enum Spectre::Engine::RenderDeviceID const &,>(
         (__int64 *)(a1 + 128),
         (__int64)v8,
         &v9);
  std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(*(_QWORD *)v5 + 40LL), a2);
  Spectre::Engine::SharedResource::NotifyDeviceReady(a1, v4);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
}
