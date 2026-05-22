/*
 * XREFs of ??$?RV?$nvp@AEAE@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAE@1@@Z @ 0x18009C4D4
 * Callers:
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x18009E584 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 * Callees:
 *     ??$consume@E@read_buffer@tson@@QEAA_NAEAE@Z @ 0x18009CB38 (--$consume@E@read_buffer@tson@@QEAA_NAEAE@Z.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x18009DE68 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18009F220 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

tson::input_archive *__fastcall tson::input_archive::operator()<tson::nvp<unsigned char &>>(
        tson::input_archive *a1,
        __int64 a2)
{
  char v2; // r8
  _BYTE *v4; // rdi
  __int64 v5; // rdx

  v2 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)a1 + 2) = *(_QWORD *)a2;
  *((_BYTE *)a1 + 24) = v2;
  v4 = *(_BYTE **)(a2 + 16);
  if ( tson::input_archive::search(a1) )
  {
    LOBYTE(v5) = 12;
    tson::input_archive::consume_expected_marker(a1, v5, 2147944029LL);
    tson::read_buffer::consume<unsigned char>(*(_QWORD *)a1, v4);
  }
  else
  {
    *v4 = 0;
  }
  return a1;
}
