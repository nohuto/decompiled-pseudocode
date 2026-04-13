/*
 * XREFs of ?IsEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x18005A0C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180042CB4 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _anonymous_namespace_::DecodeBatchIdFromCreativeId @ 0x1800553DC (_anonymous_namespace_--DecodeBatchIdFromCreativeId.c)
 *     ?DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z @ 0x180055678 (-DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z.c)
 *     ?GetCreativeEventString@ContentManagement@@YAJPEAUHSTRING__@@W4CreativeEventType@1@0PEAPEAG@Z @ 0x18005763C (-GetCreativeEventString@ContentManagement@@YAJPEAUHSTRING__@@W4CreativeEventType@1@0PEAPEAG@Z.c)
 *     ?GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z @ 0x180058560 (-GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x1800627B4 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 */

__int64 __fastcall ContentManagement::CreativeEventReportedCache::IsEventReported(
        __int64 a1,
        HSTRING a2,
        unsigned int a3,
        bool *a4,
        bool *a5)
{
  int DoesSettingExist; // eax
  unsigned int v10; // ebx
  const WCHAR *v12; // rcx
  const unsigned __int16 *v13; // rdx
  unsigned __int16 **v14; // r9
  int v15; // eax
  const WCHAR *v16; // r8
  int CreativeEventString; // eax
  bool *v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  unsigned __int16 v22; // [rsp+30h] [rbp-41h] BYREF
  LPCWSTR lpValue; // [rsp+38h] [rbp-39h] BYREF
  __int64 v24; // [rsp+40h] [rbp-31h]
  __int64 v25; // [rsp+48h] [rbp-29h]
  LPCWCH lpString1; // [rsp+50h] [rbp-21h] BYREF
  __int64 v27; // [rsp+58h] [rbp-19h]
  __int64 v28; // [rsp+60h] [rbp-11h]
  LPCWCH lpString2[4]; // [rsp+68h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+57h]

  *a5 = 0;
  DoesSettingExist = CreativeFramework::ContentDeliveryManagerSettings::DoesSettingExist(
                       *(const WCHAR **)(a1 + 24),
                       L"LastCreativeBatchId",
                       &v22,
                       a4);
  v10 = DoesSettingExist;
  if ( DoesSettingExist < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F2,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)DoesSettingExist);
    return v10;
  }
  if ( (_BYTE)v22 )
  {
    WindowsGetStringRawBuffer(a2, 0LL);
    anonymous_namespace_::DecodeBatchIdFromCreativeId((__int64)lpString2);
    lpString1 = 0LL;
    v27 = 0LL;
    v28 = 0LL;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
    v12 = *(const WCHAR **)(a1 + 24);
    v27 = -1LL;
    v28 = -1LL;
    v15 = ContentManagement::GetExistingStringSettingRemoveOnFailure(v12, v13, (unsigned __int16 *)&lpString1, v14);
    v10 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F7,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v15);
LABEL_16:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
      LOBYTE(v20) = 1;
      std::wstring::_Tidy(lpString2, v20, 0LL);
      return v10;
    }
    if ( lpString1 )
    {
      v16 = (const WCHAR *)lpString2;
      if ( lpString2[3] >= (LPCWCH)8 )
        v16 = lpString2[0];
      if ( CompareStringOrdinal(lpString1, -1, v16, -1, 1) == 2 )
      {
        lpValue = 0LL;
        v24 = 0LL;
        v25 = 0LL;
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpValue);
        v24 = -1LL;
        v25 = -1LL;
        CreativeEventString = ContentManagement::GetCreativeEventString(a2, a3, (HSTRING)a4, &lpValue);
        v10 = CreativeEventString;
        if ( CreativeEventString < 0 )
        {
          v19 = 763LL;
LABEL_15:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v19,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
            (const char *)(unsigned int)CreativeEventString);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpValue);
          goto LABEL_16;
        }
        CreativeEventString = CreativeFramework::ContentDeliveryManagerSettings::DoesSettingExist(
                                *(const WCHAR **)(a1 + 48),
                                lpValue,
                                &v22,
                                v18);
        v10 = CreativeEventString;
        if ( CreativeEventString < 0 )
        {
          v19 = 767LL;
          goto LABEL_15;
        }
        *a5 = (_BYTE)v22 != 0;
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpValue);
      }
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
    LOBYTE(v21) = 1;
    std::wstring::_Tidy(lpString2, v21, 0LL);
  }
  return 0LL;
}
