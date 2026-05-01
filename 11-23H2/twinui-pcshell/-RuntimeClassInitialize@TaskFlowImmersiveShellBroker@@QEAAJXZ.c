/*
 * XREFs of ?RuntimeClassInitialize@TaskFlowImmersiveShellBroker@@QEAAJXZ @ 0x18010BBEC
 * Callers:
 *     ??$MakeAndInitialize@VTaskFlowImmersiveShellBroker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18010BA2C (--$MakeAndInitialize@VTaskFlowImmersiveShellBroker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEA.c)
 * Callees:
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18010BDB8 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::RuntimeClassInitialize(TaskFlowImmersiveShellBroker *this)
{
  CImmersiveShellComponent *v1; // rdi
  int v2; // ebx
  __int64 v4; // rdx
  int v5[4]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v1 = (TaskFlowImmersiveShellBroker *)((char *)this + 80);
  *(_OWORD *)v5 = *(_OWORD *)&SID_TaskFlowImmersiveShellBroker.Revision;
  v6 = 0LL;
  v2 = CImmersiveShellComponent::RegisterServiceInformation(
         (TaskFlowImmersiveShellBroker *)((char *)this + 80),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)v5,
         1u);
  if ( v2 < 0 )
  {
    v4 = 53LL;
  }
  else
  {
    *(_OWORD *)v5 = *(_OWORD *)&SID_TaskFlowUserActivityMonitor.Revision;
    v6 = 0LL;
    v2 = CImmersiveShellComponent::RegisterServiceInformation(
           v1,
           (const struct CImmersiveShellComponent::ISC_SERVICE *)v5,
           1u);
    if ( v2 >= 0 )
      return 0LL;
    v4 = 55LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
    (const char *)(unsigned int)v2,
    v5[0]);
  return (unsigned int)v2;
}
