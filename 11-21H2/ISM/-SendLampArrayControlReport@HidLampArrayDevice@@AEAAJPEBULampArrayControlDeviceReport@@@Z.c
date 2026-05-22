/*
 * XREFs of ?SendLampArrayControlReport@HidLampArrayDevice@@AEAAJPEBULampArrayControlDeviceReport@@@Z @ 0x1800D85FC
 * Callers:
 *     ?SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z @ 0x1800D8CC4 (-SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800CFEC4 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800D5104 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?CreateAndInitializeOutputBuffer@HidLampArrayControlReportParser@@QEAAJPEBULampArrayControlDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800DCA20 (-CreateAndInitializeOutputBuffer@HidLampArrayControlReportParser@@QEAAJPEBULampArrayControlDevic.c)
 */

__int64 __fastcall HidLampArrayDevice::SendLampArrayControlReport(
        HidLampArrayDevice *this,
        const struct LampArrayControlDeviceReport *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int16 *v6; // rsi
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // edi
  PVOID v10; // rcx
  void *v12; // rcx
  PVOID v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  signed int LastError; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned __int16 *ReportBufferLength; // [rsp+60h] [rbp+20h] BYREF
  PVOID ReportBuffer; // [rsp+70h] [rbp+30h] BYREF
  const char *v21; // [rsp+78h] [rbp+38h] BYREF

  v6 = (unsigned __int16 *)((char *)this + 24);
  if ( (unsigned int)dword_180240410 > 5 )
  {
    LOBYTE(ReportBufferLength) = *(_BYTE *)a2;
    ReportBuffer = (char *)this + 24;
    v21 = "Started";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
      (__int64)this,
      byte_180202EDC,
      a3,
      a4,
      (const unsigned __int16 **)&v21,
      (unsigned __int16 **)&ReportBuffer,
      (__int64)&ReportBufferLength);
  }
  v7 = *((_QWORD *)this + 73);
  LODWORD(ReportBufferLength) = 0;
  ReportBuffer = 0LL;
  v8 = HidLampArrayControlReportParser::CreateAndInitializeOutputBuffer(v7, a2, &ReportBuffer, &ReportBufferLength);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1ED,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v8);
    v10 = ReportBuffer;
    if ( !ReportBuffer )
      return v9;
LABEL_5:
    operator delete[](v10);
    return v9;
  }
  v12 = *(void **)(*((_QWORD *)this + 2) + 40LL);
  v13 = ReportBuffer;
  if ( !HidD_SetFeature(v12, ReportBuffer, (ULONG)ReportBufferLength) )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    if ( !v13 )
      return v9;
    v10 = v13;
    goto LABEL_5;
  }
  if ( (unsigned int)dword_180240410 > 5 )
  {
    ReportBufferLength = v6;
    ReportBuffer = "Completed successfully";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
      v14,
      byte_180202E87,
      v15,
      v16,
      (const unsigned __int16 **)&ReportBuffer,
      &ReportBufferLength);
  }
  if ( v13 )
    operator delete[](v13);
  return 0LL;
}
