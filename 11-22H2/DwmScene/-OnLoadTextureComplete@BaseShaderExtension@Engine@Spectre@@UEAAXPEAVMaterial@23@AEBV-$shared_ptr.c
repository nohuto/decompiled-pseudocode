/*
 * XREFs of ?OnLoadTextureComplete@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@W4ShaderProperty@23@@Z @ 0x18009AB60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@AEBV10@0@Z @ 0x18001338C (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?FindProperty@Material@Engine@Spectre@@QEBA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800442D8 (-FindProperty@Material@Engine@Spectre@@QEBA-AW4ShaderProperty@23@AEBV-$basic_string@DU-$char_tra.c)
 *     ?GetPropertyName@Material@Engine@Spectre@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderProperty@23@@Z @ 0x180044368 (-GetPropertyName@Material@Engine@Spectre@@QEBAAEBV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     ?IsRenderingModeAutomatic@Material@Engine@Spectre@@QEBA_NXZ @ 0x180044464 (-IsRenderingModeAutomatic@Material@Engine@Spectre@@QEBA_NXZ.c)
 *     ?SetBoolean@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x180044620 (-SetBoolean@Material@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator.c)
 *     ?SetRenderingMode@Material@Engine@Spectre@@QEAAXW4ERenderingMode@23@@Z @ 0x180044840 (-SetRenderingMode@Material@Engine@Spectre@@QEAAXW4ERenderingMode@23@@Z.c)
 *     ?SetTexture@Material@Engine@Spectre@@QEAAXW4ShaderProperty@23@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@@Z @ 0x1800448F0 (-SetTexture@Material@Engine@Spectre@@QEAAXW4ShaderProperty@23@AEBV-$shared_ptr@VTexture@Engine@S.c)
 *     ?SetVector4@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUVector4@Math@Utils@3@@Z @ 0x180044A9C (-SetVector4@Material@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::BaseShaderExtension::OnLoadTextureComplete(
        __int64 a1,
        Spectre::Engine::Material *a2,
        _QWORD *a3,
        unsigned __int16 a4)
{
  __int64 PropertyName; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r8
  _OWORD v11[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v12[4]; // [rsp+40h] [rbp-48h] BYREF

  PropertyName = Spectre::Engine::Material::GetPropertyName((__int64)a2);
  std::string::string(v12, PropertyName);
  Spectre::Engine::Material::SetTexture((__int64)a2, a4, a3);
  if ( a4 == (unsigned __int16)Spectre::Engine::Material::FindProperty(
                                 (__int64)a2,
                                 (__int64)&Spectre::Engine::ShaderConstants::kMaterial_DiffuseTexture,
                                 v8)
    && Spectre::Engine::Material::IsRenderingModeAutomatic(a2)
    && (*(_BYTE *)(*a3 + 160LL) & 2) != 0 )
  {
    Spectre::Engine::Material::SetRenderingMode(v9, 1);
  }
  std::operator+<char>(v11, (__int64)v12, Spectre::Engine::ShaderConstants::kEnabledSuffix);
  Spectre::Engine::Material::SetBoolean((__int64)a2);
  std::string::_Tidy_deallocate((__int64)v11);
  if ( a4 == (unsigned __int16)Spectre::Engine::Material::FindProperty(
                                 (__int64)a2,
                                 (__int64)&Spectre::Engine::ShaderConstants::kMaterial_SpecularTexture,
                                 v10) )
  {
    v11[0] = 0LL;
    if ( std::operator!=<Spectre::Engine::Scene>(a3) )
    {
      if ( (*(_BYTE *)(*a3 + 160LL) & 2) != 0 )
      {
        LODWORD(v11[0]) = 1065353216;
        HIDWORD(v11[0]) = 1065353216;
      }
      else
      {
        *((float *)v11 + 2) = FLOAT_0_33333334;
      }
    }
    Spectre::Engine::Material::SetVector4((__int64)a2);
  }
  std::string::_Tidy_deallocate((__int64)v12);
}
