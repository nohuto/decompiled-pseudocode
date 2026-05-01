/*
 * XREFs of ?deserialize@?$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x18021E670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall tip2::details::merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>::deserialize(
        __int64 a1,
        __int64 a2)
{
  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 16) = "test";
  tson::input_archive::process<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest &>(
    (tson::input_archive *)a2,
    (a1 + 248) & -(__int64)(a1 != 0));
}
