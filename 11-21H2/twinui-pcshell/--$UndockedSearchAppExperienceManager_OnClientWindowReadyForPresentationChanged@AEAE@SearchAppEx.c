/*
 * XREFs of ??$UndockedSearchAppExperienceManager_OnClientWindowReadyForPresentationChanged@AEAE@SearchAppExperienceManagerTelemetry@@SAXAEAE@Z @ 0x180046174
 * Callers:
 *     ?OnClientWindowReadyForPresentationChanged@UndockedSearchAppExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x180046050 (-OnClientWindowReadyForPresentationChanged@UndockedSearchAppExperienceManager@@AEAAJPEAUIClientW.c)
 * Callees:
 *     ?get@?$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6AXXZ@Z @ 0x180092A5C (-get@-$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

int __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_OnClientWindowReadyForPresentationChanged<unsigned char &>(
        _BYTE *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  bool v4; // zf
  unsigned __int16 *v5; // rax
  REGHANDLE v6; // rcx
  bool v8; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v9; // [rsp+34h] [rbp-4Ch]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  void *v12; // [rsp+58h] [rbp-28h]
  int v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+64h] [rbp-1Ch]
  bool *v15; // [rsp+68h] [rbp-18h]
  __int64 v16; // [rsp+70h] [rbp-10h]

  v2 = wil::details::static_lazy<SearchAppLauncherLogging>::get(
         a1,
         _lambda_96ed31eb20dc318a71419abe3e3a699d_::_lambda_invoker_cdecl_);
  v3 = *(_QWORD *)(v2 + 8);
  if ( *(_DWORD *)v3 > 5u )
  {
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    v4 = *a1 == 0;
    v15 = &v8;
    v8 = !v4;
    *(_DWORD *)&EventDescriptor.Level = 5;
    v5 = *(unsigned __int16 **)(v3 + 8);
    v6 = *(_QWORD *)(v3 + 32);
    UserData.Ptr = (ULONGLONG)v5;
    EventDescriptor.Keyword = 0LL;
    v16 = 1LL;
    UserData.Size = *v5;
    v12 = &unk_1806AAA93;
    v14 = 1;
    UserData.Reserved = 2;
    v13 = 103;
    v9 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v2) = EventWriteTransfer(v6, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  return v2;
}
