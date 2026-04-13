/*
 * XREFs of ?IsReportedEventExpired@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x1800600E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _anonymous_namespace_::DecodeBatchIdFromCreativeId @ 0x18005A394 (_anonymous_namespace_--DecodeBatchIdFromCreativeId.c)
 *     ?DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z @ 0x18005A65C (-DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z.c)
 *     ?GetCreativeEventString@ContentManagement@@YAJPEAUHSTRING__@@W4CreativeEventType@1@0PEAPEAG@Z @ 0x18005D144 (-GetCreativeEventString@ContentManagement@@YAJPEAUHSTRING__@@W4CreativeEventType@1@0PEAPEAG@Z.c)
 *     ?GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z @ 0x18005DAEC (-GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z.c)
 *     ?GetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAU_FILETIME@@@Z @ 0x18005DBC0 (-GetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAU_FILETIME@@@.c)
 *     _anonymous_namespace_::GetImpressionEventExpirationTime @ 0x18005DDE0 (_anonymous_namespace_--GetImpressionEventExpirationTime.c)
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
  int FileTimeSetting; // ebx
  WCHAR *StringRawBuffer; // rax
  const unsigned __int16 *v12; // rdx
  unsigned __int16 **v13; // r9
  int v14; // eax
  void *v15; // rcx
  void *v16; // rsi
  const WCHAR *v17; // r8
  int CreativeEventString; // eax
  bool *v19; // r9
  WCHAR *v20; // rcx
  WCHAR *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rbx
  WCHAR *v24; // rax
  unsigned __int64 ImpressionEventExpirationTime; // rbx
  unsigned __int16 v26; // [rsp+30h] [rbp-51h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+38h] [rbp-49h] BYREF
  LPVOID pv[3]; // [rsp+40h] [rbp-41h] BYREF
  LPCWSTR lpValue[3]; // [rsp+58h] [rbp-29h] BYREF
  LPCWCH lpString2[3]; // [rsp+70h] [rbp-11h] BYREF
  unsigned __int64 v31; // [rsp+88h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]

  *a5 = 0;
  if ( !a3 )
  {
    DoesSettingExist = CreativeFramework::ContentDeliveryManagerSettings::DoesSettingExist(
                         *(const WCHAR **)(a1 + 24),
                         L"LastCreativeBatchId",
                         &v26,
                         a4);
    FileTimeSetting = DoesSettingExist;
    if ( DoesSettingExist < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x33A,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)DoesSettingExist);
      return (unsigned int)FileTimeSetting;
    }
    if ( (_BYTE)v26 )
    {
      StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(a2, 0LL);
      anonymous_namespace_::DecodeBatchIdFromCreativeId((__int64)lpString2, StringRawBuffer);
      pv[0] = 0LL;
      pv[1] = (LPVOID)-1LL;
      pv[2] = (LPVOID)-1LL;
      v14 = ContentManagement::GetExistingStringSettingRemoveOnFailure(
              *(const WCHAR **)(a1 + 24),
              v12,
              (unsigned __int16 *)pv,
              v13);
      FileTimeSetting = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x340,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)v14);
        v15 = pv[0];
        if ( !pv[0] )
          goto LABEL_9;
        goto LABEL_8;
      }
      v16 = pv[0];
      if ( pv[0] )
      {
        v17 = (const WCHAR *)lpString2;
        if ( v31 >= 8 )
          v17 = lpString2[0];
        if ( CompareStringOrdinal((LPCWCH)pv[0], -1, v17, -1, 1) == 2 )
        {
          lpValue[0] = 0LL;
          lpValue[1] = (LPCWSTR)-1LL;
          lpValue[2] = (LPCWSTR)-1LL;
          CreativeEventString = ContentManagement::GetCreativeEventString(a2, 0, (HSTRING)a4, lpValue);
          FileTimeSetting = CreativeEventString;
          if ( CreativeEventString < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x344,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
              (const char *)(unsigned int)CreativeEventString);
            v20 = (WCHAR *)lpValue[0];
            if ( !lpValue[0] )
            {
LABEL_18:
              v15 = v16;
LABEL_8:
              CoTaskMemFree(v15);
LABEL_9:
              if ( v31 >= 8 )
                operator delete((void *)lpString2[0]);
              return (unsigned int)FileTimeSetting;
            }
LABEL_17:
            CoTaskMemFree(v20);
            goto LABEL_18;
          }
          v21 = (WCHAR *)lpValue[0];
          FileTimeSetting = CreativeFramework::ContentDeliveryManagerSettings::DoesSettingExist(
                              *(const WCHAR **)(a1 + 48),
                              lpValue[0],
                              &v26,
                              v19);
          if ( FileTimeSetting < 0 )
          {
            v22 = 840LL;
LABEL_21:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v22,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
              (const char *)(unsigned int)FileTimeSetting);
            if ( !v21 )
              goto LABEL_18;
            v20 = v21;
            goto LABEL_17;
          }
          if ( (_BYTE)v26 )
          {
            FileTimeSetting = CreativeFramework::ContentDeliveryManagerSettings::GetFileTimeSetting(
                                *(const WCHAR **)(a1 + 48),
                                v21,
                                0LL,
                                &SystemTimeAsFileTime);
            if ( FileTimeSetting < 0 )
            {
              v22 = 846LL;
              goto LABEL_21;
            }
            v23 = SystemTimeAsFileTime.dwLowDateTime + ((unsigned __int64)SystemTimeAsFileTime.dwHighDateTime << 32);
            v24 = (WCHAR *)WindowsGetStringRawBuffer(a2, 0LL);
            ImpressionEventExpirationTime = anonymous_namespace_::GetImpressionEventExpirationTime(0LL, v24, v23);
            GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
            *a5 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32) >= ImpressionEventExpirationTime;
          }
          if ( v21 )
            CoTaskMemFree(v21);
        }
      }
      if ( v16 )
        CoTaskMemFree(v16);
      if ( v31 >= 8 )
        operator delete((void *)lpString2[0]);
    }
  }
  return 0LL;
}
