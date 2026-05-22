/*
 * XREFs of ?DragStarted@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1I1@Z @ 0x180175F24
 * Callers:
 *     ?OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x180176E4C (-OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResp.c)
 * Callees:
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180040A2C (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1801086E0 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33333333333@Z @ 0x180174778 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPE.c)
 */

char __fastcall InputETW::Edgy::DragStarted(
        __int64 a1,
        int *a2,
        int *a3,
        int *a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        unsigned int a8,
        __int64 a9)
{
  __int64 v10; // r14
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v19; // [rsp+88h] [rbp-31h] BYREF
  __int64 v20; // [rsp+90h] [rbp-29h] BYREF
  __int64 v21; // [rsp+98h] [rbp-21h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v23; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v24; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v25; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v26; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v27; // [rsp+C8h] [rbp+Fh] BYREF
  __int64 v28; // [rsp+D0h] [rbp+17h] BYREF
  __int64 v29; // [rsp+D8h] [rbp+1Fh] BYREF
  __int64 v30; // [rsp+E0h] [rbp+27h] BYREF

  v10 = (unsigned int)a1;
  LOBYTE(v13) = InputETW::IsEnabled(a1);
  if ( (_BYTE)v13 )
  {
    v13 = (__int64)wil::details::static_lazy<InputETW>::get(
                     v14,
                     _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    v17 = *(_QWORD *)(v13 + 8);
    if ( *(_DWORD *)v17 > 5u && (*(_BYTE *)(v17 + 16) & 1) != 0 )
    {
      v13 = *(_QWORD *)(v17 + 24) & 1LL;
      if ( v13 == *(_QWORD *)(v17 + 24) )
      {
        v19 = a9;
        v20 = a8;
        v21 = a7;
        v22 = a6;
        v23 = a5;
        v24 = a4[1];
        v25 = *a4;
        v26 = a3[1];
        v27 = *a3;
        v28 = a2[1];
        v29 = *a2;
        v30 = v10;
        LOBYTE(v13) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                        v17,
                        byte_180236939,
                        v15,
                        v16,
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
                        (__int64)&v19);
      }
    }
  }
  return v13;
}
