/*
 * XREFs of ?ServerSizeChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBXAEBUVirtualTouchpadSize@Input@Internal@UI@Windows@@AEBUtagRECT@@@Z @ 0x18012B3A8
 * Callers:
 *     ?OnSizeChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x18012A6C0 (-OnSizeChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018310 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x180129038 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplat.c)
 */

void __fastcall InputTraceLogging::VirtualTouchpad::ServerSizeChanged(
        __int64 a1,
        const struct Windows::UI::Internal::Input::VirtualTouchpadSize *a2,
        const struct tagRECT *a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  LONG right; // [rsp+68h] [rbp+27h] BYREF
  LONG top; // [rsp+6Ch] [rbp+2Bh] BYREF
  LONG left; // [rsp+70h] [rbp+2Fh] BYREF
  __int64 v12; // [rsp+78h] [rbp+37h] BYREF
  __int64 v13; // [rsp+80h] [rbp+3Fh] BYREF
  __int64 v14; // [rsp+88h] [rbp+47h] BYREF
  __int64 v15; // [rsp+90h] [rbp+4Fh] BYREF
  LONG bottom; // [rsp+C0h] [rbp+7Fh] BYREF

  v6 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     a1,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v6 > 4u
    && (*(_DWORD *)(v6 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v6 + 24) & 0x200LL) == *(_QWORD *)(v6 + 24) )
  {
    bottom = a3->bottom;
    right = a3->right;
    top = a3->top;
    left = a3->left;
    v12 = *((_QWORD *)a2 + 2);
    v13 = *((_QWORD *)a2 + 1);
    v14 = *(_QWORD *)a2;
    v15 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v6,
      byte_1802040E3,
      v7,
      v8,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&left,
      (__int64)&top,
      (__int64)&right,
      (__int64)&bottom);
  }
}
