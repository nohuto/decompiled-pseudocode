/*
 * XREFs of ??$wait_for@_JU?$ratio@$00$00@std@@@condition_variable@std@@QEAA?AW4cv_status@1@AEAV?$unique_lock@Vmutex@std@@@1@AEBV?$duration@_JU?$ratio@$00$00@std@@@chrono@1@@Z @ 0x18003094C
 * Callers:
 *     ?SendPerformanceSummaryTimer@Engine@1Spectre@@IEAAXXZ @ 0x1800369E0 (-SendPerformanceSummaryTimer@Engine@1Spectre@@IEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??$_To_xtime_10_day_clamped@_JU?$ratio@$00$00@std@@@std@@YA_NAEAUxtime@@AEBV?$duration@_JU?$ratio@$00$00@std@@@chrono@0@@Z @ 0x18002F7E0 (--$_To_xtime_10_day_clamped@_JU-$ratio@$00$00@std@@@std@@YA_NAEAUxtime@@AEBV-$duration@_JU-$rati.c)
 */

__int64 __fastcall std::condition_variable::wait_for<__int64,std::ratio<1,1>>(_Cnd_t a1, _Mtx_t *a2, __int64 *a3)
{
  __int64 result; // rax
  char v6; // di
  int v7; // eax
  xtime v8; // [rsp+20h] [rbp-38h] BYREF

  if ( *a3 <= 0 )
    return 1LL;
  v6 = std::_To_xtime_10_day_clamped<__int64,std::ratio<1,1>>((__int64)&v8, a3);
  if ( !_Mtx_current_owns(*a2) )
  {
    std::_Throw_Cpp_error(4);
    __debugbreak();
  }
  v7 = _Cnd_timedwait(a1, *a2, &v8);
  if ( v7 )
  {
    if ( v7 != 2 )
    {
      std::_Throw_C_error(v7);
      __debugbreak();
    }
    result = 1LL;
  }
  else
  {
    result = 0LL;
  }
  if ( v6 )
    return 0LL;
  return result;
}
