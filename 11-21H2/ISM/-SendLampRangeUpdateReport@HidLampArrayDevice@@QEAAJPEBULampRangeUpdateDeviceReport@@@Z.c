/*
 * XREFs of ?SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z @ 0x1800D897C
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800D743C (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?SendLampStateUpdate@HidLampRangeUpdateReportBuilder@@QEAAJXZ @ 0x1800D995C (-SendLampStateUpdate@HidLampRangeUpdateReportBuilder@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800CFEC4 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?CreateAndInitializeOutputBuffer@HidLampRangeUpdateReportParser@@QEAAJPEBULampRangeUpdateDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800DC3C8 (-CreateAndInitializeOutputBuffer@HidLampRangeUpdateReportParser@@QEAAJPEBULampRangeUpdateDeviceR.c)
 */

__int64 __fastcall HidLampArrayDevice::SendLampRangeUpdateReport(
        HidLampArrayDevice *this,
        const struct LampRangeUpdateDeviceReport *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int16 *v6; // rdi
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // esi
  void *v11; // rcx
  PVOID v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  signed int LastError; // eax
  unsigned int v17; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  unsigned __int16 *ReportBufferLength; // [rsp+50h] [rbp+20h] BYREF
  PVOID ReportBuffer; // [rsp+60h] [rbp+30h] BYREF

  if ( (unsigned int)dword_180240410 <= 5 )
  {
    v6 = (unsigned __int16 *)((char *)this + 24);
  }
  else
  {
    ReportBuffer = "Started";
    v6 = (unsigned __int16 *)((char *)this + 24);
    ReportBufferLength = (unsigned __int16 *)((char *)this + 24);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
      (__int64)this,
      byte_180202D46,
      a3,
      a4,
      (const unsigned __int16 **)&ReportBuffer,
      &ReportBufferLength);
  }
  v7 = *((_QWORD *)this + 77);
  LODWORD(ReportBufferLength) = 0;
  ReportBuffer = 0LL;
  v8 = HidLampRangeUpdateReportParser::CreateAndInitializeOutputBuffer(v7, a2, &ReportBuffer, &ReportBufferLength);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v11 = *(void **)(*((_QWORD *)this + 2) + 40LL);
    v12 = ReportBuffer;
    if ( HidD_SetFeature(v11, ReportBuffer, (ULONG)ReportBufferLength) )
    {
      if ( (unsigned int)dword_180240410 > 5 )
      {
        ReportBufferLength = v6;
        ReportBuffer = "Completed successfully";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v13,
          byte_180202D46,
          v14,
          v15,
          (const unsigned __int16 **)&ReportBuffer,
          &ReportBufferLength);
      }
      if ( v12 )
        operator delete[](v12);
      return 0LL;
    }
    else
    {
      LastError = GetLastError();
      v17 = LastError;
      if ( LastError > 0 )
        v17 = (unsigned __int16)LastError | 0x80070000;
      if ( v12 )
        operator delete[](v12);
      return v17;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x140,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v8);
    if ( ReportBuffer )
      operator delete[](ReportBuffer);
    return v9;
  }
}
