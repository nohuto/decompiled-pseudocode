/*
 * XREFs of ?SetTexture@SpectreMaterial@@UEAAJV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAUISpectreTexture@@PEAUISpectreSampler@@@Z @ 0x180013890
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@AEBV10@0@Z @ 0x18001338C (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ?SetBoolean@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x180044620 (-SetBoolean@Material@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator.c)
 *     ?SetTexture@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@5@@Z @ 0x1800448BC (-SetTexture@Material@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator.c)
 *     ?SetTextureSampler@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@VSampler@Engine@Spectre@@@5@@Z @ 0x180044A68 (-SetTextureSampler@Material@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$al.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall SpectreMaterial::SetTexture(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r9
  void *v9; // rax
  char v10; // bl
  __int64 v11; // r9
  void *v12; // rax
  char v13; // bl
  __int64 v14; // rbx
  void *v15; // rax
  __int64 v16; // r8
  __int64 result; // rax
  std::_Ref_count_base *v18[2]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v19; // [rsp+38h] [rbp-60h]
  __int64 v20; // [rsp+40h] [rbp-58h] BYREF
  std::_Ref_count_base *v21; // [rsp+48h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v19 = a2;
  v8 = *(_QWORD *)(a1 + 16);
  if ( a3 )
  {
    v9 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           &v20,
           (_QWORD *)(a3 + 16));
    v10 = 1;
  }
  else
  {
    *(_OWORD *)v18 = 0LL;
    v9 = v18;
    v10 = 2;
  }
  try
  {
    Spectre::Engine::Material::SetTexture(v8, a2, v9);
    if ( (v10 & 2) != 0 )
    {
      v10 &= ~2u;
      if ( v18[1] )
        std::_Ref_count_base::_Decref(v18[1]);
    }
    if ( (v10 & 1) != 0 )
    {
      v10 &= ~1u;
      if ( v21 )
        std::_Ref_count_base::_Decref(v21);
    }
    v11 = *(_QWORD *)(a1 + 16);
    if ( a4 )
    {
      v12 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
              &v20,
              (_QWORD *)(a4 + 16));
      v13 = v10 | 4;
    }
    else
    {
      *(_OWORD *)v18 = 0LL;
      v12 = v18;
      v13 = v10 | 8;
    }
    Spectre::Engine::Material::SetTextureSampler(v11, a2, v12);
    if ( (v13 & 8) != 0 )
    {
      v13 &= ~8u;
      if ( v18[1] )
        std::_Ref_count_base::_Decref(v18[1]);
    }
    if ( (v13 & 4) != 0 && v21 )
      std::_Ref_count_base::_Decref(v21);
    v14 = *(_QWORD *)(a1 + 16);
    v15 = std::operator+<char>(&v20, a2, Spectre::Engine::ShaderConstants::kEnabledSuffix);
    LOBYTE(v16) = a3 != 0;
    Spectre::Engine::Material::SetBoolean(v14, v15, v16);
    std::string::_Tidy_deallocate((__int64)&v20);
    std::string::_Tidy_deallocate(a2);
    result = 0LL;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF9,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrematerial.cpp",
      (const char *)0x80004005LL);
    std::string::_Tidy_deallocate(v19);
    return 2147500037LL;
  }
  return result;
}
