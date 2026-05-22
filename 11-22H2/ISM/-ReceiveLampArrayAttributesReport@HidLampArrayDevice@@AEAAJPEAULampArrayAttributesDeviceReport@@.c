/*
 * XREFs of ?ReceiveLampArrayAttributesReport@HidLampArrayDevice@@AEAAJPEAULampArrayAttributesDeviceReport@@@Z @ 0x18010119C
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1801000B4 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     ?LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@JPEBGGGG@Z @ 0x180064620 (-LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry@@@details@wil@@QEAA_NXZ @ 0x180064BF0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry@@.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800D537C (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800FD968 (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800FF0CC (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?CreateAndInitializeInputBuffer@HidLampArrayAttributesReportParser@@QEAAJAEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x180103DF8 (-CreateAndInitializeInputBuffer@HidLampArrayAttributesReportParser@@QEAAJAEAV-$unique_ptr@$$BY0A.c)
 *     ?ParseInputBufferForReport@HidLampArrayAttributesReportParser@@QEAAJPEBEIPEAULampArrayAttributesDeviceReport@@@Z @ 0x180103EA4 (-ParseInputBufferForReport@HidLampArrayAttributesReportParser@@QEAAJPEBEIPEAULampArrayAttributes.c)
 */

__int64 __fastcall HidLampArrayDevice::ReceiveLampArrayAttributesReport(
        HidLampArrayDevice *this,
        struct LampArrayAttributesDeviceReport *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned __int8 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int16 v11; // r14
  __int16 v12; // r15
  __int16 v13; // r12
  signed int LastError; // eax
  unsigned int v15; // esi
  __int64 v16; // rcx
  signed int v17; // eax
  unsigned int v18; // edi
  int v19; // eax
  ULONG ReportBufferLength; // [rsp+40h] [rbp-40h] BYREF
  PVOID ReportBuffer; // [rsp+48h] [rbp-38h] BYREF
  __int128 v22; // [rsp+50h] [rbp-30h] BYREF
  __int64 v23; // [rsp+60h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  ReportBufferLength = 0;
  ReportBuffer = 0LL;
  v4 = HidLampArrayAttributesReportParser::CreateAndInitializeInputBuffer(
         *((_QWORD *)this + 72),
         &ReportBuffer,
         &ReportBufferLength);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x122,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v4);
    if ( ReportBuffer )
      operator delete[](ReportBuffer);
    return v5;
  }
  v7 = (unsigned __int8 *)ReportBuffer;
  if ( !HidD_GetFeature(*(HANDLE *)(*((_QWORD *)this + 2) + 40LL), ReportBuffer, ReportBufferLength) )
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl) )
    {
      LampArrayTelemetry::GetInstance(v9, v8, v10);
      v11 = *((_WORD *)this + 271);
      v12 = *((_WORD *)this + 270);
      v13 = *((_WORD *)this + 269);
      LastError = GetLastError();
      v15 = LastError;
      if ( LastError > 0 )
        v15 = (unsigned __int16)LastError | 0x80070000;
      std::string::string(&v22, (__int64)"Obtaining LampArrayAttributesReport failed");
      LampArrayTelemetry::LogLampArrayHidReportFailure(
        v16,
        (const unsigned __int16 *)&v22,
        v15,
        (const WCHAR *)this + 12,
        v13,
        v12,
        v11);
      std::string::~string((__int64)&v22);
    }
    v17 = GetLastError();
    v18 = v17;
    if ( v17 > 0 )
      v18 = (unsigned __int16)v17 | 0x80070000;
    goto LABEL_12;
  }
  v22 = 0LL;
  v23 = 0LL;
  v19 = HidLampArrayAttributesReportParser::ParseInputBufferForReport(
          *((HidLampArrayAttributesReportParser **)this + 72),
          v7,
          ReportBufferLength,
          (struct LampArrayAttributesDeviceReport *)&v22);
  v18 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x135,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v19);
LABEL_12:
    if ( v7 )
      operator delete[](v7);
    return v18;
  }
  *(_OWORD *)a2 = v22;
  *((_QWORD *)a2 + 2) = v23;
  if ( v7 )
    operator delete[](v7);
  return 0LL;
}
