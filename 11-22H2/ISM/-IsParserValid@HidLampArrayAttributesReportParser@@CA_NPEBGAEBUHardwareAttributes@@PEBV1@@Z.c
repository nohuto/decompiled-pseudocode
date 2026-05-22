/*
 * XREFs of ?IsParserValid@HidLampArrayAttributesReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x1800653DC
 * Callers:
 *     ?TryCreateAndInitialize@HidLampArrayAttributesReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x180065504 (-TryCreateAndInitialize@HidLampArrayAttributesReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUP.c)
 * Callees:
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@JPEBGGGG@Z @ 0x180064620 (-LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry@@@details@wil@@QEAA_NXZ @ 0x180064BF0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry@@.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800D537C (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800FD968 (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800FF0CC (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x180105400 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

bool __fastcall HidLampArrayAttributesReportParser::IsParserValid(
        const unsigned __int16 *a1,
        const struct HardwareAttributes *a2,
        const struct HidLampArrayAttributesReportParser *a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  bool v20; // bp
  __int16 v21; // bx
  __int16 v22; // di
  __int16 v23; // si
  __int64 v24; // rcx
  unsigned __int16 v26[16]; // [rsp+40h] [rbp-48h] BYREF

  v20 = *((_BYTE *)a3 + 17) == 2
     && HidChannelValueInfo::IsValid(
          (const struct HidLampArrayAttributesReportParser *)((char *)a3 + 24),
          (__int64)a2,
          0x7FFFFFFFLL)
     && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v7 + 96), v5, v6)
     && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v10 + 168), v8, v9)
     && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v13 + 240), v11, v12)
     && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v16 + 312), v14, v15)
     && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v19 + 384), v17, v18);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl)
    && !v20 )
  {
    LampArrayTelemetry::GetInstance();
    v21 = *((_WORD *)a2 + 2);
    v22 = *((_WORD *)a2 + 1);
    v23 = *(_WORD *)a2;
    std::string::string(
      v26,
      "LampArrayAttributesReport: One or more of Lamp count, bounding box width/height/depth, LampArrayKind, or update in"
      "terval are missing or invalid");
    LampArrayTelemetry::LogLampArrayHidReportFailure(v24, v26, 2147942487LL, a1, v23, v22, v21);
    std::string::~string(v26);
  }
  return v20;
}
