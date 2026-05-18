/*
 * XREFs of ?GetPropertyName@ShaderManager@Engine@Spectre@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderProperty@23@@Z @ 0x18004FD54
 * Callers:
 *     ?GetTexture@ShaderPropertyBlock@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@W4ShaderProperty@23@@Z @ 0x1800850D4 (-GetTexture@ShaderPropertyBlock@Engine@Spectre@@QEBA-AV-$shared_ptr@VTexture@Engine@Spectre@@@st.c)
 *     ?ReadPropertyValueElements@ShaderPropertyBlock@Engine@Spectre@@AEBAPEBTValueElement@ShaderPropertyLayout@23@W4ShaderProperty@23@W4ShaderPropertyType@23@I@Z @ 0x180085200 (-ReadPropertyValueElements@ShaderPropertyBlock@Engine@Spectre@@AEBAPEBTValueElement@ShaderProper.c)
 *     ?SetTexture@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@V?$shared_ptr@VTexture@Engine@Spectre@@@std@@@Z @ 0x18008566C (-SetTexture@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@V-$shared_ptr@VTexture@.c)
 *     ?SetTextureSampler@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@V?$shared_ptr@VSampler@Engine@Spectre@@@std@@@Z @ 0x18008585C (-SetTextureSampler@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@V-$shared_ptr@VS.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x18001C59C (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C59C.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEBD$$QEAV10@@Z @ 0x18001C668 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C668.c)
 *     ??$_Integral_to_string@DH@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@H@Z @ 0x180027C00 (--$_Integral_to_string@DH@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@0@H@.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Spectre::Engine::ShaderManager::GetPropertyName(__int64 a1, _QWORD *a2, unsigned __int16 a3)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD v9[4]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v10[32]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v12[4]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v13[4]; // [rsp+D8h] [rbp-30h] BYREF

  if ( a3 == 511 || a3 >= *(int *)(a1 + 18488) )
  {
    std::_Integral_to_string<char,int>((__int64)v10, a3);
    v5 = std::operator+<char>(v12, (__int64)"ShaderManager::GetPropertyName() -- property id ", v10);
    v6 = std::operator+<char>(v13, v5, (__int64)" is not registered");
    v7 = std::string::string(
           v9,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shadermanager.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v7,
      v8,
      (__int64)v6,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  std::string::string(a2, 32LL * a3 + a1 + 2104);
  return a2;
}
