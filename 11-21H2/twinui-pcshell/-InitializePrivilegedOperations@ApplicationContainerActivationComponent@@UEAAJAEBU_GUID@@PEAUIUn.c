/*
 * XREFs of ?InitializePrivilegedOperations@ApplicationContainerActivationComponent@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180572F50
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$InitializePrivilegedOperationsHelper@V?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@$$V@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18056F93C (--$InitializePrivilegedOperationsHelper@V-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exce.c)
 */

__int64 __fastcall ApplicationContainerActivationComponent::InitializePrivilegedOperations(
        ApplicationContainerActivationComponent *this,
        struct _GUID *a2,
        struct IUnknown *a3)
{
  int v3; // eax
  const char *v4; // r9
  __int64 result; // rax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    v3 = InitializePrivilegedOperationsHelper<wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>,>(
           a2,
           a3,
           (__int64 *)this + 8);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA5,
        (int)"pcshell\\twinui\\vailactivation\\lib\\applicationcontaineractivation.cpp",
        (const char *)(unsigned int)v3,
        v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA7,
                           (int)"pcshell\\twinui\\vailactivation\\lib\\applicationcontaineractivation.cpp",
                           v4);
  }
  return result;
}
