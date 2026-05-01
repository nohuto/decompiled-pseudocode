/*
 * XREFs of ?ObservedKeyUp@CShellSnapComponent@@UEAAJI@Z @ 0x180661BB0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UnregisterRawInput@CShellSnapComponent@@AEAAXXZ @ 0x1806655A0 (-UnregisterRawInput@CShellSnapComponent@@AEAAXXZ.c)
 */

__int64 __fastcall CShellSnapComponent::ObservedKeyUp(CShellSnapComponent *this, int a2)
{
  _DWORD *v4; // rcx
  int v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  int *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  v4 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v4 > 5u )
  {
    v10 = 0;
    v8 = &v6;
    v6 = a2;
    v9 = 4;
    tlgWriteTransfer_EventWriteTransfer((__int64)v4, (unsigned __int8 *)dword_180871DB2, 0LL, 0LL, 3u, &v7);
  }
  if ( (unsigned int)(a2 - 91) <= 1 )
  {
    CShellSnapComponent::UnregisterRawInput((CShellSnapComponent *)((char *)this - 184));
    (*(void (__fastcall **)(char *, __int64, __int64))(*((_QWORD *)this - 5) + 32LL))((char *)this - 40, 2LL, 8LL);
  }
  return 0LL;
}
