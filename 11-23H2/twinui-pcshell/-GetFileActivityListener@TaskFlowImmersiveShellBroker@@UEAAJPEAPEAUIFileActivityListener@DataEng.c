/*
 * XREFs of ?GetFileActivityListener@TaskFlowImmersiveShellBroker@@UEAAJPEAPEAUIFileActivityListener@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x180065630
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskFlowImmersiveShellBroker::GetFileActivityListener(
        TaskFlowImmersiveShellBroker *this,
        struct Windows::Internal::Shell::TaskFlow::DataEngine::IFileActivityListener **a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, struct Windows::Internal::Shell::TaskFlow::DataEngine::IFileActivityListener **); // rcx
  int v4; // ebx
  __int64 v5; // rdx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  if ( *((_DWORD *)this + 46) == 1 )
  {
    v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct Windows::Internal::Shell::TaskFlow::DataEngine::IFileActivityListener **))*((_QWORD *)this + 27);
    if ( !v2 )
      return 0LL;
    v4 = (**v2)(v2, &GUID_6405dff2_9eee_41c0_885e_034873207439, a2);
    if ( v4 >= 0 )
      return 0LL;
    v5 = 366LL;
  }
  else
  {
    v4 = -2147467260;
    v5 = 362LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
    (const char *)(unsigned int)v4,
    v6);
  return (unsigned int)v4;
}
