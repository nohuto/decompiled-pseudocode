/*
 * XREFs of ?LogInitialMPCSpatialControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800AD9B4
 * Callers:
 *     ?LogInitialMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z @ 0x1800AD87C (-LogInitialMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@3333@Z @ 0x1800AC90C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6.c)
 *     ?IsVerboseEnabled@ISMTracing@@SA_N_K@Z @ 0x1800AD4B0 (-IsVerboseEnabled@ISMTracing@@SA_N_K@Z.c)
 */

void __fastcall ISMTracing::LogInitialMPCSpatialControllerInputReport(struct InputInfo *a1, const bool *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // [rsp+50h] [rbp-10h] BYREF
  int v12; // [rsp+54h] [rbp-Ch] BYREF
  int v13; // [rsp+58h] [rbp-8h] BYREF
  int v14; // [rsp+5Ch] [rbp-4h] BYREF
  char v15; // [rsp+80h] [rbp+20h] BYREF
  int v16; // [rsp+88h] [rbp+28h] BYREF

  if ( ISMTracing::IsVerboseEnabled((__int64)a1) )
  {
    if ( *((_DWORD *)a1 + 16) == 6 || *((_DWORD *)a1 + 17) == 3 || *((_DWORD *)a1 + 17) == 6 )
    {
      v8 = wil::details::static_lazy<ISMTracing>::get(
             v4,
             _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v8 > 5u && (*(_BYTE *)(v8 + 16) & 1) != 0 && (*(_QWORD *)(v8 + 24) & 1LL) == *(_QWORD *)(v8 + 24) )
      {
        v16 = *((_DWORD *)a1 + 17);
        v14 = *((_DWORD *)a1 + 16);
        v13 = *((_DWORD *)a1 + 18);
        v12 = *((_DWORD *)a1 + 2);
        v15 = *a2;
        v11 = *((_DWORD *)a1 + 1);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v8,
          byte_18020115A,
          v9,
          v10,
          (__int64)&v11,
          (__int64)&v15,
          (__int64)&v12,
          (__int64)&v13,
          (__int64)&v14,
          (__int64)&v16);
      }
    }
    else
    {
      v5 = wil::details::static_lazy<ISMTracing>::get(
             v4,
             _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v5 > 4u && (*(_BYTE *)(v5 + 16) & 1) != 0 && (*(_QWORD *)(v5 + 24) & 1LL) == *(_QWORD *)(v5 + 24) )
      {
        v16 = *((_DWORD *)a1 + 17);
        v11 = *((_DWORD *)a1 + 16);
        v12 = *((_DWORD *)a1 + 18);
        v13 = *((_DWORD *)a1 + 2);
        v15 = *a2;
        v14 = *((_DWORD *)a1 + 1);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v5,
          byte_1802011F9,
          v6,
          v7,
          (__int64)&v14,
          (__int64)&v15,
          (__int64)&v13,
          (__int64)&v12,
          (__int64)&v11,
          (__int64)&v16);
      }
    }
  }
}
