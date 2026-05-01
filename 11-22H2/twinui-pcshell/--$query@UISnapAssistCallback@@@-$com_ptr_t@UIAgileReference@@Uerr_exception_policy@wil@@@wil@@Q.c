/*
 * XREFs of ??$query@UISnapAssistCallback@@@?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UISnapAssistCallback@@Uerr_exception_policy@wil@@@1@XZ @ 0x18022B830
 * Callers:
 *     _lambda_017e4516d3db66192a06ba57bc482270_::operator() @ 0x180687984 (_lambda_017e4516d3db66192a06ba57bc482270_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IAgileReference,wil::err_exception_policy>::query<ISnapAssistCallback>(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *a1;
  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD *))(*(_QWORD *)v2 + 24LL))(
         v2,
         &GUID_76d7759a_857c_46bd_ba0c_841904e0fc8d,
         a2);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1815,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v4,
      v6);
  return a2;
}
