/*
 * XREFs of ?SendLampArrayControlReport@HidLampArrayDevice@@AEAAJPEBULampArrayControlDeviceReport@@@Z @ 0x1800F2078
 * Callers:
 *     ?SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z @ 0x1800F2730 (-SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800E990C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800EEB4C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?CreateAndInitializeOutputBuffer@HidLampArrayControlReportParser@@QEAAJPEBULampArrayControlDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800F65F0 (-CreateAndInitializeOutputBuffer@HidLampArrayControlReportParser@@QEAAJPEBULampArrayControlDevic.c)
 */

__int64 __fastcall HidLampArrayDevice::SendLampArrayControlReport(
        HidLampArrayDevice *this,
        const struct LampArrayControlDeviceReport *a2,
        __int64 a3,
        __int64 a4)
{
  const WCHAR *v4; // rdi
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  PVOID v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  signed int LastError; // eax
  unsigned int v16; // edi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  const WCHAR *ReportBufferLength; // [rsp+60h] [rbp+20h] BYREF
  PVOID ReportBuffer; // [rsp+70h] [rbp+30h] BYREF
  const char *v20; // [rsp+78h] [rbp+38h] BYREF

  v4 = (const WCHAR *)((char *)this + 24);
  if ( (unsigned int)dword_180266498 > 5 )
  {
    LOBYTE(ReportBufferLength) = *(_BYTE *)a2;
    v20 = "Started";
    ReportBuffer = (char *)this + 24;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
      (__int64)this,
      byte_18022488A,
      a3,
      a4,
      (const unsigned __int16 **)&v20,
      (const WCHAR **)&ReportBuffer,
      (__int64)&ReportBufferLength);
  }
  v7 = *((_QWORD *)this + 73);
  LODWORD(ReportBufferLength) = 0;
  ReportBuffer = 0LL;
  v8 = HidLampArrayControlReportParser::CreateAndInitializeOutputBuffer(v7, a2, &ReportBuffer, &ReportBufferLength);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v11 = ReportBuffer;
    if ( HidD_SetFeature(*(HANDLE *)(*((_QWORD *)this + 2) + 40LL), ReportBuffer, (ULONG)ReportBufferLength) )
    {
      if ( (unsigned int)dword_180266498 > 5 )
      {
        ReportBufferLength = v4;
        ReportBuffer = "Completed successfully";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v12,
          byte_1802248F0,
          v13,
          v14,
          (const unsigned __int16 **)&ReportBuffer,
          &ReportBufferLength);
      }
      if ( v11 )
        operator delete[](v11);
      return 0LL;
    }
    else
    {
      LastError = GetLastError();
      v16 = LastError;
      if ( LastError > 0 )
        v16 = (unsigned __int16)LastError | 0x80070000;
      if ( v11 )
        operator delete[](v11);
      return v16;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1EE,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v8);
    if ( ReportBuffer )
      operator delete[](ReportBuffer);
    return v9;
  }
}
