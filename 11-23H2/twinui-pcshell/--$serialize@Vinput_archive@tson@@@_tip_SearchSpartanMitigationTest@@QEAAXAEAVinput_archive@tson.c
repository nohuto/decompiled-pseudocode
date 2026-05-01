/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_SearchSpartanMitigationTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1801E7B54
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1801F0990 (-deserialize@-$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@EEAAXAEAVinput_a.c)
 * Callees:
 *     ??$process@V?$nvp@AEAI@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x1804636B8 (--$process@V-$nvp@AEAI@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1804641A0 (--$process@V-$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 */

__int64 __fastcall _tip_SearchSpartanMitigationTest::serialize<tson::input_archive>(__int64 a1, __int64 a2)
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

  v17 = 27;
  v14 = 22;
  v16 = "notImpactedBySubdomainIssue";
  v11 = 19;
  v18 = a1 + 19;
  v13 = "appliedMitigationCount";
  v15 = a1 + 20;
  v10 = "reappliedMitigation";
  v12 = a1 + 16;
  v7 = "mitigationWorked";
  v9 = a1 + 17;
  v4 = "appliedMitigation";
  v6 = a1 + 18;
  v8 = 16;
  v5 = 17;
  tson::input_archive::process<tson::nvp<bool &>>(a2, &v4);
  tson::input_archive::process<tson::nvp<bool &>>(a2, &v7);
  tson::input_archive::process<tson::nvp<bool &>>(a2, &v10);
  tson::input_archive::process<tson::nvp<unsigned int &>>(a2, &v13);
  return tson::input_archive::process<tson::nvp<bool &>>(a2, &v16);
}
