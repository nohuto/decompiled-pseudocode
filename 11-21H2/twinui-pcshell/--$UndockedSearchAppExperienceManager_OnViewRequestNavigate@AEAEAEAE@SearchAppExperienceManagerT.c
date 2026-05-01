/*
 * XREFs of ??$UndockedSearchAppExperienceManager_OnViewRequestNavigate@AEAEAEAE@SearchAppExperienceManagerTelemetry@@SAXAEAE0@Z @ 0x180145244
 * Callers:
 *     ?OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180144C6C (-OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Fou.c)
 * Callees:
 *     ?get@?$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6AXXZ@Z @ 0x180092A5C (-get@-$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

int __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_OnViewRequestNavigate<unsigned char &,unsigned char &>(
        unsigned __int8 *a1,
        unsigned __int8 *a2)
{
  __int64 *v4; // rax
  __int64 v5; // rcx
  unsigned __int16 *v6; // rax
  REGHANDLE v7; // rcx
  int v9; // [rsp+30h] [rbp-19h] BYREF
  _DWORD v10[3]; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  void *v13; // [rsp+60h] [rbp+17h]
  int v14; // [rsp+68h] [rbp+1Fh]
  int v15; // [rsp+6Ch] [rbp+23h]
  _DWORD *v16; // [rsp+70h] [rbp+27h]
  __int64 v17; // [rsp+78h] [rbp+2Fh]
  int *v18; // [rsp+80h] [rbp+37h]
  __int64 v19; // [rsp+88h] [rbp+3Fh]

  v4 = wil::details::static_lazy<SearchAppLauncherLogging>::get(
         (__int64)a1,
         _lambda_96ed31eb20dc318a71419abe3e3a699d_::_lambda_invoker_cdecl_);
  v5 = v4[1];
  if ( *(_DWORD *)v5 > 5u )
  {
    v9 = *a2;
    v10[0] = *a1;
    v18 = &v9;
    v16 = v10;
    *(_DWORD *)&EventDescriptor.Level = 5;
    v6 = *(unsigned __int16 **)(v5 + 8);
    v7 = *(_QWORD *)(v5 + 32);
    UserData.Ptr = (ULONGLONG)v6;
    EventDescriptor.Keyword = 0LL;
    v19 = 4LL;
    v17 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *v6;
    v13 = &unk_1806AAB06;
    UserData.Reserved = 2;
    v14 = 107;
    v15 = 1;
    v10[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v4) = EventWriteTransfer(v7, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return (int)v4;
}
