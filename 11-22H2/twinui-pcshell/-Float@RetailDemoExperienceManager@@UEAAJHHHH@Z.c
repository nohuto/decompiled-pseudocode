/*
 * XREFs of ?Float@RetailDemoExperienceManager@@UEAAJHHHH@Z @ 0x1804576B0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?_Float@RetailDemoExperienceManager@@AEAAXXZ @ 0x180458CA4 (-_Float@RetailDemoExperienceManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RetailDemoExperienceManager::Float(
        RetailDemoExperienceManager *this,
        int a2,
        int a3,
        int a4,
        int a5)
{
  const char *v9; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)this + 336));
  *((_DWORD *)this + 59) = a2;
  *((_DWORD *)this + 60) = a3;
  *((_DWORD *)this + 61) = a4;
  *((_DWORD *)this + 62) = a5;
  try
  {
    RetailDemoExperienceManager::_Float((RetailDemoExperienceManager *)((char *)this - 128));
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xFA,
                           (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
                           v9);
  }
  return result;
}
