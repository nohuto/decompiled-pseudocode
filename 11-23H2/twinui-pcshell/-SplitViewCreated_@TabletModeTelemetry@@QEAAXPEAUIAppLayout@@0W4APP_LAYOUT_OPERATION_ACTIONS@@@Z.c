/*
 * XREFs of ?SplitViewCreated_@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@0W4APP_LAYOUT_OPERATION_ACTIONS@@@Z @ 0x1805BF42C
 * Callers:
 *     ??$SplitViewCreated@PEAUIAppLayout@@PEAU1@AEBW4APP_LAYOUT_OPERATION_ACTIONS@@@TabletModeTelemetry@@SAX$$QEAPEAUIAppLayout@@0AEBW4APP_LAYOUT_OPERATION_ACTIONS@@@Z @ 0x1805B7C4C (--$SplitViewCreated@PEAUIAppLayout@@PEAU1@AEBW4APP_LAYOUT_OPERATION_ACTIONS@@@TabletModeTelemetr.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall TabletModeTelemetry::SplitViewCreated_(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  _QWORD *v6; // rax
  __int64 v7; // rcx
  int v8; // ebx
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  bool v12; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+38h] [rbp-40h] BYREF
  bool *v14; // [rsp+58h] [rbp-20h]
  int v15; // [rsp+60h] [rbp-18h]
  int v16; // [rsp+64h] [rbp-14h]

  LODWORD(v6) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a3 + 80LL))(a3, 1LL);
  if ( (_DWORD)v6 == 2 )
  {
    LODWORD(v6) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 80LL))(a2, 1LL);
    if ( (_DWORD)v6 == 1 )
    {
      v8 = a4 & 0x10;
      v6 = wil::details::static_lazy<WindowManagementLogging>::get(
             v7,
             (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      v9 = (_DWORD *)v6[1];
      if ( *v9 > 5u )
      {
        LOBYTE(v6) = tlgKeywordOn((__int64)v9, 0x200000000000LL);
        if ( (_BYTE)v6 )
        {
          v15 = 1;
          v14 = &v12;
          v12 = v8 != 0;
          v16 = 0;
          LOBYTE(v6) = tlgWriteTransfer_EventWriteTransfer(v10, (unsigned __int8 *)dword_18086AC80, 0LL, 0LL, 3u, &v13);
        }
      }
    }
  }
  return (char)v6;
}
