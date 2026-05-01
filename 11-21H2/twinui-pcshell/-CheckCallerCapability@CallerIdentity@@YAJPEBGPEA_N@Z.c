/*
 * XREFs of ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x1805E867C
 * Callers:
 *     ?EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ @ 0x1805E77BC (-EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x1800C6334 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180107578 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??$__invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z @ 0x18018017C (--$__invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z.c)
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x1805E879C (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CallerIdentity::CheckCallerCapability(CallerIdentity *this, const unsigned __int16 *a2, bool *a3)
{
  int CallingProcessHandle; // eax
  bool *v5; // r9
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CallerIdentity *v9; // [rsp+30h] [rbp+8h] BYREF

  *(_BYTE *)a2 = 0;
  v9 = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(-1LL, 0, (HANDLE *)&v9);
  v6 = CallingProcessHandle;
  if ( CallingProcessHandle >= 0 )
    v6 = CallerIdentity::CheckCapabilityFromProcessHandle(v9, (void *)&stru_180689FE8, a2, v5);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23,
      (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity_capability.cpp",
      (const char *)(unsigned int)CallingProcessHandle);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)&v9);
  return v6;
}
