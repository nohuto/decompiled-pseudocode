/*
 * XREFs of ??0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderPropertyType@12@H@Z @ 0x180044F8C
 * Callers:
 *     ?DefineMaterialPropertyLayout@Engine@Spectre@@YAXPEAVShaderManager@12@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@@Z @ 0x180045F78 (-DefineMaterialPropertyLayout@Engine@Spectre@@YAXPEAVShaderManager@12@V-$shared_ptr@VShaderFamil.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ??0?$vector@MV?$allocator@M@std@@@std@@QEAA@_KAEBMAEBV?$allocator@M@1@@Z @ 0x180044DA4 (--0-$vector@MV-$allocator@M@std@@@std@@QEAA@_KAEBMAEBV-$allocator@M@1@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  _DWORD v7[4]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v8; // [rsp+40h] [rbp-A8h]
  _QWORD v9[5]; // [rsp+50h] [rbp-98h] BYREF
  _QWORD v10[4]; // [rsp+78h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+98h] [rbp-50h] BYREF

  v8 = a1;
  v9[4] = a2;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  *(_DWORD *)(a1 + 32) = 1;
  v7[0] = 0;
  std::vector<float>::vector<float>((__int64 *)(a1 + 40), a2, v7);
  if ( (int)**(float **)(a1 + 40) )
  {
    std::string::string(
      v10,
      (__int64)"Shader integer has default value is outside the currently supported range (must be exactly representable as float).");
    v4 = std::string::string(
           v9,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\Inc\\NativeRen"
                    "derer\\Resources\\ShaderDefinitions.h");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v4,
      v5,
      (__int64)v10,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  std::string::_Tidy_deallocate(a2);
  return a1;
}
