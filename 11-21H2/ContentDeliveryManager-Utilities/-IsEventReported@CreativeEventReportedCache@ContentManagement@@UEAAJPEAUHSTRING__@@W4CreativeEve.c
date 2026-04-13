/*
 * XREFs of ?IsEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x18005FBE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _anonymous_namespace_::DecodeBatchIdFromCreativeId @ 0x18005A394 (_anonymous_namespace_--DecodeBatchIdFromCreativeId.c)
 *     ?DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z @ 0x18005A65C (-DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z.c)
 *     ?GetCreativeEventString@ContentManagement@@YAJPEAUHSTRING__@@W4CreativeEventType@1@0PEAPEAG@Z @ 0x18005D144 (-GetCreativeEventString@ContentManagement@@YAJPEAUHSTRING__@@W4CreativeEventType@1@0PEAPEAG@Z.c)
 *     ?GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z @ 0x18005DAEC (-GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z.c)
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
  WCHAR *StringRawBuffer; // rax
  const WCHAR *v13; // rcx
  const unsigned __int16 *v14; // rdx
  unsigned __int16 **v15; // r9
  int v16; // eax
  void *v17; // rcx
  const WCHAR *v18; // r8
  int CreativeEventString; // eax
  bool *v20; // r9
  WCHAR *v21; // rbx
  int v22; // eax
  unsigned int v23; // esi
  unsigned __int16 v24; // [rsp+30h] [rbp-41h] BYREF
  LPVOID pv[3]; // [rsp+38h] [rbp-39h] BYREF
  LPCWSTR lpValue[3]; // [rsp+50h] [rbp-21h] BYREF
  LPCWCH lpString2[3]; // [rsp+68h] [rbp-9h] BYREF
  unsigned __int64 v28; // [rsp+80h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+57h]

  *a5 = 0;
  DoesSettingExist = CreativeFramework::ContentDeliveryManagerSettings::DoesSettingExist(
                       *(const WCHAR **)(a1 + 24),
                       L"LastCreativeBatchId",
                       &v24,
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
  if ( !(_BYTE)v24 )
    return 0LL;
  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(a2, 0LL);
  anonymous_namespace_::DecodeBatchIdFromCreativeId((__int64)lpString2, StringRawBuffer);
  v13 = *(const WCHAR **)(a1 + 24);
  pv[0] = 0LL;
  v16 = ContentManagement::GetExistingStringSettingRemoveOnFailure(v13, v14, (unsigned __int16 *)pv, v15);
  v10 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F7,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v16);
    v17 = pv[0];
    if ( !pv[0] )
      goto LABEL_8;
    goto LABEL_7;
  }
  if ( !pv[0] )
  {
LABEL_27:
    if ( v28 >= 8 )
      operator delete((void *)lpString2[0]);
    return 0LL;
  }
  v18 = (const WCHAR *)lpString2;
  if ( v28 >= 8 )
    v18 = lpString2[0];
  if ( CompareStringOrdinal((LPCWCH)pv[0], -1, v18, -1, 1) != 2 )
  {
LABEL_26:
    CoTaskMemFree(pv[0]);
    goto LABEL_27;
  }
  lpValue[0] = 0LL;
  CreativeEventString = ContentManagement::GetCreativeEventString(a2, a3, (HSTRING)a4, lpValue);
  v10 = CreativeEventString;
  if ( CreativeEventString < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2FB,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)CreativeEventString);
    if ( lpValue[0] )
      CoTaskMemFree((LPVOID)lpValue[0]);
    v17 = pv[0];
LABEL_7:
    CoTaskMemFree(v17);
LABEL_8:
    if ( v28 >= 8 )
      operator delete((void *)lpString2[0]);
    return v10;
  }
  v21 = (WCHAR *)lpValue[0];
  v22 = CreativeFramework::ContentDeliveryManagerSettings::DoesSettingExist(
          *(const WCHAR **)(a1 + 48),
          lpValue[0],
          &v24,
          v20);
  v23 = v22;
  if ( v22 >= 0 )
  {
    *a5 = (_BYTE)v24 != 0;
    if ( v21 )
      CoTaskMemFree(v21);
    goto LABEL_26;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2FF,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)v22);
  if ( v21 )
    CoTaskMemFree(v21);
  CoTaskMemFree(pv[0]);
  if ( v28 >= 8 )
    operator delete((void *)lpString2[0]);
  return v23;
}
