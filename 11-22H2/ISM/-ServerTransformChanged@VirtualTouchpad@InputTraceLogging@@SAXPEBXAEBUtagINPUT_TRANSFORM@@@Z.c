/*
 * XREFs of ?ServerTransformChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBXAEBUtagINPUT_TRANSFORM@@@Z @ 0x180153E98
 * Callers:
 *     ?OnInputSiteTransformChanged@VirtualTouchpadControllerProxy@@MEAAJAEBUtagINPUT_TRANSFORM@@@Z @ 0x180152DE0 (-OnInputSiteTransformChanged@VirtualTouchpadControllerProxy@@MEAAJAEBUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180020370 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444444444444444@Z @ 0x180151B20 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@_ea_180151B20.c)
 */

void __fastcall InputTraceLogging::VirtualTouchpad::ServerTransformChanged(
        __int64 a1,
        const struct tagINPUT_TRANSFORM *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // [rsp+B0h] [rbp+17h] BYREF
  int v8; // [rsp+B4h] [rbp+1Bh] BYREF
  int v9; // [rsp+B8h] [rbp+1Fh] BYREF
  int v10; // [rsp+BCh] [rbp+23h] BYREF
  int v11; // [rsp+C0h] [rbp+27h] BYREF
  int v12; // [rsp+C4h] [rbp+2Bh] BYREF
  int v13; // [rsp+C8h] [rbp+2Fh] BYREF
  int v14; // [rsp+CCh] [rbp+33h] BYREF
  int v15; // [rsp+D0h] [rbp+37h] BYREF
  int v16; // [rsp+D4h] [rbp+3Bh] BYREF
  int v17; // [rsp+D8h] [rbp+3Fh] BYREF
  int v18; // [rsp+DCh] [rbp+43h] BYREF
  int v19; // [rsp+E0h] [rbp+47h] BYREF
  int v20; // [rsp+E4h] [rbp+4Bh] BYREF
  __int64 v21; // [rsp+E8h] [rbp+4Fh] BYREF
  int v22; // [rsp+110h] [rbp+77h] BYREF
  int v23; // [rsp+118h] [rbp+7Fh] BYREF

  v4 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     a1,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v4 > 4u
    && (*(_DWORD *)(v4 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v4 + 24) & 0x200LL) == *(_QWORD *)(v4 + 24) )
  {
    v22 = *((_DWORD *)a2 + 15);
    v23 = *((_DWORD *)a2 + 14);
    v7 = *((_DWORD *)a2 + 13);
    v8 = *((_DWORD *)a2 + 12);
    v9 = *((_DWORD *)a2 + 11);
    v10 = *((_DWORD *)a2 + 10);
    v11 = *((_DWORD *)a2 + 9);
    v12 = *((_DWORD *)a2 + 8);
    v13 = *((_DWORD *)a2 + 7);
    v14 = *((_DWORD *)a2 + 6);
    v15 = *((_DWORD *)a2 + 5);
    v16 = *((_DWORD *)a2 + 4);
    v17 = *((_DWORD *)a2 + 3);
    v18 = *((_DWORD *)a2 + 2);
    v19 = *((_DWORD *)a2 + 1);
    v20 = *(_DWORD *)a2;
    v21 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v4,
      byte_180234DA8,
      v5,
      v6,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v23,
      (__int64)&v22);
  }
}
