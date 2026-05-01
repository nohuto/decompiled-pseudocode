/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180224CC4
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180224D64 (--1-$test_data_control@V-$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@tip2@@QEAA@X.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180224DD4 (--1-$test_watcher@V-$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180224E34 (--1-$tip_test@V-$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180225110 (-ensure_data@-$tip_test@V-$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@tip2@@AEBAA.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@AEAAKXZ @ 0x180224EC4 (-Release@-$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>::Release(v1);
  return result;
}
