/*
 * XREFs of _lambda_84429cdf929064e299b144c114ce1e9e_::operator() @ 0x180447C0C
 * Callers:
 *     ?DismissView@XamlBaseViewController@@IE$AAAXXZ @ 0x180447DD4 (-DismissView@XamlBaseViewController@@IE$AAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_84429cdf929064e299b144c114ce1e9e_::operator()(__int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 48LL) + 40LL))(*(_QWORD *)(*(_QWORD *)a1 + 48LL));
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x94,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlbaseviewcontroller.cpp",
      (const char *)(unsigned int)v1);
  return 0LL;
}
