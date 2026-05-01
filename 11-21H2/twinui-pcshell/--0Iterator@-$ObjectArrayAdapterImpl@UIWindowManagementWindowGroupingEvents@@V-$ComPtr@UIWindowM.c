/*
 * XREFs of ??0Iterator@?$ObjectArrayAdapterImpl@UIWindowManagementWindowGroupingEvents@@V?$ComPtr@UIWindowManagementWindowGroupingEvents@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x18041AB3C
 * Callers:
 *     ?OnGroupWindowTemplateApplied@ViewPresentationMediator@@UEAAXPEAUHWND__@@KKUtagRECT@@1K@Z @ 0x18041AE70 (-OnGroupWindowTemplateApplied@ViewPresentationMediator@@UEAAXPEAUHWND__@@KKUtagRECT@@1K@Z.c)
 * Callees:
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIWindowManagementWindowGroupingEvents@@V?$ComPtr@UIWindowManagementWindowGroupingEvents@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18041ADA4 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIWindowManagementWindowGroupingEvents@@V-$C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall details::ObjectArrayAdapterImpl<IWindowManagementWindowGroupingEvents,Microsoft::WRL::ComPtr<IWindowManagementWindowGroupingEvents>>::Iterator::Iterator(
        __int64 a1,
        __int64 a2,
        int a3)
{
  *(_DWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a2;
  details::ObjectArrayAdapterImpl<IWindowManagementWindowGroupingEvents,Microsoft::WRL::ComPtr<IWindowManagementWindowGroupingEvents>>::Iterator::GetCurrentObject();
  return a1;
}
