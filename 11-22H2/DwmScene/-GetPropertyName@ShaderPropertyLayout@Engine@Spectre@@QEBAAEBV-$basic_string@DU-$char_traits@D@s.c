/*
 * XREFs of ?GetPropertyName@ShaderPropertyLayout@Engine@Spectre@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderProperty@23@@Z @ 0x180082F9C
 * Callers:
 *     ?GetPropertyName@Material@Engine@Spectre@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderProperty@23@@Z @ 0x180044368 (-GetPropertyName@Material@Engine@Spectre@@QEBAAEBV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEBD$$QEAV10@@Z @ 0x18001C668 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C668.c)
 *     ??$_Integral_to_string@DH@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@H@Z @ 0x180027C00 (--$_Integral_to_string@DH@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@0@H@.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ?GetPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@AEBAAEBUPropertyInfo@123@W4ShaderProperty@23@@Z @ 0x180082F6C (-GetPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@AEBAAEBUPropertyInfo@123@W4ShaderProperty@.c)
 *     ?HasProperty@ShaderPropertyLayout@Engine@Spectre@@QEBA_NW4ShaderProperty@23@@Z @ 0x1800830EC (-HasProperty@ShaderPropertyLayout@Engine@Spectre@@QEBA_NW4ShaderProperty@23@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Spectre::Engine::ShaderPropertyLayout::GetPropertyName(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rcx
  int v3; // r8d
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD v8[4]; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v9[32]; // [rsp+58h] [rbp-90h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-70h] BYREF
  _QWORD v11[4]; // [rsp+B0h] [rbp-38h] BYREF

  if ( !(unsigned __int8)Spectre::Engine::ShaderPropertyLayout::HasProperty(a1, a2, a2) )
  {
    std::_Integral_to_string<char,int>((__int64)v9, v3);
    v4 = std::operator+<char>(
           v11,
           (__int64)"ShaderPropertyLayout::GetPropertyName() -- property layout does not have a property with the specified ID ",
           v9);
    v5 = std::string::string(
           v8,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderpropertylayout.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v5,
      v6,
      (__int64)v4,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  return Spectre::Engine::ShaderPropertyLayout::GetPropertyInfo(v2, v3);
}
