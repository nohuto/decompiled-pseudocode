/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0@Z @ 0x180464214
 * Callers:
 *     ??$process@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@tson@@V?$nvp@AEA_N@2@V32@V?$nvp@AEAJ@2@V12@V42@V12@V12@V32@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEA_N@1@1$$QEAV?$nvp@AEAJ@1@020011@Z @ 0x1801E73F4 (--$process@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@tson@@V-$nvp.c)
 *     ?deserialize@?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1802297F0 (-deserialize@-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@EEAAXAEAVinput_archiv.c)
 *     ??$serialize@Vinput_archive@tson@@@_tip_OutOfProcDesktopSnapLayoutManagerTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180229DA0 (--$serialize@Vinput_archive@tson@@@_tip_OutOfProcDesktopSnapLayoutManagerTest@@QEAAXAEAVinput_ar.c)
 *     ?deserialize@?$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x18028BB50 (-deserialize@-$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@deta.c)
 * Callees:
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x18046BCE4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18046DE50 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

char __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 *a3)
{
  char v3; // r9
  bool *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  char *v9; // rax
  char v10; // cl
  bool v11; // al
  __int64 v12; // rax
  _BYTE *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  char *v16; // rax
  char v17; // cl

  v3 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v3;
  v6 = *(bool **)(a2 + 16);
  if ( tson::input_archive::search(this) )
  {
    LOBYTE(v7) = 10;
    tson::input_archive::consume_expected_marker(this, v7, 2147944029LL);
    v8 = *(_QWORD *)this;
    v9 = *(char **)(*(_QWORD *)this + 8LL);
    if ( (unsigned __int64)v9 >= *(_QWORD *)(*(_QWORD *)this + 16LL) )
    {
      *(_BYTE *)(v8 + 24) = 1;
      goto LABEL_7;
    }
    v10 = *v9;
    *(_QWORD *)(v8 + 8) = v9 + 1;
    v11 = v10 != 0;
  }
  else
  {
    v11 = 0;
  }
  *v6 = v11;
LABEL_7:
  v12 = *a3;
  *((_BYTE *)this + 24) = *((_BYTE *)a3 + 8);
  *((_QWORD *)this + 2) = v12;
  v13 = (_BYTE *)a3[2];
  if ( !tson::input_archive::search(this) )
  {
    LOBYTE(v16) = 0;
    goto LABEL_12;
  }
  LOBYTE(v14) = 10;
  tson::input_archive::consume_expected_marker(this, v14, 2147944029LL);
  v15 = *(_QWORD *)this;
  v16 = *(char **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v16 < *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    v17 = *v16;
    *(_QWORD *)(v15 + 8) = v16 + 1;
    LOBYTE(v16) = v17 != 0;
LABEL_12:
    *v13 = (_BYTE)v16;
    return (char)v16;
  }
  *(_BYTE *)(v15 + 24) = 1;
  return (char)v16;
}
