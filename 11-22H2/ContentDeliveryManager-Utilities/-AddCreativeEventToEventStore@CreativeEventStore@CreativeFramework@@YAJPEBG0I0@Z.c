/*
 * XREFs of ?AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z @ 0x180054AC4
 * Callers:
 *     _lambda_929976d9f769b9ae6bfa1e1f0592e0ca_::operator() @ 0x180053B6C (_lambda_929976d9f769b9ae6bfa1e1f0592e0ca_--operator().c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C184 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?CreateKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z @ 0x1800308E8 (-CreateKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z.c)
 *     ?DoesKeyExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBGPEA_N@Z @ 0x1800312DC (-DoesKeyExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBGPEA_N@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1800379DC (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ @ 0x18003F2D0 (-Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ.c)
 *     ?SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00I@Z @ 0x18004064C (-SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00I@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180042CB4 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1800454A8 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?GetUniqueTimestamp@CreativeEventStore@CreativeFramework@@YAJPEBGPEAPEAG@Z @ 0x180059954 (-GetUniqueTimestamp@CreativeEventStore@CreativeFramework@@YAJPEBGPEAPEAG@Z.c)
 */

__int64 __fastcall CreativeFramework::CreativeEventStore::AddCreativeEventToEventStore(
        CreativeFramework::CreativeEventStore *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        __int64 a4)
{
  unsigned int v7; // r14d
  WCHAR *v8; // rbx
  int v9; // eax
  int v10; // edi
  bool *v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  int DoesKeyExist; // eax
  const unsigned __int16 *v15; // rdx
  unsigned int v16; // eax
  unsigned __int16 **v17; // r8
  int UniqueTimestamp; // eax
  WCHAR *v19; // rdi
  int v20; // eax
  int v21; // esi
  WCHAR *v22; // r14
  __int64 v23; // rax
  int v24; // eax
  unsigned __int16 v26; // [rsp+40h] [rbp-40h] BYREF
  const WCHAR *Data; // [rsp+48h] [rbp-38h] BYREF
  WCHAR *v28; // [rsp+50h] [rbp-30h] BYREF
  WCHAR *v29; // [rsp+58h] [rbp-28h] BYREF
  WCHAR *v30; // [rsp+60h] [rbp-20h] BYREF
  __int64 v31; // [rsp+68h] [rbp-18h]
  __int64 v32; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v29 = 0LL;
  v7 = (unsigned int)a3;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&v29,
    0LL);
  v8 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v9 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         (__int64)&v30,
         L"%ws\\%ws",
         L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\CreativeEvents",
         this);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v8 = v30;
    v10 = 0;
    v29 = v30;
    v30 = 0LL;
    v32 = 0LL;
    v31 = 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
      (const char *)(unsigned int)v9);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v30);
  if ( v10 < 0 )
  {
    v12 = (unsigned int)v10;
    v13 = 72LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
      (const char *)v12);
    goto LABEL_29;
  }
  DoesKeyExist = CreativeFramework::ContentDeliveryManagerSettings::DoesKeyExist(v8, &v26, v11);
  v10 = DoesKeyExist;
  if ( DoesKeyExist < 0 )
  {
    v13 = 75LL;
LABEL_8:
    v12 = (unsigned int)DoesKeyExist;
    goto LABEL_9;
  }
  if ( !(_BYTE)v26 )
  {
    DoesKeyExist = CreativeFramework::ContentDeliveryManagerSettings::CreateKey(v8, v15);
    v10 = DoesKeyExist;
    if ( DoesKeyExist < 0 )
    {
      v13 = 78LL;
      goto LABEL_8;
    }
    LODWORD(Data) = 0;
    v16 = RegSetKeyValueW(HKEY_CURRENT_USER, v8, 0LL, 4u, &Data, 4u);
    if ( v16 )
    {
      DoesKeyExist = wil::details::in1diag3::Return_Win32Msg(
                       retaddr,
                       (void *)0x64,
                       (__int64)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
                       (const char *)v16,
                       (unsigned __int64)"RegKey: %ws %ws",
                       (const char *)v8,
                       word_1801070C4);
      v10 = DoesKeyExist;
      if ( DoesKeyExist < 0 )
      {
        v13 = 83LL;
        goto LABEL_8;
      }
    }
  }
  Data = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&Data,
    0LL);
  UniqueTimestamp = CreativeFramework::CreativeEventStore::GetUniqueTimestamp(
                      (CreativeFramework::CreativeEventStore *)v8,
                      (const unsigned __int16 *)&Data,
                      v17);
  v10 = UniqueTimestamp;
  if ( UniqueTimestamp >= 0 )
  {
    v28 = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&v28,
      0LL);
    v28 = 0LL;
    v30 = 0LL;
    v31 = 0LL;
    v32 = 0LL;
    v19 = 0LL;
    v20 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
            (__int64)&v30,
            L"%d,%ws,%ws",
            v7,
            a4,
            a2);
    v21 = v20;
    if ( v20 >= 0 )
    {
      v19 = v30;
      v21 = 0;
      v28 = v30;
      v22 = v30;
      v30 = 0LL;
      v32 = 0LL;
      v31 = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
        (const char *)(unsigned int)v20);
      v22 = 0LL;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v30);
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5D,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
        (const char *)(unsigned int)v21);
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v28);
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&Data);
      v10 = v21;
      goto LABEL_29;
    }
    v23 = -1LL;
    do
      ++v23;
    while ( v22[v23] );
    v24 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
            v8,
            Data,
            v19,
            (const unsigned __int16 *)(unsigned int)v23);
    v10 = v24;
    if ( v24 >= 0 )
    {
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v28);
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&Data);
      v10 = 0;
      goto LABEL_29;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x62,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
      (const char *)(unsigned int)v24);
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v28);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
      (const char *)(unsigned int)UniqueTimestamp);
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&Data);
LABEL_29:
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v29);
  return (unsigned int)v10;
}
