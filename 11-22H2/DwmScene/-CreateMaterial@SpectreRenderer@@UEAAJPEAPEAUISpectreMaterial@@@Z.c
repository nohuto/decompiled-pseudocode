/*
 * XREFs of ?CreateMaterial@SpectreRenderer@@UEAAJPEAPEAUISpectreMaterial@@@Z @ 0x1800183C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000F024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$MakeAndInitialize@VSpectreMaterial@@V1@AEAV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VSpectreMaterial@@@WRL@Microsoft@@@012@AEAV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Z @ 0x18001667C (--$MakeAndInitialize@VSpectreMaterial@@V1@AEAV-$shared_ptr@VMaterial@Engine@Spectre_ea_18001667C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ @ 0x1800347F0 (-GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ.c)
 *     ?GetShaderFamily@ShaderManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x180050224 (-GetShaderFamily@ShaderManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderFamily@Engine@Spectre@.c)
 *     ?CreateMaterial@ShaderFamily@Engine@Spectre@@QEAA?AV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@XZ @ 0x1800600C8 (-CreateMaterial@ShaderFamily@Engine@Spectre@@QEAA-AV-$shared_ptr@VMaterial@Engine@Spectre@@@std@.c)
 */

__int64 __fastcall SpectreRenderer::CreateMaterial(Spectre::Engine::Engine **this, struct ISpectreMaterial **a2)
{
  struct Spectre::Engine::ShaderManager *ShaderManager; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  struct ISpectreMaterial *v7; // rax
  __int64 v8; // [rsp+20h] [rbp-40h] BYREF
  std::_Ref_count_base *v9; // [rsp+28h] [rbp-38h]
  __int64 v10; // [rsp+30h] [rbp-30h] BYREF
  std::_Ref_count_base *v11; // [rsp+38h] [rbp-28h]
  _QWORD v12[4]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  struct ISpectreMaterial *v14; // [rsp+70h] [rbp+10h] BYREF

  ShaderManager = Spectre::Engine::Engine::GetShaderManager(this[7]);
  std::string::string(v12, (__int64)ShaderManager + 18496);
  Spectre::Engine::ShaderManager::GetShaderFamily(ShaderManager, &v10, v12);
  Spectre::Engine::ShaderFamily::CreateMaterial(v10, &v8);
  v14 = 0LL;
  v4 = Microsoft::WRL::Details::MakeAndInitialize<SpectreMaterial,SpectreMaterial,std::shared_ptr<Spectre::Engine::Material> &>(
         (__int64 *)&v14,
         &v8);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = v14;
    v14 = 0LL;
    *a2 = v7;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14F,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (const char *)(unsigned int)v4);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    return v5;
  }
}
