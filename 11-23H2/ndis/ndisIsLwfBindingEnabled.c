/*
 * XREFs of ndisIsLwfBindingEnabled @ 0x1C013CC04
 * Callers:
 *     ndisBuildMonitoringLwfBindings @ 0x1C013C7D8 (ndisBuildMonitoringLwfBindings.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     ndisIsBindPathEnabled @ 0x1C013CA98 (ndisIsBindPathEnabled.c)
 *     ndisIsLwfBindingEnabled_0 @ 0x1C013CCA8 (ndisIsLwfBindingEnabled_0.c)
 *     ?netsetupBuildBindingRegistryPath@@YAXW4NetSetupStoreType@@W4NetSetupSubkeyType@@AEBU_GUID@@PEBU3@33PEA_W@Z @ 0x1C01443A8 (-netsetupBuildBindingRegistryPath@@YAXW4NetSetupStoreType@@W4NetSetupSubkeyType@@AEBU_GUID@@PEBU.c)
 */

__int64 __fastcall ndisIsLwfBindingEnabled(__int64 a1, __int64 a2, __int64 a3, bool *a4)
{
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  wchar_t v11[256]; // [rsp+40h] [rbp-238h] BYREF

  result = ndisIsLwfBindingEnabled_0(a1, a2, a4);
  v10 = 0LL;
  if ( !(_DWORD)result && *a4 )
  {
    if ( *(_DWORD *)(a1 + 64) || *(_DWORD *)(a2 + 56) || *(_DWORD *)(a3 + 56) )
      v10 = 1LL;
    netsetupBuildBindingRegistryPath(v10, v9, a1, 0LL, a2, a3, v11);
    return ndisIsBindPathEnabled(v11, *(_BYTE *)(a3 + 52), a4);
  }
  return result;
}
