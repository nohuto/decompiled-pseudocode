/*
 * XREFs of ?SendLampMultiUpdateReport@HidLampArrayDevice@@QEAAJPEBULampMultiUpdateDeviceReport@@@Z @ 0x180101868
 * Callers:
 *     ?SendLampStateUpdate@HidLampMultiUpdateReportBuilder@@QEAAJXZ @ 0x1801039C4 (-SendLampStateUpdate@HidLampMultiUpdateReportBuilder@@QEAAJXZ.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x18001B9A0 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgKeywordOn @ 0x180040AFC (_tlgKeywordOn.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DL55030749@@@details@wil@@QEAA_NXZ @ 0x1800631FC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DL55030749@@@details@wil@@QEAA_NX.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800E39D0 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800F888C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?CreateAndInitializeOutputBuffer@HidLampMultiUpdateReportParser@@QEAAJPEBULampMultiUpdateDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x180104A90 (-CreateAndInitializeOutputBuffer@HidLampMultiUpdateReportParser@@QEAAJPEBULampMultiUpdateDeviceR.c)
 */

__int64 __fastcall HidLampArrayDevice::SendLampMultiUpdateReport(
        HidLampArrayDevice *this,
        const struct LampMultiUpdateDeviceReport *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  signed int LastError; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  signed int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  const WCHAR *ReportBufferLength; // [rsp+50h] [rbp+20h] BYREF
  PVOID ReportBuffer; // [rsp+60h] [rbp+30h] BYREF
  __int64 v19; // [rsp+68h] [rbp+38h] BYREF

  if ( (unsigned int)dword_180275498 > 5 && tlgKeywordOn((__int64)&dword_180275498, 0LL) )
  {
    ReportBufferLength = (const WCHAR *)((char *)this + 24);
    ReportBuffer = "Started";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
      v4,
      byte_18023370A,
      v5,
      v6,
      (const unsigned __int16 **)&ReportBuffer,
      &ReportBufferLength);
  }
  LODWORD(ReportBufferLength) = 0;
  ReportBuffer = 0LL;
  v7 = HidLampMultiUpdateReportParser::CreateAndInitializeOutputBuffer(
         *((_QWORD *)this + 76),
         a2,
         &ReportBuffer,
         &ReportBufferLength);
  LastError = v7;
  if ( v7 >= 0 )
  {
    if ( HidD_SetFeature(*(HANDLE *)(*((_QWORD *)this + 2) + 40LL), ReportBuffer, (ULONG)ReportBufferLength) )
    {
      if ( (unsigned int)dword_180275498 > 5 && tlgKeywordOn((__int64)&dword_180275498, 0LL) )
      {
        ReportBufferLength = (const WCHAR *)((char *)this + 24);
        v19 = (__int64)"Completed successfully";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v12,
          byte_18023370A,
          v13,
          v14,
          (const unsigned __int16 **)&v19,
          &ReportBufferLength);
      }
      LastError = 0;
    }
    else if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_DL55030749>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_DL55030749>::GetImpl'::`2'::impl) )
    {
      LastError = GetLastError();
      if ( (unsigned int)dword_180275498 > 5 && tlgKeywordOn((__int64)&dword_180275498, 0LL) )
      {
        LODWORD(ReportBufferLength) = LastError;
        v19 = (__int64)"Failed";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (__int64)&dword_180275498,
          byte_18023375E,
          v9,
          v10,
          (const unsigned __int16 **)&v19,
          (__int64)&ReportBufferLength);
      }
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
    }
    else
    {
      v11 = GetLastError();
      if ( v11 > 0 )
        v11 = (unsigned __int16)v11 | 0x80070000;
      LastError = v11;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x182,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v7);
  }
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&ReportBuffer);
  return (unsigned int)LastError;
}
