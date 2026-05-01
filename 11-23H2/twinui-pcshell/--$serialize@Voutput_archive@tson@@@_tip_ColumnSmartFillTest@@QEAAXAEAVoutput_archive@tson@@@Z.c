/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_ColumnSmartFillTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1802249E8
 * Callers:
 *     ?serialize@?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180225260 (-serialize@-$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@ts.c)
 * Callees:
 *     ??$?RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x18022471C (--$-RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 *     ??$process@V?$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x18046371C (--$process@V-$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1804639A4 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 */

__int64 __fastcall _tip_ColumnSmartFillTest::serialize<tson::output_archive>(__int64 a1, __int64 a2)
{
  const char *v4; // [rsp+20h] [rbp-29h] BYREF
  char v5; // [rsp+28h] [rbp-21h]
  __int64 v6; // [rsp+30h] [rbp-19h]
  const char *v7; // [rsp+38h] [rbp-11h] BYREF
  char v8; // [rsp+40h] [rbp-9h]
  __int64 v9; // [rsp+48h] [rbp-1h]
  const char *v10; // [rsp+50h] [rbp+7h] BYREF
  char v11; // [rsp+58h] [rbp+Fh]
  __int64 v12; // [rsp+60h] [rbp+17h]
  const char *v13; // [rsp+68h] [rbp+1Fh] BYREF
  char v14; // [rsp+70h] [rbp+27h]
  __int64 v15; // [rsp+78h] [rbp+2Fh]
  const char *v16; // [rsp+80h] [rbp+37h] BYREF
  char v17; // [rsp+88h] [rbp+3Fh]
  __int64 v18; // [rsp+90h] [rbp+47h]

  *(_BYTE *)(a2 + 8) = 18;
  v16 = "resultRect.left";
  v17 = 15;
  v18 = a1 + 48;
  v13 = "resultRect.right";
  v15 = a1 + 56;
  v10 = "workArea.right";
  v12 = a1 + 28;
  v7 = "workArea.left";
  v9 = a1 + 20;
  v4 = "dpi";
  v6 = a1 + 36;
  *(_QWORD *)a2 = "horizontalPosition";
  v14 = 16;
  v11 = 14;
  v8 = 13;
  v5 = 3;
  tson::output_archive::operator()<int &>((void ***)a2, (int *)(a1 + 16));
  tson::output_archive::process<tson::nvp<unsigned int &>>(a2, &v4);
  tson::output_archive::process<tson::nvp<long &>>(a2, &v7);
  tson::output_archive::process<tson::nvp<long &>>(a2, &v10);
  tson::output_archive::process<tson::nvp<long &>>(a2, &v13);
  return tson::output_archive::process<tson::nvp<long &>>(a2, &v16);
}
