/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@000000@Z @ 0x180480180
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000000@Z @ 0x180480244 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV-$nvp@.c)
 * Callees:
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x18046BCE4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18046DE50 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00000@Z @ 0x1804800CC (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@.c)
 */

char __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7,
        __int64 *a8)
{
  char v8; // r10
  bool *v12; // rdi
  __int64 v13; // r8
  char *v14; // rax
  char v15; // cl
  bool v16; // al

  v8 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v8;
  v12 = *(bool **)(a2 + 16);
  if ( !tson::input_archive::search(this) )
  {
    v16 = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker((tson::read_buffer **)this);
  v13 = *(_QWORD *)this;
  v14 = *(char **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v14 < *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    v15 = *v14;
    *(_QWORD *)(v13 + 8) = v14 + 1;
    v16 = v15 != 0;
LABEL_6:
    *v12 = v16;
    return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
             this,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8);
  }
  *(_BYTE *)(v13 + 24) = 1;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           this,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8);
}
