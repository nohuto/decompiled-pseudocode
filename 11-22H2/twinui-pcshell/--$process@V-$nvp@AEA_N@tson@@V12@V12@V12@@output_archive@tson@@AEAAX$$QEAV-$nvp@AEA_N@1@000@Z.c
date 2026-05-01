/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@000@Z @ 0x18047FD88
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAJ@2@V?$nvp@AEAI@2@V12@V12@V42@V12@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAI@1@0020000@Z @ 0x1801FD2E4 (--$process@V-$nvp@AEA_N@tson@@V12@V-$nvp@AEAJ@2@V-$nvp@AEAI@2@V12@V12@V42@V12@V12@V12@V12@@outpu.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAX_N@Z @ 0x1800138EC (-saveValue@output_archive@tson@@QEAAX_N@Z.c)
 */

void __fastcall tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 *a5)
{
  char v6; // r10
  char v9; // dl
  __int64 v10; // rax
  __int64 v11; // rax

  v6 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v6;
  tson::output_archive::saveValue(this, **(_BYTE **)(a2 + 16));
  v9 = *(_BYTE *)(a3 + 8);
  *(_QWORD *)this = *(_QWORD *)a3;
  *((_BYTE *)this + 8) = v9;
  tson::output_archive::saveValue(this, **(_BYTE **)(a3 + 16));
  v10 = *a4;
  *((_BYTE *)this + 8) = *((_BYTE *)a4 + 8);
  *(_QWORD *)this = v10;
  tson::output_archive::saveValue(this, *(_BYTE *)a4[2]);
  v11 = *a5;
  *((_BYTE *)this + 8) = *((_BYTE *)a5 + 8);
  *(_QWORD *)this = v11;
  tson::output_archive::saveValue(this, *(_BYTE *)a5[2]);
}
