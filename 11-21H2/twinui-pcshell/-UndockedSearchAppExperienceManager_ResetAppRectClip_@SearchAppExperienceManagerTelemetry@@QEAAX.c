/*
 * XREFs of ?UndockedSearchAppExperienceManager_ResetAppRectClip_@SearchAppExperienceManagerTelemetry@@QEAAX_K@Z @ 0x1801A2244
 * Callers:
 *     ?ResetAppRectClip@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801A087C (-ResetAppRectClip@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18000C69C (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180092A3C (-Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetAppRectClip_(
        SearchAppExperienceManagerTelemetry *this,
        __int64 a2)
{
  const struct _tlgProvider_t *v3; // rcx
  int v4; // ecx
  __int64 v5; // r9
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = (__int64)this;
  v3 = SearchAppLauncherLogging::Provider((__int64)this);
  if ( *(_DWORD *)v3 > 4u )
  {
    if ( tlgKeywordOn((__int64)v3, 0x200000000000LL) )
    {
      v6 = 0x1000000LL;
      v7 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v4,
        (int)&unk_1806AB38D,
        0,
        v5,
        (__int64)&v7,
        (__int64)&v6);
    }
  }
}
