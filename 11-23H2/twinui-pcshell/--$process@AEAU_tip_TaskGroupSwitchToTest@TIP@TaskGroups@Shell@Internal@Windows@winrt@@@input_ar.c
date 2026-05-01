/*
 * XREFs of ??$process@AEAU_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@input_archive@tson@@AEAAXAEAU_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@Z @ 0x18021E0E0
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x18021E670 (-deserialize@-$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@win.c)
 * Callees:
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x18046BCE4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x18046BD20 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18046D0A0 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocato.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18046DE50 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x18046E058 (-startNode@input_archive@tson@@QEAAXXZ.c)
 */

void __fastcall tson::input_archive::process<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest &>(
        tson::input_archive *this,
        __int64 a2)
{
  int v4; // edi
  __int64 v5; // rdx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  tson::input_archive::startNode(this);
  *((_BYTE *)this + 24) = 7;
  *((_QWORD *)this + 2) = "groupId";
  tson::load_nothrow(this);
  *((_BYTE *)this + 24) = 15;
  v4 = 0;
  *((_QWORD *)this + 2) = "switcherSurface";
  v6 = 0;
  if ( tson::input_archive::search(this) )
  {
    LOBYTE(v5) = 18;
    tson::input_archive::consume_expected_marker(this, v5, 2147944029LL);
    tson::read_buffer::consume_n(*(tson::read_buffer **)this, &v6, 4uLL);
    v4 = v6;
  }
  *(_DWORD *)(a2 + 48) = v4;
  tson::input_archive::finishNode(this);
}
