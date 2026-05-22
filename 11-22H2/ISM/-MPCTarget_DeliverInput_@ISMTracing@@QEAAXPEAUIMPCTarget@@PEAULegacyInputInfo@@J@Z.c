/*
 * XREFs of ?MPCTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@J@Z @ 0x18011B7D4
 * Callers:
 *     ?DeliverInput@MPCTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18011B1C0 (-DeliverInput@MPCTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z @ 0x1800C62E0 (-GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z.c)
 *     ?GetTypeOfTarget@ISMTracing@@SAPEBGPEAUIMPCTarget@@@Z @ 0x1800C63E4 (-GetTypeOfTarget@ISMTracing@@SAPEBGPEAUIMPCTarget@@@Z.c)
 *     ?IsVerboseEnabled@ISMTracing@@SA_N_K@Z @ 0x1800D57F0 (-IsVerboseEnabled@ISMTracing@@SA_N_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@444444AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x18011AA8C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@U2@U2@U2@U2@U2@U-.c)
 */

void __fastcall ISMTracing::MPCTarget_DeliverInput_(
        ISMTracing *this,
        struct IMPCTarget *a2,
        struct LegacyInputInfo *a3,
        int a4)
{
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // [rsp+88h] [rbp+17h] BYREF
  int v12; // [rsp+8Ch] [rbp+1Bh] BYREF
  int v13; // [rsp+90h] [rbp+1Fh] BYREF
  int v14; // [rsp+94h] [rbp+23h] BYREF
  int v15; // [rsp+98h] [rbp+27h] BYREF
  int v16; // [rsp+9Ch] [rbp+2Bh] BYREF
  int v17; // [rsp+A0h] [rbp+2Fh] BYREF
  int PIDOfMPCTarget; // [rsp+A4h] [rbp+33h] BYREF
  const WCHAR *TypeOfTarget; // [rsp+A8h] [rbp+37h] BYREF
  __int64 v20; // [rsp+B0h] [rbp+3Fh] BYREF
  __int64 v21; // [rsp+D8h] [rbp+67h] BYREF

  v21 = (__int64)this;
  if ( ISMTracing::IsVerboseEnabled((__int64)this) )
  {
    v8 = wil::details::static_lazy<ISMTracing>::get(
           v7,
           _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v8 > 5u && (*(_BYTE *)(v8 + 16) & 1) != 0 && (*(_QWORD *)(v8 + 24) & 1LL) == *(_QWORD *)(v8 + 24) )
    {
      LOBYTE(v21) = *((_BYTE *)a3 + 3002);
      v12 = *((_DWORD *)a3 + 17);
      v13 = *((_DWORD *)a3 + 16);
      v14 = *((_DWORD *)a3 + 18);
      v15 = *((_DWORD *)a3 + 2);
      v16 = *((_DWORD *)a3 + 1);
      v17 = *(_DWORD *)a3;
      v11 = a4;
      TypeOfTarget = ISMTracing::GetTypeOfTarget(a2);
      PIDOfMPCTarget = ISMTracing::GetPIDOfMPCTarget(a2);
      v20 = (__int64)a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        v8,
        (unsigned __int8 *)dword_18023462D,
        v9,
        v10,
        (__int64)&v20,
        (__int64)&PIDOfMPCTarget,
        &TypeOfTarget,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v21,
        (__int64)&v11);
    }
  }
}
