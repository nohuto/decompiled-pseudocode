/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18022185C
 * Callers:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBHV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBHV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBHV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18022062C (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBHV-$tip_test@V-$merged_data@U_tip_SnapLaunch.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBHV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1802217DC (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBHV-$tip_test@V-$merged_data@U.c)
 *     ??1?$pair@HV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@QEAA@XZ @ 0x180221960 (--1-$pair@HV-$tip_test@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@QEA.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180221970 (--1-$test_data_control@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802219B4 (--1-$tip_test@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?StartSnapLaunch@CShellSnapComponent@@UEAAJHHE@Z @ 0x180222160 (-StartSnapLaunch@CShellSnapComponent@@UEAAJHHE@Z.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180223214 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@AEBAAEAV.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@AEAAKXZ @ 0x180222110 (-Release@-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>::Release(v1);
  return result;
}
