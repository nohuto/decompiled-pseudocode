/*
 * XREFs of ??1?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@QEAA@XZ @ 0x180260F98
 * Callers:
 *     ?Release@?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@AEAAKXZ @ 0x1802722F4 (-Release@-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@AEAAKXZ.c)
 * Callees:
 *     ?on_destroy@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXXZ @ 0x1801F0F90 (-on_destroy@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXXZ.c)
 */

void __fastcall tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>::~merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>(
        _QWORD *a1)
{
  __int64 v1; // rbx

  v1 = (__int64)(a1 + 1);
  *a1 = &tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>::`vftable';
  tip2::details::shared_data<1,0,0>::on_destroy((__int64)(a1 + 1));
  tip2::details::shared_data<0,0,1>::~shared_data<0,0,1>(v1);
}
