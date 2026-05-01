/*
 * XREFs of ?UnsubscribeFromServices@PenWorkspaceDiscoverBroker@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801BCD10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18028E190 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PenWorkspaceDiscoverBroker::UnsubscribeFromServices(
        PenWorkspaceDiscoverBroker *this,
        struct IServiceProvider *a2)
{
  __int64 v2; // r9
  int v3; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)v2 + 104LL))(
           *((_QWORD *)this + 3),
           ((unsigned __int64)this + 8) & -(__int64)(this != (PenWorkspaceDiscoverBroker *)40));
    if ( v3 >= 0 )
      return 0LL;
    v5 = 187LL;
  }
  else
  {
    v3 = -2147418113;
    v5 = 186LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
    (const char *)(unsigned int)v3);
  return (unsigned int)v3;
}
