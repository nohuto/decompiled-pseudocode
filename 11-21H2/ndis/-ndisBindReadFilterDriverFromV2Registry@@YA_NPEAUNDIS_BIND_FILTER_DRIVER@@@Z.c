/*
 * XREFs of ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C012E7DC
 * Callers:
 *     ?ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C010E768 (-ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C002398C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     WPP_RECORDER_SF_S @ 0x1C002F054 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C0033A10 (WPP_RECORDER_SF_Sd.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C01065B8 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C011095C (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 *     ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C012E91C (-ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 */

bool __fastcall ndisBindReadFilterDriverFromV2Registry(struct NDIS_BIND_FILTER_DRIVER *a1)
{
  bool v2; // bl
  int v3; // eax
  char v5[4]; // [rsp+30h] [rbp-238h]
  KRegKey v6; // [rsp+40h] [rbp-228h] BYREF
  wchar_t v7[256]; // [rsp+50h] [rbp-218h] BYREF

  netsetupBuildObjectPath(3u, (__int64)&a1->Guid, 0, 2, v7);
  v2 = 0;
  v6.m_ptr = 0LL;
  v3 = KRegKey::Open(&v6, 1u, v7, 0LL);
  if ( v3 >= 0 )
  {
    v2 = ndisBindReadFilterDriverSettingsFromV2Registry(a1, &v6);
  }
  else if ( v3 == -1073741772 )
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
    *(_DWORD *)v5 = v3;
    WPP_RECORDER_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xAu,
      0xEu,
      (struct _GUID *)&WPP_d974074cd3cc3e6d13bf92274613e368_Traceguids,
      v7,
      *(_DWORD *)v5);
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v6.m_ptr);
  return v2;
}
