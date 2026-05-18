/*
 * XREFs of ?ReadPropertyValueElements@ShaderPropertyBlock@Engine@Spectre@@AEBAPEBTValueElement@ShaderPropertyLayout@23@W4ShaderProperty@23@W4ShaderPropertyType@23@I@Z @ 0x180085200
 * Callers:
 *     ?AccessPropertyValueElements@ShaderPropertyBlock@Engine@Spectre@@AEAAPEATValueElement@ShaderPropertyLayout@23@W4ShaderProperty@23@W4ShaderPropertyType@23@I@Z @ 0x1800846AC (-AccessPropertyValueElements@ShaderPropertyBlock@Engine@Spectre@@AEAAPEATValueElement@ShaderProp.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEBD$$QEAV10@@Z @ 0x18001C668 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C668.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ?GetPropertyName@ShaderManager@Engine@Spectre@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderProperty@23@@Z @ 0x18004FD54 (-GetPropertyName@ShaderManager@Engine@Spectre@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$a.c)
 *     ?GetPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@AEBAAEBUPropertyInfo@123@W4ShaderProperty@23@@Z @ 0x180082F6C (-GetPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@AEBAAEBUPropertyInfo@123@W4ShaderProperty@.c)
 *     ?HasProperty@ShaderPropertyLayout@Engine@Spectre@@QEBA_NW4ShaderProperty@23@@Z @ 0x1800830EC (-HasProperty@ShaderPropertyLayout@Engine@Spectre@@QEBA_NW4ShaderProperty@23@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Spectre::Engine::ShaderPropertyBlock::ReadPropertyValueElements(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rcx
  unsigned __int16 v3; // r8
  _QWORD *PropertyName; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // r8
  _DWORD *PropertyInfo; // rax
  __int64 v9; // r9
  int v10; // r10d
  _QWORD *v11; // rax
  __int64 v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD v16[4]; // [rsp+38h] [rbp-51h] BYREF
  _QWORD v17[4]; // [rsp+58h] [rbp-31h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-11h] BYREF
  _QWORD v19[4]; // [rsp+B0h] [rbp+27h] BYREF

  if ( !Spectre::Engine::ShaderPropertyLayout::HasProperty(*(_QWORD *)(a1 + 16), a2) )
  {
    PropertyName = Spectre::Engine::ShaderManager::GetPropertyName(*(_QWORD *)(v2 + 1152), v17, v3);
    v5 = std::operator+<char>(v19, (__int64)"Property not found in block: ", PropertyName);
    v6 = std::string::string(
           v16,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderpropertyblock.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v6,
      v7,
      (__int64)v5,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  PropertyInfo = (_DWORD *)Spectre::Engine::ShaderPropertyLayout::GetPropertyInfo(v2, v3);
  if ( PropertyInfo[9] != v10 )
  {
    std::string::string(v17, (__int64)"Property is not of type the correct type");
    v11 = std::string::string(
            v16,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\shaderpropertyblock.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v11,
      v12,
      (__int64)v17,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( PropertyInfo[12] == 2 )
  {
    std::string::string(v16, (__int64)"Property is imported so cannot be modified");
    v13 = std::string::string(
            v17,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\shaderpropertyblock.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v13,
      v14,
      (__int64)v16,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  return *(_QWORD *)(v9 + 32) + 4LL * (unsigned int)PropertyInfo[10];
}
