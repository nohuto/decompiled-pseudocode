/*
 * XREFs of ?LogAsarUsageReporting@CSpatialCrossProcessEndpointTraceLogger@@QEAAXII@Z @ 0x14008FE1C
 * Callers:
 *     ?SetObjectUsageCounts@CSpatialCrossProcessBaseEndpoint@@UEAAJII@Z @ 0x140092FA0 (-SetObjectUsageCounts@CSpatialCrossProcessBaseEndpoint@@UEAAJII@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x14008E9DC (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::LogAsarUsageReporting(
        CSpatialCrossProcessEndpointTraceLogger *this,
        unsigned int a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v7; // r9
  int v8; // [rsp+20h] [rbp-38h]
  int v9; // [rsp+20h] [rbp-38h]
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v12; // [rsp+70h] [rbp+18h] BYREF

  if ( *((_DWORD *)this + 124) != a2 || *((_DWORD *)this + 125) != a3 )
  {
    if ( (unsigned int)dword_1400C00E8 > 5 )
    {
      v11 = a3;
      v10 = (__int64)this + 8;
      v12 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)this,
        byte_1400A785B,
        0LL,
        a4,
        &v10,
        (__int64)&v12,
        (__int64)&v11);
    }
    *((_DWORD *)this + 124) = a2;
    *((_DWORD *)this + 125) = a3;
  }
  LOBYTE(a4) = 1;
  LOBYTE(v8) = 1;
  (*(void (__fastcall **)(char *, _QWORD, _QWORD, __int64, int))(*((_QWORD *)this + 56) + 56LL))(
    (char *)this + 448,
    0LL,
    a2,
    a4,
    v8);
  LOBYTE(v7) = 1;
  LOBYTE(v9) = 1;
  (*(void (__fastcall **)(char *, __int64, _QWORD, __int64, int))(*((_QWORD *)this + 56) + 56LL))(
    (char *)this + 448,
    1LL,
    a3,
    v7,
    v9);
}
