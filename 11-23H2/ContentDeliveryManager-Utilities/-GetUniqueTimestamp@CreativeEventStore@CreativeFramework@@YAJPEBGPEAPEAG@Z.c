/*
 * XREFs of ?GetUniqueTimestamp@CreativeEventStore@CreativeFramework@@YAJPEBGPEAPEAG@Z @ 0x180059904
 * Callers:
 *     ?AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z @ 0x180054A74 (-AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z.c)
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1800379DC (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180042C64 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?DoesStringSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z @ 0x1800556FC (-DoesStringSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z.c)
 */

__int64 __fastcall CreativeFramework::CreativeEventStore::GetUniqueTimestamp(
        const WCHAR *this,
        unsigned __int16 *a2,
        unsigned __int16 **a3)
{
  unsigned __int64 v5; // rsi
  int DoesStringSettingExist; // eax
  bool *v7; // r9
  unsigned int v8; // ebx
  __int64 v9; // rdx
  bool v10; // bl
  int v11; // eax
  int v12; // edi
  LPCWSTR v13; // rax
  LPCWSTR lpValue; // [rsp+20h] [rbp-20h] BYREF
  __int64 v16; // [rsp+28h] [rbp-18h]
  __int64 v17; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct _FILETIME SystemTimeAsFileTime; // [rsp+68h] [rbp+28h] BYREF

  *(_QWORD *)a2 = 0LL;
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  lpValue = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v5 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
  DoesStringSettingExist = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
                             (__int64)&lpValue,
                             L"%llu",
                             v5);
  v8 = DoesStringSettingExist;
  if ( DoesStringSettingExist < 0 )
  {
    v9 = 49LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
      (const char *)(unsigned int)DoesStringSettingExist);
    goto LABEL_13;
  }
  LOBYTE(SystemTimeAsFileTime.dwLowDateTime) = 0;
  DoesStringSettingExist = CreativeFramework::ContentDeliveryManagerSettings::DoesStringSettingExist(
                             this,
                             lpValue,
                             (unsigned __int16 *)&SystemTimeAsFileTime,
                             v7);
  v8 = DoesStringSettingExist;
  if ( DoesStringSettingExist < 0 )
  {
    v9 = 52LL;
    goto LABEL_5;
  }
  v10 = LOBYTE(SystemTimeAsFileTime.dwLowDateTime) == 0;
  while ( !v10 )
  {
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    if ( v5 == SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32) )
    {
      v10 = 0;
    }
    else
    {
      v10 = 1;
      v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
              (__int64)&lpValue,
              L"%llu");
      v12 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3D,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
          (const char *)(unsigned int)v11);
        v8 = v12;
        goto LABEL_13;
      }
    }
  }
  v13 = lpValue;
  lpValue = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v8 = 0;
  *(_QWORD *)a2 = v13;
LABEL_13:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpValue);
  return v8;
}
