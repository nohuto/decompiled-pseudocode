/*
 * XREFs of ?WStringToString@Utils@Spectre@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEB_W_K@Z @ 0x18001F38C
 * Callers:
 *     ?WStringToString@Utils@Spectre@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@4@@Z @ 0x18001F360 (-WStringToString@Utils@Spectre@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?resize@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_KD@Z @ 0x18001F980 (-resize@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_KD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Spectre::Utils::WStringToString(__int64 a1, const WCHAR *a2, __int64 a3)
{
  int v3; // edi
  int v6; // eax
  int cbMultiByte; // r14d
  CHAR *lpMultiByteStr; // rdx
  __m128i v9; // xmm1
  LPSTR v11[2]; // [rsp+50h] [rbp-30h] BYREF
  __m128i si128; // [rsp+60h] [rbp-20h] BYREF

  v3 = a3;
  if ( a3 )
  {
    v6 = WideCharToMultiByte(0xFDE9u, 0, a2, a3, 0LL, 0, 0LL, 0LL);
    cbMultiByte = v6;
    v11[0] = 0LL;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    if ( v6 <= 0 )
      __fastfail(7u);
    std::string::resize(v11, v6);
    lpMultiByteStr = (CHAR *)v11;
    if ( si128.m128i_i64[1] >= 0x10uLL )
      lpMultiByteStr = v11[0];
    WideCharToMultiByte(0xFDE9u, 0, a2, v3, lpMultiByteStr, cbMultiByte, 0LL, 0LL);
    v9 = _mm_loadu_si128(&si128);
    *(_OWORD *)a1 = *(_OWORD *)v11;
    *(__m128i *)(a1 + 16) = v9;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOBYTE(v11[0]) = 0;
    std::string::_Tidy_deallocate((__int64)v11);
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 15LL;
    *(_BYTE *)a1 = 0;
  }
  return a1;
}
