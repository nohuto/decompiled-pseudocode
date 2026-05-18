/*
 * XREFs of ?DetachDevice@MeshInstance@Engine@Spectre@@UEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18004B740
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetID@RenderDevice@Engine@Spectre@@QEBA?AW4RenderDeviceID@23@XZ @ 0x1800265D0 (-GetID@RenderDevice@Engine@Spectre@@QEBA-AW4RenderDeviceID@23@XZ.c)
 *     ?DetachDevice@ShaderPropertyBlock@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x180084D40 (-DetachDevice@ShaderPropertyBlock@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z.c)
 */

void __fastcall Spectre::Engine::MeshInstance::DetachDevice(__int64 a1, __int64 *a2)
{
  unsigned int ID; // eax
  __int64 v4; // r8
  _QWORD *v5; // rbp
  unsigned int v6; // edi
  _QWORD *i; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  std::_Ref_count_base *v12; // rcx
  std::_Ref_count_base *v13; // rcx
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF

  ID = Spectre::Engine::RenderDevice::GetID(*a2);
  v5 = *(_QWORD **)(v4 + 112);
  v6 = ID;
  for ( i = *(_QWORD **)(v4 + 104); i != v5; i += 11 )
  {
    v8 = i[3];
    if ( v8 )
      Spectre::Engine::ShaderPropertyBlock::DetachDevice(v8, v6);
    v9 = i[5];
    if ( v9 )
      Spectre::Engine::ShaderPropertyBlock::DetachDevice(v9, v6);
    v10 = i[7];
    if ( v10 )
      Spectre::Engine::ShaderPropertyBlock::DetachDevice(v10, v6);
    v11 = i[9];
    if ( v11 )
      Spectre::Engine::ShaderPropertyBlock::DetachDevice(v11, v6);
  }
  v12 = (std::_Ref_count_base *)std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
                                  v14,
                                  a2)[1];
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  v13 = (std::_Ref_count_base *)a2[1];
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
}
