/*
 * XREFs of ?SetTexCoord@SpectreMaterial@@UEAAJII@Z @ 0x1800137B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800134DC (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?SetBoolean@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x180044620 (-SetBoolean@Material@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpectreMaterial::SetTexCoord(SpectreMaterial *this, int a2, __int64 a3)
{
  int v3; // ebx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  void **v8; // rdx
  __int64 result; // rax
  void *v10[2]; // [rsp+20h] [rbp-38h] BYREF
  __m128i si128; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  try
  {
    v3 = a3;
    v10[0] = 0LL;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    if ( !a2 )
    {
      std::string::operator=(v10, (void **)&Spectre::Engine::ShaderConstants::kMaterial_TexEmissiveUseUV1);
      goto LABEL_13;
    }
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          if ( v7 != 1 )
          {
LABEL_13:
            LOBYTE(a3) = v3 == 1;
            Spectre::Engine::Material::SetBoolean(*((_QWORD *)this + 2), v10, a3);
            std::string::_Tidy_deallocate((__int64)v10);
            return 0LL;
          }
          v8 = (void **)&Spectre::Engine::ShaderConstants::kMaterial_TexSpecularUseUV1;
        }
        else
        {
          v8 = (void **)&Spectre::Engine::ShaderConstants::kMaterial_TexDiffuseUseUV1;
        }
      }
      else
      {
        v8 = (void **)&Spectre::Engine::ShaderConstants::kMaterial_TexOcclusionUseUV1;
      }
    }
    else
    {
      v8 = (void **)&Spectre::Engine::ShaderConstants::kMaterial_TexNormalUseUV1;
    }
    std::string::operator=(v10, v8);
    goto LABEL_13;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDE,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrematerial.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  return result;
}
