/*
 * XREFs of ndisBindReadFilterDriverFromV3Registry @ 0x1C011C7F8
 * Callers:
 *     ?ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C011F148 (-ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Sd @ 0x1C002BA00 (WPP_RECORDER_SF_Sd.c)
 *     WPP_RECORDER_SF_S @ 0x1C003572C (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C011290C (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ndisBindReadFilterDriverSettingsFromV3Registry @ 0x1C011DA28 (ndisBindReadFilterDriverSettingsFromV3Registry.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C011E124 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C012B7B0 (--1KRegKey@@QEAA@XZ.c)
 */

char __fastcall ndisBindReadFilterDriverFromV3Registry(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // eax
  int v4; // ecx
  char FilterDriverSettingsFromV3Registry; // bl
  char v7[4]; // [rsp+38h] [rbp-D0h]
  HANDLE Handle[2]; // [rsp+48h] [rbp-C0h] BYREF
  wchar_t v9[256]; // [rsp+58h] [rbp-B0h] BYREF

  v1 = a1 + 24;
  netsetupBuildObjectPath(3LL, a1 + 24, 0LL, 1LL, v9);
  Handle[0] = 0LL;
  v3 = KRegKey::Open((KRegKey *)Handle, 1u, v9, 0LL);
  v4 = v3;
  if ( v3 < 0 )
  {
    if ( v3 == -1073741772
      && (!*((_BYTE *)qword_1C00F5730 + 96)
       || (netsetupBuildObjectPath(3LL, v1, 1LL, 1LL, v9),
           v4 = KRegKey::Open((KRegKey *)Handle, 1u, v9, 0LL),
           v4 == -1073741772)) )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xAu,
          0xAu,
          (struct _GUID *)&WPP_d974074cd3cc3e6d13bf92274613e368_Traceguids,
          v9);
    }
    else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v7 = v4;
      WPP_RECORDER_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xAu,
        0xBu,
        (struct _GUID *)&WPP_d974074cd3cc3e6d13bf92274613e368_Traceguids,
        v9,
        *(_DWORD *)v7);
    }
    KRegKey::~KRegKey((KRegKey *)Handle);
    return 0;
  }
  else
  {
    FilterDriverSettingsFromV3Registry = ndisBindReadFilterDriverSettingsFromV3Registry(a1, Handle);
    if ( Handle[0] )
      ZwClose(Handle[0]);
    return FilterDriverSettingsFromV3Registry;
  }
}
