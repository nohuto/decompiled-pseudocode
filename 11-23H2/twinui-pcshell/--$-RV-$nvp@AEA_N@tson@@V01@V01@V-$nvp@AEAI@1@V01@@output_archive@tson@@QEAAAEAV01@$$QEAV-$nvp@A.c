/*
 * XREFs of ??$?RV?$nvp@AEA_N@tson@@V01@V01@V?$nvp@AEAI@1@V01@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAI@1@0@Z @ 0x1801E5E7C
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_SearchSpartanMitigationTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1801E7C30 (--$serialize@Voutput_archive@tson@@@_tip_SearchSpartanMitigationTest@@QEAAXAEAVoutput_archive@ts.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAX_N@Z @ 0x1800138EC (-saveValue@output_archive@tson@@QEAAX_N@Z.c)
 *     ??$process@V?$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x18046371C (--$process@V-$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 */

tson::output_archive *__fastcall tson::output_archive::operator()<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<bool &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 *a6)
{
  char v7; // r10
  char v10; // dl
  __int64 v11; // rax
  __int64 v12; // rax

  v7 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v7;
  tson::output_archive::saveValue(this, **(_BYTE **)(a2 + 16));
  v10 = *(_BYTE *)(a3 + 8);
  *(_QWORD *)this = *(_QWORD *)a3;
  *((_BYTE *)this + 8) = v10;
  tson::output_archive::saveValue(this, **(_BYTE **)(a3 + 16));
  v11 = *a4;
  *((_BYTE *)this + 8) = *((_BYTE *)a4 + 8);
  *(_QWORD *)this = v11;
  tson::output_archive::saveValue(this, *(_BYTE *)a4[2]);
  tson::output_archive::process<tson::nvp<unsigned int &>>(this, a5);
  v12 = *a6;
  *((_BYTE *)this + 8) = *((_BYTE *)a6 + 8);
  *(_QWORD *)this = v12;
  tson::output_archive::saveValue(this, *(_BYTE *)a6[2]);
  return this;
}
