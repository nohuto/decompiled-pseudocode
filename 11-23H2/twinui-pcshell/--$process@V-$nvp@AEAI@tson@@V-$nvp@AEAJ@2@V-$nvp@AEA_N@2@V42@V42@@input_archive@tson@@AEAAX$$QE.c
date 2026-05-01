/*
 * XREFs of ??$process@V?$nvp@AEAI@tson@@V?$nvp@AEAJ@2@V?$nvp@AEA_N@2@V42@V42@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEA_N@1@22@Z @ 0x180463774
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAI@2@V?$nvp@AEAJ@2@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAJ@1@000@Z @ 0x180464FB0 (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAI@2@V-$nvp@AEAJ@2@V12@V12@V12@@input_archive@tson@@AEAAX.c)
 * Callees:
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x18046BCE4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x18046BD20 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18046DE50 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

char __fastcall tson::input_archive::process<tson::nvp<unsigned int &>,tson::nvp<long &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6)
{
  char v6; // r10
  _DWORD *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rax
  _DWORD *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rax
  bool *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r8
  char *v19; // rax
  char v20; // cl
  bool v21; // al
  __int64 v22; // rax
  bool *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // r8
  char *v26; // rax
  char v27; // cl
  bool v28; // al
  __int64 v29; // rax
  _BYTE *v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // r8
  char *v33; // rax
  char v34; // cl

  v6 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v6;
  v10 = *(_DWORD **)(a2 + 16);
  if ( tson::input_archive::search(this) )
  {
    LOBYTE(v11) = 16;
    tson::input_archive::consume_expected_marker(this, v11, 2147944029LL);
    tson::read_buffer::consume_n(*(tson::read_buffer **)this, v10, 4uLL);
  }
  else
  {
    *v10 = 0;
  }
  v12 = *a3;
  *((_BYTE *)this + 24) = *((_BYTE *)a3 + 8);
  *((_QWORD *)this + 2) = v12;
  v13 = (_DWORD *)a3[2];
  if ( tson::input_archive::search(this) )
  {
    LOBYTE(v14) = 17;
    tson::input_archive::consume_expected_marker(this, v14, 2147944029LL);
    tson::read_buffer::consume_n(*(tson::read_buffer **)this, v13, 4uLL);
  }
  else
  {
    *v13 = 0;
  }
  v15 = *a4;
  *((_BYTE *)this + 24) = *((_BYTE *)a4 + 8);
  *((_QWORD *)this + 2) = v15;
  v16 = (bool *)a4[2];
  if ( tson::input_archive::search(this) )
  {
    LOBYTE(v17) = 10;
    tson::input_archive::consume_expected_marker(this, v17, 2147944029LL);
    v18 = *(_QWORD *)this;
    v19 = *(char **)(*(_QWORD *)this + 8LL);
    if ( (unsigned __int64)v19 >= *(_QWORD *)(*(_QWORD *)this + 16LL) )
    {
      *(_BYTE *)(v18 + 24) = 1;
      goto LABEL_13;
    }
    v20 = *v19;
    *(_QWORD *)(v18 + 8) = v19 + 1;
    v21 = v20 != 0;
  }
  else
  {
    v21 = 0;
  }
  *v16 = v21;
LABEL_13:
  v22 = *a5;
  *((_BYTE *)this + 24) = *((_BYTE *)a5 + 8);
  *((_QWORD *)this + 2) = v22;
  v23 = (bool *)a5[2];
  if ( tson::input_archive::search(this) )
  {
    LOBYTE(v24) = 10;
    tson::input_archive::consume_expected_marker(this, v24, 2147944029LL);
    v25 = *(_QWORD *)this;
    v26 = *(char **)(*(_QWORD *)this + 8LL);
    if ( (unsigned __int64)v26 >= *(_QWORD *)(*(_QWORD *)this + 16LL) )
    {
      *(_BYTE *)(v25 + 24) = 1;
      goto LABEL_19;
    }
    v27 = *v26;
    *(_QWORD *)(v25 + 8) = v26 + 1;
    v28 = v27 != 0;
  }
  else
  {
    v28 = 0;
  }
  *v23 = v28;
LABEL_19:
  v29 = *a6;
  *((_BYTE *)this + 24) = *((_BYTE *)a6 + 8);
  *((_QWORD *)this + 2) = v29;
  v30 = (_BYTE *)a6[2];
  if ( !tson::input_archive::search(this) )
  {
    LOBYTE(v33) = 0;
    goto LABEL_24;
  }
  LOBYTE(v31) = 10;
  tson::input_archive::consume_expected_marker(this, v31, 2147944029LL);
  v32 = *(_QWORD *)this;
  v33 = *(char **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v33 < *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    v34 = *v33;
    *(_QWORD *)(v32 + 8) = v33 + 1;
    LOBYTE(v33) = v34 != 0;
LABEL_24:
    *v30 = (_BYTE)v33;
    return (char)v33;
  }
  *(_BYTE *)(v32 + 24) = 1;
  return (char)v33;
}
