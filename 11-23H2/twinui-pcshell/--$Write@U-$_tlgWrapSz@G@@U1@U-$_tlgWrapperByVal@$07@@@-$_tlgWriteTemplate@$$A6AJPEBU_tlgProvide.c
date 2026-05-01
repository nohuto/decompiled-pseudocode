/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180509684
 * Callers:
 *     ??$InvokedCopilotKeyTargetApplication@AEAY09$$CBGPEBG@CopilotHotkeyManagerTelemetry@@SAXAEAY09$$CBG$$QEAPEBG@Z @ 0x18025DBA8 (--$InvokedCopilotKeyTargetApplication@AEAY09$$CBGPEBG@CopilotHotkeyManagerTelemetry@@SAXAEAY09$$.c)
 *     ??$InvokedCopilotKeyTargetApplication@AEAY0N@$$CBGPEBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0N@$$CBG$$QEAPEBG@Z @ 0x18025DC30 (--$InvokedCopilotKeyTargetApplication@AEAY0N@$$CBGPEBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0N@.c)
 *     ??$InputAppIdInitialized@PEBGAEAY07$$CBG@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBGAEAY07$$CBG@Z @ 0x1802DA094 (--$InputAppIdInitialized@PEBGAEAY07$$CBG@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBGAEA.c)
 *     ??$InputAppIdInitialized@PEBGAEAY08$$CBG@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBGAEAY08$$CBG@Z @ 0x180508748 (--$InputAppIdInitialized@PEBGAEAY08$$CBG@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBGAEA.c)
 *     ??$InputAppPropertiesChanged@PEBGPEBG@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBG0@Z @ 0x18051E3D4 (--$InputAppPropertiesChanged@PEBGPEBG@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBG0@Z.c)
 *     ?GetAppDisplayName@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU6@@Z @ 0x18061D310 (-GetAppDisplayName@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRI.c)
 *     ??$FilePublisherRetrieved@PEBGAEAPEAG@PinManagerTelemetry@@SAX$$QEAPEBGAEAPEAG@Z @ 0x18069A238 (--$FilePublisherRetrieved@PEBGAEAPEAG@PinManagerTelemetry@@SAX$$QEAPEBGAEAPEAG@Z.c)
 *     ?Create@PinOperationContext@@SA?AV?$shared_ptr@VPinOperationContext@@@std@@V?$shared_ptr@VPinRequestContext@@@3@PEFBU_ITEMIDLIST@@V?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x1806A06E0 (-Create@PinOperationContext@@SA-AV-$shared_ptr@VPinOperationContext@@@std@@V-$share_ea_1806A06E0.c)
 *     ?FromExplicitContext@PinRequestContext@@SA?AV?$shared_ptr@VPinRequestContext@@@std@@PEAXV?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x1806A11F0 (-FromExplicitContext@PinRequestContext@@SA-AV-$shared_ptr@VPinRequestContext@@@std@@PEAXV-$basic.c)
 *     ??$AttemptAppLevelTileBackup@PEAGPEBG@CAppBackupListenerTelemetry@@SAX$$QEAPEAG$$QEAPEBG@Z @ 0x1806EE484 (--$AttemptAppLevelTileBackup@PEAGPEBG@CAppBackupListenerTelemetry@@SAX$$QEAPEAG$$QEAPEBG@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        const WCHAR **a6,
        __int64 a7)
{
  __int64 v9; // rcx
  int v10; // r9d
  const WCHAR *v11; // rdx
  __int64 v12; // rax
  int v13; // r8d
  const WCHAR *v14; // rdx
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+30h] [rbp-68h] BYREF
  const WCHAR *v17; // [rsp+50h] [rbp-48h]
  int v18; // [rsp+58h] [rbp-40h]
  int v19; // [rsp+5Ch] [rbp-3Ch]
  const WCHAR *v20; // [rsp+60h] [rbp-38h]
  int v21; // [rsp+68h] [rbp-30h]
  int v22; // [rsp+6Ch] [rbp-2Ch]
  __int64 v23; // [rsp+70h] [rbp-28h]
  __int64 v24; // [rsp+78h] [rbp-20h]

  v23 = a7;
  v9 = -1LL;
  v24 = 8LL;
  v10 = 2;
  v11 = *a6;
  if ( *a6 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v11 = &LocaleName;
    v13 = 2;
  }
  v20 = v11;
  v21 = v13;
  v22 = 0;
  v14 = *a5;
  if ( *a5 )
  {
    do
      ++v9;
    while ( v14[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v14 = &LocaleName;
  }
  v17 = v14;
  v18 = v10;
  v19 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 5u, &v16);
}
