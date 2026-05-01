/*
 * XREFs of ?value@?$optional@W4PinOperation@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@std@@QEGAAAEAW4PinOperation@TIP@TaskGroups@Shell@Internal@Windows@winrt@@XZ @ 0x180785E30
 * Callers:
 *     ??$process@AEAU_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@input_archive@tson@@AEAAXAEAU_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@Z @ 0x18028C0FC (--$process@AEAU_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windo.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x18028C324 (--$serialize@Voutput_archive@tson@@@_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups.c)
 * Callees:
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1803A45A8 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 */

__int64 __fastcall std::optional<enum winrt::Windows::Internal::Shell::TaskGroups::TIP::PinOperation>::value(
        __int64 a1)
{
  if ( !*(_BYTE *)(a1 + 4) )
    std::_Throw_bad_optional_access();
  return a1;
}
