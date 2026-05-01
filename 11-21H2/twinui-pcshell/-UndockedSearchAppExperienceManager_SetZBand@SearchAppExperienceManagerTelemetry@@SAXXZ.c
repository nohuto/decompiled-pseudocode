/*
 * XREFs of ?UndockedSearchAppExperienceManager_SetZBand@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x180139228
 * Callers:
 *     ?SetZBand@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180139078 (-SetZBand@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6AXXZ@Z @ 0x180092A5C (-get@-$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetZBand(__int64 a1)
{
  __int64 v1; // rcx
  unsigned __int16 *v2; // rax
  REGHANDLE v3; // rcx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  void *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  v1 = wil::details::static_lazy<SearchAppLauncherLogging>::get(
         a1,
         _lambda_96ed31eb20dc318a71419abe3e3a699d_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v1 > 5u )
  {
    EventDescriptor.Keyword = 0LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    v2 = *(unsigned __int16 **)(v1 + 8);
    v3 = *(_QWORD *)(v1 + 32);
    UserData.Ptr = (ULONGLONG)v2;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *v2;
    v6 = &unk_1806AC671;
    UserData.Reserved = 2;
    v7 = 47;
    v8 = 1;
    EventWriteTransfer(v3, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
}
