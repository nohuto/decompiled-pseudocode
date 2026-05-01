/*
 * XREFs of ?MultitaskingViewFrameShown_@MultitaskingViewTelemetry@@QEBAXIIAEBUCRect@Geometry@@@Z @ 0x1804B19A4
 * Callers:
 *     ??$MultitaskingViewFrameShown@AEAIAEAIAEAUCRect@Geometry@@@MultitaskingViewTelemetry@@SAXAEAI0AEAUCRect@Geometry@@@Z @ 0x1804AFA5C (--$MultitaskingViewFrameShown@AEAIAEAIAEAUCRect@Geometry@@@MultitaskingViewTelemetry@@SAXAEAI0AE.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1804AFB1C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$.c)
 */

void __fastcall MultitaskingViewTelemetry::MultitaskingViewFrameShown_(
        MultitaskingViewTelemetry *this,
        int a2,
        int a3,
        const struct Geometry::CRect *a4)
{
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // [rsp+60h] [rbp-20h] BYREF
  int v12; // [rsp+64h] [rbp-1Ch] BYREF
  int v13; // [rsp+68h] [rbp-18h] BYREF
  int v14; // [rsp+6Ch] [rbp-14h] BYREF
  int v15; // [rsp+70h] [rbp-10h] BYREF
  __int64 v16; // [rsp+78h] [rbp-8h] BYREF
  MultitaskingViewTelemetry *v17; // [rsp+90h] [rbp+10h] BYREF

  v17 = this;
  v7 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   (__int64)this,
                   _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v7 > 5u )
  {
    if ( tlgKeywordOn((__int64)v7, 0x400000000000LL) )
    {
      LODWORD(v17) = *((_DWORD *)a4 + 3);
      v11 = *((_DWORD *)a4 + 2);
      v12 = *((_DWORD *)a4 + 1);
      v13 = *(_DWORD *)a4;
      v16 = 0x1000000LL;
      v14 = a3;
      v15 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v8,
        byte_1806BE497,
        v9,
        v10,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v17,
        (__int64)&v16);
    }
  }
}
