/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAI@2@V?$nvp@AEAJ@2@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAJ@1@000@Z @ 0x180464FB0
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAI@2@V?$nvp@AEAJ@2@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAJ@1@000@Z @ 0x180464DF8 (--$process@V-$nvp@AEA_N@tson@@V12@V-$nvp@AEAI@2@V-$nvp@AEAJ@2@V12@V12@V12@@input_archive@tson@@A.c)
 * Callees:
 *     ??$process@V?$nvp@AEAI@tson@@V?$nvp@AEAJ@2@V?$nvp@AEA_N@2@V42@V42@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEA_N@1@22@Z @ 0x180463774 (--$process@V-$nvp@AEAI@tson@@V-$nvp@AEAJ@2@V-$nvp@AEA_N@2@V42@V42@@input_archive@tson@@AEAAX$$QE.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x18046BCE4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18046DE50 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

char __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<long &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7)
{
  char v7; // r10
  bool *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  char *v14; // rax
  char v15; // cl
  bool v16; // al

  v7 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v7;
  v11 = *(bool **)(a2 + 16);
  if ( !tson::input_archive::search(this) )
  {
    v16 = 0;
    goto LABEL_6;
  }
  LOBYTE(v12) = 10;
  tson::input_archive::consume_expected_marker(this, v12, 2147944029LL);
  v13 = *(_QWORD *)this;
  v14 = *(char **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v14 < *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    v15 = *v14;
    *(_QWORD *)(v13 + 8) = v14 + 1;
    v16 = v15 != 0;
LABEL_6:
    *v11 = v16;
    return tson::input_archive::process<tson::nvp<unsigned int &>,tson::nvp<long &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
             this,
             a3,
             a4,
             a5,
             a6,
             a7);
  }
  *(_BYTE *)(v13 + 24) = 1;
  return tson::input_archive::process<tson::nvp<unsigned int &>,tson::nvp<long &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           this,
           a3,
           a4,
           a5,
           a6,
           a7);
}
