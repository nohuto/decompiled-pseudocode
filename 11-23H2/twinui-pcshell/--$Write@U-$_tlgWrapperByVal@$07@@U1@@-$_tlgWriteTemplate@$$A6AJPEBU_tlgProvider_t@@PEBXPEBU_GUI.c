/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180038F60
 * Callers:
 *     ?UndockedSearchAppExperienceManager_ResetAppRectClip_@SearchAppExperienceManagerTelemetry@@QEAAX_K@Z @ 0x180038C70 (-UndockedSearchAppExperienceManager_ResetAppRectClip_@SearchAppExperienceManagerTelemetry@@QEAAX.c)
 *     ??$IncomingWindowReadinessEvent@PEAUHWND__@@@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAX$$QEAPEAUHWND__@@@Z @ 0x1800E9F98 (--$IncomingWindowReadinessEvent@PEAUHWND__@@@WaitForWindowReadyForPresentation@SingleViewExperie.c)
 *     ?ReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1802D703E (-ReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_.c)
 *     ??$SetDeferredZOrderOnSnap@AEA_KAEA_K@CSnapComponentTelemetry@@SAXAEA_K0@Z @ 0x18065D22C (--$SetDeferredZOrderOnSnap@AEA_KAEA_K@CSnapComponentTelemetry@@SAXAEA_K0@Z.c)
 *     ??$ProviderWindowAdded@_K@CloudPCTelemetry@@SAX$$QEA_K@Z @ 0x18071E9E0 (--$ProviderWindowAdded@_K@CloudPCTelemetry@@SAX$$QEA_K@Z.c)
 *     ??$ProviderWindowDestroyedEventFired@AEB_K@CloudPCTelemetry@@SAXAEB_K@Z @ 0x18071EA54 (--$ProviderWindowDestroyedEventFired@AEB_K@CloudPCTelemetry@@SAXAEB_K@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+50h] [rbp-38h]
  int v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+5Ch] [rbp-2Ch]
  __int64 v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]

  v11 = a6;
  v12 = 8;
  v13 = 0;
  v8 = a5;
  v9 = 8;
  v10 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0, 4u, &v7);
}
