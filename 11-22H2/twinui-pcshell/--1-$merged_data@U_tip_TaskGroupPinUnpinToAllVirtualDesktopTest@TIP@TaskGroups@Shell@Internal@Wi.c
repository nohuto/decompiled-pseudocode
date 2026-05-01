/*
 * XREFs of ??1?$merged_data@U_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@QEAA@XZ @ 0x18028C5EC
 * Callers:
 *     ?Release@?$merged_data@U_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@AEAAKXZ @ 0x18028C7DC (-Release@-$merged_data@U_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Inter.c)
 * Callees:
 *     ?on_destroy@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXXZ @ 0x1801F0F90 (-on_destroy@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXXZ.c)
 *     ??1_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18077CE08 (--1_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@QE.c)
 */

void __fastcall tip2::details::merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupPinUnpinToAllVirtualDesktopTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupPinUnpinToAllVirtualDesktopTest>::~merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupPinUnpinToAllVirtualDesktopTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupPinUnpinToAllVirtualDesktopTest>(
        _QWORD *a1)
{
  *a1 = &tip2::details::merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupPinUnpinToAllVirtualDesktopTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupPinUnpinToAllVirtualDesktopTest>::`vftable';
  tip2::details::shared_data<1,0,0>::on_destroy((__int64)(a1 + 1));
  winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupPinUnpinToAllVirtualDesktopTest::~_tip_TaskGroupPinUnpinToAllVirtualDesktopTest((winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupPinUnpinToAllVirtualDesktopTest *)(a1 + 31));
  tip2::details::shared_data<0,0,1>::~shared_data<0,0,1>((__int64)(a1 + 1));
}
