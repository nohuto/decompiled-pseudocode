/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x18028C324
 * Callers:
 *     ?serialize@?$merged_data@U_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x18028CBB0 (-serialize@-$merged_data@U_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Int.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x180013820 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ??$process@V?$nvp@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@@Z @ 0x18028BD34 (--$process@V-$nvp@AEAV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@tson@@@ou.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1803A45A8 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?value@?$optional@W4PinOperation@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@std@@QEGAAAEAW4PinOperation@TIP@TaskGroups@Shell@Internal@Windows@winrt@@XZ @ 0x180785E30 (-value@-$optional@W4PinOperation@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@std@@QEGAAAEAW4Pi.c)
 */

void __fastcall winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupPinUnpinToAllVirtualDesktopTest::serialize<tson::output_archive>(
        __int64 a1,
        tson::output_archive *a2)
{
  int *v4; // rbx
  const char *v5; // [rsp+20h] [rbp-28h] BYREF
  char v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]

  if ( !*(_BYTE *)(a1 + 60) )
    std::_Throw_bad_optional_access();
  v6 = 7;
  v4 = (int *)std::optional<enum winrt::Windows::Internal::Shell::TaskGroups::TIP::PinOperation>::value(a1 + 48);
  v7 = a1 + 16;
  v5 = "groupId";
  tson::output_archive::process<tson::nvp<std::wstring &>>(a2, (__int64)&v5);
  *((_BYTE *)a2 + 8) = 17;
  *(_QWORD *)a2 = "operation.value()";
  tson::output_archive::saveValue(a2, *v4);
  *((_BYTE *)a2 + 8) = 21;
  *(_QWORD *)a2 = "finalPinState.value()";
  tson::output_archive::saveValue(a2, *(_DWORD *)(a1 + 56));
}
