/*
 * XREFs of ?DropTargetChanged@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@_K1@Z @ 0x180167E04
 * Callers:
 *     ?OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x180168BCC (-OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResp.c)
 * Callees:
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x18003F300 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800F9C60 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333333333@Z @ 0x1801663E4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 */

char __fastcall InputETW::Edgy::DropTargetChanged(
        __int64 a1,
        int *a2,
        int *a3,
        int *a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // r14
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v18; // [rsp+88h] [rbp-29h] BYREF
  __int64 v19; // [rsp+90h] [rbp-21h] BYREF
  __int64 v20; // [rsp+98h] [rbp-19h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v22; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v23; // [rsp+B0h] [rbp-1h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+7h] BYREF
  __int64 v25; // [rsp+C0h] [rbp+Fh] BYREF
  __int64 v26; // [rsp+C8h] [rbp+17h] BYREF
  __int64 v27; // [rsp+D0h] [rbp+1Fh] BYREF
  __int64 v28; // [rsp+D8h] [rbp+27h] BYREF

  v9 = (unsigned int)a1;
  LOBYTE(v12) = InputETW::IsEnabled(a1);
  if ( (_BYTE)v12 )
  {
    v12 = (__int64)wil::details::static_lazy<InputETW>::get(
                     v13,
                     _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    v16 = *(_QWORD *)(v12 + 8);
    if ( *(_DWORD *)v16 > 5u && (*(_BYTE *)(v16 + 16) & 1) != 0 )
    {
      v12 = *(_QWORD *)(v16 + 24) & 1LL;
      if ( v12 == *(_QWORD *)(v16 + 24) )
      {
        v18 = a8;
        v19 = a7;
        v20 = a6;
        v21 = a5;
        v22 = a4[1];
        v23 = *a4;
        v24 = a3[1];
        v25 = *a3;
        v26 = a2[1];
        v27 = *a2;
        v28 = v9;
        LOBYTE(v12) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                        v16,
                        byte_1802279B0,
                        v14,
                        v15,
                        (__int64)&v28,
                        (__int64)&v27,
                        (__int64)&v26,
                        (__int64)&v25,
                        (__int64)&v24,
                        (__int64)&v23,
                        (__int64)&v22,
                        (__int64)&v21,
                        (__int64)&v20,
                        (__int64)&v19,
                        (__int64)&v18);
      }
    }
  }
  return v12;
}
