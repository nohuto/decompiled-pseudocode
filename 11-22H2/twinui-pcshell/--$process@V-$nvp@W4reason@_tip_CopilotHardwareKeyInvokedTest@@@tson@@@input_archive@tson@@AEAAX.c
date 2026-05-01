/*
 * XREFs of ??$process@V?$nvp@W4reason@_tip_CopilotHardwareKeyInvokedTest@@@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@W4reason@_tip_CopilotHardwareKeyInvokedTest@@@1@@Z @ 0x18025FDE4
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180274F50 (-deserialize@-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@EEAAXAEAVinput.c)
 * Callees:
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x18046BCE4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x18046BD20 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18046DE50 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

bool __fastcall tson::input_archive::process<tson::nvp<enum _tip_CopilotHardwareKeyInvokedTest::reason>>(
        __int64 a1,
        __int64 a2)
{
  char v2; // r8
  int v3; // ebx
  bool result; // al
  __int64 v7; // rdx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_BYTE *)(a2 + 8);
  v3 = 0;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_BYTE *)(a1 + 24) = v2;
  v8 = 0;
  result = tson::input_archive::search((tson::input_archive *)a1);
  if ( result )
  {
    LOBYTE(v7) = 18;
    tson::input_archive::consume_expected_marker(a1, v7, 2147944029LL);
    result = tson::read_buffer::consume_n(*(tson::read_buffer **)a1, &v8, 4uLL);
    v3 = v8;
  }
  *(_DWORD *)(a2 + 12) = v3;
  return result;
}
