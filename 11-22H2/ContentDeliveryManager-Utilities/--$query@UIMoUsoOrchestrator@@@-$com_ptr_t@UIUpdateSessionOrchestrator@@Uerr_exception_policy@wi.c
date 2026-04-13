/*
 * XREFs of ??$query@UIMoUsoOrchestrator@@@?$com_ptr_t@UIUpdateSessionOrchestrator@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIMoUsoOrchestrator@@Uerr_exception_policy@wil@@@1@XZ @ 0x180029C4C
 * Callers:
 *     ??R_lambda_ff6e8a7a35a946ff825a6255df1412b0_@@QEBAJAEAV?$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@Internal@Windows@@@Z @ 0x18002E564 (--R_lambda_ff6e8a7a35a946ff825a6255df1412b0_@@QEBAJAEAV-$CBasicResult@W4SVUpgradeEligibilityStat.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IUpdateSessionOrchestrator,wil::err_exception_policy>::query<IMoUsoOrchestrator>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, _QWORD *),
        _QWORD *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, _QWORD *); // rcx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *a1;
  *a2 = 0LL;
  v4 = (**v2)(v2, &GUID_c57692f8_8f5f_47cb_9381_34329b40285a, a2);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1815,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v4,
      v6);
  return a2;
}
