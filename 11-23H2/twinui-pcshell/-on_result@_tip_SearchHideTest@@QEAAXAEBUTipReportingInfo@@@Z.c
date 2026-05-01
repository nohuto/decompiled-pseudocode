/*
 * XREFs of ?on_result@_tip_SearchHideTest@@QEAAXAEBUTipReportingInfo@@@Z @ 0x1801F0FE8
 * Callers:
 *     ?on_result@?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@EEAAXAEBUTipReportingInfo@@@Z @ 0x18046D550 (-on_result@-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@EEAAXAEBUTipReportingInfo@@@Z.c)
 * Callees:
 *     ??$UndockedSearchExperienceManager_HideResult@AEA_NPEBGAEBG@UndockedSearchExperienceManagerTIPTelemetry@@SAXAEA_N$$QEAPEBGAEBG@Z @ 0x1801E6A68 (--$UndockedSearchExperienceManager_HideResult@AEA_NPEBGAEBG@UndockedSearchExperienceManagerTIPTe.c)
 */

void __fastcall _tip_SearchHideTest::on_result(_tip_SearchHideTest *this, const struct TipReportingInfo *a2)
{
  char v2; // al
  char v3; // al
  bool v4; // cf
  bool v5; // zf
  _QWORD *v6; // rax
  bool v7; // [rsp+38h] [rbp+10h] BYREF
  _QWORD *v8; // [rsp+40h] [rbp+18h] BYREF

  v2 = *((_BYTE *)a2 + 40);
  if ( (v2 & 0xFB) != 0 )
  {
    v3 = v2 - 1;
    v4 = v3 == 0;
    v5 = v3 == 1;
    v6 = (_QWORD *)((char *)this + 48);
    v7 = v4 || v5;
    if ( *((_QWORD *)this + 9) >= 8uLL )
      v6 = (_QWORD *)*v6;
    v8 = v6;
    UndockedSearchExperienceManagerTIPTelemetry::UndockedSearchExperienceManager_HideResult<bool &,unsigned short const *,unsigned short const &>(
      &v7,
      (__int64 *)&v8,
      (unsigned __int16 *)a2 + 21);
  }
}
