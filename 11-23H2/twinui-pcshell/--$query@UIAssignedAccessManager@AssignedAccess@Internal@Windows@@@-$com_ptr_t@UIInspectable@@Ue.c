/*
 * XREFs of ??$query@UIAssignedAccessManager@AssignedAccess@Internal@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAssignedAccessManager@AssignedAccess@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1802120AC
 * Callers:
 *     ??$ActivateInstance@UIAssignedAccessManager@AssignedAccess@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIAssignedAccessManager@AssignedAccess@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1805A6804 (--$ActivateInstance@UIAssignedAccessManager@AssignedAccess@Internal@Windows@@@wil@@YA-AV-$com_pt.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<Windows::Internal::AssignedAccess::IAssignedAccessManager>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, _QWORD *),
        _QWORD *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, _QWORD *); // rcx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *a1;
  *a2 = 0LL;
  v4 = (**v2)(v2, &GUID_3ea0718b_7dc4_4cb2_83fa_9f86d639fc6a, a2);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1815,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v4,
      v6);
  return a2;
}
