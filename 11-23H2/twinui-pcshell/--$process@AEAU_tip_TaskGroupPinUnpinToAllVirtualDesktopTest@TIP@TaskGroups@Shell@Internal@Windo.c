/*
 * XREFs of ??$process@AEAU_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@input_archive@tson@@AEAAXAEAU_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@Z @ 0x18028C0FC
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x18028C8D0 (-deserialize@-$merged_data@U_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@I.c)
 * Callees:
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x18028BEDC (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV-$basic_string@_WU-$char_traits@_W@std@@V-$alloca.c)
 *     ??$process@V?$nvp@AEAW4PinOperation@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@tson@@V?$nvp@AEAW4PinState@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4PinOperation@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@1@$$QEAV?$nvp@AEAW4PinState@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@1@@Z @ 0x18028C19C (--$process@V-$nvp@AEAW4PinOperation@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@tson@@V-$nvp@A.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1803A45A8 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x18046E058 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ?value@?$optional@W4PinOperation@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@std@@QEGAAAEAW4PinOperation@TIP@TaskGroups@Shell@Internal@Windows@winrt@@XZ @ 0x180785E30 (-value@-$optional@W4PinOperation@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@std@@QEGAAAEAW4Pi.c)
 */

void __fastcall tson::input_archive::process<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupPinUnpinToAllVirtualDesktopTest &>(
        tson::input_archive *this,
        __int64 a2)
{
  tson::input_archive::startNode(this);
  if ( !*(_BYTE *)(a2 + 60) )
    std::_Throw_bad_optional_access();
  std::optional<enum winrt::Windows::Internal::Shell::TaskGroups::TIP::PinOperation>::value(a2 + 48);
  *((_BYTE *)this + 24) = 7;
  *((_QWORD *)this + 2) = "groupId";
  tson::load_nothrow(this, (_WORD *)(a2 + 16));
  tson::input_archive::process<tson::nvp<enum winrt::Windows::Internal::Shell::TaskGroups::TIP::PinOperation &>,tson::nvp<enum winrt::Windows::Internal::Shell::TaskGroups::TIP::PinState &>>(this);
  tson::input_archive::finishNode(this);
}
