/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAJ@2@V?$nvp@AEAI@2@V12@V12@V42@V12@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAI@1@0020000@Z @ 0x1801FD2E4
 * Callers:
 *     ??$process@V?$nvp@AEAJ@tson@@V12@V12@V12@V?$nvp@AEA_N@2@V32@V32@V12@V?$nvp@AEAI@2@V32@V32@V42@V32@V32@V32@V32@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@000$$QEAV?$nvp@AEA_N@1@110$$QEAV?$nvp@AEAI@1@1121111@Z @ 0x1801FB8B8 (--$process@V-$nvp@AEAJ@tson@@V12@V12@V12@V-$nvp@AEA_N@2@V32@V32@V12@V-$nvp@AEAI@2@V32@V32@V42@V3.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAX_N@Z @ 0x1800138EC (-saveValue@output_archive@tson@@QEAAX_N@Z.c)
 *     ??$process@V?$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x18046371C (--$process@V-$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1804639A4 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 */

__int64 __fastcall tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<unsigned int &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  char v13; // r10
  char v16; // dl
  __int64 v17; // rax
  __int64 v18; // rax

  v13 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v13;
  tson::output_archive::saveValue(this, **(_BYTE **)(a2 + 16));
  v16 = *(_BYTE *)(a3 + 8);
  *(_QWORD *)this = *(_QWORD *)a3;
  *((_BYTE *)this + 8) = v16;
  tson::output_archive::saveValue(this, **(_BYTE **)(a3 + 16));
  tson::output_archive::process<tson::nvp<long &>>(this, a4);
  tson::output_archive::process<tson::nvp<unsigned int &>>(this, a5);
  v17 = *a6;
  *((_BYTE *)this + 8) = *((_BYTE *)a6 + 8);
  *(_QWORD *)this = v17;
  tson::output_archive::saveValue(this, *(_BYTE *)a6[2]);
  v18 = *a7;
  *((_BYTE *)this + 8) = *((_BYTE *)a7 + 8);
  *(_QWORD *)this = v18;
  tson::output_archive::saveValue(this, *(_BYTE *)a7[2]);
  tson::output_archive::process<tson::nvp<unsigned int &>>(this, a8);
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           this,
           a12);
}
