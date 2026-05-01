/*
 * XREFs of ??$MiniSearchAppExperienceManager_OnClientWindowReadyForPresentationChanged@AEAE@MiniSearchAppExperienceManagerTelemetry@@SAXAEAE@Z @ 0x1803A0888
 * Callers:
 *     ?OnClientWindowReadyForPresentationChanged@MiniSearchExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1803A23E0 (-OnClientWindowReadyForPresentationChanged@MiniSearchExperienceManager@@AEAAJPEAUIClientWindowSt.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6AXXZ@Z @ 0x180092A5C (-get@-$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

int __fastcall MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_OnClientWindowReadyForPresentationChanged<unsigned char &>(
        _BYTE *a1)
{
  __int64 *v2; // rax
  _DWORD *v3; // rcx
  bool v4; // zf
  bool v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  bool *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  v2 = wil::details::static_lazy<SearchAppLauncherLogging>::get(
         (__int64)a1,
         _lambda_96ed31eb20dc318a71419abe3e3a699d_::_lambda_invoker_cdecl_);
  v3 = (_DWORD *)v2[1];
  if ( *v3 > 5u )
  {
    v4 = *a1 == 0;
    v8 = &v6;
    v6 = !v4;
    v9 = 1;
    v10 = 0;
    LODWORD(v2) = tlgWriteTransfer_EventWriteTransfer(
                    (__int64)v3,
                    (unsigned __int8 *)dword_1806AE158,
                    0LL,
                    0LL,
                    3u,
                    &v7);
  }
  return (int)v2;
}
