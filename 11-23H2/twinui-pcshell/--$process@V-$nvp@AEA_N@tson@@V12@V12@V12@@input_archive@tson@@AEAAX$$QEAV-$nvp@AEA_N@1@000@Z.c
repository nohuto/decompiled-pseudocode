/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@000@Z @ 0x18047FBF0
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAJ@2@V32@V32@V32@V12@V12@V12@V32@V?$nvp@AEAI@2@V12@V12@V42@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAJ@1@1110001$$QEAV?$nvp@AEAI@1@0020000@Z @ 0x1801FD0A4 (--$process@V-$nvp@AEA_N@tson@@V12@V-$nvp@AEAJ@2@V32@V32@V32@V12@V12@V12@V32@V-$nvp@AEAI@2@V12@V1.c)
 * Callees:
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x18046BCE4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18046DE50 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

char __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5)
{
  char v5; // r10
  bool *v9; // rsi
  __int64 v10; // r8
  char *v11; // rax
  char v12; // cl
  bool v13; // al
  __int64 v14; // rax
  bool *v15; // rdi
  __int64 v16; // r8
  char *v17; // rax
  char v18; // cl
  bool v19; // al
  __int64 v20; // rax
  bool *v21; // rdi
  __int64 v22; // r8
  char *v23; // rax
  char v24; // cl
  bool v25; // al
  __int64 v26; // rax
  _BYTE *v27; // rdi
  __int64 v28; // r8
  char *v29; // rax
  char v30; // cl

  v5 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v5;
  v9 = *(bool **)(a2 + 16);
  if ( tson::input_archive::search(this) )
  {
    tson::input_archive::consume_expected_marker((tson::read_buffer **)this);
    v10 = *(_QWORD *)this;
    v11 = *(char **)(*(_QWORD *)this + 8LL);
    if ( (unsigned __int64)v11 >= *(_QWORD *)(*(_QWORD *)this + 16LL) )
    {
      *(_BYTE *)(v10 + 24) = 1;
      goto LABEL_7;
    }
    v12 = *v11;
    *(_QWORD *)(v10 + 8) = v11 + 1;
    v13 = v12 != 0;
  }
  else
  {
    v13 = 0;
  }
  *v9 = v13;
LABEL_7:
  v14 = *a3;
  *((_BYTE *)this + 24) = *((_BYTE *)a3 + 8);
  *((_QWORD *)this + 2) = v14;
  v15 = (bool *)a3[2];
  if ( tson::input_archive::search(this) )
  {
    tson::input_archive::consume_expected_marker((tson::read_buffer **)this);
    v16 = *(_QWORD *)this;
    v17 = *(char **)(*(_QWORD *)this + 8LL);
    if ( (unsigned __int64)v17 >= *(_QWORD *)(*(_QWORD *)this + 16LL) )
    {
      *(_BYTE *)(v16 + 24) = 1;
      goto LABEL_13;
    }
    v18 = *v17;
    *(_QWORD *)(v16 + 8) = v17 + 1;
    v19 = v18 != 0;
  }
  else
  {
    v19 = 0;
  }
  *v15 = v19;
LABEL_13:
  v20 = *a4;
  *((_BYTE *)this + 24) = *((_BYTE *)a4 + 8);
  *((_QWORD *)this + 2) = v20;
  v21 = (bool *)a4[2];
  if ( tson::input_archive::search(this) )
  {
    tson::input_archive::consume_expected_marker((tson::read_buffer **)this);
    v22 = *(_QWORD *)this;
    v23 = *(char **)(*(_QWORD *)this + 8LL);
    if ( (unsigned __int64)v23 >= *(_QWORD *)(*(_QWORD *)this + 16LL) )
    {
      *(_BYTE *)(v22 + 24) = 1;
      goto LABEL_19;
    }
    v24 = *v23;
    *(_QWORD *)(v22 + 8) = v23 + 1;
    v25 = v24 != 0;
  }
  else
  {
    v25 = 0;
  }
  *v21 = v25;
LABEL_19:
  v26 = *a5;
  *((_BYTE *)this + 24) = *((_BYTE *)a5 + 8);
  *((_QWORD *)this + 2) = v26;
  v27 = (_BYTE *)a5[2];
  if ( !tson::input_archive::search(this) )
  {
    LOBYTE(v29) = 0;
    goto LABEL_24;
  }
  tson::input_archive::consume_expected_marker((tson::read_buffer **)this);
  v28 = *(_QWORD *)this;
  v29 = *(char **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v29 < *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    v30 = *v29;
    *(_QWORD *)(v28 + 8) = v29 + 1;
    LOBYTE(v29) = v30 != 0;
LABEL_24:
    *v27 = (_BYTE)v29;
    return (char)v29;
  }
  *(_BYTE *)(v28 + 24) = 1;
  return (char)v29;
}
