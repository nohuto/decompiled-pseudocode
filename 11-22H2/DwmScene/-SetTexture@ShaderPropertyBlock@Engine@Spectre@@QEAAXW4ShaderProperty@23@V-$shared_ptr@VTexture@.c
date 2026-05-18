/*
 * XREFs of ?SetTexture@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@V?$shared_ptr@VTexture@Engine@Spectre@@@std@@@Z @ 0x18008566C
 * Callers:
 *     ?SetTexture@Material@Engine@Spectre@@QEAAXW4ShaderProperty@23@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@@Z @ 0x1800448F0 (-SetTexture@Material@Engine@Spectre@@QEAAXW4ShaderProperty@23@AEBV-$shared_ptr@VTexture@Engine@S.c)
 *     ?SetTexture@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VTexture@Engine@Spectre@@@5@@Z @ 0x180085600 (-SetTexture@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEBD$$QEAV10@@Z @ 0x18001C668 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C668.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ?GetPropertyName@ShaderManager@Engine@Spectre@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderProperty@23@@Z @ 0x18004FD54 (-GetPropertyName@ShaderManager@Engine@Spectre@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$a.c)
 *     ?GetPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@AEBAAEBUPropertyInfo@123@W4ShaderProperty@23@@Z @ 0x180082F6C (-GetPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@AEBAAEBUPropertyInfo@123@W4ShaderProperty@.c)
 *     ?HasProperty@ShaderPropertyLayout@Engine@Spectre@@QEBA_NW4ShaderProperty@23@@Z @ 0x1800830EC (-HasProperty@ShaderPropertyLayout@Engine@Spectre@@QEBA_NW4ShaderProperty@23@@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Spectre::Engine::ShaderPropertyBlock::SetTexture(__int64 a1, unsigned __int16 a2, __int64 *a3)
{
  __int64 v4; // rcx
  unsigned __int16 v5; // r8
  _QWORD *PropertyName; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r8
  _DWORD *PropertyInfo; // rax
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // r8
  std::_Ref_count_base *v16; // rcx
  _QWORD v17[4]; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v18[4]; // [rsp+60h] [rbp-29h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-9h] BYREF
  _QWORD v20[4]; // [rsp+B8h] [rbp+2Fh] BYREF

  if ( !Spectre::Engine::ShaderPropertyLayout::HasProperty(*(_QWORD *)(a1 + 16), a2) )
  {
    PropertyName = Spectre::Engine::ShaderManager::GetPropertyName(*(_QWORD *)(v4 + 1152), v18, v5);
    v7 = std::operator+<char>(v20, (__int64)"Property does not exist: ", PropertyName);
    v8 = std::string::string(
           v17,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderpropertyblock.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v8,
      v9,
      (__int64)v7,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  PropertyInfo = (_DWORD *)Spectre::Engine::ShaderPropertyLayout::GetPropertyInfo(v4, v5);
  if ( PropertyInfo[9] != 8 )
  {
    std::string::string(v18, (__int64)"ShaderPropertyBlock::SetTexture() -- Property is not of type Texture");
    v12 = std::string::string(
            v17,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\shaderpropertyblock.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v12,
      v13,
      (__int64)v18,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( PropertyInfo[12] == 2 )
  {
    std::string::string(
      v17,
      (__int64)"ShaderPropertyBlock::SetTexture() -- Cannot set the value of an imported property");
    v14 = std::string::string(
            v18,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\shaderpropertyblock.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v14,
      v15,
      (__int64)v17,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(
    (_QWORD *)(*(_QWORD *)(v11 + 56) + 40LL * (unsigned int)PropertyInfo[10]),
    a3);
  v16 = (std::_Ref_count_base *)a3[1];
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
}
