/*
 * XREFs of ??$InfraFailure@AEA_NAEAJ@StartMenuExperienceTelemetry@@SAXAEA_NAEAJ@Z @ 0x18036E128
 * Callers:
 *     ?OnApplicationActivatedForLaunch@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@J@Z @ 0x1800FCB00 (-OnApplicationActivatedForLaunch@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@J.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18005A23C (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?get@?$static_lazy@VStartMenuExperienceLogging@@@details@wil@@QEAAPEAVStartMenuExperienceLogging@@P6AXXZ@Z @ 0x18007305C (-get@-$static_lazy@VStartMenuExperienceLogging@@@details@wil@@QEAAPEAVStartMenuExperienceLogging.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 */

char __fastcall StartMenuExperienceTelemetry::InfraFailure<bool &,long &>(unsigned __int8 *a1, int *a2)
{
  __int64 *v4; // rax
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r9
  int v9; // [rsp+50h] [rbp+18h] BYREF
  int v10; // [rsp+58h] [rbp+20h] BYREF

  v4 = wil::details::static_lazy<StartMenuExperienceLogging>::get(
         (__int64)a1,
         _lambda_b070bc67e2c9c03cf4cc93f221b7b97d_::_lambda_invoker_cdecl_);
  v5 = (_DWORD *)v4[1];
  if ( *v5 > 5u )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)v5, 0x200000000000LL);
    if ( (_BYTE)v4 )
    {
      v9 = *a2;
      v10 = *a1;
      LOBYTE(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                     v6,
                     byte_1806A710F,
                     0LL,
                     v7,
                     (__int64)&v10,
                     (__int64)&v9);
    }
  }
  return (char)v4;
}
