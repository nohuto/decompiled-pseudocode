/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAI@2@V?$nvp@AEAH@2@V12@V?$nvp@AEAW4keyPressType@@@2@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAH@1@0$$QEAV?$nvp@AEAW4keyPressType@@@1@0@Z @ 0x18025FD1C
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V12@V?$nvp@AEAI@2@V?$nvp@AEAH@2@V12@V?$nvp@AEAW4keyPressType@@@2@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@00$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAH@1@0$$QEAV?$nvp@AEAW4keyPressType@@@1@0@Z @ 0x18025FC2C (--$process@V-$nvp@AEA_N@tson@@V12@V12@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@s_ea_18025FC2C.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x180013820 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ?saveValue@output_archive@tson@@QEAAX_N@Z @ 0x1800138EC (-saveValue@output_archive@tson@@QEAAX_N@Z.c)
 *     ??$?RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x18022471C (--$-RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 *     ??$process@V?$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x18046371C (--$process@V-$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 */

void __fastcall tson::output_archive::process<tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<int &>,tson::nvp<bool &>,tson::nvp<enum keyPressType &>,tson::nvp<bool &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7)
{
  char v8; // r10
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  v8 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v8;
  tson::output_archive::saveValue(this, **(_BYTE **)(a2 + 16));
  tson::output_archive::process<tson::nvp<unsigned int &>>(this, a3);
  v11 = *a4;
  *((_BYTE *)this + 8) = *((_BYTE *)a4 + 8);
  *(_QWORD *)this = v11;
  tson::output_archive::operator()<int &>((void ***)this, (int *)a4[2]);
  v12 = *a5;
  *((_BYTE *)this + 8) = *((_BYTE *)a5 + 8);
  *(_QWORD *)this = v12;
  tson::output_archive::saveValue(this, *(_BYTE *)a5[2]);
  v13 = *a6;
  *((_BYTE *)this + 8) = *((_BYTE *)a6 + 8);
  *(_QWORD *)this = v13;
  tson::output_archive::saveValue(this, *(_DWORD *)a6[2]);
  v14 = *a7;
  *((_BYTE *)this + 8) = *((_BYTE *)a7 + 8);
  *(_QWORD *)this = v14;
  tson::output_archive::saveValue(this, *(_BYTE *)a7[2]);
}
