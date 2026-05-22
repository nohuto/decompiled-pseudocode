/*
 * XREFs of ??$MPCInputProviderBase_Create@AEAPEAUDeviceInfo@@@ISMTracing@@SAXAEAPEAUDeviceInfo@@@Z @ 0x180041A00
 * Callers:
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18003FB30 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180040ACC (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1800CE544 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

char __fastcall ISMTracing::MPCInputProviderBase_Create<DeviceInfo * &>(int **a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rcx
  int v11; // [rsp+48h] [rbp+10h] BYREF
  int v12; // [rsp+50h] [rbp+18h] BYREF

  LOBYTE(v2) = ISMTracing::IsEnabled((__int64)a1);
  if ( (_BYTE)v2 )
  {
    wil::details::static_lazy<ISMTracing>::get(v3, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v4 = *a1;
    LOBYTE(v2) = ISMTracing::IsEnabled(v5);
    if ( (_BYTE)v2 )
    {
      v2 = (__int64)wil::details::static_lazy<ISMTracing>::get(
                      v6,
                      _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      v9 = *(_QWORD *)(v2 + 8);
      if ( *(_DWORD *)v9 > 4u && (*(_BYTE *)(v9 + 16) & 1) != 0 )
      {
        v2 = *(_QWORD *)(v9 + 24) & 1LL;
        if ( v2 == *(_QWORD *)(v9 + 24) )
        {
          v11 = v4[1];
          v12 = *v4;
          LOBYTE(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                         v9,
                         (unsigned int)&unk_1802319FC,
                         v7,
                         v8,
                         (__int64)&v12,
                         (__int64)&v11);
        }
      }
    }
  }
  return v2;
}
