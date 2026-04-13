/*
 * XREFs of ?GetCreativeEventCacheRegPath@CreativeEventReportedCache@ContentManagement@@CAJPEBGPEAPEAG@Z @ 0x180057554
 * Callers:
 *     ?RuntimeClassInitialize@CreativeEventReportedCache@ContentManagement@@QEAAJPEBG@Z @ 0x18005DAA0 (-RuntimeClassInitialize@CreativeEventReportedCache@ContentManagement@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1800379DC (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180042C64 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall ContentManagement::CreativeEventReportedCache::GetCreativeEventCacheRegPath(
        const unsigned __int16 *a1,
        unsigned __int16 **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  unsigned __int16 *v5; // rax
  unsigned __int16 *v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v3 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         (__int64)&v7,
         L"%s\\%s",
         L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\CreativeEventCache",
         a1);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = v7;
    v7 = 0LL;
    v9 = 0LL;
    v8 = 0LL;
    v4 = 0;
    *a2 = v5;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2DB,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v3);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v7);
  return v4;
}
