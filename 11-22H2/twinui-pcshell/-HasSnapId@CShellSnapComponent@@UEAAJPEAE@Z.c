/*
 * XREFs of ?HasSnapId@CShellSnapComponent@@UEAAJPEAE@Z @ 0x18005EC20
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall CShellSnapComponent::HasSnapId(RTL_SRWLOCK *this, bool *a2)
{
  RTL_SRWLOCK *v4; // rbx
  PVOID Ptr; // rdi
  __int64 v6; // rcx
  _DWORD *v7; // rcx
  const char *v8; // r9
  __int64 result; // rax
  PVOID v10; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+38h] [rbp-40h] BYREF
  PVOID *v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+60h] [rbp-18h]
  int v14; // [rsp+64h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v4 = this + 174;
  AcquireSRWLockShared(this + 174);
  *a2 = this[178].Ptr != 0LL;
  Ptr = this[178].Ptr;
  v7 = *(_DWORD **)(wil::details::static_lazy<WindowManagementLogging>::get(
                      v6,
                      _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v7 > 5u )
  {
    v10 = Ptr;
    v12 = &v10;
    v13 = 8;
    v14 = 0;
    tlgWriteTransfer_EventWriteTransfer((int)v7, (int)&dword_180871E80, 0, 0, 3u, &v11);
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
  result = 0LL;
  while ( 2 )
  {
    try
    {
    }
    catch ( ... )
    {
      LODWORD(v10) = wil::details::in1diag3::Return_CaughtException(
                       retaddr,
                       (void *)0x373,
                       (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                       v8);
      result = (unsigned int)v10;
      continue;
    }
    break;
  }
  return result;
}
