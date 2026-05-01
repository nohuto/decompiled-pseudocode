/*
 * XREFs of ?deserialize@?$merged_data@U_tip_TaskGroupMoveToVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x18028C830
 * Callers:
 *     <none>
 * Callees:
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x18028BEDC (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV-$basic_string@_WU-$char_traits@_W@std@@V-$alloca.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1804641A0 (--$process@V-$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x18046E058 (-startNode@input_archive@tson@@QEAAXXZ.c)
 */

void __fastcall tip2::details::merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupMoveToVirtualDesktopTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupMoveToVirtualDesktopTest>::deserialize(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  const char *v6; // [rsp+20h] [rbp-28h] BYREF
  char v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 16) = "test";
  tson::input_archive::startNode((tson::input_archive *)a2);
  v7 = 30;
  *(_BYTE *)(a2 + 24) = 7;
  v6 = "isGroupVisibleOnCorrectDesktop";
  v4 = a1 + 264;
  v5 = a1 + 296;
  if ( !a1 )
    v5 = 48LL;
  v8 = v5;
  *(_QWORD *)(a2 + 16) = "groupId";
  if ( !a1 )
    v4 = 16LL;
  tson::load_nothrow((tson::input_archive *)a2, (_WORD *)v4);
  tson::input_archive::process<tson::nvp<bool &>>(a2, &v6);
  tson::input_archive::finishNode((tson::input_archive *)a2);
}
