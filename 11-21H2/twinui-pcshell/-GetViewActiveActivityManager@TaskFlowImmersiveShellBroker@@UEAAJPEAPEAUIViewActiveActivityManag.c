/*
 * XREFs of ?GetViewActiveActivityManager@TaskFlowImmersiveShellBroker@@UEAAJPEAPEAUIViewActiveActivityManager@Activities@Data@Internal@Windows@@@Z @ 0x1803C5610
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureViewActiveActivityManager@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800A82A0 (-EnsureViewActiveActivityManager@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::GetViewActiveActivityManager(
        struct Windows::Internal::Data::Activities::IViewActiveActivityManager **this,
        struct Windows::Internal::Data::Activities::IViewActiveActivityManager **a2,
        __int64 a3)
{
  int active; // eax
  const char *v6; // r9
  struct Windows::Internal::Data::Activities::IViewActiveActivityManager *v7; // rcx
  __int64 result; // rax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  active = TaskFlowImmersiveShellBroker::EnsureViewActiveActivityManager(
             (TaskFlowImmersiveShellBroker *)this,
             (__int64)a2,
             a3);
  try
  {
    if ( active < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1E7,
        (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)active,
        v9);
    v7 = this[31];
    if ( v7 )
    {
      *a2 = v7;
      (*(void (__fastcall **)(struct Windows::Internal::Data::Activities::IViewActiveActivityManager *))(*(_QWORD *)v7 + 8LL))(v7);
    }
    else
    {
      *a2 = 0LL;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1EC,
                           (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
                           v6);
  }
  return result;
}
