/*
 * XREFs of ?CheckCallerCapability@CallerIdentity@@YGJPBGPA_N@Z @ 0x10006756
 * Callers:
 *     _ReleaseExclusiveCpuSets@0 @ 0x10005C20 (_ReleaseExclusiveCpuSets@0.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z @ 0x100033B5 (-Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YGJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PAPAX@Z @ 0x10006424 (-GetCallingProcessHandle@CallerIdentity@@YGJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PAPAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6GHPAX@Z$1?CloseHandle@@YGH0@Z@details@wil@@@details@wil@@QAEXPAX@Z @ 0x1000655F (-reset@-$unique_storage@U-$handle_null_resource_policy@P6GHPAX@Z$1-CloseHandle@@YGH0@Z@details@w.c)
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YGJPAXPBGPA_N@Z @ 0x100066E9 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YGJPAXPBGPA_N@Z.c)
 */

int __fastcall CallerIdentity::CheckCallerCapability(int a1, CallerIdentity *a2)
{
  void *CallingProcessHandle; // eax
  int v4; // esi
  void *v6; // [esp+0h] [ebp-Ch]
  const unsigned __int16 *v7; // [esp+4h] [ebp-8h]
  HANDLE hObject; // [esp+8h] [ebp-4h] BYREF
  int retaddr; // [esp+10h] [ebp+4h]

  hObject = 0;
  *(_BYTE *)a2 = 0;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (__stdcall *)(void *),&int CloseHandle(void *)>>::reset(
    &hObject,
    0);
  CallingProcessHandle = (void *)CallerIdentity::GetCallingProcessHandle(&hObject);
  v4 = (int)CallingProcessHandle;
  if ( (int)CallingProcessHandle >= 0 )
    v4 = CallerIdentity::CheckCapabilityFromProcessHandle(hObject, a2, v6, v7, (bool *)hObject);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (wil::details::in1diag3 *)"onecore\\shell\\lib\\calleridentity\\calleridentity_capability.cpp",
      CallingProcessHandle,
      (unsigned int)v6,
      (const char *)v7,
      (int)hObject);
  if ( hObject && hObject != (HANDLE)-1 )
    CloseHandle(hObject);
  return v4;
}
