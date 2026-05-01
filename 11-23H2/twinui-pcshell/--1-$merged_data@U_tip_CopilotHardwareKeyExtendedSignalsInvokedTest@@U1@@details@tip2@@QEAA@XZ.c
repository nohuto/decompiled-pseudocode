/*
 * XREFs of ??1?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@QEAA@XZ @ 0x180260F50
 * Callers:
 *     ?Release@?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@AEAAKXZ @ 0x1802722AC (-Release@-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@AEA.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?on_destroy@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXXZ @ 0x1801F0F90 (-on_destroy@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXXZ.c)
 */

void __fastcall tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>::~merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>(
        _QWORD *a1)
{
  *a1 = &tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>::`vftable';
  tip2::details::shared_data<1,0,0>::on_destroy((__int64)(a1 + 1));
  std::wstring::_Tidy_deallocate((__int64)(a1 + 35));
  tip2::details::shared_data<0,0,1>::~shared_data<0,0,1>((__int64)(a1 + 1));
}
