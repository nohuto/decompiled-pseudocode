/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180392BF0
 * Callers:
 *     ??$TrayFlyoutLaunchedByWindow@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@SingleViewExperienceTelemetry@@SAXAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x180392B7C (--$TrayFlyoutLaunchedByWindow@AEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Interna.c)
 *     ??$DenyAppViewDuringOOBE@PEBG@HolographicPositionerTelemetry@@SAX$$QEAPEBG@Z @ 0x1803CA9B0 (--$DenyAppViewDuringOOBE@PEBG@HolographicPositionerTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??$DenyAppViewPending@PEBG@HolographicPositionerTelemetry@@SAX$$QEAPEBG@Z @ 0x1803CAA30 (--$DenyAppViewPending@PEBG@HolographicPositionerTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??$HandleControlLostForView@PEBG@HolographicPositionerTelemetry@@SAX$$QEAPEBG@Z @ 0x1803CABD0 (--$HandleControlLostForView@PEBG@HolographicPositionerTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??$HolographicViewRecovered@PEBG@HolographicPositionerTelemetry@@SAX$$QEAPEBG@Z @ 0x1803CAD60 (--$HolographicViewRecovered@PEBG@HolographicPositionerTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??$PreviousPendingViewClosed@PEBG@HolographicPositionerTelemetry@@SAX$$QEAPEBG@Z @ 0x1803CB7F0 (--$PreviousPendingViewClosed@PEBG@HolographicPositionerTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??$QueueAppViewPending@PEBG@HolographicPositionerTelemetry@@SAX$$QEAPEBG@Z @ 0x1803CB870 (--$QueueAppViewPending@PEBG@HolographicPositionerTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??$ReplayPendingAppView@PEBG@HolographicPositionerTelemetry@@SAX$$QEAPEBG@Z @ 0x1803CB980 (--$ReplayPendingAppView@PEBG@HolographicPositionerTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??$TerminatePendingAppViewForOOBE@PEBG@HolographicPositionerTelemetry@@SAX$$QEAPEBG@Z @ 0x1803CBA90 (--$TerminatePendingAppViewForOOBE@PEBG@HolographicPositionerTelemetry@@SAX$$QEAPEBG@Z.c)
 *     _anonymous_namespace_::GetViewTypeFromExperienceId @ 0x18045ED08 (_anonymous_namespace_--GetViewTypeFromExperienceId.c)
 *     ??$SnapAssistInvoked@PEBG@MultitaskingViewTelemetry@@SAX$$QEAPEBG@Z @ 0x1804A3560 (--$SnapAssistInvoked@PEBG@MultitaskingViewTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??$SecondaryAppLaunched@PEBG@CustomShellHostTelemetry@@SAX$$QEAPEBG@Z @ 0x1804EF008 (--$SecondaryAppLaunched@PEBG@CustomShellHostTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??$EnforcedAppClosed@PEBG@AppUsageTelemetry@@SAX$$QEAPEBG@Z @ 0x1805668E0 (--$EnforcedAppClosed@PEBG@AppUsageTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??$WindowTabHostCreationBlocked@AEAPEBG@WindowTabHostTelemetry@@SAXAEAPEBG@Z @ 0x180579FA0 (--$WindowTabHostCreationBlocked@AEAPEBG@WindowTabHostTelemetry@@SAXAEAPEBG@Z.c)
 *     ??$WindowTabHostCreationBlocked@AEAY00$$CBG@WindowTabHostTelemetry@@SAXAEAY00$$CBG@Z @ 0x18057A014 (--$WindowTabHostCreationBlocked@AEAY00$$CBG@WindowTabHostTelemetry@@SAXAEAY00$$CBG@Z.c)
 *     ??$Allocated@AEAPEBG@DelayAllocateTLSTelemetry@@SAXAEAPEBG@Z @ 0x1805EA0EC (--$Allocated@AEAPEBG@DelayAllocateTLSTelemetry@@SAXAEAPEBG@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        const WCHAR **a5,
        __int64 a6)
{
  const WCHAR *v8; // rcx
  __int64 v9; // rax
  int v10; // edx
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+30h] [rbp-58h] BYREF
  const WCHAR *v13; // [rsp+50h] [rbp-38h]
  int v14; // [rsp+58h] [rbp-30h]
  int v15; // [rsp+5Ch] [rbp-2Ch]
  __int64 v16; // [rsp+60h] [rbp-28h]
  __int64 v17; // [rsp+68h] [rbp-20h]

  v16 = a6;
  v17 = 8LL;
  v8 = *a5;
  if ( *a5 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v8[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v8 = &LocaleName;
    v10 = 2;
  }
  v13 = v8;
  v14 = v10;
  v15 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 4u, &v12);
}
