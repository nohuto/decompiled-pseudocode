/*
 * XREFs of ?IsParserValid@HidLampRangeUpdateReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x180066930
 * Callers:
 *     ?TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x180066BB8 (-TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParse.c)
 * Callees:
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@JPEBGGGG@Z @ 0x180064620 (-LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry@@@details@wil@@QEAA_NXZ @ 0x180064BF0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry@@.c)
 *     ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@_J@Z @ 0x180064C94 (-to_string@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@_J@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@0@Z @ 0x1800D4488 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x1800D44AC (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_1800D44AC.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800D537C (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800FD968 (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800FF0CC (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x180105400 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

char __fastcall HidLampRangeUpdateReportParser::IsParserValid(
        const unsigned __int16 *a1,
        const struct HardwareAttributes *a2,
        const struct HidLampRangeUpdateReportParser *a3)
{
  __int16 v6; // bx
  __int16 v7; // di
  __int16 v8; // si
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  _QWORD *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  char v21; // r14
  __int16 v22; // bx
  __int16 v23; // di
  __int16 v24; // si
  __int64 v25; // rcx
  unsigned __int16 v26[16]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v27[32]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v28[32]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v29[32]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v30[32]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v31[4]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v32[4]; // [rsp+100h] [rbp+0h] BYREF

  if ( !*((_WORD *)a3 + 264) && !*((_BYTE *)a3 + 530) )
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl) )
    {
      LampArrayTelemetry::GetInstance();
      v6 = *((_WORD *)a2 + 2);
      v7 = *((_WORD *)a2 + 1);
      v8 = *(_WORD *)a2;
      std::string::string(
        v26,
        "LampRangeUpdateReport: must have at least one active color channel (besides gain) with logical max of 255 or less");
      LampArrayTelemetry::LogLampArrayHidReportFailure(v9, v26, 2147942487LL, a1, v8, v7, v6);
LABEL_8:
      std::string::~string(v26);
      return 0;
    }
    return 0;
  }
  if ( *((_QWORD *)a3 + 16) != *((_QWORD *)a3 + 25) )
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl) )
    {
      v10 = std::to_string(v32, *((_QWORD *)a3 + 25));
      v11 = std::to_string(v31, *((_QWORD *)a3 + 16));
      v12 = std::string::string(v30, "LampRangeUpdateReport: logical max for LampIdStart and LampIdEnd must match.");
      v13 = std::operator+<char>(v29, v12, " LampIdStart:");
      v14 = std::operator+<char>(v28, v13, v11);
      v15 = std::operator+<char>(v27, v14, ", LampIdEnd:");
      std::operator+<char>(v26, v15, v10);
      std::string::~string(v27);
      std::string::~string(v28);
      std::string::~string(v29);
      std::string::~string(v30);
      std::string::~string(v31);
      std::string::~string(v32);
      LampArrayTelemetry::GetInstance();
      LampArrayTelemetry::LogLampArrayHidReportFailure(
        v16,
        v26,
        2147942487LL,
        a1,
        *(_WORD *)a2,
        *((_WORD *)a2 + 1),
        *((_WORD *)a2 + 2));
      goto LABEL_8;
    }
    return 0;
  }
  if ( *((_BYTE *)a3 + 17) != 2
    || !HidChannelValueInfo::IsValid(
          (const struct HidLampRangeUpdateReportParser *)((char *)a3 + 96),
          (__int64)a2,
          0x7FFFFFFFLL)
    || !HidChannelValueInfo::IsValid((const struct HidLampRangeUpdateReportParser *)((char *)a3 + 168), v18, v19)
    || (v21 = 1,
        !HidChannelValueInfo::IsValid(
           (const struct HidLampRangeUpdateReportParser *)((char *)a3 + 24),
           v20,
           0xFFFFFFFFLL)) )
  {
    v21 = 0;
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl) )
  {
    if ( !v21 )
    {
      LampArrayTelemetry::GetInstance();
      v22 = *((_WORD *)a2 + 2);
      v23 = *((_WORD *)a2 + 1);
      v24 = *(_WORD *)a2;
      std::string::string(v26, "LampRangeUpdateReport: LampIdStart, LampIdEnd and LampUpdateFlags are required values.");
      LampArrayTelemetry::LogLampArrayHidReportFailure(v25, v26, 2147942487LL, a1, v24, v23, v22);
      std::string::~string(v26);
    }
  }
  return v21;
}
