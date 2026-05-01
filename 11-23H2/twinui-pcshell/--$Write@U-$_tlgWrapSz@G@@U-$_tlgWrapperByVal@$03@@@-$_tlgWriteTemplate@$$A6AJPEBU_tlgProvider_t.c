/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800AE21C
 * Callers:
 *     ??$CloakTypeChange@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@ApplicationViewTraceLogging@ApplicationViewManagement@@SAXAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x18006F580 (--$CloakTypeChange@AEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@.c)
 *     ??$WindowEventDispatcher_OnAppViewRemoved@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QEAI@Z @ 0x1800ADDC0 (--$WindowEventDispatcher_OnAppViewRemoved@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QE.c)
 *     ??$WindowEventDispatcher_OnWindowAdded@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QEAI@Z @ 0x1800AE14C (--$WindowEventDispatcher_OnWindowAdded@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QEAI@.c)
 *     ??$WindowEventDispatcher_CachedView@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QEAI@Z @ 0x1800AE1B4 (--$WindowEventDispatcher_CachedView@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QEAI@Z.c)
 *     ??$WebExperienceDelayStarted@AEAPEBG_J@DashboardManagerTelemetry@@SAXAEAPEBG$$QEA_J@Z @ 0x1800AFA3C (--$WebExperienceDelayStarted@AEAPEBG_J@DashboardManagerTelemetry@@SAXAEAPEBG$$QEA_J@Z.c)
 *     wistd::__function::__func__lambda_d5d9c4a1e2c87958fc452fd533bd1171__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x1801E4720 (wistd--__function--__func__lambda_d5d9c4a1e2c87958fc452fd533bd1171__void___cdecl(enum_wil--Regis.c)
 *     ??$ApplicationViewManagerInitializationFailed@AEAY06$$CBGAEAJ@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAY06$$CBGAEAJ@Z @ 0x1803CFFD4 (--$ApplicationViewManagerInitializationFailed@AEAY06$$CBGAEAJ@ApplicationViewTelemetry@Applicati.c)
 *     ??$ApplicationViewManagerInitializationFailed@AEAY0L@$$CBGAEAJ@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAY0L@$$CBGAEAJ@Z @ 0x1803D00A4 (--$ApplicationViewManagerInitializationFailed@AEAY0L@$$CBGAEAJ@ApplicationViewTelemetry@Applicat.c)
 *     ?LogSuccessfulLaunch@CScreenClippingExperienceManager@@AEAAXUhstring@winrt@@W4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x1804566A8 (-LogSuccessfulLaunch@CScreenClippingExperienceManager@@AEAAXUhstring@winrt@@W4ScreenClipInvocati.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        __int64 a6)
{
  const WCHAR *v8; // rcx
  __int64 v9; // rax
  int v10; // edx
  REGHANDLE v11; // rcx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  unsigned __int8 *v15; // [rsp+60h] [rbp+7h]
  int v16; // [rsp+68h] [rbp+Fh]
  int v17; // [rsp+6Ch] [rbp+13h]
  const WCHAR *v18; // [rsp+70h] [rbp+17h]
  int v19; // [rsp+78h] [rbp+1Fh]
  int v20; // [rsp+7Ch] [rbp+23h]
  __int64 v21; // [rsp+80h] [rbp+27h]
  __int64 v22; // [rsp+88h] [rbp+2Fh]

  v21 = a6;
  v22 = 4LL;
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
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  v19 = v10;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v18 = v8;
  v20 = 0;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v16 = *(unsigned __int16 *)(a2 + 11);
  v15 = a2 + 11;
  v11 = *(_QWORD *)(a1 + 32);
  UserData.Reserved = 2;
  v17 = 1;
  return EventWriteTransfer(v11, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
}
