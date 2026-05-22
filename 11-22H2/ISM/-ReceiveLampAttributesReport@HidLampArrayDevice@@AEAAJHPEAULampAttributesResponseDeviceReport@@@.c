/*
 * XREFs of ?ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJHPEAULampAttributesResponseDeviceReport@@@Z @ 0x180064998
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1801000B4 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x18001B9A0 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@JPEBGGGG@Z @ 0x180064620 (-LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry@@@details@wil@@QEAA_NXZ @ 0x180064BF0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry@@.c)
 *     ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@H@Z @ 0x180064C2C (-to_string@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@H@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@0@Z @ 0x1800D4488 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800D537C (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800FD968 (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800FF0CC (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?CreateAndInitializeInputBuffer@HidLampAttributesResponseReportParser@@QEAAJAEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x180104478 (-CreateAndInitializeInputBuffer@HidLampAttributesResponseReportParser@@QEAAJAEAV-$unique_ptr@$$B.c)
 *     ?ParseInputBufferForReport@HidLampAttributesResponseReportParser@@QEAAJPEBEIPEAULampAttributesResponseDeviceReport@@@Z @ 0x180104528 (-ParseInputBufferForReport@HidLampAttributesResponseReportParser@@QEAAJPEBEIPEAULampAttributesRe.c)
 */

__int64 __fastcall HidLampArrayDevice::ReceiveLampAttributesReport(
        HidLampArrayDevice *this,
        unsigned int a2,
        struct LampAttributesResponseDeviceReport *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int16 v11; // bx
  __int16 v12; // si
  __int16 v13; // r14
  signed int LastError; // eax
  __int64 v15; // rcx
  signed int v16; // eax
  ULONG ReportBufferLength; // [rsp+40h] [rbp-49h] BYREF
  PVOID ReportBuffer; // [rsp+48h] [rbp-41h] BYREF
  __int128 v20; // [rsp+50h] [rbp-39h] BYREF
  __int128 v21; // [rsp+60h] [rbp-29h]
  int v22; // [rsp+70h] [rbp-19h]
  unsigned __int16 v23[16]; // [rsp+78h] [rbp-11h] BYREF
  _BYTE v24[32]; // [rsp+98h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  ReportBufferLength = 0;
  ReportBuffer = 0LL;
  v6 = HidLampAttributesResponseReportParser::CreateAndInitializeInputBuffer(
         *((_QWORD *)this + 75),
         &ReportBuffer,
         &ReportBufferLength);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 351LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_15;
  }
  if ( HidD_GetFeature(*(HANDLE *)(*((_QWORD *)this + 2) + 40LL), ReportBuffer, ReportBufferLength) )
  {
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0;
    v6 = HidLampAttributesResponseReportParser::ParseInputBufferForReport(
           *((HidLampAttributesResponseReportParser **)this + 75),
           (const unsigned __int8 *)ReportBuffer,
           ReportBufferLength,
           (struct LampAttributesResponseDeviceReport *)&v20);
    v7 = v6;
    if ( v6 >= 0 )
    {
      *(_OWORD *)a3 = v20;
      *((_OWORD *)a3 + 1) = v21;
      *((_DWORD *)a3 + 8) = v22;
      v7 = 0;
      goto LABEL_15;
    }
    v8 = 371LL;
    goto LABEL_13;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl) )
  {
    v9 = std::to_string(&v20, a2);
    v10 = std::string::string(v24, "Obtaining LampAttributesResponseReport request failed for lamp ID ");
    std::operator+<char>(v23, v10, v9);
    std::string::~string(v24);
    std::string::~string(&v20);
    LampArrayTelemetry::GetInstance();
    v11 = *((_WORD *)this + 271);
    v12 = *((_WORD *)this + 270);
    v13 = *((_WORD *)this + 269);
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    LampArrayTelemetry::LogLampArrayHidReportFailure(
      v15,
      v23,
      (unsigned int)LastError,
      (const WCHAR *)this + 12,
      v13,
      v12,
      v11);
    std::string::~string(v23);
  }
  v16 = GetLastError();
  if ( v16 > 0 )
    v16 = (unsigned __int16)v16 | 0x80070000;
  v7 = v16;
LABEL_15:
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&ReportBuffer);
  return v7;
}
