/*
 * XREFs of ?LogTelemetry@CSpatialCPEndpointErrorEventValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x14009C370
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x14009AE44 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$03@@U3@U3@@.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@554@Z @ 0x14009AEF8 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal_ea_14009AEF8.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::CSpatialCPEndpointErrorEventValues::LogTelemetry(
        CSpatialCrossProcessEndpointTraceLogger::CSpatialCPEndpointErrorEventValues *this)
{
  ULONGLONG TickCount64; // rbx
  __int64 v3; // r9
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+60h] [rbp-20h] BYREF
  struct _FILETIME v10; // [rsp+68h] [rbp-18h] BYREF
  __int64 v11; // [rsp+70h] [rbp-10h] BYREF
  __int64 v12; // [rsp+78h] [rbp-8h] BYREF
  struct _FILETIME v13; // [rsp+A0h] [rbp+20h] BYREF
  struct _FILETIME v14; // [rsp+A8h] [rbp+28h] BYREF
  int v15; // [rsp+B0h] [rbp+30h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+B8h] [rbp+38h] BYREF

  if ( *((_QWORD *)this + 1) && *((_QWORD *)this + 2) && *((_QWORD *)this + 3) )
  {
    SystemTimeAsFileTime = 0LL;
    TickCount64 = GetTickCount64();
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v4 = (__int64 *)*((_QWORD *)this + 3);
    v14 = SystemTimeAsFileTime;
    v13 = SystemTimeAsFileTime;
    v5 = *v4;
    v13 = (struct _FILETIME)(10000 * (**((_QWORD **)this + 2) - TickCount64) + *(_QWORD *)&SystemTimeAsFileTime);
    v6 = 10000 * (v5 - TickCount64);
    v14 = (struct _FILETIME)(v6 + *(_QWORD *)&SystemTimeAsFileTime);
    v7 = (__int64 *)*((_QWORD *)this + 4);
    v9 = v6 + *(_QWORD *)&SystemTimeAsFileTime;
    v10 = v13;
    v8 = *v7;
    if ( **((_BYTE **)this + 1) )
    {
      if ( *(_DWORD *)v8 > 3u
        && (*(_QWORD *)(v8 + 16) & 0x200000000000LL) != 0
        && (*(_QWORD *)(v8 + 24) & 0x200000000000LL) == *(_QWORD *)(v8 + 24) )
      {
        v13.dwLowDateTime = *((_DWORD *)this + 14);
        v14.dwLowDateTime = *((_DWORD *)this + 13);
        v15 = *((_DWORD *)this + 12);
        v11 = *((_QWORD *)this + 5);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v8,
          byte_1400B43F6,
          v6,
          v3,
          &v11,
          (__int64)&v10,
          (__int64)&v9,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v13);
      }
    }
    else if ( *(_DWORD *)v8 > 3u
           && (*(_QWORD *)(v8 + 16) & 0x400000000000LL) != 0
           && (*(_QWORD *)(v8 + 24) & 0x400000000000LL) == *(_QWORD *)(v8 + 24) )
    {
      v13.dwLowDateTime = *((_DWORD *)this + 14);
      v14.dwLowDateTime = *((_DWORD *)this + 13);
      v15 = *((_DWORD *)this + 12);
      v12 = *((_QWORD *)this + 5);
      v11 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v8,
        byte_1400B4493,
        v6,
        v3,
        &v12,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v11);
    }
  }
}
