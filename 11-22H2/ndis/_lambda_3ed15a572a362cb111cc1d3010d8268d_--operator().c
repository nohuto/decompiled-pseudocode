/*
 * XREFs of _lambda_3ed15a572a362cb111cc1d3010d8268d_::operator() @ 0x1C011CF24
 * Callers:
 *     netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d___ @ 0x1C011C598 (netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d___.c)
 * Callees:
 *     WPP_RECORDER_SF_Sd @ 0x1C002BA00 (WPP_RECORDER_SF_Sd.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C011290C (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x1C0118BE0 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C011E124 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C012B7B0 (--1KRegKey@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_3ed15a572a362cb111cc1d3010d8268d_::operator()(unsigned int *a1, struct _GUID *a2)
{
  unsigned int v2; // edi
  int v4; // eax
  int v5; // eax
  char v7[4]; // [rsp+30h] [rbp-D0h]
  char v8[4]; // [rsp+30h] [rbp-D0h]
  HANDLE v9; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t v11[256]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = *a1;
  netsetupBuildObjectPath(2LL, a2, *a1, 1LL, v11);
  v9 = 0LL;
  v4 = KRegKey::Open((KRegKey *)&v9, 1u, v11, 0LL);
  if ( v4 < 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v7 = v4;
      WPP_RECORDER_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x16u,
        0x10u,
        (struct _GUID *)&WPP_388d5b0555a83352147e712e55d69f1d_Traceguids,
        v11,
        *(_DWORD *)v7);
    }
    goto LABEL_13;
  }
  netsetupBuildObjectPath(2LL, a2, v2, 3LL, v11);
  Handle = 0LL;
  v5 = KRegKey::Open((KRegKey *)&Handle, 1u, v11, 0LL);
  if ( (int)(v5 + 0x80000000) >= 0 && v5 != -1073741772 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v8 = v5;
      WPP_RECORDER_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x16u,
        0x11u,
        (struct _GUID *)&WPP_388d5b0555a83352147e712e55d69f1d_Traceguids,
        v11,
        *(_DWORD *)v8);
    }
    KRegKey::~KRegKey((KRegKey *)&Handle);
LABEL_13:
    KRegKey::~KRegKey((KRegKey *)&v9);
    return 0LL;
  }
  ndisLoadNetworkInterfaceFromPersistedState(a2, (struct KRegKey *)&v9, (struct KRegKey *)&Handle);
  if ( Handle )
    ZwClose(Handle);
  if ( v9 )
    ZwClose(v9);
  return 0LL;
}
