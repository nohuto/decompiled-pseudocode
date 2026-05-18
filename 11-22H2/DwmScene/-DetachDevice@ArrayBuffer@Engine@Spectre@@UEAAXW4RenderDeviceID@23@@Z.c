/*
 * XREFs of ?DetachDevice@ArrayBuffer@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x180088B30
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?DetachDevice@SharedResource@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x180029520 (-DetachDevice@SharedResource@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x180054C40 (-erase@-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V-$shared_ptr@VCommandList@Engin.c)
 */

void __fastcall Spectre::Engine::ArrayBuffer::DetachDevice(__int64 a1, int a2)
{
  std::_Ref_count_base *v4[2]; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = a2;
    std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::CommandList>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::CommandList>>>,0>>::erase(
      (__int64 *)(a1 + 120),
      (unsigned int *)&v5);
    Spectre::Engine::SharedResource::DetachDevice(a1, a2);
  }
  else
  {
    *(_OWORD *)v4 = 0LL;
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(a1 + 136), (__int64 *)v4);
    if ( v4[1] )
      std::_Ref_count_base::_Decref(v4[1]);
  }
}
