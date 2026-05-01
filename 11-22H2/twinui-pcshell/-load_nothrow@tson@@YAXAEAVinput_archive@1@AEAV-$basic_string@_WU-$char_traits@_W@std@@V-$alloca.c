/*
 * XREFs of ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x18028BEDC
 * Callers:
 *     ??$process@AEAU_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@input_archive@tson@@AEAAXAEAU_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@Z @ 0x18028C0FC (--$process@AEAU_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windo.c)
 *     ?deserialize@?$merged_data@U_tip_TaskGroupMoveToVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x18028C830 (-deserialize@-$merged_data@U_tip_TaskGroupMoveToVirtualDesktopTest@TIP@TaskGroups@Shell@Internal.c)
 * Callees:
 *     ??$read_string_two_phase@Ustring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUstring_tag@1@@Z @ 0x1804653C0 (--$read_string_two_phase@Ustring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x18076723C (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 */

_WORD *__fastcall tson::load_nothrow(tson::input_archive *this, _WORD *a2)
{
  _WORD *result; // rax

  tson::input_archive::read_string_two_phase<tson::string_tag>(this);
  result = a2;
  if ( *((_QWORD *)a2 + 3) >= 8uLL )
    result = *(_WORD **)a2;
  *((_QWORD *)a2 + 2) = 0LL;
  *result = 0;
  return result;
}
