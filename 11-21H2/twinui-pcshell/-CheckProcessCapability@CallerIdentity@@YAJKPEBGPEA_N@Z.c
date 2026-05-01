/*
 * XREFs of ?CheckProcessCapability@CallerIdentity@@YAJKPEBGPEA_N@Z @ 0x1805E8868
 * Callers:
 *     ?CheckCapabilityFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEBGPEA_N@Z @ 0x1805E7838 (-CheckCapabilityFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEBGPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180107578 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x1805E879C (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CallerIdentity::CheckProcessCapability(DWORD dwProcessId, void *a2, unsigned __int16 *a3, bool *a4)
{
  HANDLE v6; // rax
  bool *v7; // r9
  unsigned int LastError; // ebx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v12; // [rsp+40h] [rbp+18h] BYREF

  *(_BYTE *)a3 = 0;
  v6 = OpenProcess(0x1000u, 0, dwProcessId);
  v12 = v6;
  if ( (((unsigned __int64)v6 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    v9 = CallerIdentity::CheckCapabilityFromProcessHandle((CallerIdentity *)v6, a2, a3, v7);
    LastError = v9;
    if ( v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x45,
        (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity_capability.cpp",
        (const char *)(unsigned int)v9);
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x44,
                  (int)"onecore\\shell\\lib\\calleridentity\\calleridentity_capability.cpp",
                  (const char *)v7);
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v12);
  return LastError;
}
