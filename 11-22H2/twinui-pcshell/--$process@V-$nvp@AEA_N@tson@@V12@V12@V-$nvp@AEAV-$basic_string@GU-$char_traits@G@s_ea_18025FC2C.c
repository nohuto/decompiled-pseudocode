/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V12@V?$nvp@AEAI@2@V?$nvp@AEAH@2@V12@V?$nvp@AEAW4keyPressType@@@2@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@00$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAH@1@0$$QEAV?$nvp@AEAW4keyPressType@@@1@0@Z @ 0x18025FC2C
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V12@V?$nvp@AEAI@2@V?$nvp@AEAH@2@V12@V?$nvp@AEAW4keyPressType@@@2@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00000$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@00$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAH@1@0$$QEAV?$nvp@AEAW4keyPressType@@@1@0@Z @ 0x18025FB28 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@st.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAX_N@Z @ 0x1800138EC (-saveValue@output_archive@tson@@QEAAX_N@Z.c)
 *     ??$process@V?$nvp@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@@Z @ 0x18028BD34 (--$process@V-$nvp@AEAV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@tson@@@ou.c)
 */

__int64 __fastcall tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<int &>,tson::nvp<bool &>,tson::nvp<enum keyPressType &>,tson::nvp<bool &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  char v10; // r10
  char v13; // dl
  __int64 v14; // rax
  __int64 v15; // rax

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
  tson::output_archive::process<tson::nvp<std::wstring &>>(this);
  v15 = *a6;
  *((_BYTE *)this + 8) = *((_BYTE *)a6 + 8);
  *(_QWORD *)this = v15;
  tson::output_archive::saveValue(this, *(_BYTE *)a6[2]);
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<int &>,tson::nvp<bool &>,tson::nvp<enum keyPressType &>,tson::nvp<bool &>>(
           this,
           a7,
           a8,
           a9);
}
