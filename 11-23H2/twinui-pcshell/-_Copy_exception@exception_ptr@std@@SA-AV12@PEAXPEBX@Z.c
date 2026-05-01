/*
 * XREFs of ?_Copy_exception@exception_ptr@std@@SA?AV12@PEAXPEBX@Z @ 0x1804FDA14
 * Callers:
 *     ??$make_exception_ptr@Uhresult_canceled@winrt@@@std@@YA?AVexception_ptr@0@Uhresult_canceled@winrt@@@Z @ 0x1804FCF74 (--$make_exception_ptr@Uhresult_canceled@winrt@@@std@@YA-AVexception_ptr@0@Uhresult_canceled@winr.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void *__fastcall std::exception_ptr::_Copy_exception(void *a1, const void *a2)
{
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0LL;
  __ExceptionPtrCreate(&v5);
  __ExceptionPtrCopyException(&v5, a2, &TI2_AUhresult_canceled_winrt__);
  __ExceptionPtrCopy(a1, &v5);
  __ExceptionPtrDestroy(&v5);
  return a1;
}
