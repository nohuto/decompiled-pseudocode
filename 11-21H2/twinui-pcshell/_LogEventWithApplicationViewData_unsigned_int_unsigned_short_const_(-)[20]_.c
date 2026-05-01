/*
 * XREFs of _LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_(&)[20]_ @ 0x1803CC4C8
 * Callers:
 *     ?_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@_N@Z @ 0x1803D17A8 (-_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Win32SlateViewConsideredForOwnership@PEBGIAEAY0BE@$$CBG@HolographicPositionerTelemetry@@SAX$$QEAPEBG$$QEAIAEAY0BE@$$CBG@Z @ 0x1803CBCB8 (--$Win32SlateViewConsideredForOwnership@PEBGIAEAY0BE@$$CBG@HolographicPositionerTelemetry@@SAX$$.c)
 */

// Hidden C++ exception states: #wind=1
__int64 LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_____20__(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3,
        ...)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
  v9 = a2;
  v4 = *a1;
  v10 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v4 + 136))(a1, (__int64 *)va);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v9 = v10;
    HolographicPositionerTelemetry::Win32SlateViewConsideredForOwnership<unsigned short const *,unsigned int,unsigned short const (&)[20]>(
      &v9,
      a3,
      (__int64)L"Property set found.");
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\TelemetryHelpers.h",
      (const char *)(unsigned int)v5);
  }
  wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>((void **)va);
  return v6;
}
