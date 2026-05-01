/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000@Z @ 0x18047FE24
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00000@Z @ 0x1804800CC (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@.c)
 * Callees:
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x18046BCE4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18046DE50 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

char __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6)
{
  char v6; // r10
  bool *v10; // rsi
  __int64 v11; // r8
  char *v12; // rax
  char v13; // cl
  bool v14; // al
  __int64 v15; // rax
  bool *v16; // rdi
  __int64 v17; // r8
  char *v18; // rax
  char v19; // cl
  bool v20; // al
  __int64 v21; // rax
  bool *v22; // rdi
  __int64 v23; // r8
  char *v24; // rax
  char v25; // cl
  bool v26; // al
  __int64 v27; // rax
  bool *v28; // rdi
  __int64 v29; // r8
  char *v30; // rax
  char v31; // cl
  bool v32; // al
  __int64 v33; // rax
  _BYTE *v34; // rdi
  __int64 v35; // r8
  char *v36; // rax
  char v37; // cl

  v6 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v6;
  v10 = *(bool **)(a2 + 16);
  if ( tson::input_archive::search(this) )
  {
    tson::input_archive::consume_expected_marker((tson::read_buffer **)this);
    v11 = *(_QWORD *)this;
    v12 = *(char **)(*(_QWORD *)this + 8LL);
    if ( (unsigned __int64)v12 >= *(_QWORD *)(*(_QWORD *)this + 16LL) )
    {
      *(_BYTE *)(v11 + 24) = 1;
      goto LABEL_7;
    }
    v13 = *v12;
    *(_QWORD *)(v11 + 8) = v12 + 1;
    v14 = v13 != 0;
  }
  else
  {
    v14 = 0;
  }
  *v10 = v14;
LABEL_7:
  v15 = *a3;
  *((_BYTE *)this + 24) = *((_BYTE *)a3 + 8);
  *((_QWORD *)this + 2) = v15;
  v16 = (bool *)a3[2];
  if ( tson::input_archive::search(this) )
  {
    tson::input_archive::consume_expected_marker((tson::read_buffer **)this);
    v17 = *(_QWORD *)this;
    v18 = *(char **)(*(_QWORD *)this + 8LL);
    if ( (unsigned __int64)v18 >= *(_QWORD *)(*(_QWORD *)this + 16LL) )
    {
      *(_BYTE *)(v17 + 24) = 1;
      goto LABEL_13;
    }
    v19 = *v18;
    *(_QWORD *)(v17 + 8) = v18 + 1;
    v20 = v19 != 0;
  }
  else
  {
    v20 = 0;
  }
  *v16 = v20;
LABEL_13:
  v21 = *a4;
  *((_BYTE *)this + 24) = *((_BYTE *)a4 + 8);
  *((_QWORD *)this + 2) = v21;
  v22 = (bool *)a4[2];
  if ( tson::input_archive::search(this) )
  {
    tson::input_archive::consume_expected_marker((tson::read_buffer **)this);
    v23 = *(_QWORD *)this;
    v24 = *(char **)(*(_QWORD *)this + 8LL);
    if ( (unsigned __int64)v24 >= *(_QWORD *)(*(_QWORD *)this + 16LL) )
    {
      *(_BYTE *)(v23 + 24) = 1;
      goto LABEL_19;
    }
    v25 = *v24;
    *(_QWORD *)(v23 + 8) = v24 + 1;
    v26 = v25 != 0;
  }
  else
  {
    v26 = 0;
  }
  *v22 = v26;
LABEL_19:
  v27 = *a5;
  *((_BYTE *)this + 24) = *((_BYTE *)a5 + 8);
  *((_QWORD *)this + 2) = v27;
  v28 = (bool *)a5[2];
  if ( tson::input_archive::search(this) )
  {
    tson::input_archive::consume_expected_marker((tson::read_buffer **)this);
    v29 = *(_QWORD *)this;
    v30 = *(char **)(*(_QWORD *)this + 8LL);
    if ( (unsigned __int64)v30 >= *(_QWORD *)(*(_QWORD *)this + 16LL) )
    {
      *(_BYTE *)(v29 + 24) = 1;
      goto LABEL_25;
    }
    v31 = *v30;
    *(_QWORD *)(v29 + 8) = v30 + 1;
    v32 = v31 != 0;
  }
  else
  {
    v32 = 0;
  }
  *v28 = v32;
LABEL_25:
  v33 = *a6;
  *((_BYTE *)this + 24) = *((_BYTE *)a6 + 8);
  *((_QWORD *)this + 2) = v33;
  v34 = (_BYTE *)a6[2];
  if ( !tson::input_archive::search(this) )
  {
    LOBYTE(v36) = 0;
    goto LABEL_30;
  }
  tson::input_archive::consume_expected_marker((tson::read_buffer **)this);
  v35 = *(_QWORD *)this;
  v36 = *(char **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v36 < *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    v37 = *v36;
    *(_QWORD *)(v35 + 8) = v36 + 1;
    LOBYTE(v36) = v37 != 0;
LABEL_30:
    *v34 = (_BYTE)v36;
    return (char)v36;
  }
  *(_BYTE *)(v35 + 24) = 1;
  return (char)v36;
}
