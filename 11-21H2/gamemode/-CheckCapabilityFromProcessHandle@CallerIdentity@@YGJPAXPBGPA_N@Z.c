/*
 * XREFs of ?CheckCapabilityFromProcessHandle@CallerIdentity@@YGJPAXPBGPA_N@Z @ 0x100066E9
 * Callers:
 *     ?CheckCallerCapability@CallerIdentity@@YGJPBGPA_N@Z @ 0x10006756 (-CheckCallerCapability@CallerIdentity@@YGJPBGPA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z @ 0x100033B5 (-Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z.c)
 *     ?GetImpersonationTokenFromProcess@CallerIdentity@@YGJPAXKPAPAX@Z @ 0x100064A9 (-GetImpersonationTokenFromProcess@CallerIdentity@@YGJPAXKPAPAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6GHPAX@Z$1?CloseHandle@@YGH0@Z@details@wil@@@details@wil@@QAEXPAX@Z @ 0x1000655F (-reset@-$unique_storage@U-$handle_null_resource_policy@P6GHPAX@Z$1-CloseHandle@@YGH0@Z@details@w.c)
 *     ?CheckCapabilityFromImpersonationToken@CallerIdentity@@YGJPAXPBGPA_N@Z @ 0x100066A6 (-CheckCapabilityFromImpersonationToken@CallerIdentity@@YGJPAXPBGPA_N@Z.c)
 */

int __userpurge CallerIdentity::CheckCapabilityFromProcessHandle@<eax>(
        void *a1@<ecx>,
        CallerIdentity *this,
        void *a3,
        const unsigned __int16 *a4,
        bool *a5)
{
  void *ImpersonationTokenFromProcess; // eax
  int v7; // esi
  void *v9; // [esp+0h] [ebp-Ch]
  void *v10; // [esp+0h] [ebp-Ch]
  unsigned int v11; // [esp+4h] [ebp-8h]
  const unsigned __int16 *v12; // [esp+4h] [ebp-8h]
  HANDLE hObject; // [esp+8h] [ebp-4h] BYREF
  int retaddr; // [esp+10h] [ebp+4h]

  hObject = 0;
  *(_BYTE *)this = 0;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (__stdcall *)(void *),&int CloseHandle(void *)>>::reset(
    &hObject,
    0);
  ImpersonationTokenFromProcess = (void *)CallerIdentity::GetImpersonationTokenFromProcess(
                                            a1,
                                            &hObject,
                                            v9,
                                            v11,
                                            (void **)hObject);
  v7 = (int)ImpersonationTokenFromProcess;
  if ( (int)ImpersonationTokenFromProcess >= 0 )
    v7 = CallerIdentity::CheckCapabilityFromImpersonationToken((int)hObject, this, v10, v12, (bool *)hObject);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (wil::details::in1diag3 *)"onecore\\shell\\lib\\calleridentity\\calleridentity_capability.cpp",
      ImpersonationTokenFromProcess,
      (unsigned int)v10,
      (const char *)v12,
      (int)hObject);
  if ( hObject && hObject != (HANDLE)-1 )
    CloseHandle(hObject);
  return v7;
}
