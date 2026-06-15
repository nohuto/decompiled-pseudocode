/*
 * XREFs of ??0?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCAudioStream@@@Z @ 0x1800D5F74
 * Callers:
 *     ??$_Assign_range@PEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@0Uforward_iterator_tag@1@@Z @ 0x1800D53BC (--$_Assign_range@PEAV-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$c.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1800D5524 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@-$vecto.c)
 *     ??$_Insert_range@PEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@1@PEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@1Uforward_iterator_tag@1@@Z @ 0x1800D5648 (--$_Insert_range@PEAV-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$c.c)
 *     _lambda_6c82d168c37c23bf8bb15eab1fa87461_::operator() @ 0x1800D649C (_lambda_6c82d168c37c23bf8bb15eab1fa87461_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>::com_ptr_t<CAudioStream,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
