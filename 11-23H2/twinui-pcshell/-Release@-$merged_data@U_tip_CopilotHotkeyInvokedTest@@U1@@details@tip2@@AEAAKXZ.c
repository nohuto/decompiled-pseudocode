/*
 * XREFs of ?Release@?$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@AEAAKXZ @ 0x18027233C
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180260F00 (--1-$com_ptr_t@V-$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@Uerr_returncode_.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1802750D8 (-ensure_data@-$tip_test@V-$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@@tip2@@.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180275944 (-reset@-$com_ptr_t@V-$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@Uerr_returnc.c)
 * Callees:
 *     ??1?$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@QEAA@XZ @ 0x180260FC8 (--1-$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_CopilotHotkeyInvokedTest,_tip_CopilotHotkeyInvokedTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 68);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_CopilotHotkeyInvokedTest,_tip_CopilotHotkeyInvokedTest>::~merged_data<_tip_CopilotHotkeyInvokedTest,_tip_CopilotHotkeyInvokedTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
