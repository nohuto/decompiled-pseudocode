/*
 * XREFs of ?PerformDelayedInitialization@PenWorkspaceDiscoverBroker@@UEAAJXZ @ 0x18017E340
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801EAD20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PenWorkspaceDiscoverBroker::PerformDelayedInitialization(PenWorkspaceDiscoverBroker *this)
{
  __int64 v1; // r9
  int v2; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 3);
  if ( v1 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)v1 + 96LL))(
           *((_QWORD *)this + 3),
           ((unsigned __int64)this + 8) & -(__int64)(this != (PenWorkspaceDiscoverBroker *)40));
    if ( v2 >= 0 )
      return 0LL;
    v4 = 180LL;
  }
  else
  {
    v2 = -2147418113;
    v4 = 179LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
    (const char *)(unsigned int)v2);
  return (unsigned int)v2;
}
