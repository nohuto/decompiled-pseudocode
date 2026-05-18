/*
 * XREFs of ?DetachDevice@ShaderPipeline@Engine@Spectre@@QEAAXW4RenderDeviceID@23@@Z @ 0x180087308
 * Callers:
 *     ?DetachDevice@ShaderFamily@Engine@Spectre@@QEAAXW4RenderDeviceID@23@@Z @ 0x180060590 (-DetachDevice@ShaderFamily@Engine@Spectre@@QEAAXW4RenderDeviceID@23@@Z.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x180054C40 (-erase@-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V-$shared_ptr@VCommandList@Engin.c)
 *     ?DetachDevice@RenderState@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x180088580 (-DetachDevice@RenderState@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z.c)
 *     ?DetachDevice@VertexLayout@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x18008C2E0 (-DetachDevice@VertexLayout@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Spectre::Engine::ShaderPipeline::DetachDevice(_QWORD *a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 result; // rax
  _QWORD *v9; // rsi
  _QWORD *v10; // rbx
  unsigned int v11; // [rsp+38h] [rbp+10h] BYREF

  if ( a1[6] )
    ((void (*)(void))Spectre::Engine::RenderState::DetachDevice)();
  v4 = a1[8];
  if ( v4 )
    Spectre::Engine::RenderState::DetachDevice(v4, a2);
  v5 = a1[10];
  if ( v5 )
    Spectre::Engine::RenderState::DetachDevice(v5, a2);
  v6 = a1[12];
  if ( v6 )
    Spectre::Engine::RenderState::DetachDevice(v6, a2);
  v7 = a1[22];
  if ( v7 )
    Spectre::Engine::VertexLayout::DetachDevice(v7, a2);
  v11 = a2;
  result = std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::CommandList>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::CommandList>>>,0>>::erase(
             a1 + 60,
             &v11);
  v9 = a1 + 48;
  v10 = a1 + 60;
  while ( v9 != v10 )
  {
    if ( *v9 )
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v9 + 24LL))(*v9, a2);
    v9 += 2;
  }
  return result;
}
