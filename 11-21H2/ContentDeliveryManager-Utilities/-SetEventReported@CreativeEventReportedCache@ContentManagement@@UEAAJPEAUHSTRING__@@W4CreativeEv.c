/*
 * XREFs of ?SetEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0@Z @ 0x180064580
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180044594 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00I@Z @ 0x180045904 (-SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00I@Z.c)
 *     _anonymous_namespace_::DecodeBatchIdFromCreativeId @ 0x18005A394 (_anonymous_namespace_--DecodeBatchIdFromCreativeId.c)
 *     ?DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z @ 0x18005A65C (-DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z.c)
 *     ?GetCreativeEventString@ContentManagement@@YAJPEAUHSTRING__@@W4CreativeEventType@1@0PEAPEAG@Z @ 0x18005D144 (-GetCreativeEventString@ContentManagement@@YAJPEAUHSTRING__@@W4CreativeEventType@1@0PEAPEAG@Z.c)
 *     ?GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z @ 0x18005DAEC (-GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z.c)
 *     ?SetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0U_FILETIME@@@Z @ 0x1800649DC (-SetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0U_FILETIME@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::CreativeEventReportedCache::SetEventReported(
        __int64 a1,
        HSTRING a2,
        unsigned int a3,
        struct _FILETIME a4)
{
  char v7; // r15
  void *v8; // rbx
  WCHAR *StringRawBuffer; // rax
  bool *v10; // r9
  int DoesSettingExist; // eax
  const unsigned __int16 *v12; // rdx
  unsigned __int16 **v13; // r9
  unsigned int v14; // edi
  __int64 v16; // rdi
  char v17; // si
  int v18; // eax
  unsigned int v19; // ebx
  const WCHAR *v20; // r8
  LPCWCH *v21; // r8
  int v22; // eax
  const WCHAR *v23; // rsi
  LSTATUS v24; // eax
  int CreativeEventString; // eax
  bool *v26; // r9
  void *v27; // rdi
  int v28; // esi
  __int64 v29; // rdx
  struct _FILETIME v30; // r9
  unsigned __int16 v31; // [rsp+30h] [rbp-39h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+38h] [rbp-31h] BYREF
  LPVOID pv[3]; // [rsp+40h] [rbp-29h] BYREF
  LPCWCH lpString2[2]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v35; // [rsp+68h] [rbp-1h]
  unsigned __int64 v36; // [rsp+70h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  SystemTimeAsFileTime = a4;
  v7 = 0;
  v8 = 0LL;
  memset(pv, 0, sizeof(pv));
  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(a2, 0LL);
  anonymous_namespace_::DecodeBatchIdFromCreativeId((__int64)lpString2, StringRawBuffer);
  DoesSettingExist = CreativeFramework::ContentDeliveryManagerSettings::DoesSettingExist(
                       *(const WCHAR **)(a1 + 24),
                       L"LastCreativeBatchId",
                       &v31,
                       v10);
  v14 = DoesSettingExist;
  if ( DoesSettingExist < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x30E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)DoesSettingExist);
    if ( v36 >= 8 )
      operator delete((void *)lpString2[0]);
    return v14;
  }
  v16 = -1LL;
  v17 = v31;
  if ( !(_BYTE)v31 )
    goto LABEL_30;
  v18 = ContentManagement::GetExistingStringSettingRemoveOnFailure(
          *(const WCHAR **)(a1 + 24),
          v12,
          (unsigned __int16 *)pv,
          v13);
  v19 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x312,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v18);
    if ( v36 >= 8 )
      operator delete((void *)lpString2[0]);
    v36 = 7LL;
    v35 = 0LL;
    LOWORD(lpString2[0]) = 0;
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
    return v19;
  }
  v7 = 1;
  v8 = pv[0];
  if ( !pv[0] )
    goto LABEL_30;
  v20 = (const WCHAR *)lpString2;
  if ( v36 >= 8 )
    v20 = lpString2[0];
  if ( CompareStringOrdinal((LPCWCH)pv[0], -1, v20, -1, 1) != 2 )
  {
LABEL_30:
    v21 = lpString2;
    if ( v36 >= 8 )
      v21 = (LPCWCH *)lpString2[0];
    do
      ++v16;
    while ( *((_WORD *)v21 + v16) );
    v22 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
            *(const WCHAR **)(a1 + 24),
            L"LastCreativeBatchId",
            v21,
            (const unsigned __int16 *)v16);
    v14 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x319,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v22);
      if ( v36 >= 8 )
        operator delete((void *)lpString2[0]);
      v35 = 0LL;
      LOWORD(lpString2[0]) = 0;
LABEL_23:
      v36 = 7LL;
      if ( v8 )
        CoTaskMemFree(v8);
      return v14;
    }
    if ( v7 && v17 )
    {
      v23 = *(const WCHAR **)(a1 + 48);
      v24 = RegDeleteKeyW(HKEY_CURRENT_USER, v23);
      v14 = v24;
      if ( v24 > 0 )
        v14 = (unsigned __int16)v24 | 0x80070000;
      if ( (int)(v14 + 0x80000000) >= 0 && v14 != -2147024894 )
      {
        wil::details::in1diag3::Return_HrMsg(
          retaddr,
          (void *)0x11B,
          (int)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
          (const char *)v14,
          (int)"RegKey: %ws",
          (const char *)v23);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x31E,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)v14);
LABEL_32:
        if ( v36 >= 8 )
          operator delete((void *)lpString2[0]);
        v35 = 0LL;
        LOWORD(lpString2[0]) = 0;
        goto LABEL_23;
      }
    }
  }
  pv[0] = 0LL;
  CreativeEventString = ContentManagement::GetCreativeEventString(a2, a3, *(HSTRING *)&SystemTimeAsFileTime, pv);
  v14 = CreativeEventString;
  if ( CreativeEventString < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x324,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)CreativeEventString);
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
    goto LABEL_32;
  }
  v27 = pv[0];
  v28 = CreativeFramework::ContentDeliveryManagerSettings::DoesSettingExist(
          *(const WCHAR **)(a1 + 48),
          (LPCWSTR)pv[0],
          &v31,
          v26);
  if ( v28 < 0 )
  {
    v29 = 808LL;
LABEL_40:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v28);
    if ( v27 )
      CoTaskMemFree(v27);
    if ( v36 >= 8 )
      operator delete((void *)lpString2[0]);
    v36 = 7LL;
    v35 = 0LL;
    LOWORD(lpString2[0]) = 0;
    if ( v8 )
      CoTaskMemFree(v8);
    return (unsigned int)v28;
  }
  if ( !(_BYTE)v31 )
  {
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v28 = CreativeFramework::ContentDeliveryManagerSettings::SetFileTimeSetting(
            *(CreativeFramework::ContentDeliveryManagerSettings **)(a1 + 48),
            (LPCWSTR)v27,
            *(const unsigned __int16 **)&SystemTimeAsFileTime,
            v30);
    if ( v28 < 0 )
    {
      v29 = 813LL;
      goto LABEL_40;
    }
  }
  if ( v27 )
    CoTaskMemFree(v27);
  if ( v36 >= 8 )
    operator delete((void *)lpString2[0]);
  v36 = 7LL;
  v35 = 0LL;
  LOWORD(lpString2[0]) = 0;
  if ( v8 )
    CoTaskMemFree(v8);
  return 0LL;
}
