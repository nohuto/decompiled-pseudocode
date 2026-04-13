/*
 * XREFs of ?GetCreativeEventCacheRegPath@CreativeEventReportedCache@ContentManagement@@CAJPEBGPEAPEAG@Z @ 0x18005D0B0
 * Callers:
 *     ?GetEventCacheIfNeeded@ContentManagement@@YAJPEBGPEAPEAUICreativeEventReportedCache@1@@Z @ 0x18005D92C (-GetEventCacheIfNeeded@ContentManagement@@YAJPEBGPEAPEAUICreativeEventReportedCache@1@@Z.c)
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180039F6C (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ContentManagement::CreativeEventReportedCache::GetCreativeEventCacheRegPath(
        const unsigned __int16 *a1,
        unsigned __int16 **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  LPVOID pv[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  memset(pv, 0, 24);
  v3 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
         (__int64)pv,
         L"%s\\%s",
         L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\CreativeEventCache",
         a1);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *a2 = (unsigned __int16 *)pv[0];
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2DB,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v3);
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
    return v4;
  }
}
