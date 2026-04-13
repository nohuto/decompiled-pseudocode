/*
 * XREFs of ?IsReportedEventExpired@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x18005A3E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180042C64 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _anonymous_namespace_::DecodeBatchIdFromCreativeId @ 0x18005538C (_anonymous_namespace_--DecodeBatchIdFromCreativeId.c)
 *     ?DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z @ 0x180055628 (-DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z.c)
 *     ?GetCreativeEventString@ContentManagement@@YAJPEAUHSTRING__@@W4CreativeEventType@1@0PEAPEAG@Z @ 0x1800575EC (-GetCreativeEventString@ContentManagement@@YAJPEAUHSTRING__@@W4CreativeEventType@1@0PEAPEAG@Z.c)
 *     ?GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z @ 0x180058510 (-GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z.c)
 *     ?GetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAU_FILETIME@@@Z @ 0x1800585E4 (-GetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAU_FILETIME@@@.c)
 *     _anonymous_namespace_::GetImpressionEventExpirationTime @ 0x180058800 (_anonymous_namespace_--GetImpressionEventExpirationTime.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x180062764 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::CreativeEventReportedCache::IsReportedEventExpired(
        __int64 a1,
        HSTRING a2,
        int a3,
        bool *a4,
        bool *a5)
{
  int DoesSettingExist; // eax
  unsigned int v9; // ebx
  const unsigned __int16 *v11; // rdx
  unsigned __int16 **v12; // r9
  int v13; // eax
  const WCHAR *v14; // r8
  int CreativeEventString; // eax
  bool *v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rbx
  PCWSTR StringRawBuffer; // rax
  unsigned __int64 ImpressionEventExpirationTime; // rbx
  __int64 v22; // rdx
  unsigned __int16 v23; // [rsp+30h] [rbp-51h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+38h] [rbp-49h] BYREF
  LPCWSTR lpValue; // [rsp+40h] [rbp-41h] BYREF
  __int64 v26; // [rsp+48h] [rbp-39h]
  __int64 v27; // [rsp+50h] [rbp-31h]
  LPCWCH lpString1; // [rsp+58h] [rbp-29h] BYREF
  __int64 v29; // [rsp+60h] [rbp-21h]
  __int64 v30; // [rsp+68h] [rbp-19h]
  LPCWCH lpString2[4]; // [rsp+70h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]

  *a5 = 0;
  if ( !a3 )
  {
    DoesSettingExist = CreativeFramework::ContentDeliveryManagerSettings::DoesSettingExist(
                         *(const WCHAR **)(a1 + 24),
                         L"LastCreativeBatchId",
                         &v23,
                         a4);
    v9 = DoesSettingExist;
    if ( DoesSettingExist < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x33A,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)DoesSettingExist);
      return v9;
    }
    if ( (_BYTE)v23 )
    {
      WindowsGetStringRawBuffer(a2, 0LL);
      anonymous_namespace_::DecodeBatchIdFromCreativeId((__int64)lpString2);
      lpString1 = 0LL;
      v29 = 0LL;
      v30 = 0LL;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
      v29 = -1LL;
      v30 = -1LL;
      v13 = ContentManagement::GetExistingStringSettingRemoveOnFailure(
              *(LPCWSTR *)(a1 + 24),
              v11,
              (unsigned __int16 *)&lpString1,
              v12);
      v9 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x340,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)v13);
LABEL_20:
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
        LOBYTE(v18) = 1;
        std::wstring::_Tidy(lpString2, v18, 0LL);
        return v9;
      }
      if ( lpString1 )
      {
        v14 = (const WCHAR *)lpString2;
        if ( lpString2[3] >= (LPCWCH)8 )
          v14 = lpString2[0];
        if ( CompareStringOrdinal(lpString1, -1, v14, -1, 1) == 2 )
        {
          lpValue = 0LL;
          v26 = 0LL;
          v27 = 0LL;
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpValue);
          v26 = -1LL;
          v27 = -1LL;
          CreativeEventString = ContentManagement::GetCreativeEventString(a2, 0, (HSTRING)a4, &lpValue);
          v9 = CreativeEventString;
          if ( CreativeEventString < 0 )
          {
            v17 = 836LL;
LABEL_19:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v17,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
              (const char *)(unsigned int)CreativeEventString);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpValue);
            goto LABEL_20;
          }
          CreativeEventString = CreativeFramework::ContentDeliveryManagerSettings::DoesSettingExist(
                                  *(const WCHAR **)(a1 + 48),
                                  lpValue,
                                  &v23,
                                  v16);
          v9 = CreativeEventString;
          if ( CreativeEventString < 0 )
          {
            v17 = 840LL;
            goto LABEL_19;
          }
          if ( (_BYTE)v23 )
          {
            CreativeEventString = CreativeFramework::ContentDeliveryManagerSettings::GetFileTimeSetting(
                                    *(const WCHAR **)(a1 + 48),
                                    lpValue,
                                    0LL,
                                    &SystemTimeAsFileTime);
            v9 = CreativeEventString;
            if ( CreativeEventString < 0 )
            {
              v17 = 846LL;
              goto LABEL_19;
            }
            v19 = SystemTimeAsFileTime.dwLowDateTime + ((unsigned __int64)SystemTimeAsFileTime.dwHighDateTime << 32);
            StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
            ImpressionEventExpirationTime = anonymous_namespace_::GetImpressionEventExpirationTime(
                                              0LL,
                                              (__int64)StringRawBuffer,
                                              v19);
            GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
            *a5 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32) >= ImpressionEventExpirationTime;
          }
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpValue);
        }
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
      LOBYTE(v22) = 1;
      std::wstring::_Tidy(lpString2, v22, 0LL);
    }
  }
  return 0LL;
}
