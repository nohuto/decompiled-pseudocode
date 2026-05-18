/*
 * XREFs of ?AttachDevice@Mesh@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180047E90
 * Callers:
 *     ?Render@Mesh@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K@Z @ 0x180048C04 (-Render@Mesh@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetID@RenderDevice@Engine@Spectre@@QEBA?AW4RenderDeviceID@23@XZ @ 0x1800265D0 (-GetID@RenderDevice@Engine@Spectre@@QEBA-AW4RenderDeviceID@23@XZ.c)
 *     ??$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@?$map@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@@std@@PEAX@std@@_N@1@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x180027C68 (--$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@-$map@W4RenderDeviceID@Engine@Spectre@@V.c)
 *     ?AttachDevice@SharedResource@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800294D0 (-AttachDevice@SharedResource@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@.c)
 *     ?GetEngine@SharedResource@Engine@Spectre@@UEBAPEAV223@XZ @ 0x1800295B0 (-GetEngine@SharedResource@Engine@Spectre@@UEBAPEAV223@XZ.c)
 *     ?GetOption@RendererResource@Engine@Spectre@@QEBA_NW4EResourceOption@123@@Z @ 0x1800295E4 (-GetOption@RendererResource@Engine@Spectre@@QEBA_NW4EResourceOption@123@@Z.c)
 *     ?NotifyDeviceReady@SharedResource@Engine@Spectre@@IEAAXW4RenderDeviceID@23@@Z @ 0x180029680 (-NotifyDeviceReady@SharedResource@Engine@Spectre@@IEAAXW4RenderDeviceID@23@@Z.c)
 *     ?GetResourceOption@Engine@1Spectre@@QEBA_NW4EType@RendererResource@12@W4EResourceOption@412@@Z @ 0x180034764 (-GetResourceOption@Engine@1Spectre@@QEBA_NW4EType@RendererResource@12@W4EResourceOption@412@@Z.c)
 *     ?DetachDevice@Mesh@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x180048750 (-DetachDevice@Mesh@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z.c)
 *     ?GetBuffers@Mesh@Engine@Spectre@@IEAA?AV?$array@PEAVArrayBuffer@Engine@Spectre@@$08@std@@XZ @ 0x1800487D8 (-GetBuffers@Mesh@Engine@Spectre@@IEAA-AV-$array@PEAVArrayBuffer@Engine@Spectre@@$08@std@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall Spectre::Engine::Mesh::AttachDevice(__int64 a1, __int64 *a2)
{
  unsigned int v4; // ebp
  __int64 *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rdx
  std::_Ref_count_base *v9; // rcx
  char *v10; // rdi
  char result; // al
  Spectre::Engine::SharedResource *v12; // rcx
  struct Spectre::Engine::Engine *Engine; // rax
  std::_Ref_count_base *v14[2]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v15[16]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v16[72]; // [rsp+40h] [rbp-58h] BYREF
  char v17; // [rsp+88h] [rbp-10h] BYREF
  unsigned int ID; // [rsp+A0h] [rbp+8h] BYREF

  Spectre::Engine::SharedResource::AttachDevice(a1, a2);
  ID = Spectre::Engine::RenderDevice::GetID(*a2);
  v4 = ID;
  std::map<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceFrameBuffer>>::_Try_emplace<enum Spectre::Engine::RenderDeviceID const &,>(
    (_QWORD *)(a1 + 128),
    (__int64)v15,
    &ID);
  v5 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         v14,
         a2);
  v7 = *v5;
  *v5 = *(_QWORD *)(v6 + 40);
  *(_QWORD *)(v6 + 40) = v7;
  v8 = v5[1];
  v5[1] = *(_QWORD *)(v6 + 48);
  v9 = v14[1];
  *(_QWORD *)(v6 + 48) = v8;
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  Spectre::Engine::Mesh::GetBuffers(a1, v16);
  v10 = v16;
  do
  {
    if ( *(_QWORD *)v10 )
      (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)v10 + 16LL))(*(_QWORD *)v10, a2);
    v10 += 8;
  }
  while ( v10 != &v17 );
  if ( *(_DWORD *)(a1 + 120) || *(_DWORD *)(a1 + 112) )
    Spectre::Engine::SharedResource::NotifyDeviceReady(a1, v4);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !result && *(_DWORD *)(a1 + 304) != 2 )
  {
    if ( Spectre::Engine::RendererResource::GetOption(a1, 8) )
      return Spectre::Engine::Mesh::DetachDevice(a1, 0LL);
    Engine = Spectre::Engine::SharedResource::GetEngine(v12);
    result = Spectre::Engine::Engine::GetResourceOption((__int64)Engine, 5);
    if ( result )
      return Spectre::Engine::Mesh::DetachDevice(a1, 0LL);
  }
  return result;
}
