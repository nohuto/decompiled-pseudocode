/*
 * XREFs of ?IsParserValid@HidLampAttributesResponseReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x180065B08
 * Callers:
 *     ?TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x180065CC0 (-TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBGAEBUHardwareAttributes@@PE.c)
 * Callees:
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@JPEBGGGG@Z @ 0x180064620 (-LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry@@@details@wil@@QEAA_NXZ @ 0x180064BF0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry@@.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800D537C (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800FD968 (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800FF0CC (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x180105400 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

char __fastcall HidLampAttributesResponseReportParser::IsParserValid(
        const unsigned __int16 *a1,
        const struct HardwareAttributes *a2,
        const struct HidLampAttributesResponseReportParser *a3)
{
  __int16 v5; // bx
  __int16 v6; // di
  __int16 v7; // si
  __int64 v8; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  char v28; // bp
  __int16 v29; // bx
  __int16 v30; // di
  __int16 v31; // si
  __int64 v32; // rcx
  unsigned __int16 v33[16]; // [rsp+40h] [rbp-48h] BYREF

  if ( *((_WORD *)a3 + 444) || *((_BYTE *)a3 + 890) )
  {
    if ( *((_BYTE *)a3 + 17) != 2
      || !HidChannelValueInfo::IsValid(
            (const struct HidLampAttributesResponseReportParser *)((char *)a3 + 24),
            (__int64)a2,
            0x7FFFFFFFLL)
      || !HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v12 + 96), v10, v11)
      || !HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v15 + 168), v13, v14)
      || !HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v18 + 240), v16, v17)
      || !HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v21 + 312), v19, v20)
      || !HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v24 + 384), v22, v23)
      || (v28 = 1, !HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v27 + 456), v25, v26)) )
    {
      v28 = 0;
    }
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl)
      && !v28 )
    {
      LampArrayTelemetry::GetInstance();
      v29 = *((_WORD *)a2 + 2);
      v30 = *((_WORD *)a2 + 1);
      v31 = *(_WORD *)a2;
      std::string::string(
        v33,
        "LampAttributesResponseReport: LampId, Position X/Y/Z, UpdateLatency, purposes, and IsProgrammable are required");
      LampArrayTelemetry::LogLampArrayHidReportFailure(v32, v33, 2147942487LL, a1, v31, v30, v29);
      std::string::~string(v33);
    }
    return v28;
  }
  else
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl) )
    {
      LampArrayTelemetry::GetInstance();
      v5 = *((_WORD *)a2 + 2);
      v6 = *((_WORD *)a2 + 1);
      v7 = *(_WORD *)a2;
      std::string::string(
        v33,
        "LampAttributesResponseReport: must have at least one active color channel (besides gain) with logical max of 255 or less");
      LampArrayTelemetry::LogLampArrayHidReportFailure(v8, v33, 2147942487LL, a1, v7, v6, v5);
      std::string::~string(v33);
    }
    return 0;
  }
}
