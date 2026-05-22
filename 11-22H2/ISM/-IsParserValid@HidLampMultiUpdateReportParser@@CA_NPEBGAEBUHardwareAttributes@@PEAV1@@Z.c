/*
 * XREFs of ?IsParserValid@HidLampMultiUpdateReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEAV1@@Z @ 0x18006625C
 * Callers:
 *     ?TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x180066630 (-TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParse.c)
 * Callees:
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@JPEBGGGG@Z @ 0x180064620 (-LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry@@@details@wil@@QEAA_NXZ @ 0x180064BF0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry@@.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800D537C (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800FD968 (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800FF0CC (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?IsChannelsValid@HidLampMultiUpdateReportParser@@CA_NAEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@_J1PEAH@Z @ 0x180104D60 (-IsChannelsValid@HidLampMultiUpdateReportParser@@CA_NAEAV-$vector@VHidChannelValueInfo@@V-$alloc.c)
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x180105400 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

char __fastcall HidLampMultiUpdateReportParser::IsParserValid(
        const unsigned __int16 *a1,
        const struct HardwareAttributes *a2,
        struct HidLampMultiUpdateReportParser *a3)
{
  _QWORD *v6; // r13
  __int64 v7; // rdi
  __int64 v8; // r12
  char *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  char v17; // r9
  char v18; // r10
  const char *v19; // rdx
  __int64 v20; // rcx
  char *v21; // rdx
  char v22; // r14
  __int64 v23; // rdx
  __int16 v24; // bx
  __int16 v25; // di
  __int16 v26; // si
  __int64 v27; // rcx
  __int16 v29; // bx
  __int16 v30; // di
  __int16 v31; // si
  __int64 v32; // rcx
  char IsChannelsValid; // [rsp+40h] [rbp-29h]
  char v34; // [rsp+41h] [rbp-28h]
  char v35; // [rsp+42h] [rbp-27h]
  char v36; // [rsp+43h] [rbp-26h]
  __int64 v37; // [rsp+48h] [rbp-21h]
  __int64 v38; // [rsp+50h] [rbp-19h]
  __int64 v39; // [rsp+58h] [rbp-11h]
  unsigned __int16 v40[16]; // [rsp+60h] [rbp-9h] BYREF

  v6 = (_QWORD *)((char *)a3 + 200);
  v37 = *((_QWORD *)a3 + 26) - *((_QWORD *)a3 + 25);
  v7 = *((_QWORD *)a3 + 30) - *((_QWORD *)a3 + 29);
  v8 = *((_QWORD *)a3 + 34) - *((_QWORD *)a3 + 33);
  v9 = (char *)a3 + 296;
  v39 = *((_QWORD *)a3 + 38);
  v38 = *((_QWORD *)a3 + 37);
  IsChannelsValid = HidLampMultiUpdateReportParser::IsChannelsValid(
                      (char *)a3 + 168,
                      a2,
                      0x7FFFFFFFLL,
                      (char *)a3 + 192);
  v34 = HidLampMultiUpdateReportParser::IsChannelsValid(v6, v10, 255LL, (char *)a3 + 224);
  v35 = HidLampMultiUpdateReportParser::IsChannelsValid((char *)a3 + 232, v11, v12, (char *)a3 + 256);
  v36 = HidLampMultiUpdateReportParser::IsChannelsValid((char *)a3 + 264, v13, v14, (char *)a3 + 288);
  v17 = HidLampMultiUpdateReportParser::IsChannelsValid(v9, v15, v16, (char *)a3 + 320);
  v18 = 0;
  if ( !v37 && !v7 && !v8 )
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl) )
    {
      LampArrayTelemetry::GetInstance();
      v19 = "LampMultiUpdateReport: must have at least one active color channel besides gain";
LABEL_42:
      v29 = *((_WORD *)a2 + 2);
      v30 = *((_WORD *)a2 + 1);
      v31 = *(_WORD *)a2;
      std::string::string(v40, v19);
      LampArrayTelemetry::LogLampArrayHidReportFailure(v32, v40, 2147942487LL, a1, v31, v30, v29);
      std::string::~string(v40);
      return 0;
    }
    return 0;
  }
  if ( !IsChannelsValid
    || (v20 = *((unsigned int *)a3 + 14),
        v21 = (char *)a3 + 168,
        0x8E38E38E38E38E39uLL * ((__int64)(*((_QWORD *)a3 + 22) - *((_QWORD *)a3 + 21)) >> 3) != v20) )
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl) )
    {
      LampArrayTelemetry::GetInstance();
      v19 = "LampMultiUpdateReport: number of LampId fields must match lamp count";
      goto LABEL_42;
    }
    return 0;
  }
  v22 = 1;
  if ( v37 )
  {
    if ( !v34 || 0x8E38E38E38E38E39uLL * ((__int64)(v6[1] - *v6) >> 3) != v20 )
    {
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl) )
      {
        LampArrayTelemetry::GetInstance();
        v19 = "LampMultiUpdateReport: Red channels are invalid (max should be 0-255) or missing (number should be equal to lamp count)";
        goto LABEL_42;
      }
      return 0;
    }
    *((_BYTE *)a3 + 324) = 1;
  }
  if ( v7 )
  {
    if ( !v35
      || (v21 = (char *)a3 + 232,
          0x8E38E38E38E38E39uLL * ((__int64)(*((_QWORD *)a3 + 30) - *((_QWORD *)a3 + 29)) >> 3) != v20) )
    {
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl) )
      {
        LampArrayTelemetry::GetInstance();
        v19 = "LampMultiUpdateReport: Green channels are invalid (max should be 0-255) or missing (number should be equal to lamp count)";
        goto LABEL_42;
      }
      return 0;
    }
    *((_BYTE *)a3 + 325) = 1;
  }
  if ( v8 )
  {
    if ( !v36
      || (v21 = (char *)a3 + 264,
          0x8E38E38E38E38E39uLL * ((__int64)(*((_QWORD *)a3 + 34) - *((_QWORD *)a3 + 33)) >> 3) != v20) )
    {
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl) )
      {
        LampArrayTelemetry::GetInstance();
        v19 = "LampMultiUpdateReport: Blue channels are invalid (max should be 0-255) or missing (number should be equal to lamp count)";
        goto LABEL_42;
      }
      return 0;
    }
    *((_BYTE *)a3 + 326) = 1;
  }
  if ( v39 != v38 )
  {
    if ( !v17
      || (v21 = (char *)a3 + 296,
          0x8E38E38E38E38E39uLL * ((__int64)(*((_QWORD *)a3 + 38) - *((_QWORD *)a3 + 37)) >> 3) != v20) )
    {
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl) )
      {
        LampArrayTelemetry::GetInstance();
        v19 = "LampMultiUpdateReport: Gain channels are invalid (max should be 0-255) or missing (number should be equal to lamp count)";
        goto LABEL_42;
      }
      return 0;
    }
    *((_BYTE *)a3 + 327) = 1;
  }
  if ( *((_BYTE *)a3 + 17) != 2
    || !HidChannelValueInfo::IsValid(
          (struct HidLampMultiUpdateReportParser *)((char *)a3 + 24),
          (__int64)v21,
          0x7FFFFFFFLL)
    || !HidChannelValueInfo::IsValid((struct HidLampMultiUpdateReportParser *)((char *)a3 + 96), v23, 0xFFFFFFFFLL) )
  {
    v22 = v18;
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl) )
  {
    if ( !v22 )
    {
      LampArrayTelemetry::GetInstance();
      v24 = *((_WORD *)a2 + 2);
      v25 = *((_WORD *)a2 + 1);
      v26 = *(_WORD *)a2;
      std::string::string(v40, "LampMultiUpdateReport: Lamp count and LampUpdateFlags are required values");
      LampArrayTelemetry::LogLampArrayHidReportFailure(v27, v40, 2147942487LL, a1, v26, v25, v24);
      std::string::~string(v40);
    }
  }
  return v22;
}
