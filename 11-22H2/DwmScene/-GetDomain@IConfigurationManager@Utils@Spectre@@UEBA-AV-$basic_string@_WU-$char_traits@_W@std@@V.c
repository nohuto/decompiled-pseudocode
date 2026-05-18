/*
 * XREFs of ?GetDomain@IConfigurationManager@Utils@Spectre@@UEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV45@@Z @ 0x1800DBD60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ??0SpectreInvalidArgException@Utils@Spectre@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x18001E3A4 (--0SpectreInvalidArgException@Utils@Spectre@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$a.c)
 *     ?empty@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA_NXZ @ 0x18001F7CC (-empty@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA_NXZ.c)
 *     ?find@?$_WChar_traits@_W@std@@SAPEB_WPEB_W_KAEB_W@Z @ 0x18001F824 (-find@-$_WChar_traits@_W@std@@SAPEB_WPEB_W_KAEB_W@Z.c)
 *     ?substr@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA?AV12@_K0@Z @ 0x18001FA7C (-substr@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA-AV12@_K0@Z.c)
 */

// Hidden C++ exception states: #wind=2
__m128i *__fastcall Spectre::Utils::IConfigurationManager::GetDomain(__int64 a1, __m128i *a2, __int64 a3)
{
  __int64 v4; // r8
  _WORD *v5; // r10
  _WORD *v6; // rax
  unsigned __int64 v7; // rdx
  _WORD *v8; // r11
  _WORD *v9; // rax
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12; // rax
  __int16 v14[8]; // [rsp+20h] [rbp-59h] BYREF
  __m128i *v15; // [rsp+30h] [rbp-49h]
  __m128i v16; // [rsp+38h] [rbp-41h] BYREF
  __m128i si128; // [rsp+48h] [rbp-31h]
  _QWORD pExceptionObject[7]; // [rsp+58h] [rbp-21h] BYREF
  _QWORD v19[7]; // [rsp+90h] [rbp+17h] BYREF

  v15 = a2;
  if ( std::string::empty(a3) )
  {
    std::string::string(
      &v16,
      (__int64)"IConfigurationManager::GetDomain() -- empty string is not a valid property name");
    Spectre::Utils::SpectreInvalidArgException::SpectreInvalidArgException(pExceptionObject, v16.m128i_i8);
    throw (Spectre::Utils::SpectreInvalidArgException *)pExceptionObject;
  }
  v6 = v5;
  if ( *(_QWORD *)(v4 + 24) >= 8uLL )
    v6 = *(_WORD **)v4;
  if ( *v6 == 47 )
  {
    v7 = *(_QWORD *)(v4 + 16);
    v8 = v5;
    if ( *(_QWORD *)(v4 + 24) >= 8uLL )
      v8 = *(_WORD **)v4;
    v14[0] = 47;
    if ( v7 <= 1
      || (v9 = std::_WChar_traits<wchar_t>::find(v8 + 1, v7 - 1, v14)) == 0LL
      || (v12 = ((__int64)v9 - v11) >> 1, v12 == -1) )
    {
      std::string::string(
        pExceptionObject,
        (__int64)"IConfigurationManager::GetDomain() -- property domain must begin and end with a slash, e.g. /CustomDoma"
                 "in/Category.Value");
      Spectre::Utils::SpectreInvalidArgException::SpectreInvalidArgException(v19, (const char *)pExceptionObject);
      throw (Spectre::Utils::SpectreInvalidArgException *)v19;
    }
    std::wstring::substr(v10, (__int64)&v16, 1uLL, v12 - 1);
    *a2 = v16;
    a2[1] = si128;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v16.m128i_i16[0] = 0;
    std::wstring::_Tidy_deallocate((__int64)&v16);
  }
  else
  {
    std::wstring::wstring(a2, (__int64)&Spectre::Utils::kConfigurationDomain_Standard);
  }
  return a2;
}
