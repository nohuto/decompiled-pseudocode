/*
 * XREFs of ??$load_nothrow@_N@tson@@YAXAEAVinput_archive@0@AEAV?$optional@_N@std@@@Z @ 0x180230730
 * Callers:
 *     ??$process@V?$nvp@AEAV?$optional@_N@std@@@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@@Z @ 0x180231214 (--$process@V-$nvp@AEAV-$optional@_N@std@@@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAV-$opti.c)
 * Callees:
 *     ?value@?$optional@_N@std@@QEGAAAEA_NXZ @ 0x180413180 (-value@-$optional@_N@std@@QEGAAAEA_NXZ.c)
 *     ??$?RAEA_N@input_archive@tson@@QEAAAEAV01@AEA_N@Z @ 0x180461808 (--$-RAEA_N@input_archive@tson@@QEAAAEAV01@AEA_N@Z.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x18046BCE4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18046DE50 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

char __fastcall tson::load_nothrow<bool>(tson::input_archive *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  char *v6; // rax
  char v7; // cl
  char result; // al
  __int64 v9; // rax
  char v11; // [rsp+40h] [rbp+18h]

  if ( tson::input_archive::search(a1) )
  {
    LOBYTE(v4) = 10;
    tson::input_archive::consume_expected_marker(a1, v4, 2147944029LL);
    v5 = *(_QWORD *)a1;
    v6 = *(char **)(*(_QWORD *)a1 + 8LL);
    if ( (unsigned __int64)v6 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
    {
      *(_BYTE *)(v5 + 24) = 1;
      result = v11;
    }
    else
    {
      v7 = *v6;
      *(_QWORD *)(v5 + 8) = v6 + 1;
      result = v7 != 0;
    }
  }
  else
  {
    result = 0;
  }
  *(_BYTE *)(a2 + 1) = 0;
  if ( result )
  {
    *(_WORD *)a2 = 256;
    try
    {
      v9 = std::optional<bool>::value();
      result = tson::input_archive::operator()<bool &>(a1, v9);
    }
    catch ( ... )
    {
      result = (char)a1;
      if ( *((int *)a1 + 2) >= 0 )
        *((_DWORD *)a1 + 2) = -2147024882;
    }
  }
  return result;
}
