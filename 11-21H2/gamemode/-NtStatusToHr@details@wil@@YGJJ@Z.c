/*
 * XREFs of ?NtStatusToHr@details@wil@@YGJJ@Z @ 0x1000608F
 * Callers:
 *     ??$ReportFailure_NtStatus@$00@details@wil@@YGJPAXIPBD110J@Z @ 0x100065AD (--$ReportFailure_NtStatus@$00@details@wil@@YGJPAXIPBD110J@Z.c)
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x100072B0 (@_guard_check_icall_nop@4.c)
 */

int __fastcall wil::details::NtStatusToHr(int a1)
{
  int result; // eax

  if ( a1 >= 0 )
    return 0;
  if ( a1 == -1073741801 )
    return -2147024882;
  if ( !wil::details::g_pfnRtlNtStatusToDosErrorNoTeb )
    return (unsigned int)&_ImageBase | a1;
  result = wil::details::g_pfnRtlNtStatusToDosErrorNoTeb(wil::details::g_pfnRtlNtStatusToDosErrorNoTeb, a1);
  if ( !result || result == 317 )
    return (unsigned int)&_ImageBase | a1;
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
