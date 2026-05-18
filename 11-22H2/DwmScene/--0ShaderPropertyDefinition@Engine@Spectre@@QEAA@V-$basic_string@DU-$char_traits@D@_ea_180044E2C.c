/*
 * XREFs of ??0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderPropertyType@12@AEBUColor@Math@Utils@2@@Z @ 0x180044E2C
 * Callers:
 *     ?DefineMaterialPropertyLayout@Engine@Spectre@@YAXPEAVShaderManager@12@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@@Z @ 0x180045F78 (-DefineMaterialPropertyLayout@Engine@Spectre@@YAXPEAVShaderManager@12@V-$shared_ptr@VShaderFamil.c)
 *     ?OnCreate@ImageProcessingShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x18007E880 (-OnCreate@ImageProcessingShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@.c)
 *     ?DefinePropertyLayouts@BackgroundUnlitShaderExtension@Engine@Spectre@@AEAAXPEAVShaderManager@23@@Z @ 0x18007FED4 (-DefinePropertyLayouts@BackgroundUnlitShaderExtension@Engine@Spectre@@AEAAXPEAVShaderManager@23@.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$vector@MV?$allocator@M@std@@@std@@QEAA@V?$initializer_list@M@1@AEBV?$allocator@M@1@@Z @ 0x180044D4C (--0-$vector@MV-$allocator@M@std@@@std@@QEAA@V-$initializer_list@M@1@AEBV-$allocator@M@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4)
{
  _QWORD v7[5]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v8; // [rsp+48h] [rbp-20h] BYREF
  __int64 v9; // [rsp+58h] [rbp-10h] BYREF

  v7[2] = a1;
  v7[4] = a2;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  *(_DWORD *)(a1 + 32) = 6;
  v8 = *a4;
  v7[0] = &v8;
  v7[1] = &v9;
  std::vector<float>::vector<float>((__int64 *)(a1 + 40), (__int64)v7, a3);
  std::string::_Tidy_deallocate(a2);
  return a1;
}
