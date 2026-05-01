/*
 * XREFs of ??$process@V?$nvp@AEAK@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAK@1@@Z @ 0x180463BA8
 * Callers:
 *     ??$serialize@Vinput_archive@tson@@@_tip_WidgetsAppInstallTIP@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180232508 (--$serialize@Vinput_archive@tson@@@_tip_WidgetsAppInstallTIP@@QEAAXAEAVinput_archive@tson@@@Z.c)
 * Callees:
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x18046BCE4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x18046BD20 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18046DE50 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

bool __fastcall tson::input_archive::process<tson::nvp<unsigned long &>>(__int64 a1, __int64 a2)
{
  char v2; // r8
  _DWORD *v4; // rdi
  __int64 v5; // rdx
  bool result; // al

  v2 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_BYTE *)(a1 + 24) = v2;
  v4 = *(_DWORD **)(a2 + 16);
  if ( tson::input_archive::search((tson::input_archive *)a1) )
  {
    LOBYTE(v5) = 18;
    tson::input_archive::consume_expected_marker(a1, v5, 2147944029LL);
    return tson::read_buffer::consume_n(*(tson::read_buffer **)a1, v4, 4uLL);
  }
  else
  {
    result = 0;
    *v4 = 0;
  }
  return result;
}
