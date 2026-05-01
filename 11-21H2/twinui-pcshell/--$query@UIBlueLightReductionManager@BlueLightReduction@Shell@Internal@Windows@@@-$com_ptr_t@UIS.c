/*
 * XREFs of ??$query@UIBlueLightReductionManager@BlueLightReduction@Shell@Internal@Windows@@@?$com_ptr_t@UIServiceHostComponent@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIBlueLightReductionManager@BlueLightReduction@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180190EF0
 * Callers:
 *     _lambda_2aee3bdc8de74c7808524c6084b62ccc_::operator() @ 0x180315A70 (_lambda_2aee3bdc8de74c7808524c6084b62ccc_--operator().c)
 *     _lambda_5d2849d68491aca29966f57a119f4bc4_::operator() @ 0x180315B1C (_lambda_5d2849d68491aca29966f57a119f4bc4_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3a4a7428c5f3296bcd04ed9c75e0e556___::Run @ 0x180315E90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3a4a7428c5f3296bcd04ed9c75e0e556___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b1b1adeb4908864363732ebe2cc2a796___::Run @ 0x180315F30 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b1b1adeb4908864363732ebe2cc2a796___--Run.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IServiceHostComponent,wil::err_exception_policy>::query<Windows::Internal::Shell::BlueLightReduction::IBlueLightReductionManager>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, _QWORD *),
        _QWORD *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, _QWORD *); // rcx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a1;
  *a2 = 0LL;
  v4 = (**v2)(v2, &GUID_05357b73_71a8_4328_801f_d28e07a3d3ff, a2);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x17F8,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v4,
      v6);
  return a2;
}
