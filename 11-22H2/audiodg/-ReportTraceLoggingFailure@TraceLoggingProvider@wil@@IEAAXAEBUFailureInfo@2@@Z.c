/*
 * XREFs of ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x140051F04
 * Callers:
 *     ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x140051530 (-OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x14004FE34 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_14004FE34.c)
 */

void __fastcall wil::TraceLoggingProvider::ReportTraceLoggingFailure(
        wil::TraceLoggingProvider *this,
        const struct wil::FailureInfo *a2,
        __int64 a3,
        __int64 a4)
{
  _DWORD *v4; // rcx
  int v5; // [rsp+B8h] [rbp-80h] BYREF
  int v6; // [rsp+BCh] [rbp-7Ch] BYREF
  int v7; // [rsp+C0h] [rbp-78h] BYREF
  int v8; // [rsp+C4h] [rbp-74h] BYREF
  int v9; // [rsp+C8h] [rbp-70h] BYREF
  const unsigned __int16 *v10; // [rsp+D0h] [rbp-68h] BYREF
  void *v11; // [rsp+D8h] [rbp-60h] BYREF
  const unsigned __int16 *v12; // [rsp+E0h] [rbp-58h] BYREF
  void *v13; // [rsp+E8h] [rbp-50h] BYREF
  const unsigned __int16 *v14; // [rsp+F0h] [rbp-48h] BYREF
  const unsigned __int16 *v15; // [rsp+F8h] [rbp-40h] BYREF
  void *v16; // [rsp+100h] [rbp-38h] BYREF
  const unsigned __int16 *v17; // [rsp+108h] [rbp-30h] BYREF
  const unsigned __int16 *v18; // [rsp+110h] [rbp-28h] BYREF
  __int64 v19; // [rsp+118h] [rbp-20h] BYREF
  int v20; // [rsp+138h] [rbp+0h] BYREF
  int v21; // [rsp+148h] [rbp+10h] BYREF
  int v22; // [rsp+150h] [rbp+18h] BYREF

  v4 = (_DWORD *)*((_QWORD *)this + 1);
  if ( *v4 > 2u )
  {
    v10 = (const unsigned __int16 *)*((_QWORD *)a2 + 6);
    v20 = *((_DWORD *)a2 + 17);
    v21 = *((_DWORD *)a2 + 4);
    v11 = (void *)*((_QWORD *)a2 + 15);
    v12 = (const unsigned __int16 *)*((_QWORD *)a2 + 14);
    v22 = *((_DWORD *)a2 + 26);
    v13 = (void *)*((_QWORD *)a2 + 12);
    v14 = (const unsigned __int16 *)*((_QWORD *)a2 + 11);
    v5 = *((_DWORD *)a2 + 20);
    v15 = (const unsigned __int16 *)*((_QWORD *)a2 + 9);
    v6 = *((_DWORD *)a2 + 8);
    v16 = (void *)*((_QWORD *)a2 + 3);
    v7 = *(_DWORD *)a2;
    v17 = (const unsigned __int16 *)*((_QWORD *)a2 + 16);
    v8 = *((_DWORD *)a2 + 16);
    v18 = (const unsigned __int16 *)*((_QWORD *)a2 + 7);
    v9 = *((_DWORD *)a2 + 2);
    v19 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (__int64)v4,
      byte_1400B2D10,
      a3,
      a4,
      (__int64)&v19,
      (__int64)&v9,
      &v18,
      (__int64)&v8,
      &v17,
      (__int64)&v7,
      &v16,
      (__int64)&v6,
      &v15,
      (__int64)&v5,
      &v14,
      &v13,
      (__int64)&v22,
      &v12,
      &v11,
      (__int64)&v21,
      (__int64)&v20,
      &v10);
  }
}
