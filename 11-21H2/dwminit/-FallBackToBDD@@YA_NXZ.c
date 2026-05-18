/*
 * XREFs of ?FallBackToBDD@@YA_NXZ @ 0x180004898
 * Callers:
 *     ?ShouldRestartSession@@YA_NU_FILETIME@@@Z @ 0x180005E3C (-ShouldRestartSession@@YA_NU_FILETIME@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@54@Z @ 0x18000114C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U3@U2@@-$_.c)
 *     ?ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ @ 0x180005C7C (-ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ.c)
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x180006060 (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18000E180 (_guard_xfg_dispatch_icall_nop.c)
 */

bool FallBackToBDD(void)
{
  int v0; // ebx
  HMODULE LibraryW; // rax
  HMODULE v2; // rdi
  FARPROC ProcAddress; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v9; // [rsp+50h] [rbp-30h] BYREF
  _DWORD v10[4]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+70h] [rbp-10h]
  int v13; // [rsp+74h] [rbp-Ch]
  int v14; // [rsp+A0h] [rbp+20h] BYREF
  int v15; // [rsp+A8h] [rbp+28h] BYREF
  GUID *v16; // [rsp+B0h] [rbp+30h] BYREF
  GUID *v17; // [rsp+B8h] [rbp+38h] BYREF

  v0 = -1073741823;
  LibraryW = LoadLibraryW(L"gdi32.dll");
  v2 = LibraryW;
  if ( LibraryW )
  {
    ProcAddress = GetProcAddress(LibraryW, "D3DKMTEscape");
    if ( ProcAddress )
    {
      v10[3] = 0;
      v13 = 0;
      v10[0] = 0;
      v10[1] = 0;
      v11 = 0LL;
      v12 = 0;
      v10[2] = 1029;
      v0 = ((__int64 (__fastcall *)(_DWORD *))ProcAddress)(v10);
      if ( v0 >= 0 )
      {
        LODWORD(qword_180015B64) = qword_180015B64 + 1;
        v6 = (unsigned int)(HIDWORD(qword_180015B6C) + 1);
        HIDWORD(qword_180015B6C) = v6;
        if ( (int)v6 > 10 )
        {
          _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues((_unnamed_type_gDwmInitTelemetryAggregator_ *)v6);
          HIDWORD(qword_180015B6C) = 0;
        }
        if ( (unsigned int)dword_180015000 > 5
          && (qword_180015010 & 0x400000000000LL) != 0
          && (qword_180015018 & 0x400000000000LL) == qword_180015018 )
        {
          v15 = v0;
          v16 = &gDwmInitTargetAppSessionGuid;
          v14 = gDwmNumRetriesSoFar;
          v17 = &gDwmInitTelemetryActivityId;
          v9 = 0x1000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
            v6,
            (int)&unk_180011109,
            v4,
            v5,
            (__int64)&v9,
            (__int64 *)&v17,
            (__int64)&v15,
            (__int64)&v14,
            (__int64 *)&v16);
        }
        v7 = (unsigned int)v0;
        LODWORD(v7) = v0 | 0x10000000;
        TraceLoggingWriteEtw(1LL, v7, (unsigned int)gDwmNumRetriesSoFar);
      }
    }
    FreeLibrary(v2);
  }
  return v0 >= 0;
}
