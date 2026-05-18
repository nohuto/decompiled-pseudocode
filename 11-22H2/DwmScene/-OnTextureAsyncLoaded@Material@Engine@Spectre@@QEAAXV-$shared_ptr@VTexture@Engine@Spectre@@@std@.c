/*
 * XREFs of ?OnTextureAsyncLoaded@Material@Engine@Spectre@@QEAAXV?$shared_ptr@VTexture@Engine@Spectre@@@std@@W4ShaderProperty@23@_K@Z @ 0x180044474
 * Callers:
 *     ??RTextureAsyncCompletionHandler@MaterialInternal@Engine@Spectre@@UEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@V?$shared_ptr@VRendererResource@Engine@Spectre@@@5@@Z @ 0x180043C60 (--RTextureAsyncCompletionHandler@MaterialInternal@Engine@Spectre@@UEAA-AV-$shared_ptr@VTaskHandl.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??$_Find@W4ShaderProperty@Engine@Spectre@@@?$_Tree@V?$_Tmap_traits@W4ShaderProperty@Engine@Spectre@@W4ETextureState@Material@23@U?$less@W4ShaderProperty@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4ShaderProperty@Engine@Spectre@@W4ETextureState@Material@23@@std@@@7@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBW4ShaderProperty@Engine@Spectre@@W4ETextureState@Material@23@@std@@PEAX@1@AEBW4ShaderProperty@Engine@Spectre@@@Z @ 0x180043584 (--$_Find@W4ShaderProperty@Engine@Spectre@@@-$_Tree@V-$_Tmap_traits@W4ShaderProperty@Engine@Spect.c)
 *     ?GetExtension@ShaderFamily@Engine@Spectre@@QEBA?AV?$shared_ptr@VIShaderExtension@Engine@Spectre@@@std@@XZ @ 0x1800609B4 (-GetExtension@ShaderFamily@Engine@Spectre@@QEBA-AV-$shared_ptr@VIShaderExtension@Engine@Spectre@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::Material::OnTextureAsyncLoaded(
        __int64 a1,
        _QWORD *a2,
        unsigned __int16 a3,
        __int64 a4)
{
  __int64 v8; // rdx
  _QWORD *Extension; // rax
  _QWORD *v10; // rax
  std::_Ref_count_base *v11; // rcx
  _BYTE v12[8]; // [rsp+30h] [rbp-28h] BYREF
  std::_Ref_count_base *v13; // [rsp+38h] [rbp-20h]
  unsigned __int16 v14; // [rsp+70h] [rbp+18h] BYREF

  v14 = a3;
  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::ShaderProperty,enum Spectre::Engine::Material::ETextureState,std::less<enum Spectre::Engine::ShaderProperty>,std::allocator<std::pair<enum Spectre::Engine::ShaderProperty const,enum Spectre::Engine::Material::ETextureState>>,0>>::_Find<enum Spectre::Engine::ShaderProperty>(
    a1 + 200,
    (__int64)&v14);
  if ( std::operator!=<Spectre::Engine::Scene>(a2) )
  {
    *(_DWORD *)(v8 + 32) = 2;
    Extension = (_QWORD *)Spectre::Engine::ShaderFamily::GetExtension(*(_QWORD *)(a1 + 136), v12);
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD *, _QWORD))(*(_QWORD *)*Extension + 56LL))(*Extension, a1, a2, a3);
  }
  else
  {
    *(_DWORD *)(v8 + 32) = 3;
    v10 = (_QWORD *)Spectre::Engine::ShaderFamily::GetExtension(*(_QWORD *)(a1 + 136), v12);
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)*v10 + 64LL))(*v10, a1, a4, a3);
  }
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  v11 = (std::_Ref_count_base *)a2[1];
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
}
