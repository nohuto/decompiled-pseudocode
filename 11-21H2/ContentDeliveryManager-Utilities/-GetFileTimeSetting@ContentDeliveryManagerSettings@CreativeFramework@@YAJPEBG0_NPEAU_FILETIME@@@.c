/*
 * XREFs of ?GetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAU_FILETIME@@@Z @ 0x18005DBC0
 * Callers:
 *     ?IsReportedEventExpired@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x1800600E0 (-IsReportedEventExpired@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4Crea.c)
 *     ?GetSubscriptionLastUpdated@SubscribedContentStore@CreativeFramework@@YA?AU_FILETIME@@PEBG@Z @ 0x18007065C (-GetSubscriptionLastUpdated@SubscribedContentStore@CreativeFramework@@YA-AU_FILETIME@@PEBG@Z.c)
 *     ?GetSubscriptionState@SubscribedContentStore@CreativeFramework@@YA?AW4SubscriptionState@12@PEBG_N@Z @ 0x18007081C (-GetSubscriptionState@SubscribedContentStore@CreativeFramework@@YA-AW4SubscriptionState@12@PEBG_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180044594 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall CreativeFramework::ContentDeliveryManagerSettings::GetFileTimeSetting(
        const WCHAR *this,
        LPCWSTR lpValue,
        const unsigned __int16 *a3,
        _QWORD *a4)
{
  __int64 v4; // rdi
  char v5; // r14
  const WCHAR *v6; // rbp
  LSTATUS ValueW; // eax
  unsigned int v10; // ebx
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  DWORD v14; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0LL;
  v14 = 8;
  *a4 = 0LL;
  v5 = (char)a3;
  v6 = lpValue;
  ValueW = RegGetValueW(HKEY_CURRENT_USER, this, lpValue, 0x40u, 0LL, &v12, &v14);
  v10 = ValueW;
  if ( ValueW > 0 )
    v10 = (unsigned __int16)ValueW | 0x80070000;
  if ( (v10 & 0x80000000) == 0 )
  {
    v4 = v12;
LABEL_10:
    *a4 = v4;
    return 0LL;
  }
  if ( v5 && v10 == -2147024894 )
    goto LABEL_10;
  if ( !v6 )
    v6 = &Src;
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)0x4F,
    (int)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
    (const char *)v10,
    (int)"RegKey: %ws %ws",
    (const char *)this,
    v6);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x96,
    (__int64)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
    (const char *)v10);
  return v10;
}
