/*
 * XREFs of ??RMaterialLoadedFnc@MeshInstance@Engine@Spectre@@UEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@V?$shared_ptr@VRendererResource@Engine@Spectre@@@5@@Z @ 0x18004AF60
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetTexture@FrameBuffer@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ @ 0x180026A84 (-GetTexture@FrameBuffer@Engine@Spectre@@QEBA-AV-$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ.c)
 *     ??$dynamic_pointer_cast@VMaterial@Engine@Spectre@@VRendererResource@23@@std@@YA?AV?$shared_ptr@VMaterial@Engine@Spectre@@@0@AEBV?$shared_ptr@VRendererResource@Engine@Spectre@@@0@@Z @ 0x18004AAD4 (--$dynamic_pointer_cast@VMaterial@Engine@Spectre@@VRendererResource@23@@std@@YA-AV-$shared_ptr@V.c)
 *     ?SetMaterial@MeshInstance@Engine@Spectre@@QEAAXV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Z @ 0x18004C98C (-SetMaterial@MeshInstance@Engine@Spectre@@QEAAXV-$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Z.c)
 *     ?GetExtension@ShaderFamily@Engine@Spectre@@QEBA?AV?$shared_ptr@VIShaderExtension@Engine@Spectre@@@std@@XZ @ 0x1800609B4 (-GetExtension@ShaderFamily@Engine@Spectre@@QEBA-AV-$shared_ptr@VIShaderExtension@Engine@Spectre@.c)
 *     ?GetCompletedTaskHandler@Utils@Spectre@@YA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@XZ @ 0x1800DF714 (-GetCompletedTaskHandler@Utils@Spectre@@YA-AV-$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Spectre::Engine::MeshInstance::MaterialLoadedFnc::operator()(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *Texture; // rax
  _QWORD *Extension; // rax
  std::_Ref_count_base *v10; // rcx
  __int64 v12; // [rsp+28h] [rbp-40h] BYREF
  std::_Ref_count_base *v13; // [rsp+30h] [rbp-38h]
  __int64 v14; // [rsp+38h] [rbp-30h] BYREF
  std::_Ref_count_base *v15; // [rsp+40h] [rbp-28h]
  __int64 v16; // [rsp+48h] [rbp-20h] BYREF
  std::_Ref_count_base *v17; // [rsp+50h] [rbp-18h]

  std::dynamic_pointer_cast<Spectre::Engine::Material,Spectre::Engine::RendererResource>(&v12, a3);
  v6 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v14,
         &v12);
  Spectre::Engine::MeshInstance::SetMaterial(v7, v6);
  Texture = (_QWORD *)Spectre::Engine::FrameBuffer::GetTexture(v12, &v16);
  Extension = (_QWORD *)Spectre::Engine::ShaderFamily::GetExtension(*Texture, &v14);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*Extension + 72LL))(
    *Extension,
    *(_QWORD *)(a1 + 8),
    *(_QWORD *)(a1 + 16));
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
  Spectre::Utils::GetCompletedTaskHandler(a2);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  v10 = (std::_Ref_count_base *)a3[1];
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  return a2;
}
