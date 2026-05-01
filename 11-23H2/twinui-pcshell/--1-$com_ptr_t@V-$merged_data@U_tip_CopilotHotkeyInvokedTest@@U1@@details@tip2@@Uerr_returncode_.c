/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180260F00
 * Callers:
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x1802606A4 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802610A0 (--1-$test_data_control@V-$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@@tip2@@Q.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180261138 (--1-$test_watcher@V-$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@X.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180261180 (--1-$tip_test@V-$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?InvokeCopilot@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180264704 (-InvokeCopilot@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180264890 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1802750D8 (-ensure_data@-$tip_test@V-$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@@tip2@@.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@AEAAKXZ @ 0x18027233C (-Release@-$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_CopilotHotkeyInvokedTest,_tip_CopilotHotkeyInvokedTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_CopilotHotkeyInvokedTest,_tip_CopilotHotkeyInvokedTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_CopilotHotkeyInvokedTest,_tip_CopilotHotkeyInvokedTest>::Release(v1);
  return result;
}
