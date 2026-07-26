/*
 * XREFs of ndisBindReadFilterDriverFromV3Registry @ 0x1C010E7A4
 * Callers:
 *     ?ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C010E768 (-ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C002398C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     WPP_RECORDER_SF_S @ 0x1C002F054 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C0033A10 (WPP_RECORDER_SF_Sd.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C01065B8 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ndisBindReadFilterDriverSettingsFromV3Registry @ 0x1C0110270 (ndisBindReadFilterDriverSettingsFromV3Registry.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C011095C (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 */

char __fastcall ndisBindReadFilterDriverFromV3Registry(__int64 a1)
{
  __int64 v1; // rsi
  char v3; // bl
  int v4; // eax
  int v5; // ecx
  char v7[4]; // [rsp+30h] [rbp-238h]
  KRegKey v8; // [rsp+40h] [rbp-228h] BYREF
  wchar_t v9[256]; // [rsp+50h] [rbp-218h] BYREF

  v1 = a1 + 24;
  netsetupBuildObjectPath(3LL, a1 + 24, 0LL, 1LL, v9);
  v3 = 0;
  v8.m_ptr = 0LL;
  v4 = KRegKey::Open(&v8, 1u, v9, 0LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    if ( v4 == -1073741772
      && (!*((_BYTE *)qword_1C00EC738 + 96)
       || (netsetupBuildObjectPath(3LL, v1, 1LL, 1LL, v9), v5 = KRegKey::Open(&v8, 1u, v9, 0LL), v5 == -1073741772)) )
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
      *(_DWORD *)v7 = v5;
      WPP_RECORDER_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xAu,
        0xBu,
        (struct _GUID *)&WPP_d974074cd3cc3e6d13bf92274613e368_Traceguids,
        v9,
        *(_DWORD *)v7);
    }
  }
  else
  {
    v3 = ndisBindReadFilterDriverSettingsFromV3Registry(a1, &v8);
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v8.m_ptr);
  return v3;
}
