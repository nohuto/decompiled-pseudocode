/*
 * XREFs of ?AccessPropertyDefaultContents@ShaderPropertyLayout@Engine@Spectre@@AEAAPEATValueElement@123@W4ShaderProperty@23@W4ShaderPropertyType@23@@Z @ 0x180081FB4
 * Callers:
 *     ?SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@AEBUColor@Math@Utils@3@@Z @ 0x1800836C8 (-SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@AEBUCo.c)
 *     ?SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@AEBUMatrix@Math@Utils@3@@Z @ 0x1800836FC (-SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@AEBUMa.c)
 *     ?SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@AEBUVector2@Math@Utils@3@@Z @ 0x18008373C (-SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@AEBUVe.c)
 *     ?SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@AEBUVector3@Math@Utils@3@@Z @ 0x180083764 (-SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderPrope_ea_180083764.c)
 *     ?SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@AEBUVector4@Math@Utils@3@@Z @ 0x180083790 (-SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderPrope_ea_180083790.c)
 *     ?SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@H@Z @ 0x1800837C4 (-SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@H@Z.c)
 *     ?SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@M@Z @ 0x1800837E4 (-SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@M@Z.c)
 *     ?SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@_N@Z @ 0x18008380C (-SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@_N@Z.c)
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
__int64 __fastcall Spectre::Engine::ShaderPropertyLayout::AccessPropertyDefaultContents(
        __int64 a1,
        unsigned __int16 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  __int64 v4; // rcx
  int v5; // r9d
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 PropertyInfo; // rax
  __int64 v10; // r8
  _QWORD v12[4]; // [rsp+38h] [rbp-61h] BYREF
  _QWORD v13[4]; // [rsp+58h] [rbp-41h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-21h] BYREF
  _QWORD v15[7]; // [rsp+B0h] [rbp+17h] BYREF

  if ( *(_DWORD *)(a1 + 1168) )
  {
    std::string::string(
      v13,
      (__int64)"ShaderPropertyLayout::SetPropertyDefault() -- cannot set property defaults after calling ShaderPropertyLa"
               "yout::EndDeclaration()");
    v2 = std::string::string(
           v12,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderpropertylayout.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v2,
      v3,
      (__int64)v13,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( !(unsigned __int8)Spectre::Engine::ShaderPropertyLayout::HasProperty(a1, a2, a1) )
  {
    std::_Integral_to_string<char,int>((__int64)v13, v5);
    v6 = std::operator+<char>(
           pExceptionObject,
           (__int64)"ShaderPropertyLayout::SetPropertyDefault() -- property layout does not have a property with the specified ID ",
           v13);
    v7 = std::string::string(
           v12,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderpropertylayout.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(v15, (__int64)v7, v8, (__int64)v6, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v15;
  }
  PropertyInfo = Spectre::Engine::ShaderPropertyLayout::GetPropertyInfo(v4, (unsigned __int16)v5);
  return *(_QWORD *)(v10 + 80) + 4LL * *(unsigned int *)(PropertyInfo + 40);
}
