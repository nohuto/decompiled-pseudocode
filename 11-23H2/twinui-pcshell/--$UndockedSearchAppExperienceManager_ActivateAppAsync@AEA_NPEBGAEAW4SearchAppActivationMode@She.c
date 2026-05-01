/*
 * XREFs of ??$UndockedSearchAppExperienceManager_ActivateAppAsync@AEA_NPEBGAEAW4SearchAppActivationMode@Shell@UI@WindowsUdk@winrt@@AEAW4ShellExperienceViewFocusOptions@Experience@2Internal@Windows@@@SearchAppExperienceManagerTelemetry@@SAXAEA_N$$QEAPEBGAEAW4SearchAppActivationMode@Shell@UI@WindowsUdk@winrt@@AEAW4ShellExperienceViewFocusOptions@Experience@2Internal@Windows@@@Z @ 0x18018E730
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1800B7C8C (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 * Callees:
 *     ?get@?$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6AXXZ@Z @ 0x1800BB23C (-get@-$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@33@Z @ 0x18018E7D4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 */

__int64 *__fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateAppAsync<bool &,unsigned short const *,enum winrt::WindowsUdk::UI::Shell::SearchAppActivationMode &,enum Windows::Internal::Shell::Experience::ShellExperienceViewFocusOptions &>(
        unsigned __int8 *a1,
        __int64 *a2,
        int *a3,
        int *a4)
{
  __int64 *result; // rax
  _DWORD *v9; // rcx
  int v10; // [rsp+40h] [rbp-28h] BYREF
  int v11; // [rsp+44h] [rbp-24h] BYREF
  __int64 v12; // [rsp+48h] [rbp-20h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h] BYREF

  result = wil::details::static_lazy<SearchAppLauncherLogging>::get(
             (__int64)a1,
             (void (__cdecl *)())_lambda_96ed31eb20dc318a71419abe3e3a699d_::_lambda_invoker_cdecl_);
  v9 = (_DWORD *)result[1];
  if ( *v9 > 5u )
  {
    v10 = *a4;
    v11 = *a3;
    v13 = *a2;
    LODWORD(v12) = *a1;
    return (__int64 *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                        (int)v9,
                        (int)&dword_1808526A2,
                        (__int64)&v12,
                        (__int64)&v13,
                        (__int64)&v11,
                        (__int64)&v10);
  }
  return result;
}
