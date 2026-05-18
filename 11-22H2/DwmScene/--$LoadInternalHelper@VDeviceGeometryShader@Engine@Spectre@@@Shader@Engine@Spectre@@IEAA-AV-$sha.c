/*
 * XREFs of ??$LoadInternalHelper@VDeviceGeometryShader@Engine@Spectre@@@Shader@Engine@Spectre@@IEAA?AV?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@AEBVShaderProgram@12@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@@Z @ 0x18008A274
 * Callers:
 *     ?LoadInternal@GeometryShader@Engine@Spectre@@EEAA?AV?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@AEBVShaderProgram@23@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@@Z @ 0x18008B220 (-LoadInternal@GeometryShader@Engine@Spectre@@EEAA-AV-$shared_ptr@VDeviceShader@Engine@Spectre@@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SetName@RendererResource@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800297A4 (-SetName@RendererResource@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 *     ??$CreateResource@VDeviceGeometryShader@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VDeviceGeometryShader@Engine@Spectre@@@std@@XZ @ 0x180089CBC (--$CreateResource@VDeviceGeometryShader@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA-AV-$s.c)
 *     ?GetName@Shader@Engine@Spectre@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x18008B008 (-GetName@Shader@Engine@Spectre@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@s.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Spectre::Engine::Shader::LoadInternalHelper<Spectre::Engine::DeviceGeometryShader>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v7; // rbx
  void **Name; // rax
  std::_Ref_count_base *v9; // rcx
  __int64 v11; // [rsp+28h] [rbp-40h] BYREF
  std::_Ref_count_base *v12; // [rsp+30h] [rbp-38h]
  _BYTE v13[40]; // [rsp+38h] [rbp-30h] BYREF

  Spectre::Engine::RenderDevice::CreateResource<Spectre::Engine::DeviceGeometryShader>(*a4, &v11);
  v7 = v11;
  Name = (void **)Spectre::Engine::Shader::GetName(a1, v13);
  Spectre::Engine::RendererResource::SetName(v7, Name);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 40LL))(v11, a3) )
  {
    v11 = 0LL;
    v9 = v12;
    v12 = 0LL;
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
  }
  *a2 = v11;
  a2[1] = v12;
  return a2;
}
