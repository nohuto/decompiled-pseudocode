/*
 * XREFs of ?PendingCloakingStatus_@StartMenuExperienceTelemetry@@QEAAX_NGG@Z @ 0x1801509DC
 * Callers:
 *     _lambda_c11c54da2889639c00e05aec0ffbb75c_::operator() @ 0x1801971BC (_lambda_c11c54da2889639c00e05aec0ffbb75c_--operator().c)
 * Callees:
 *     ?get@?$static_lazy@VStartMenuExperienceLogging@@@details@wil@@QEAAPEAVStartMenuExperienceLogging@@P6AXXZ@Z @ 0x18007305C (-get@-$static_lazy@VStartMenuExperienceLogging@@@details@wil@@QEAAPEAVStartMenuExperienceLogging.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$01@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$01@@5@Z @ 0x180150A88 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$01@@U3@@-$_tlgWr.c)
 */

void __fastcall StartMenuExperienceTelemetry::PendingCloakingStatus_(
        StartMenuExperienceTelemetry *this,
        char a2,
        __int16 a3,
        __int16 a4)
{
  _DWORD *v7; // rcx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  void *v11; // rdx
  _DWORD *v12; // rcx
  __int16 v13; // [rsp+40h] [rbp-10h] BYREF
  __int64 v14; // [rsp+48h] [rbp-8h] BYREF
  StartMenuExperienceTelemetry *v15; // [rsp+70h] [rbp+20h] BYREF
  char v16; // [rsp+78h] [rbp+28h] BYREF

  v15 = this;
  if ( a2 )
  {
    v12 = (_DWORD *)wil::details::static_lazy<StartMenuExperienceLogging>::get(
                      (__int64)this,
                      _lambda_b070bc67e2c9c03cf4cc93f221b7b97d_::_lambda_invoker_cdecl_)[1];
    if ( *v12 > 2u && tlgKeywordOn((__int64)v12, 0x400000000000LL) )
    {
      v16 = a2;
      v11 = &unk_1806A719C;
      goto LABEL_5;
    }
  }
  else
  {
    v7 = (_DWORD *)wil::details::static_lazy<StartMenuExperienceLogging>::get(
                     (__int64)this,
                     _lambda_b070bc67e2c9c03cf4cc93f221b7b97d_::_lambda_invoker_cdecl_)[1];
    if ( *v7 > 4u && tlgKeywordOn((__int64)v7, 0x400000000000LL) )
    {
      v16 = 0;
      v11 = &unk_1806A7142;
LABEL_5:
      LOWORD(v15) = a4;
      v13 = a3;
      v14 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
        v8,
        (_DWORD)v11,
        v9,
        v10,
        (__int64)&v14,
        (__int64)&v16,
        (__int64)&v13,
        (__int64)&v15);
    }
  }
}
