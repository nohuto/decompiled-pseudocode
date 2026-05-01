/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEA_J@2@V12@V12@V12@V12@V12@V12@V?$nvp@AEAJ@2@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEA_J@1@000000$$QEAV?$nvp@AEAJ@1@0@Z @ 0x1801FD3D4
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_StartMenuAutomaticInvokeDuringLogonTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1801FDBC8 (--$serialize@Voutput_archive@tson@@@_tip_StartMenuAutomaticInvokeDuringLogonTest@@QEAAXAEAVoutpu.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAX_N@Z @ 0x1800138EC (-saveValue@output_archive@tson@@QEAAX_N@Z.c)
 *     ??$process@V?$nvp@AEA_J@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_J@1@@Z @ 0x180464084 (--$process@V-$nvp@AEA_J@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_J@1@@Z.c)
 */

void __fastcall tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<__int64 &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<bool &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        __int64 *a9,
        __int64 *a10,
        __int64 a11,
        __int64 *a12)
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
  tson::output_archive::process<tson::nvp<__int64 &>>(this, a4);
  v17 = *a5;
  *((_BYTE *)this + 8) = *((_BYTE *)a5 + 8);
  *(_QWORD *)this = v17;
  tson::output_archive::saveValue(this, *(_BYTE *)a5[2]);
  v18 = *a6;
  *((_BYTE *)this + 8) = *((_BYTE *)a6 + 8);
  *(_QWORD *)this = v18;
  tson::output_archive::saveValue(this, *(_BYTE *)a6[2]);
  tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<bool &>>(
    this,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12);
}
