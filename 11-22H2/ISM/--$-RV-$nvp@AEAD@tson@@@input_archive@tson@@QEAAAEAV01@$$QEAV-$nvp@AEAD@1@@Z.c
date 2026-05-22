/*
 * XREFs of ??$?RV?$nvp@AEAD@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAD@1@@Z @ 0x180068670
 * Callers:
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x18006BC98 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 * Callees:
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x18006B220 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18006CB64 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

tson::input_archive *__fastcall tson::input_archive::operator()<tson::nvp<char &>>(tson::input_archive *a1, __int64 a2)
{
  char v2; // r8
  _BYTE *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  char *v7; // rax
  char v8; // cl

  v2 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)a1 + 2) = *(_QWORD *)a2;
  *((_BYTE *)a1 + 24) = v2;
  v4 = *(_BYTE **)(a2 + 16);
  if ( tson::input_archive::search(a1) )
  {
    LOBYTE(v5) = 11;
    tson::input_archive::consume_expected_marker(a1, v5, 2147944029LL);
    v6 = *(_QWORD *)a1;
    v7 = *(char **)(*(_QWORD *)a1 + 8LL);
    if ( (unsigned __int64)v7 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
    {
      *(_BYTE *)(v6 + 24) = 1;
    }
    else
    {
      v8 = *v7;
      *(_QWORD *)(v6 + 8) = v7 + 1;
      *v4 = v8;
    }
  }
  else
  {
    *v4 = 0;
  }
  return a1;
}
