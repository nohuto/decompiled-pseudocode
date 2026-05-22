/*
 * XREFs of ?SendLampAttributesRequest@HidLampArrayDevice@@AEAAJH@Z @ 0x180101740
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1801000B4 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x18001B9A0 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgKeywordOn @ 0x180040AFC (_tlgKeywordOn.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DL55030749@@@details@wil@@QEAA_NXZ @ 0x1800631FC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DL55030749@@@details@wil@@QEAA_NX.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800E39D0 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?CreateAndInitializeOutputBuffer@HidLampAttributesRequestReportParser@@QEAAJPEBULampAttributesRequestDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x180104048 (-CreateAndInitializeOutputBuffer@HidLampAttributesRequestReportParser@@QEAAJPEBULampAttributesRe.c)
 */

__int64 __fastcall HidLampArrayDevice::SendLampAttributesRequest(HidLampArrayDevice *this, int a2)
{
  int v3; // eax
  signed int LastError; // ebx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  signed int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v11; // [rsp+50h] [rbp+20h] BYREF
  ULONG ReportBufferLength; // [rsp+58h] [rbp+28h] BYREF
  PVOID ReportBuffer; // [rsp+60h] [rbp+30h] BYREF

  LODWORD(v11) = a2;
  ReportBufferLength = 0;
  ReportBuffer = 0LL;
  v3 = HidLampAttributesRequestReportParser::CreateAndInitializeOutputBuffer(
         *((_QWORD *)this + 74),
         &v11,
         &ReportBuffer,
         &ReportBufferLength);
  LastError = v3;
  if ( v3 >= 0 )
  {
    if ( HidD_SetFeature(*(HANDLE *)(*((_QWORD *)this + 2) + 40LL), ReportBuffer, ReportBufferLength) )
    {
      LastError = 0;
    }
    else if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_DL55030749>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_DL55030749>::GetImpl'::`2'::impl) )
    {
      LastError = GetLastError();
      if ( (unsigned int)dword_180275498 > 5 && tlgKeywordOn((__int64)&dword_180275498, 0LL) )
      {
        ReportBufferLength = LastError;
        v11 = (__int64)"Failed";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          v5,
          byte_1802337F8,
          v6,
          v7,
          (const unsigned __int16 **)&v11,
          (__int64)&ReportBufferLength);
      }
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
    }
    else
    {
      v8 = GetLastError();
      if ( v8 > 0 )
        v8 = (unsigned __int16)v8 | 0x80070000;
      LastError = v8;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x145,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v3);
  }
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&ReportBuffer);
  return (unsigned int)LastError;
}
