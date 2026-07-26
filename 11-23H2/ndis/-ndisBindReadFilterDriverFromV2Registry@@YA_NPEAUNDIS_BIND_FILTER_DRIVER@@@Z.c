/*
 * XREFs of ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C013A4F8
 * Callers:
 *     ?ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C011F108 (-ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Sd @ 0x1C002BB90 (WPP_RECORDER_SF_Sd.c)
 *     WPP_RECORDER_SF_S @ 0x1C00358BC (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C01128CC (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C011E0E4 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C012B770 (--1KRegKey@@QEAA@XZ.c)
 *     ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C013A644 (-ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 */

bool __fastcall ndisBindReadFilterDriverFromV2Registry(struct NDIS_BIND_FILTER_DRIVER *a1)
{
  int v2; // eax
  bool FilterDriverSettingsFromV2Registry; // bl
  char v5[4]; // [rsp+30h] [rbp-238h]
  HANDLE Handle[2]; // [rsp+40h] [rbp-228h] BYREF
  wchar_t v7[256]; // [rsp+50h] [rbp-218h] BYREF

  netsetupBuildObjectPath(3u, (__int64)&a1->Guid, 0, 2, v7);
  Handle[0] = 0LL;
  v2 = KRegKey::Open((KRegKey *)Handle, 1u, v7, 0LL);
  if ( v2 >= 0 )
  {
    FilterDriverSettingsFromV2Registry = ndisBindReadFilterDriverSettingsFromV2Registry(a1, (struct KRegKey *)Handle);
    if ( Handle[0] )
      ZwClose(Handle[0]);
    return FilterDriverSettingsFromV2Registry;
  }
  else
  {
    if ( v2 == -1073741772 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xAu,
          0xDu,
          (struct _GUID *)&WPP_d974074cd3cc3e6d13bf92274613e368_Traceguids,
          v7);
    }
    else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v5 = v2;
      WPP_RECORDER_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xAu,
        0xEu,
        (struct _GUID *)&WPP_d974074cd3cc3e6d13bf92274613e368_Traceguids,
        v7,
        *(_DWORD *)v5);
    }
    KRegKey::~KRegKey((KRegKey *)Handle);
    return 0;
  }
}
