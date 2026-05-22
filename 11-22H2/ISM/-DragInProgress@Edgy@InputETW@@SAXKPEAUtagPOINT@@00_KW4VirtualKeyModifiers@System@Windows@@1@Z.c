/*
 * XREFs of ?DragInProgress@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z @ 0x180175DE4
 * Callers:
 *     ?OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x180176E4C (-OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResp.c)
 * Callees:
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180040A2C (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1801086E0 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333333333@Z @ 0x180174568 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 */

char __fastcall InputETW::Edgy::DragInProgress(
        __int64 a1,
        int *a2,
        int *a3,
        int *a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7)
{
  __int64 v8; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v17; // [rsp+78h] [rbp-11h] BYREF
  __int64 v18; // [rsp+80h] [rbp-9h] BYREF
  __int64 v19; // [rsp+88h] [rbp-1h] BYREF
  __int64 v20; // [rsp+90h] [rbp+7h] BYREF
  __int64 v21; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v22; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+1Fh] BYREF
  __int64 v24; // [rsp+B0h] [rbp+27h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+2Fh] BYREF
  __int64 v26; // [rsp+C0h] [rbp+37h] BYREF

  v8 = (unsigned int)a1;
  LOBYTE(v11) = InputETW::IsEnabled(a1);
  if ( (_BYTE)v11 )
  {
    v11 = (__int64)wil::details::static_lazy<InputETW>::get(
                     v12,
                     _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    v15 = *(_QWORD *)(v11 + 8);
    if ( *(_DWORD *)v15 > 5u && (*(_BYTE *)(v15 + 16) & 1) != 0 )
    {
      v11 = *(_QWORD *)(v15 + 24) & 1LL;
      if ( v11 == *(_QWORD *)(v15 + 24) )
      {
        v17 = a7;
        v18 = a6;
        v19 = a5;
        v20 = a4[1];
        v21 = *a4;
        v22 = a3[1];
        v23 = *a3;
        v24 = a2[1];
        v25 = *a2;
        v26 = v8;
        LOBYTE(v11) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                        v15,
                        byte_180236614,
                        v13,
                        v14,
                        (__int64)&v26,
                        (__int64)&v25,
                        (__int64)&v24,
                        (__int64)&v23,
                        (__int64)&v22,
                        (__int64)&v21,
                        (__int64)&v20,
                        (__int64)&v19,
                        (__int64)&v18,
                        (__int64)&v17);
      }
    }
  }
  return v11;
}
