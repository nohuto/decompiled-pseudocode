/*
 * XREFs of ?StringToWString@Utils@Spectre@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEBD_K@Z @ 0x18001F234
 * Callers:
 *     ?StringToWString@Utils@Spectre@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z @ 0x18001F208 (-StringToWString@Utils@Spectre@@YA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ?resize@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_K_W@Z @ 0x18001F9FC (-resize@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_K_W@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Spectre::Utils::StringToWString(__int64 a1, const CHAR *a2, __int64 a3)
{
  int v3; // edi
  int v6; // eax
  int cchWideChar; // r14d
  WCHAR *lpWideCharStr; // rax
  __m128i v9; // xmm1
  LPWSTR v11[2]; // [rsp+40h] [rbp-30h] BYREF
  __m128i si128; // [rsp+50h] [rbp-20h] BYREF

  v3 = a3;
  if ( a3 )
  {
    v6 = MultiByteToWideChar(0xFDE9u, 0, a2, a3, 0LL, 0);
    cchWideChar = v6;
    v11[0] = 0LL;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    if ( v6 <= 0 )
      __fastfail(7u);
    std::wstring::resize(v11, v6);
    lpWideCharStr = (WCHAR *)v11;
    if ( si128.m128i_i64[1] >= 8uLL )
      lpWideCharStr = v11[0];
    MultiByteToWideChar(0xFDE9u, 0, a2, v3, lpWideCharStr, cchWideChar);
    v9 = _mm_loadu_si128(&si128);
    *(_OWORD *)a1 = *(_OWORD *)v11;
    *(__m128i *)(a1 + 16) = v9;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v11[0]) = 0;
    std::wstring::_Tidy_deallocate((__int64)v11);
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_WORD *)a1 = 0;
  }
  return a1;
}
