/*
 * XREFs of ndisIsProtocolBindingEnabled @ 0x1C013CD38
 * Callers:
 *     ?ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z @ 0x1C013C5A4 (-ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     ndisIsBindPathEnabled @ 0x1C013CA98 (ndisIsBindPathEnabled.c)
 *     ?netsetupBuildBindingRegistryPath@@YAXW4NetSetupStoreType@@W4NetSetupSubkeyType@@AEBU_GUID@@PEBU3@33PEA_W@Z @ 0x1C01443A8 (-netsetupBuildBindingRegistryPath@@YAXW4NetSetupStoreType@@W4NetSetupSubkeyType@@AEBU_GUID@@PEBU.c)
 */

__int64 __fastcall ndisIsProtocolBindingEnabled(__int64 a1, __int64 a2, bool *a3)
{
  __int64 v6; // rcx
  wchar_t v8[256]; // [rsp+40h] [rbp-218h] BYREF

  if ( *(_DWORD *)(a1 + 64) || (v6 = 0LL, *(_DWORD *)(a2 + 60)) )
    v6 = 1LL;
  netsetupBuildBindingRegistryPath(v6, 0LL, a1, a2, 0LL, 0LL, v8);
  return ndisIsBindPathEnabled(v8, *(_BYTE *)(a2 + 56), a3);
}
