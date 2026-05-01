/*
 * XREFs of ??$query@UIAllUpViewHostInternal@@@?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAllUpViewHostInternal@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801A98E0
 * Callers:
 *     _lambda_22e0521af8107b5e6397e610f3471390_::operator() @ 0x18001E2F8 (_lambda_22e0521af8107b5e6397e610f3471390_--operator().c)
 *     _lambda_e0b48c6444b1fd29cc3c2664eb3161bf_::operator() @ 0x18001E3C0 (_lambda_e0b48c6444b1fd29cc3c2664eb3161bf_--operator().c)
 *     ?HostWindowActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@UE$AAAX_N_K@Z @ 0x18004139C (-HostWindowActivationChanged@-QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@UE.c)
 *     _lambda_69db3e9761c77a5f5df8b9f478688ffa_::operator() @ 0x1804410EC (_lambda_69db3e9761c77a5f5df8b9f478688ffa_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::query<IAllUpViewHostInternal>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, _QWORD *),
        _QWORD *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, _QWORD *); // rcx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a1;
  *a2 = 0LL;
  v4 = (**v2)(v2, &GUID_24d6236f_83b7_4abc_b7a9_082c901b9839, a2);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x17F8,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v4,
      v6);
  return a2;
}
