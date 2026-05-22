/*
 * XREFs of ?attach@?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAVHapticInterface@@@Z @ 0x1801893A8
 * Callers:
 *     ?Initialize@PenInterface@@QEAAJXZ @ 0x180188B9C (-Initialize@PenInterface@@QEAAJXZ.c)
 *     ??$emplace@AEBV?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@1@AEBV?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18018C298 (--$emplace@AEBV-$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@-$vector@V-$com_p.c)
 *     ?erase@?$vector@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x18018F920 (-erase@-$vector@V-$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V-$.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<HapticInterface,wil::err_exception_policy>::attach(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return result;
}
