/*
 * XREFs of ??$UndockedSearchAppExperienceManager_OnPriorityUnboostProcessed@AEAJAEA_N@SearchAppExperienceManagerTelemetry@@SAXAEAJAEA_N@Z @ 0x180092700
 * Callers:
 *     ?UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180092F30 (-UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6AXXZ@Z @ 0x180092A5C (-get@-$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

int __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_OnPriorityUnboostProcessed<long &,bool &>(
        _DWORD *a1,
        unsigned __int8 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int16 *v6; // rax
  REGHANDLE v7; // rcx
  int v9; // [rsp+30h] [rbp-39h] BYREF
  _DWORD v10[3]; // [rsp+34h] [rbp-35h] BYREF
  __int64 v11; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-9h] BYREF
  void *v14; // [rsp+70h] [rbp+7h]
  int v15; // [rsp+78h] [rbp+Fh]
  int v16; // [rsp+7Ch] [rbp+13h]
  _DWORD *v17; // [rsp+80h] [rbp+17h]
  __int64 v18; // [rsp+88h] [rbp+1Fh]
  int *v19; // [rsp+90h] [rbp+27h]
  __int64 v20; // [rsp+98h] [rbp+2Fh]
  __int64 *v21; // [rsp+A0h] [rbp+37h]
  __int64 v22; // [rsp+A8h] [rbp+3Fh]

  v4 = wil::details::static_lazy<SearchAppLauncherLogging>::get(
         a1,
         _lambda_96ed31eb20dc318a71419abe3e3a699d_::_lambda_invoker_cdecl_);
  v5 = *(_QWORD *)(v4 + 8);
  if ( *(_DWORD *)v5 > 4u )
  {
    v9 = *a2;
    v10[0] = *a1;
    v21 = &v11;
    v19 = &v9;
    v17 = v10;
    *(_DWORD *)&EventDescriptor.Level = 4;
    v6 = *(unsigned __int16 **)(v5 + 8);
    v7 = *(_QWORD *)(v5 + 32);
    UserData.Ptr = (ULONGLONG)v6;
    EventDescriptor.Keyword = 0LL;
    v20 = 4LL;
    v18 = 4LL;
    v11 = 0x1000000LL;
    v22 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *v6;
    v14 = &unk_1806AA9BA;
    UserData.Reserved = 2;
    v15 = 111;
    v16 = 1;
    v10[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v4) = EventWriteTransfer(v7, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  return v4;
}
