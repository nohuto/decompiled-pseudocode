/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_SearchFullActivationTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180035F7C
 * Callers:
 *     ?serialize@?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180041460 (-serialize@-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@EEAAXAEAVoutput_archi.c)
 * Callees:
 *     ?write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z @ 0x1800132C4 (-write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z.c)
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x180013820 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800138B4 (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 *     ?saveValue@output_archive@tson@@QEAAX_N@Z @ 0x1800138EC (-saveValue@output_archive@tson@@QEAAX_N@Z.c)
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x180013BC4 (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 */

void __fastcall _tip_SearchFullActivationTest::serialize<tson::output_archive>(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rsi
  __int64 v5; // r14
  int v6; // [rsp+30h] [rbp+8h] BYREF

  *(_BYTE *)(a2 + 8) = 6;
  *(_QWORD *)a2 = "source";
  tson::output_archive::saveValue((tson::output_archive *)a2, *(_DWORD *)(a1 + 16));
  *(_BYTE *)(a2 + 8) = 10;
  *(_QWORD *)a2 = "new_source";
  tson::output_archive::saveValue((tson::output_archive *)a2, *(_DWORD *)(a1 + 20));
  *(_BYTE *)(a2 + 8) = 9;
  *(_QWORD *)a2 = "timed_out";
  tson::output_archive::saveValue((tson::output_archive *)a2, *(_BYTE *)(a1 + 24));
  *(_BYTE *)(a2 + 8) = 12;
  *(_QWORD *)a2 = "view_created";
  tson::output_archive::saveValue((tson::output_archive *)a2, *(_BYTE *)(a1 + 25));
  *(_BYTE *)(a2 + 8) = 6;
  *(_QWORD *)a2 = "hidden";
  tson::output_archive::saveValue((tson::output_archive *)a2, *(_BYTE *)(a1 + 26));
  *(_BYTE *)(a2 + 8) = 17;
  *(_QWORD *)a2 = "view_consolidated";
  tson::output_archive::saveValue((tson::output_archive *)a2, *(_BYTE *)(a1 + 27));
  *(_BYTE *)(a2 + 8) = 14;
  *(_QWORD *)a2 = "view_dismissed";
  tson::output_archive::saveValue((tson::output_archive *)a2, *(_BYTE *)(a1 + 28));
  *(_BYTE *)(a2 + 8) = 25;
  *(_QWORD *)a2 = "view_navigated_to_visible";
  tson::output_archive::saveValue((tson::output_archive *)a2, *(_BYTE *)(a1 + 29));
  *(_BYTE *)(a2 + 8) = 10;
  *(_QWORD *)a2 = "positioned";
  tson::output_archive::saveValue((tson::output_archive *)a2, *(_BYTE *)(a1 + 30));
  *(_BYTE *)(a2 + 8) = 14;
  *(_QWORD *)a2 = "view_destroyed";
  tson::output_archive::saveValue((tson::output_archive *)a2, *(_BYTE *)(a1 + 31));
  *(_BYTE *)(a2 + 8) = 20;
  *(_QWORD *)a2 = "view_already_created";
  tson::output_archive::saveValue((tson::output_archive *)a2, *(_BYTE *)(a1 + 32));
  *(_BYTE *)(a2 + 8) = 20;
  *(_QWORD *)a2 = "view_already_visible";
  tson::output_archive::saveValue((tson::output_archive *)a2, *(_BYTE *)(a1 + 33));
  *(_BYTE *)(a2 + 8) = 33;
  *(_QWORD *)a2 = "view_already_navigated_to_visible";
  tson::output_archive::saveValue((tson::output_archive *)a2, *(_BYTE *)(a1 + 34));
  v4 = (_QWORD *)(a1 + 40);
  *(_QWORD *)a2 = "launch_source";
  *(_BYTE *)(a2 + 8) = 13;
  v5 = *(_QWORD *)(a1 + 56);
  if ( v5 )
  {
    if ( *(_QWORD *)(a1 + 64) >= 8uLL )
      v4 = (_QWORD *)*v4;
  }
  else
  {
    v4 = 0LL;
  }
  if ( tson::output_archive::write_type((tson::output_archive *)a2, v4 == 0LL, 24) )
    tson::output_archive::write_string_bytes((tson::output_archive *)a2, v5, v4, 2 * v5);
  *(_BYTE *)(a2 + 8) = 12;
  *(_QWORD *)a2 = "invalid_hwnd";
  tson::output_archive::saveValue((tson::output_archive *)a2, *(_BYTE *)(a1 + 35));
  *(_BYTE *)(a2 + 8) = 22;
  *(_QWORD *)a2 = "using_reactivation_udk";
  tson::output_archive::saveValue((tson::output_archive *)a2, *(_BYTE *)(a1 + 36));
  *(_BYTE *)(a2 + 8) = 15;
  *(_QWORD *)a2 = "transition_type";
  v6 = *(_DWORD *)(a1 + 72);
  if ( tson::output_archive::write_type((tson::output_archive *)a2, v6 == 0, 16) )
    tson::write_buffer::push_back(*(void ***)(a2 + 144), &v6, 4uLL);
  *(_BYTE *)(a2 + 8) = 22;
  *(_QWORD *)a2 = "searchActivationResult";
  v6 = *(_DWORD *)(a1 + 76);
  if ( tson::output_archive::write_type((tson::output_archive *)a2, v6 == 0, 17) )
    tson::write_buffer::push_back(*(void ***)(a2 + 144), &v6, 4uLL);
  *(_BYTE *)(a2 + 8) = 9;
  *(_QWORD *)a2 = "uncloaked";
  tson::output_archive::saveValue((tson::output_archive *)a2, *(_BYTE *)(a1 + 80));
  *(_BYTE *)(a2 + 8) = 26;
  *(_QWORD *)a2 = "view_navigated_to_obscured";
  tson::output_archive::saveValue((tson::output_archive *)a2, *(_BYTE *)(a1 + 81));
  *(_BYTE *)(a2 + 8) = 28;
  *(_QWORD *)a2 = "prelaunch_deferral_timed_out";
  tson::output_archive::saveValue((tson::output_archive *)a2, *(_BYTE *)(a1 + 82));
}
