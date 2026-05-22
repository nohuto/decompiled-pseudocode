/*
 * XREFs of ?MPCHolographicInputManager_Process3DInput_HitTestResult_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z @ 0x1800C7714
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x1800C8144 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U3@U3@U2@U2@U2@U2@U2@U3@U2@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@444444AEBU?$_tlgWrapperByVal@$00@@5544444545555@Z @ 0x1800C5188 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U-$_tlgWrappe.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_Process3DInput_HitTestResult_(
        ISMTracing *this,
        struct LegacyInputInfo *a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // [rsp+E0h] [rbp-80h] BYREF
  char v7; // [rsp+E1h] [rbp-7Fh] BYREF
  char v8; // [rsp+E2h] [rbp-7Eh] BYREF
  char v9; // [rsp+E3h] [rbp-7Dh] BYREF
  _BYTE v10[4]; // [rsp+E4h] [rbp-7Ch] BYREF
  int v11; // [rsp+E8h] [rbp-78h] BYREF
  int v12; // [rsp+ECh] [rbp-74h] BYREF
  int v13; // [rsp+F0h] [rbp-70h] BYREF
  int v14; // [rsp+F4h] [rbp-6Ch] BYREF
  int v15; // [rsp+F8h] [rbp-68h] BYREF
  int v16; // [rsp+FCh] [rbp-64h] BYREF
  int v17; // [rsp+100h] [rbp-60h] BYREF
  int v18; // [rsp+104h] [rbp-5Ch] BYREF
  int v19; // [rsp+108h] [rbp-58h] BYREF
  int v20; // [rsp+10Ch] [rbp-54h] BYREF
  int v21; // [rsp+110h] [rbp-50h] BYREF
  int v22; // [rsp+114h] [rbp-4Ch] BYREF
  int v23; // [rsp+118h] [rbp-48h] BYREF
  __int64 v24; // [rsp+120h] [rbp-40h] BYREF
  __int64 v25; // [rsp+128h] [rbp-38h] BYREF
  __int64 v26; // [rsp+130h] [rbp-30h] BYREF
  ISMTracing *v27; // [rsp+150h] [rbp-10h] BYREF
  char v28; // [rsp+160h] [rbp+0h] BYREF
  char v29; // [rsp+168h] [rbp+8h] BYREF

  v27 = this;
  v3 = wil::details::static_lazy<ISMTracing>::get(
         (__int64)this,
         _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v3 > 5u && (*(_BYTE *)(v3 + 16) & 1) != 0 && (*(_QWORD *)(v3 + 24) & 1LL) == *(_QWORD *)(v3 + 24) )
  {
    LOBYTE(v27) = *((_BYTE *)a2 + 649);
    v28 = *((_BYTE *)a2 + 648);
    v29 = *((_BYTE *)a2 + 637);
    v6 = *((_BYTE *)a2 + 636);
    v11 = *((_DWORD *)a2 + 154);
    v7 = *((_BYTE *)a2 + 312);
    v12 = *((_DWORD *)a2 + 76);
    v13 = *((_DWORD *)a2 + 68);
    v14 = *((_DWORD *)a2 + 67);
    v15 = *((_DWORD *)a2 + 62);
    v16 = *((_DWORD *)a2 + 61);
    v8 = *((_BYTE *)a2 + 242);
    v9 = *((_BYTE *)a2 + 241);
    v10[0] = *((_BYTE *)a2 + 240);
    v17 = *((_DWORD *)a2 + 129);
    v18 = *((_DWORD *)a2 + 128);
    v19 = *((_DWORD *)a2 + 127);
    v20 = *((_DWORD *)a2 + 126);
    v21 = *((_DWORD *)a2 + 125);
    v22 = *((_DWORD *)a2 + 124);
    v23 = *((_DWORD *)a2 + 114);
    v24 = *((_QWORD *)a2 + 67);
    v25 = *((_QWORD *)a2 + 66);
    v26 = *((_QWORD *)a2 + 19);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v3,
      byte_180230640,
      v4,
      v5,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v7,
      (__int64)&v11,
      (__int64)&v6,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27);
  }
}
