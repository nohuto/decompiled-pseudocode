/*
 * XREFs of ??$com_query_failfast@UIMultitaskingViewForegroundStaging@@AEAPEAUIMultitaskingViewManager@@@wil@@YA?AV?$com_ptr_t@UIMultitaskingViewForegroundStaging@@Uerr_failfast_policy@wil@@@0@AEAPEAUIMultitaskingViewManager@@@Z @ 0x18020CFD8
 * Callers:
 *     _lambda_fca3cb616a5d138146c9ecf7abf9513f_::operator() @ 0x180065C50 (_lambda_fca3cb616a5d138146c9ecf7abf9513f_--operator().c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801CF85C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_query_failfast<IMultitaskingViewForegroundStaging,IMultitaskingViewManager * &>(
        _QWORD *a1,
        __int64 (__fastcall ****a2)(_QWORD, GUID *, _QWORD *))
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, _QWORD *); // rcx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *a2;
  *a1 = 0LL;
  v4 = (**v3)(v3, &GUID_9290b92b_b0cf_4e86_b3bc_98d456e2f29f, a1);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1807,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v4,
      v6);
  return a1;
}
