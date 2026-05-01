/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_SearchSpartanMitigationTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1801E7C30
 * Callers:
 *     ?serialize@?$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1801F1580 (-serialize@-$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@EEAAXAEAVoutput_ar.c)
 * Callees:
 *     ??$?RV?$nvp@AEA_N@tson@@V01@V01@V?$nvp@AEAI@1@V01@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAI@1@0@Z @ 0x1801E5E7C (--$-RV-$nvp@AEA_N@tson@@V01@V01@V-$nvp@AEAI@1@V01@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@A.c)
 */

tson::output_archive *__fastcall _tip_SearchSpartanMitigationTest::serialize<tson::output_archive>(
        __int64 a1,
        tson::output_archive *a2)
{
  __int64 v3; // [rsp+30h] [rbp-29h] BYREF
  char v4; // [rsp+38h] [rbp-21h]
  __int64 v5; // [rsp+40h] [rbp-19h]
  __int64 v6; // [rsp+48h] [rbp-11h] BYREF
  char v7; // [rsp+50h] [rbp-9h]
  __int64 v8; // [rsp+58h] [rbp-1h]
  const char *v9; // [rsp+60h] [rbp+7h] BYREF
  char v10; // [rsp+68h] [rbp+Fh]
  __int64 v11; // [rsp+70h] [rbp+17h]
  const char *v12; // [rsp+78h] [rbp+1Fh] BYREF
  char v13; // [rsp+80h] [rbp+27h]
  __int64 v14; // [rsp+88h] [rbp+2Fh]
  const char *v15; // [rsp+90h] [rbp+37h] BYREF
  char v16; // [rsp+98h] [rbp+3Fh]
  __int64 v17; // [rsp+A0h] [rbp+47h]

  v4 = 27;
  v3 = (__int64)"notImpactedBySubdomainIssue";
  v7 = 22;
  v5 = a1 + 19;
  v10 = 19;
  v13 = 16;
  v6 = (__int64)"appliedMitigationCount";
  v16 = 17;
  v8 = a1 + 20;
  v9 = "reappliedMitigation";
  v11 = a1 + 16;
  v12 = "mitigationWorked";
  v14 = a1 + 17;
  v15 = "appliedMitigation";
  v17 = a1 + 18;
  return tson::output_archive::operator()<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<bool &>>(
           a2,
           (__int64)&v15,
           (__int64)&v12,
           (__int64 *)&v9,
           (__int64)&v6,
           &v3);
}
