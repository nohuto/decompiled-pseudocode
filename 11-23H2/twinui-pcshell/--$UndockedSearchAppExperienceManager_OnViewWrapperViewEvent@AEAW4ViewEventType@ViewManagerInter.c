/*
 * XREFs of ??$UndockedSearchAppExperienceManager_OnViewWrapperViewEvent@AEAW4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@@SearchAppExperienceManagerTelemetry@@SAXAEAW4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800BACCC
 * Callers:
 *     ?OnViewWrapperViewEvent@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1800BA9B0 (-OnViewWrapperViewEvent@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInt.c)
 * Callees:
 *     ?get@?$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6AXXZ@Z @ 0x1800BB23C (-get@-$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

int __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_OnViewWrapperViewEvent<enum Windows::Internal::Shell::ViewManagerInterop::ViewEventType &>(
        int *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // eax
  unsigned __int16 *v5; // rax
  REGHANDLE v6; // rcx
  _DWORD v8[2]; // [rsp+30h] [rbp-50h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  void *v11; // [rsp+58h] [rbp-28h]
  int v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+64h] [rbp-1Ch]
  _DWORD *v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+70h] [rbp-10h]
  int v16; // [rsp+74h] [rbp-Ch]

  v2 = wil::details::static_lazy<SearchAppLauncherLogging>::get(
         a1,
         _lambda_96ed31eb20dc318a71419abe3e3a699d_::_lambda_invoker_cdecl_);
  v3 = *(_QWORD *)(v2 + 8);
  if ( *(_DWORD *)v3 > 5u )
  {
    v4 = *a1;
    v16 = 0;
    EventDescriptor.Keyword = 0LL;
    v8[0] = v4;
    v14 = v8;
    *(_DWORD *)&EventDescriptor.Level = 5;
    v5 = *(unsigned __int16 **)(v3 + 8);
    v6 = *(_QWORD *)(v3 + 32);
    UserData.Ptr = (ULONGLONG)v5;
    v15 = 4;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *v5;
    v11 = &unk_18085287B;
    UserData.Reserved = 2;
    v12 = 72;
    v13 = 1;
    v8[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v2) = EventWriteTransfer(v6, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  return v2;
}
