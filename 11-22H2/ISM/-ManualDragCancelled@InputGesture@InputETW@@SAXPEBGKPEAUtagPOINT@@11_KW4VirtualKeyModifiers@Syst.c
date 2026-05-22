/*
 * XREFs of ?ManualDragCancelled@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x18016CF74
 * Callers:
 *     ?CancelManualDrag@DragNDropProcessor@@AEAAXKPEAVManualDragAreaClientProxy@@@Z @ 0x18016B32C (-CancelManualDrag@DragNDropProcessor@@AEAAXKPEAVManualDragAreaClientProxy@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180040A2C (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1801086E0 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@444444444@Z @ 0x18016419C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@-$_tlgWriteTempla.c)
 */

char __fastcall InputETW::InputGesture::ManualDragCancelled(
        __int64 a1,
        unsigned int a2,
        int *a3,
        int *a4,
        int *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // [rsp+88h] [rbp-19h] BYREF
  __int64 v18; // [rsp+90h] [rbp-11h] BYREF
  __int64 v19; // [rsp+98h] [rbp-9h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-1h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v22; // [rsp+B0h] [rbp+Fh] BYREF
  __int64 v23; // [rsp+B8h] [rbp+17h] BYREF
  __int64 v24; // [rsp+C0h] [rbp+1Fh] BYREF
  __int64 v25; // [rsp+C8h] [rbp+27h] BYREF

  v9 = a2;
  LOBYTE(v12) = InputETW::IsEnabled(a1);
  if ( (_BYTE)v12 )
  {
    v12 = (__int64)wil::details::static_lazy<InputETW>::get(
                     v13,
                     _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    v15 = *(_QWORD *)(v12 + 8);
    if ( *(_DWORD *)v15 > 5u && (*(_BYTE *)(v15 + 16) & 1) != 0 )
    {
      v12 = *(_QWORD *)(v15 + 24) & 1LL;
      if ( v12 == *(_QWORD *)(v15 + 24) )
      {
        a6 = 0LL;
        a8 = 0LL;
        v17 = 0LL;
        v18 = a5[1];
        v19 = *a5;
        v20 = a4[1];
        v21 = *a4;
        v22 = a3[1];
        v23 = *a3;
        v24 = v9;
        v25 = a1;
        LOBYTE(v12) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                        v15,
                        (unsigned __int8 *)dword_180235E81,
                        v14,
                        v15,
                        (const WCHAR **)&v25,
                        (__int64)&v24,
                        (__int64)&v23,
                        (__int64)&v22,
                        (__int64)&v21,
                        (__int64)&v20,
                        (__int64)&v19,
                        (__int64)&v18,
                        (__int64)&v17,
                        (__int64)&a8,
                        (__int64)&a6);
      }
    }
  }
  return v12;
}
