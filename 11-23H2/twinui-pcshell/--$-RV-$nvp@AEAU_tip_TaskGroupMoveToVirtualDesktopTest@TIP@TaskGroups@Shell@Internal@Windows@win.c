/*
 * XREFs of ??$?RV?$nvp@AEAU_tip_TaskGroupMoveToVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU_tip_TaskGroupMoveToVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@1@@Z @ 0x18028C04C
 * Callers:
 *     ?serialize@?$merged_data@U_tip_TaskGroupMoveToVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x18028CB10 (-serialize@-$merged_data@U_tip_TaskGroupMoveToVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@W.c)
 * Callees:
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x180013724 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x180013878 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?saveValue@output_archive@tson@@QEAAX_N@Z @ 0x1800138EC (-saveValue@output_archive@tson@@QEAAX_N@Z.c)
 *     ??$process@V?$nvp@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@@Z @ 0x18028BD34 (--$process@V-$nvp@AEAV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@tson@@@ou.c)
 */

tson::output_archive *__fastcall tson::output_archive::operator()<tson::nvp<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupMoveToVirtualDesktopTest &>>(
        tson::output_archive *this,
        __int64 a2)
{
  char v2; // r8
  __int64 v4; // rbx
  const char *v6; // [rsp+20h] [rbp-28h] BYREF
  char v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v2 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v2;
  v4 = *(_QWORD *)(a2 + 16);
  tson::output_archive::startNode(this);
  v7 = 7;
  v6 = "groupId";
  v8 = v4 + 16;
  tson::output_archive::process<tson::nvp<std::wstring &>>(this, (__int64)&v6);
  *((_BYTE *)this + 8) = 30;
  *(_QWORD *)this = "isGroupVisibleOnCorrectDesktop";
  tson::output_archive::saveValue(this, *(_BYTE *)(v4 + 48));
  tson::output_archive::finishNode(this);
  return this;
}
