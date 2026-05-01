/*
 * XREFs of ??$?RAEA_N@input_archive@tson@@QEAAAEAV01@AEA_N@Z @ 0x180461808
 * Callers:
 *     ??$load_nothrow@_N@tson@@YAXAEAVinput_archive@0@AEAV?$optional@_N@std@@@Z @ 0x180230730 (--$load_nothrow@_N@tson@@YAXAEAVinput_archive@0@AEAV-$optional@_N@std@@@Z.c)
 * Callees:
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x18046BCE4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18046DE50 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

tson::input_archive *__fastcall tson::input_archive::operator()<bool &>(tson::input_archive *a1, bool *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  char *v6; // rax
  char v7; // cl
  bool v8; // al

  if ( !tson::input_archive::search(a1) )
  {
    v8 = 0;
    goto LABEL_6;
  }
  LOBYTE(v4) = 10;
  tson::input_archive::consume_expected_marker(a1, v4, 2147944029LL);
  v5 = *(_QWORD *)a1;
  v6 = *(char **)(*(_QWORD *)a1 + 8LL);
  if ( (unsigned __int64)v6 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v7 = *v6;
    *(_QWORD *)(v5 + 8) = v6 + 1;
    v8 = v7 != 0;
LABEL_6:
    *a2 = v8;
    return a1;
  }
  *(_BYTE *)(v5 + 24) = 1;
  return a1;
}
