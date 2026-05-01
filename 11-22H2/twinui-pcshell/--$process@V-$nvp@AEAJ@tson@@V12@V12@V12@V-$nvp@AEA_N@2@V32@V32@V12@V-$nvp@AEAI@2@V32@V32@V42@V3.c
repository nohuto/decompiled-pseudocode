/*
 * XREFs of ??$process@V?$nvp@AEAJ@tson@@V12@V12@V12@V?$nvp@AEA_N@2@V32@V32@V12@V?$nvp@AEAI@2@V32@V32@V42@V32@V32@V32@V32@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@000$$QEAV?$nvp@AEA_N@1@110$$QEAV?$nvp@AEAI@1@1121111@Z @ 0x1801FB8B8
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAJ@2@V32@V32@V32@V12@V12@V12@V32@V?$nvp@AEAI@2@V12@V12@V42@V12@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAJ@1@1110001$$QEAV?$nvp@AEAI@1@0020000@Z @ 0x1801FD4C8 (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAJ@2@V32@V32@V32@V12@V12@V12@V32@V-$nvp@AEAI@2@V12@V12@V4.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAX_N@Z @ 0x1800138EC (-saveValue@output_archive@tson@@QEAAX_N@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAJ@2@V?$nvp@AEAI@2@V12@V12@V42@V12@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAI@1@0020000@Z @ 0x1801FD2E4 (--$process@V-$nvp@AEA_N@tson@@V12@V-$nvp@AEAJ@2@V-$nvp@AEAI@2@V12@V12@V42@V12@V12@V12@V12@@outpu.c)
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1804639A4 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 */

__int64 __fastcall tson::output_archive::process<tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<unsigned int &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v17; // rax

  tson::output_archive::process<tson::nvp<long &>>(this, a2);
  tson::output_archive::process<tson::nvp<long &>>(this, a3);
  tson::output_archive::process<tson::nvp<long &>>(this, a4);
  tson::output_archive::process<tson::nvp<long &>>(this, a5);
  v17 = *a6;
  *((_BYTE *)this + 8) = *((_BYTE *)a6 + 8);
  *(_QWORD *)this = v17;
  tson::output_archive::saveValue(this, *(_BYTE *)a6[2]);
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<unsigned int &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           this,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14);
}
