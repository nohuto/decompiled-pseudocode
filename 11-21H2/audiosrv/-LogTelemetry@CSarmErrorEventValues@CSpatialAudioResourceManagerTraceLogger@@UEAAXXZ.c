/*
 * XREFs of ?LogTelemetry@CSarmErrorEventValues@CSpatialAudioResourceManagerTraceLogger@@UEAAXXZ @ 0x18012A290
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x180129C30 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

void __fastcall CSpatialAudioResourceManagerTraceLogger::CSarmErrorEventValues::LogTelemetry(
        CSpatialAudioResourceManagerTraceLogger::CSarmErrorEventValues *this)
{
  ULONGLONG TickCount64; // rbx
  __int64 v3; // r9
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 *v6; // r8
  __int64 v7; // r8
  bool v8; // zf
  unsigned __int8 *v9; // rdx
  struct _FILETIME v10; // [rsp+50h] [rbp-10h] BYREF
  struct _FILETIME v11; // [rsp+58h] [rbp-8h] BYREF
  struct _FILETIME v12; // [rsp+80h] [rbp+20h] BYREF
  struct _FILETIME v13; // [rsp+88h] [rbp+28h] BYREF
  int v14; // [rsp+90h] [rbp+30h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+98h] [rbp+38h] BYREF

  if ( *((_QWORD *)this + 1) && *((_QWORD *)this + 2) && *((_QWORD *)this + 3) )
  {
    SystemTimeAsFileTime = 0LL;
    TickCount64 = GetTickCount64();
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v4 = (__int64 *)*((_QWORD *)this + 3);
    v13 = SystemTimeAsFileTime;
    v12 = SystemTimeAsFileTime;
    v5 = *v4;
    v12 = (struct _FILETIME)(10000 * (**((_QWORD **)this + 2) - TickCount64) + *(_QWORD *)&SystemTimeAsFileTime);
    v6 = (__int64 *)*((_QWORD *)this + 4);
    v13 = (struct _FILETIME)(10000 * (v5 - TickCount64) + *(_QWORD *)&SystemTimeAsFileTime);
    v7 = *v6;
    v8 = **((_BYTE **)this + 1) == 0;
    v11 = v12;
    v10 = v13;
    if ( v8 )
    {
      if ( *(_DWORD *)v7 > 3u
        && (*(_QWORD *)(v7 + 16) & 0x400000000000LL) != 0
        && (*(_QWORD *)(v7 + 24) & 0x400000000000LL) == *(_QWORD *)(v7 + 24) )
      {
        v9 = (unsigned __int8 *)&unk_18018BA8A;
        goto LABEL_13;
      }
    }
    else if ( *(_DWORD *)v7 > 3u
           && (*(_QWORD *)(v7 + 16) & 0x400000000000LL) != 0
           && (*(_QWORD *)(v7 + 24) & 0x400000000000LL) == *(_QWORD *)(v7 + 24) )
    {
      v9 = (unsigned __int8 *)&unk_18018B9F5;
LABEL_13:
      v12.dwLowDateTime = *((_DWORD *)this + 14);
      v13.dwLowDateTime = *((_DWORD *)this + 13);
      v14 = *((_DWORD *)this + 12);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v7,
        v9,
        v7,
        v3,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12);
    }
  }
}
