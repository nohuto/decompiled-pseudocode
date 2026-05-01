/*
 * XREFs of ?PPIWin32VtcSideBarLayoutItemsReflowed_@TabletModeTelemetry@@QEAAXHI_N@Z @ 0x1805157A0
 * Callers:
 *     ??$PPIWin32VtcSideBarLayoutItemsReflowed@IAEAI_N@TabletModeTelemetry@@SAX$$QEAIAEAI$$QEA_N@Z @ 0x1805148B4 (--$PPIWin32VtcSideBarLayoutItemsReflowed@IAEAI_N@TabletModeTelemetry@@SAX$$QEAIAEAI$$QEA_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

void __fastcall TabletModeTelemetry::PPIWin32VtcSideBarLayoutItemsReflowed_(
        TabletModeTelemetry *this,
        int a2,
        int a3,
        char a4)
{
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  char v9; // [rsp+38h] [rbp-19h] BYREF
  int v10; // [rsp+3Ch] [rbp-15h] BYREF
  int v11; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+48h] [rbp-9h] BYREF
  int *v13; // [rsp+68h] [rbp+17h]
  __int64 v14; // [rsp+70h] [rbp+1Fh]
  int *v15; // [rsp+78h] [rbp+27h]
  __int64 v16; // [rsp+80h] [rbp+2Fh]
  char *v17; // [rsp+88h] [rbp+37h]
  __int64 v18; // [rsp+90h] [rbp+3Fh]

  v7 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   (__int64)this,
                   _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v7 > 5u )
  {
    if ( tlgKeywordOn((__int64)v7, 0x200000000000LL) )
    {
      v9 = a4;
      v17 = &v9;
      v10 = a3;
      v15 = &v10;
      v11 = a2;
      v13 = &v11;
      v18 = 1LL;
      v16 = 4LL;
      v14 = 4LL;
      tlgWriteTransfer_EventWriteTransfer(v8, (unsigned __int8 *)dword_1806C3C4B, 0LL, 0LL, 5u, &v12);
    }
  }
}
