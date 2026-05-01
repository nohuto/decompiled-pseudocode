/*
 * XREFs of ?Release@?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@AEAAKXZ @ 0x180224F0C
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180224CE4 (--1-$com_ptr_t@V-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180225174 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@AEBAAEAV-$c.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180225238 (-reset@-$com_ptr_t@V-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@.c)
 * Callees:
 *     ??1?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@QEAA@XZ @ 0x180224D34 (--1-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 92);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>::~merged_data<_tip_SmartFillTest,_tip_SmartFillTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
