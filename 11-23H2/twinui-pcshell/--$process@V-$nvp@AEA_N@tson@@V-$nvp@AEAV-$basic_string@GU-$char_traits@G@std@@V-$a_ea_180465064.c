/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V12@V?$nvp@AEAI@2@V?$nvp@AEAJ@2@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@00$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAJ@1@000@Z @ 0x180465064
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V12@V?$nvp@AEAI@2@V?$nvp@AEAJ@2@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@00$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAJ@1@000@Z @ 0x180464EBC (--$process@V-$nvp@AEA_N@tson@@V12@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@_ea_180464EBC.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAI@2@V?$nvp@AEAJ@2@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAJ@1@000@Z @ 0x180464DF8 (--$process@V-$nvp@AEA_N@tson@@V12@V-$nvp@AEAI@2@V-$nvp@AEAJ@2@V12@V12@V12@@input_archive@tson@@A.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x18046BCE4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18046D0A0 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocato.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18046DE50 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<long &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  char v10; // r10
  bool *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  char *v17; // rax
  char v18; // cl
  bool v19; // al
  __int64 v20; // rax

  v10 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v10;
  v14 = *(bool **)(a2 + 16);
  if ( !tson::input_archive::search(this) )
  {
    v19 = 0;
    goto LABEL_6;
  }
  LOBYTE(v15) = 10;
  tson::input_archive::consume_expected_marker(this, v15, 2147944029LL);
  v16 = *(_QWORD *)this;
  v17 = *(char **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v17 < *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    v18 = *v17;
    *(_QWORD *)(v16 + 8) = v17 + 1;
    v19 = v18 != 0;
LABEL_6:
    *v14 = v19;
    goto LABEL_7;
  }
  *(_BYTE *)(v16 + 24) = 1;
LABEL_7:
  v20 = *a3;
  *((_BYTE *)this + 24) = *((_BYTE *)a3 + 8);
  *((_QWORD *)this + 2) = v20;
  tson::load_nothrow(this);
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<long &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           this,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10);
}
