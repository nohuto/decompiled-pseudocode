/*
 * XREFs of ??$try_get_value@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$reg_view_t@Uerr_exception_policy@wil@@@reg_view_details@reg@wil@@QEBA?AV?$optional@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEBG0K@Z @ 0x18026071C
 * Callers:
 *     ?try_get_value_string@reg@wil@@YA?AV?$optional@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAUHKEY__@@PEBG1@Z @ 0x180275E14 (-try_get_value_string@reg@wil@@YA-AV-$optional@V-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$get_value_with_type@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@Uerr_returncode_policy@wil@@@?$reg_view_t@Uerr_exception_policy@wil@@@reg_view_details@reg@wil@@AEBAJPEBG0AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@Z @ 0x18025E460 (--$get_value_with_type@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@Uerr_return.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::reg::reg_view_details::reg_view_t<wil::err_exception_policy>::try_get_value<std::wstring>(
        HKEY *a1,
        __int64 a2,
        __int64 a3,
        const WCHAR *a4,
        int a5)
{
  int v6; // eax
  wil::reg::reg_view_details *v8; // [rsp+20h] [rbp-58h]
  int v9; // [rsp+20h] [rbp-58h]
  __int128 v10; // [rsp+40h] [rbp-38h] BYREF
  __m128i si128; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  *(_QWORD *)&v10 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LODWORD(v8) = a5;
  v6 = wil::reg::reg_view_details::reg_view_t<wil::err_exception_policy>::get_value_with_type<std::wstring,wil::err_returncode_policy>(
         a1,
         a2,
         a4,
         &v10,
         v8);
  if ( v6 < 0 )
  {
    if ( (unsigned int)(v6 + 2147024894) > 1 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1815,
        (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v6,
        v9);
    *(_BYTE *)(a2 + 32) = 0;
  }
  else
  {
    *(_OWORD *)a2 = v10;
    *(__m128i *)(a2 + 16) = si128;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v10) = 0;
    *(_BYTE *)(a2 + 32) = 1;
  }
  std::wstring::_Tidy_deallocate((__int64)&v10);
  return a2;
}
