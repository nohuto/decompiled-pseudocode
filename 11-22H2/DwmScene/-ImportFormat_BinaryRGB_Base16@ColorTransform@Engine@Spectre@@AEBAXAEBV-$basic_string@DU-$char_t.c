/*
 * XREFs of ?ImportFormat_BinaryRGB_Base16@ColorTransform@Engine@Spectre@@AEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAULoaderResult@123@@Z @ 0x180090460
 * Callers:
 *     ?Import@ColorTransform@Engine@Spectre@@QEAAXPEBX_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18009003C (-Import@ColorTransform@Engine@Spectre@@QEAAXPEBX_KAEBV-$basic_string@DU-$char_traits@D@std@@V-$a.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     floorf @ 0x18000C02C (floorf.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?substr@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA?AV12@_K0@Z @ 0x18001E7BC (-substr@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA-AV12@_K0@Z.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@UColor@Math@Utils@Spectre@@V?$allocator@UColor@Math@Utils@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18008F1B0 (--$_Resize@U_Value_init_tag@std@@@-$vector@UColor@Math@Utils@Spectre@@V-$allocator@UColor@Math@U.c)
 *     ?FromARGB@Color@Math@Utils@Spectre@@SA?AU1234@I@Z @ 0x18008FCD8 (-FromARGB@Color@Math@Utils@Spectre@@SA-AU1234@I@Z.c)
 *     ?stoi@std@@YAHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PEA_KH@Z @ 0x1800913C0 (-stoi@std@@YAHAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@PEA_KH@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::ColorTransform::ImportFormat_BinaryRGB_Base16(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // kr00_8
  signed __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // r8
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // r8
  __int64 *v16; // r14
  __int64 v17; // rdi
  unsigned __int64 v18; // rsi
  unsigned int v19; // eax
  float *v20; // rax
  __int64 v21; // rdx
  float v22[4]; // [rsp+30h] [rbp-59h] BYREF
  char String[32]; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v24[4]; // [rsp+60h] [rbp-29h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-9h] BYREF

  v5 = *(_QWORD *)(a2 + 16);
  v6 = v5 / 6;
  if ( v5 != 6 * (v5 / 6) )
  {
    std::string::string(
      v24,
      (__int64)"ColorTransform::ImportFormat_BinaryRGB_Base16() -- unexpected data length (not multiple of six characters)");
    v7 = std::string::string(
           String,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\colortransform.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v7,
      v8,
      (__int64)v24,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( v6 < 0 )
    v9 = (float)(int)((v5 / 6) & 1 | (v5 / 0xC)) + (float)(int)((v5 / 6) & 1 | (v5 / 0xC));
  else
    v9 = (float)(int)v6;
  v10 = cbrtf(v9);
  v11 = floorf(v10);
  v12 = 0LL;
  if ( v11 >= 9.223372e18 )
  {
    v11 = v11 - 9.223372e18;
    if ( v11 < 9.223372e18 )
      v12 = 0x8000000000000000uLL;
  }
  v13 = v12 + (unsigned int)(int)v11;
  if ( v13 * v13 * v13 != v6 )
  {
    std::string::string(
      String,
      (__int64)"ColorTransform::ImportFormat_BinaryRGB_Base16() -- unexpected data length (not a cube)");
    v14 = std::string::string(
            v24,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\colortransform.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v14,
      v15,
      (__int64)String,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *(_QWORD *)a3 = v13;
  v16 = (__int64 *)(a3 + 8);
  std::vector<Spectre::Utils::Math::Color>::_Resize<std::_Value_init_tag>((_QWORD *)(a3 + 8), v5 / 6);
  v17 = 0LL;
  *(_DWORD *)(a3 + 32) = 0;
  if ( v6 )
  {
    v18 = 0LL;
    do
    {
      std::string::substr(a2, (__int64)String, v18, 6uLL);
      v19 = std::stoi(String);
      v20 = Spectre::Utils::Math::Color::FromARGB(v22, v19);
      v21 = *v16;
      *(float *)(v17 + v21) = *v20;
      *(float *)(v17 + v21 + 4) = v20[1];
      *(float *)(v17 + v21 + 8) = v20[2];
      *(float *)(v17 + v21 + 12) = v20[3];
      std::string::_Tidy_deallocate((__int64)String);
      v18 += 6LL;
      v17 += 16LL;
      --v6;
    }
    while ( v6 );
  }
}
