/*
 * XREFs of ?AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z @ 0x180059D74
 * Callers:
 *     _lambda_929976d9f769b9ae6bfa1e1f0592e0ca_::operator() @ 0x18005898C (_lambda_929976d9f769b9ae6bfa1e1f0592e0ca_--operator().c)
 * Callees:
 *     ?CreateKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z @ 0x180030F6C (-CreateKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z.c)
 *     ?DoesKeyExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBGPEA_N@Z @ 0x180031DE4 (-DoesKeyExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBGPEA_N@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180039F6C (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180044594 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?SetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0K@Z @ 0x18004586C (-SetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0K@Z.c)
 *     ?SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00I@Z @ 0x180045904 (-SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00I@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CreativeFramework::CreativeEventStore::AddCreativeEventToEventStore(
        CreativeFramework::CreativeEventStore *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        __int64 a4)
{
  unsigned int v5; // r13d
  int v6; // eax
  bool *v7; // r8
  unsigned int v8; // edi
  void *v10; // rdi
  int DoesKeyExist; // eax
  const unsigned __int16 *v12; // rdx
  unsigned int v13; // esi
  int Key; // eax
  int v15; // eax
  unsigned __int64 v16; // r15
  int v17; // eax
  __int64 v18; // rdx
  void *v19; // r14
  LSTATUS ValueW; // eax
  void *v21; // rcx
  int v22; // eax
  void *v23; // rsi
  __int64 v24; // rax
  int v25; // eax
  unsigned int v26; // r15d
  unsigned __int16 v27[2]; // [rsp+40h] [rbp-30h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-2Ch] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+48h] [rbp-28h] BYREF
  struct _FILETIME v30; // [rsp+50h] [rbp-20h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-18h] BYREF
  __int64 v32; // [rsp+60h] [rbp-10h]
  __int64 v33; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v5 = (unsigned int)a3;
  pv = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
         (__int64)&pv,
         L"%ws\\%ws",
         L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\CreativeEvents",
         this);
  v8 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
      (const char *)(unsigned int)v6);
    if ( pv )
      CoTaskMemFree(pv);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
      (const char *)v8);
    return v8;
  }
  v10 = pv;
  DoesKeyExist = CreativeFramework::ContentDeliveryManagerSettings::DoesKeyExist((const WCHAR *)pv, v27, v7);
  v13 = DoesKeyExist;
  if ( DoesKeyExist < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
      (const char *)(unsigned int)DoesKeyExist);
    if ( !v10 )
      return v13;
LABEL_7:
    CoTaskMemFree(v10);
    return v13;
  }
  if ( !LOBYTE(v27[0]) )
  {
    Key = CreativeFramework::ContentDeliveryManagerSettings::CreateKey((const WCHAR *)v10, v12);
    v13 = Key;
    if ( Key < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
        (const char *)(unsigned int)Key);
      if ( !v10 )
        return v13;
      goto LABEL_7;
    }
    v15 = CreativeFramework::ContentDeliveryManagerSettings::SetSettingValue((const WCHAR *)v10, 0LL, 0LL);
    v13 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x53,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
        (const char *)(unsigned int)v15);
      if ( !v10 )
        return v13;
      goto LABEL_7;
    }
  }
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v16 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
  pv = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v17 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          (__int64)&pv,
          L"%llu",
          v16);
  v13 = v17;
  if ( v17 < 0 )
  {
    v18 = 49LL;
    goto LABEL_28;
  }
  pcbData = 0;
  v19 = pv;
  ValueW = RegGetValueW(HKEY_CURRENT_USER, (LPCWSTR)v10, (LPCWSTR)pv, 2u, 0LL, 0LL, &pcbData);
  v13 = ValueW;
  if ( ValueW > 0 )
    v13 = (unsigned __int16)ValueW | 0x80070000;
  if ( (int)(v13 + 0x80000000) >= 0 && v13 != -2147024894 )
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0xEA,
      (int)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
      (const char *)v13,
      (int)"RegKey: %ws %ws",
      (const char *)v10,
      v19);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
      (const char *)v13);
    if ( !v19 )
      goto LABEL_30;
    v21 = v19;
LABEL_29:
    CoTaskMemFree(v21);
LABEL_30:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
      (const char *)v13);
    if ( !v10 )
      return v13;
    goto LABEL_7;
  }
  if ( (v13 & 0x80000000) == 0 )
  {
    do
      GetSystemTimeAsFileTime(&v30);
    while ( v16 == v30.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&v30) << 32) );
    v17 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
            (__int64)&pv,
            L"%llu");
    v13 = v17;
    if ( v17 < 0 )
    {
      v18 = 61LL;
LABEL_28:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
        (const char *)(unsigned int)v17);
      v21 = pv;
      if ( !pv )
        goto LABEL_30;
      goto LABEL_29;
    }
    v19 = pv;
  }
  pv = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v22 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          (__int64)&pv,
          L"%d,%ws,%ws",
          v5,
          a4,
          a2);
  v13 = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
      (const char *)(unsigned int)v22);
    if ( pv )
      CoTaskMemFree(pv);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
      (const char *)v13);
    if ( v19 )
      CoTaskMemFree(v19);
    if ( !v10 )
      return v13;
    goto LABEL_7;
  }
  v23 = pv;
  v24 = -1LL;
  do
    ++v24;
  while ( *((_WORD *)pv + v24) );
  v25 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
          (const WCHAR *)v10,
          (LPCWSTR)v19,
          pv,
          (const unsigned __int16 *)(unsigned int)v24);
  v26 = v25;
  if ( v25 >= 0 )
  {
    if ( v23 )
      CoTaskMemFree(v23);
    if ( v19 )
      CoTaskMemFree(v19);
    if ( v10 )
      CoTaskMemFree(v10);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x62,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
      (const char *)(unsigned int)v25);
    if ( v23 )
      CoTaskMemFree(v23);
    if ( v19 )
      CoTaskMemFree(v19);
    if ( v10 )
      CoTaskMemFree(v10);
    return v26;
  }
}
