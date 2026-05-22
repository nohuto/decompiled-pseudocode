/*
 * XREFs of ??$?RV?$nvp@AEA_N@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@@Z @ 0x18009C9DC
 * Callers:
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x18009E584 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 * Callees:
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x18009DE68 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18009F220 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

__int64 *__fastcall tson::input_archive::operator()<tson::nvp<bool &>>(__int64 *a1, __int64 a2)
{
  char v2; // r8
  bool *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  char *v7; // rax
  char v8; // cl
  bool v9; // al

  v2 = *(_BYTE *)(a2 + 8);
  a1[2] = *(_QWORD *)a2;
  *((_BYTE *)a1 + 24) = v2;
  v4 = *(bool **)(a2 + 16);
  if ( !tson::input_archive::search((tson::input_archive *)a1) )
  {
    v9 = 0;
    goto LABEL_6;
  }
  LOBYTE(v5) = 10;
  tson::input_archive::consume_expected_marker(a1, v5, 2147944029LL);
  v6 = *a1;
  v7 = *(char **)(*a1 + 8);
  if ( (unsigned __int64)v7 < *(_QWORD *)(*a1 + 16) )
  {
    v8 = *v7;
    *(_QWORD *)(v6 + 8) = v7 + 1;
    v9 = v8 != 0;
LABEL_6:
    *v4 = v9;
    return a1;
  }
  *(_BYTE *)(v6 + 24) = 1;
  return a1;
}
