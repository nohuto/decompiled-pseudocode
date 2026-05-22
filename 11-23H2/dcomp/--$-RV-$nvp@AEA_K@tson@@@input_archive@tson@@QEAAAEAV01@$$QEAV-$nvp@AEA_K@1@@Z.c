/*
 * XREFs of ??$?RV?$nvp@AEA_K@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_K@1@@Z @ 0x18009C974
 * Callers:
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x18009E584 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 * Callees:
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x18009DE68 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x18009DEA4 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18009F220 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

__int64 __fastcall tson::input_archive::operator()<tson::nvp<unsigned __int64 &>>(__int64 a1, __int64 a2)
{
  char v2; // r8
  _QWORD *v4; // rdi
  __int64 v5; // rdx

  v2 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_BYTE *)(a1 + 24) = v2;
  v4 = *(_QWORD **)(a2 + 16);
  if ( tson::input_archive::search((tson::input_archive *)a1) )
  {
    LOBYTE(v5) = 20;
    tson::input_archive::consume_expected_marker(a1, v5, 2147944029LL);
    tson::read_buffer::consume_n(*(tson::read_buffer **)a1, v4, 8uLL);
  }
  else
  {
    *v4 = 0LL;
  }
  return a1;
}
