/*
 * XREFs of ??$query@UIWindowingEnvironmentConfig@@@?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIWindowingEnvironmentConfig@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801A9224
 * Callers:
 *     ?GetWindowingEnvironmentConfigById@WindowingEnvironmentManager@@UEAAJIPEAPEAUIWindowingEnvironmentConfig@@@Z @ 0x18041B5A0 (-GetWindowingEnvironmentConfigById@WindowingEnvironmentManager@@UEAAJIPEAPEAUIWindowingEnvironme.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>::query<IWindowingEnvironmentConfig>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, _QWORD *),
        _QWORD *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, _QWORD *); // rcx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a1;
  *a2 = 0LL;
  v4 = (**v2)(v2, &GUID_3c32be79_d44b_4c43_b19b_12f70e686f35, a2);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x17F8,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v4,
      v6);
  return a2;
}
