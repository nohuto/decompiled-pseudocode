/*
 * XREFs of ?VisibleDisplayRegion@SnapFlyoutInstance_GetDisplayRegion@SnapFlyoutTelemetry@@QEAAX_KAEBURect@Foundation@Windows@winrt@@@Z @ 0x1805BB740
 * Callers:
 *     ?TryGetDisplayRegion@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AUDisplayRegion@WindowManagement@UI@67@PEAUHMONITOR__@@AEBURect@Foundation@67@@Z @ 0x1805BAE5C (-TryGetDisplayRegion@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winr.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

void __fastcall SnapFlyoutTelemetry::SnapFlyoutInstance_GetDisplayRegion::VisibleDisplayRegion(
        SnapFlyoutTelemetry::SnapFlyoutInstance_GetDisplayRegion *this,
        __int64 a2,
        const struct winrt::Windows::Foundation::Rect *a3)
{
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // [rsp+38h] [rbp-59h] BYREF
  int v10; // [rsp+3Ch] [rbp-55h] BYREF
  int v11; // [rsp+40h] [rbp-51h] BYREF
  int v12; // [rsp+44h] [rbp-4Dh] BYREF
  __int64 v13; // [rsp+48h] [rbp-49h] BYREF
  __int64 v14; // [rsp+50h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+58h] [rbp-39h] BYREF
  __int64 *v16; // [rsp+78h] [rbp-19h]
  __int64 v17; // [rsp+80h] [rbp-11h]
  __int64 *v18; // [rsp+88h] [rbp-9h]
  __int64 v19; // [rsp+90h] [rbp-1h]
  int *v20; // [rsp+98h] [rbp+7h]
  __int64 v21; // [rsp+A0h] [rbp+Fh]
  int *v22; // [rsp+A8h] [rbp+17h]
  __int64 v23; // [rsp+B0h] [rbp+1Fh]
  int *v24; // [rsp+B8h] [rbp+27h]
  __int64 v25; // [rsp+C0h] [rbp+2Fh]
  int *v26; // [rsp+C8h] [rbp+37h]
  __int64 v27; // [rsp+D0h] [rbp+3Fh]

  v6 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   (__int64)this,
                   _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v6 > 5u )
  {
    if ( tlgKeywordOn((__int64)v6, 0x200000000000LL) )
    {
      v8 = *((_QWORD *)this + 6);
      v9 = *((_DWORD *)a3 + 3);
      v10 = *((_DWORD *)a3 + 2);
      v11 = *((_DWORD *)a3 + 1);
      v12 = *(_DWORD *)a3;
      v26 = &v9;
      v24 = &v10;
      v22 = &v11;
      v20 = &v12;
      v18 = &v13;
      v16 = &v14;
      v19 = 8LL;
      v17 = 8LL;
      v13 = a2;
      v14 = 0x2000000LL;
      v27 = 4LL;
      v25 = 4LL;
      v23 = 4LL;
      v21 = 4LL;
      tlgWriteTransfer_EventWriteTransfer(v7, (unsigned __int8 *)dword_1806CBB28, (const GUID *)(v8 + 8), 0LL, 8u, &v15);
    }
  }
}
