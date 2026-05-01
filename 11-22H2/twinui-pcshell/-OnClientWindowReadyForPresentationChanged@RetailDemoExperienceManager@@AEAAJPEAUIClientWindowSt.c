/*
 * XREFs of ?OnClientWindowReadyForPresentationChanged@RetailDemoExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x180457EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RetailDemoExperienceManager::OnClientWindowReadyForPresentationChanged(
        RetailDemoExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *a3)
{
  int v4; // eax
  const char *v5; // r9
  __int64 result; // rax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp+18h] BYREF

  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)this + 464));
  try
  {
    v4 = (*(__int64 (**)(void))(*(_QWORD *)a3 + 48LL))();
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x26A,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v4,
        v7);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x276,
                           (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
                           v5);
  }
  return result;
}
