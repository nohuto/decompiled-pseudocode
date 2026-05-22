/*
 * XREFs of ?ResizeCancelled@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z @ 0x1801650C0
 * Callers:
 *     ?StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x180165D1C (-StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x18003F300 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800F9C60 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333333@Z @ 0x180162C40 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_.c)
 */

void __fastcall InputETW::Resize::ResizeCancelled(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct tagPOINT *a4,
        struct tagPOINT *a5)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 y; // [rsp+60h] [rbp+Fh] BYREF
  __int64 x; // [rsp+68h] [rbp+17h] BYREF
  __int64 v12; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v13; // [rsp+78h] [rbp+27h] BYREF
  __int64 v14; // [rsp+80h] [rbp+2Fh] BYREF
  __int64 v15; // [rsp+88h] [rbp+37h] BYREF
  __int64 v16; // [rsp+90h] [rbp+3Fh] BYREF

  v6 = (unsigned int)a1;
  if ( InputETW::IsEnabled(a1) )
  {
    v8 = wil::details::static_lazy<InputETW>::get(v7, _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v8 > 5u && (*(_BYTE *)(v8 + 16) & 1) != 0 && (*(_QWORD *)(v8 + 24) & 1LL) == *(_QWORD *)(v8 + 24) )
    {
      v14 = 0LL;
      v15 = 0LL;
      v16 = v6;
      y = a5->y;
      x = a5->x;
      v12 = a4->y;
      v13 = a4->x;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v8,
        byte_18022726A,
        v8,
        v9,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&x,
        (__int64)&y);
    }
  }
}
