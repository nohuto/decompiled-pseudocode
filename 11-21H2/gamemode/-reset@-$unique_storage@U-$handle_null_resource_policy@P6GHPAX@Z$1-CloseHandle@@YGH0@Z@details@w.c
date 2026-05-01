/*
 * XREFs of ?reset@?$unique_storage@U?$handle_null_resource_policy@P6GHPAX@Z$1?CloseHandle@@YGH0@Z@details@wil@@@details@wil@@QAEXPAX@Z @ 0x1000655F
 * Callers:
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YGJPAXPBGPA_N@Z @ 0x100066E9 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YGJPAXPBGPA_N@Z.c)
 *     ?CheckCallerCapability@CallerIdentity@@YGJPBGPA_N@Z @ 0x10006756 (-CheckCallerCapability@CallerIdentity@@YGJPBGPA_N@Z.c)
 * Callees:
 *     <none>
 */

void *__thiscall wil::details::unique_storage<wil::details::handle_null_resource_policy<int (__stdcall *)(void *),&int CloseHandle(void *)>>::reset(
        void **this,
        void *a2)
{
  void *v3; // edi
  DWORD LastError; // esi
  void *result; // eax

  v3 = *this;
  if ( *this && v3 != (void *)-1 )
  {
    LastError = GetLastError();
    CloseHandle(v3);
    SetLastError(LastError);
  }
  result = a2;
  *this = a2;
  return result;
}
