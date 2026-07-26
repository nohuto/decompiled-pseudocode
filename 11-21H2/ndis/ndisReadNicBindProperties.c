/*
 * XREFs of ndisReadNicBindProperties @ 0x1C0131264
 * Callers:
 *     ?ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z @ 0x1C0130784 (-ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C002398C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C01065B8 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C011095C (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 *     ndisBlowStringListIntoAtoms @ 0x1C0130658 (ndisBlowStringListIntoAtoms.c)
 *     ndisReplaceBindTokens @ 0x1C0131518 (ndisReplaceBindTokens.c)
 */

__int64 __fastcall ndisReadNicBindProperties(__int128 *a1, __int64 a2)
{
  __int128 v2; // xmm0
  unsigned int v3; // ebx
  unsigned int v6; // eax
  KRegKey *v8; // [rsp+30h] [rbp-D0h] BYREF
  KRegKey v9; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t v10[256]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = *a1;
  v3 = 0;
  v9.m_ptr = 0LL;
  *(_OWORD *)a2 = v2;
  netsetupBuildObjectPath(2u, (__int64)a1, 0, 1, v10);
  v6 = KRegKey::Open(&v9, 1u, v10, 0LL);
  if ( v6 == -1073741772 )
  {
    *(_DWORD *)(a2 + 64) = 1;
    netsetupBuildObjectPath(2u, (__int64)a1, 1u, 1, v10);
    v6 = KRegKey::Open(&v9, 1u, v10, 0LL);
  }
  if ( v6
    || (v8 = &v9,
        (v6 = ndisBlowStringListIntoAtoms((void ***)&v8, (const struct _NETSETUPPROPKEY *)&unk_1C00DC5A0, a2 + 16)) != 0)
    || (v6 = ndisBlowStringListIntoAtoms((void ***)&v8, (const struct _NETSETUPPROPKEY *)&unk_1C00DC570, a2 + 32)) != 0
    || (v6 = ndisBlowStringListIntoAtoms((void ***)&v8, (const struct _NETSETUPPROPKEY *)&unk_1C00DC558, a2 + 48)) != 0
    || (v6 = ndisReplaceBindTokens(a2, &v8)) != 0 )
  {
    v3 = v6;
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v9.m_ptr);
  return v3;
}
