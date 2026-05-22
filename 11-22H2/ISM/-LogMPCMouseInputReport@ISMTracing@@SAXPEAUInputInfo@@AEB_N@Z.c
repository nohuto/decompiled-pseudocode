/*
 * XREFs of ?LogMPCMouseInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800D6798
 * Callers:
 *     ?LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z @ 0x1800D66F4 (-LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U2@U2@U2@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@444333@Z @ 0x1800D4898 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U2@U2@U2@U1@U1@U1@@-$_tlgWriteT.c)
 */

void __fastcall ISMTracing::LogMPCMouseInputReport(struct InputInfo *a1, const bool *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _BYTE v7[4]; // [rsp+70h] [rbp+27h] BYREF
  int v8; // [rsp+74h] [rbp+2Bh] BYREF
  int v9; // [rsp+78h] [rbp+2Fh] BYREF
  int v10; // [rsp+7Ch] [rbp+33h] BYREF
  int v11; // [rsp+80h] [rbp+37h] BYREF
  int v12; // [rsp+84h] [rbp+3Bh] BYREF
  _DWORD v13[6]; // [rsp+88h] [rbp+3Fh] BYREF
  char v14; // [rsp+B0h] [rbp+67h] BYREF
  char v15; // [rsp+C0h] [rbp+77h] BYREF
  char v16; // [rsp+C8h] [rbp+7Fh] BYREF

  v4 = wil::details::static_lazy<ISMTracing>::get(
         (__int64)a1,
         _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v4 > 5u && (*(_BYTE *)(v4 + 16) & 1) != 0 && (*(_QWORD *)(v4 + 24) & 1LL) == *(_QWORD *)(v4 + 24) )
  {
    v8 = *((_DWORD *)a1 + 26);
    v9 = *((_DWORD *)a1 + 25);
    v10 = *((_DWORD *)a1 + 24);
    v14 = *((_BYTE *)a1 + 120);
    v15 = *((_BYTE *)a1 + 125);
    v16 = *((_BYTE *)a1 + 121);
    v7[0] = *a2;
    v11 = *((_DWORD *)a1 + 2);
    v12 = *((_DWORD *)a1 + 1);
    v13[0] = *(_DWORD *)a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v4,
      byte_180231364,
      v5,
      v6,
      (__int64)v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)v7,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8);
  }
}
