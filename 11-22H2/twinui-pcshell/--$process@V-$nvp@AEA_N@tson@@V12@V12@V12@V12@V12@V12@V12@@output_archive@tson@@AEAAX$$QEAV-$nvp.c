/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000000@Z @ 0x180480318
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_GuidedSnapAssistTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x18022399C (--$serialize@Voutput_archive@tson@@@_tip_GuidedSnapAssistTest@@QEAAXAEAVoutput_archive@tson@@@Z.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_LockWidgetCanvasDelayedInitializationTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180232A04 (--$serialize@Voutput_archive@tson@@@_tip_LockWidgetCanvasDelayedInitializationTest@@QEAAXAEAVout.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAX_N@Z @ 0x1800138EC (-saveValue@output_archive@tson@@QEAAX_N@Z.c)
 */

void __fastcall tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8,
        __int64 *a9)
{
  char v10; // r10
  char v13; // dl
  __int64 v14; // rax

  v10 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v10;
  tson::output_archive::saveValue(this, **(_BYTE **)(a2 + 16));
  v13 = *(_BYTE *)(a3 + 8);
  *(_QWORD *)this = *(_QWORD *)a3;
  *((_BYTE *)this + 8) = v13;
  tson::output_archive::saveValue(this, **(_BYTE **)(a3 + 16));
  v14 = *a4;
  *((_BYTE *)this + 8) = *((_BYTE *)a4 + 8);
  *(_QWORD *)this = v14;
  tson::output_archive::saveValue(this, *(_BYTE *)a4[2]);
  tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
    this,
    a5,
    a6,
    a7,
    a8,
    a9);
}
