/*
 * XREFs of ndisReadNicBindProperties @ 0x1C013D150
 * Callers:
 *     ?ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z @ 0x1C013C5C4 (-ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C011290C (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C011E124 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C012B7B0 (--1KRegKey@@QEAA@XZ.c)
 *     ndisBlowStringListIntoAtoms @ 0x1C013C494 (ndisBlowStringListIntoAtoms.c)
 *     ndisReplaceBindTokens @ 0x1C013D470 (ndisReplaceBindTokens.c)
 */

__int64 __fastcall ndisReadNicBindProperties(__int128 *a1, __int64 a2)
{
  __int128 v2; // xmm0
  unsigned int v5; // edi
  unsigned int v7; // ebx
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  void **p_Handle; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t v10[256]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = *a1;
  Handle = 0LL;
  *(_OWORD *)a2 = v2;
  netsetupBuildObjectPath(2u, (__int64)a1, 0, 1, v10);
  v5 = KRegKey::Open((KRegKey *)&Handle, 1u, v10, 0LL);
  if ( v5 == -1073741772 )
  {
    *(_DWORD *)(a2 + 64) = 1;
    netsetupBuildObjectPath(2u, (__int64)a1, 1u, 1, v10);
    v5 = KRegKey::Open((KRegKey *)&Handle, 1u, v10, 0LL);
  }
  if ( v5
    || (p_Handle = &Handle,
        (v5 = ndisBlowStringListIntoAtoms(&p_Handle, (const struct _NETSETUPPROPKEY *)&unk_1C00E4840, a2 + 16)) != 0)
    || (v5 = ndisBlowStringListIntoAtoms(&p_Handle, (const struct _NETSETUPPROPKEY *)&unk_1C00E4810, a2 + 32)) != 0
    || (v5 = ndisBlowStringListIntoAtoms(&p_Handle, (const struct _NETSETUPPROPKEY *)&unk_1C00E47F8, a2 + 48)) != 0 )
  {
    KRegKey::~KRegKey((KRegKey *)&Handle);
    return v5;
  }
  else
  {
    v7 = ndisReplaceBindTokens(a2, &p_Handle);
    if ( v7 )
    {
      KRegKey::~KRegKey((KRegKey *)&Handle);
      return v7;
    }
    else
    {
      if ( Handle )
        ZwClose(Handle);
      return 0LL;
    }
  }
}
