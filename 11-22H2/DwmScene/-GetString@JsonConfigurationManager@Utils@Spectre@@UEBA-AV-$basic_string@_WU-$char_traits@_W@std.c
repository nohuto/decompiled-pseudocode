/*
 * XREFs of ?GetString@JsonConfigurationManager@Utils@Spectre@@UEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV45@V45@@Z @ 0x1800DEA20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ??$TryGetValue@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@JsonConfigurationManager@Utils@Spectre@@IEBA?AW4QueryResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAV45@@Z @ 0x1800DD08C (--$TryGetValue@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@JsonConfigurati.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall Spectre::Utils::JsonConfigurationManager::GetString(__int64 a1, _QWORD *a2, wchar_t *a3, __int64 a4)
{
  __int128 v7; // [rsp+30h] [rbp-38h] BYREF
  __m128i si128; // [rsp+40h] [rbp-28h]

  *(_QWORD *)&v7 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( (unsigned int)Spectre::Utils::JsonConfigurationManager::TryGetValue<std::wstring>(a1, a3, &v7) )
  {
    *a2 = 0LL;
    a2[2] = 0LL;
    a2[3] = 0LL;
    *(_OWORD *)a2 = *(_OWORD *)a4;
    *((_OWORD *)a2 + 1) = *(_OWORD *)(a4 + 16);
    *(_QWORD *)(a4 + 16) = 0LL;
    *(_QWORD *)(a4 + 24) = 7LL;
    *(_WORD *)a4 = 0;
  }
  else
  {
    *(_OWORD *)a2 = v7;
    *((__m128i *)a2 + 1) = si128;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v7) = 0;
  }
  std::wstring::_Tidy_deallocate((__int64)&v7);
  std::wstring::_Tidy_deallocate(a4);
  return a2;
}
