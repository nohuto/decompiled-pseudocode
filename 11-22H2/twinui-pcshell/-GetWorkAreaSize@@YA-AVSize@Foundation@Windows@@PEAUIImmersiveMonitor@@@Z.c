/*
 * XREFs of ?GetWorkAreaSize@@YA?AVSize@Foundation@Windows@@PEAUIImmersiveMonitor@@@Z @ 0x1802EC814
 * Callers:
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x180764E70 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18076D9B0 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 * Callees:
 *     ??0Size@Foundation@Windows@@QEAA@MM@Z @ 0x18007198C (--0Size@Foundation@Windows@@QEAA@MM@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

Windows::Foundation::Size *__fastcall GetWorkAreaSize(Windows::Foundation::Size *a1, __int64 *a2)
{
  __int64 v2; // rax
  int v4; // eax
  int v6[4]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *a2;
  *(_OWORD *)v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, int *))(v2 + 88))(a2, v6);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3F,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\utils.h",
      (const char *)(unsigned int)v4,
      v6[0]);
  Windows::Foundation::Size::Size(a1, (float)(v6[2] - v6[0]), (float)(v6[3] - v6[1]));
  return a1;
}
