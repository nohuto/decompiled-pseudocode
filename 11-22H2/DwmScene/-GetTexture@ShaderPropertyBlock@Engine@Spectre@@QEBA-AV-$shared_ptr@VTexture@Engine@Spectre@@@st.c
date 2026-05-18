/*
 * XREFs of ?GetTexture@ShaderPropertyBlock@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@W4ShaderProperty@23@@Z @ 0x1800850D4
 * Callers:
 *     ?GetTexture@Material@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@W4ShaderProperty@23@@Z @ 0x180044400 (-GetTexture@Material@Engine@Spectre@@QEBA-AV-$shared_ptr@VTexture@Engine@Spectre@@@std@@W4Shader.c)
 *     ?ApplySpecialEffects@ImageProcessingManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@V45@@Z @ 0x1800725CC (-ApplySpecialEffects@ImageProcessingManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VTexture@Engine@.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEBD$$QEAV10@@Z @ 0x18001C668 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C668.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ?GetPropertyName@ShaderManager@Engine@Spectre@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderProperty@23@@Z @ 0x18004FD54 (-GetPropertyName@ShaderManager@Engine@Spectre@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$a.c)
 *     ?GetPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@AEBAAEBUPropertyInfo@123@W4ShaderProperty@23@@Z @ 0x180082F6C (-GetPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@AEBAAEBUPropertyInfo@123@W4ShaderProperty@.c)
 *     ?HasProperty@ShaderPropertyLayout@Engine@Spectre@@QEBA_NW4ShaderProperty@23@@Z @ 0x1800830EC (-HasProperty@ShaderPropertyLayout@Engine@Spectre@@QEBA_NW4ShaderProperty@23@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Spectre::Engine::ShaderPropertyBlock::GetTexture(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rcx
  unsigned __int16 v4; // r8
  _QWORD *PropertyName; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 PropertyInfo; // rax
  _QWORD *v10; // r9
  __int64 v11; // r10
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD v16[4]; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v17[4]; // [rsp+60h] [rbp-29h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-9h] BYREF
  _QWORD v19[4]; // [rsp+B8h] [rbp+2Fh] BYREF

  if ( !Spectre::Engine::ShaderPropertyLayout::HasProperty(*(_QWORD *)(a1 + 16), a3) )
  {
    PropertyName = Spectre::Engine::ShaderManager::GetPropertyName(*(_QWORD *)(v3 + 1152), v17, v4);
    v6 = std::operator+<char>(v19, (__int64)"Property does not exist: ", PropertyName);
    v7 = std::string::string(
           v16,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderpropertyblock.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v7,
      v8,
      (__int64)v6,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  PropertyInfo = Spectre::Engine::ShaderPropertyLayout::GetPropertyInfo(v3, v4);
  if ( *(_DWORD *)(PropertyInfo + 36) != 8 )
  {
    std::string::string(v17, (__int64)"ShaderPropertyBlock::GetTexture() -- Property is not of type Texture");
    v12 = std::string::string(
            v16,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\shaderpropertyblock.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v12,
      v13,
      (__int64)v17,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    v10,
    (_QWORD *)(*(_QWORD *)(v11 + 56) + 40LL * *(unsigned int *)(PropertyInfo + 40)));
  return v14;
}
