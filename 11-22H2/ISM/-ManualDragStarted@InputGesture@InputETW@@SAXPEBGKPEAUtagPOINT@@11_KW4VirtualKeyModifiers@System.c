/*
 * XREFs of ?ManualDragStarted@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2I22@Z @ 0x18016D0C0
 * Callers:
 *     ?StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z @ 0x18016EC50 (-StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180040A2C (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1801086E0 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@444444444444@Z @ 0x1801642E8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@-$_tlgWr.c)
 */

char __fastcall InputETW::InputGesture::ManualDragStarted(
        __int64 a1,
        unsigned int a2,
        int *a3,
        int *a4,
        int *a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v12; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // [rsp+98h] [rbp-51h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-49h] BYREF
  __int64 v22; // [rsp+A8h] [rbp-41h] BYREF
  __int64 v23; // [rsp+B0h] [rbp-39h] BYREF
  __int64 v24; // [rsp+B8h] [rbp-31h] BYREF
  __int64 v25; // [rsp+C0h] [rbp-29h] BYREF
  __int64 v26; // [rsp+C8h] [rbp-21h] BYREF
  __int64 v27; // [rsp+D0h] [rbp-19h] BYREF
  __int64 v28; // [rsp+D8h] [rbp-11h] BYREF
  __int64 v29; // [rsp+E0h] [rbp-9h] BYREF
  __int64 v30; // [rsp+E8h] [rbp-1h] BYREF
  __int64 v31; // [rsp+F0h] [rbp+7h] BYREF
  __int64 v32; // [rsp+F8h] [rbp+Fh] BYREF

  v12 = a2;
  LOBYTE(v15) = InputETW::IsEnabled(a1);
  if ( (_BYTE)v15 )
  {
    v15 = (__int64)wil::details::static_lazy<InputETW>::get(
                     v16,
                     _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    v18 = *(_QWORD *)(v15 + 8);
    if ( *(_DWORD *)v18 > 5u && (*(_BYTE *)(v18 + 16) & 1) != 0 )
    {
      v15 = *(_QWORD *)(v18 + 24) & 1LL;
      if ( v15 == *(_QWORD *)(v18 + 24) )
      {
        a11 = 0LL;
        v20 = a10;
        v21 = a9;
        v22 = a8;
        v23 = a7;
        v24 = a6;
        v25 = a5[1];
        v26 = *a5;
        v27 = a4[1];
        v28 = *a4;
        v29 = a3[1];
        v30 = *a3;
        v31 = v12;
        v32 = a1;
        LOBYTE(v15) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                        v18,
                        (unsigned __int8 *)dword_180235CCB,
                        v17,
                        v18,
                        (const WCHAR **)&v32,
                        (__int64)&v31,
                        (__int64)&v30,
                        (__int64)&v29,
                        (__int64)&v28,
                        (__int64)&v27,
                        (__int64)&v26,
                        (__int64)&v25,
                        (__int64)&v24,
                        (__int64)&v23,
                        (__int64)&v22,
                        (__int64)&v21,
                        (__int64)&v20,
                        (__int64)&a11);
      }
    }
  }
  return v15;
}
