/*
 * XREFs of ?CreateSubscriptionHandle@SubscribedContentStore@CreativeFramework@@YAXPEBGPEAPEAX@Z @ 0x1800683C8
 * Callers:
 *     ??$make_shared@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@PEBGU_FILETIME@@@std@@YA?AV?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@0@$$QEAPEBG$$QEAU_FILETIME@@@Z @ 0x180066930 (--$make_shared@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentMan.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x180062764 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180067444 (--1-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     ?GetSubscriptionPlacementNameFromSubscriptionId@SubscribedContentStore@CreativeFramework@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18006902C (-GetSubscriptionPlacementNameFromSubscriptionId@SubscribedContentStore@CreativeFramework@@YA-AV-.c)
 *     ?OpenSubscriptionHandle@Details@SubscribedContentStore@CreativeFramework@@YAJPEBGPEAPEAX@Z @ 0x18006994C (-OpenSubscriptionHandle@Details@SubscribedContentStore@CreativeFramework@@YAJPEBGPEAPEAX@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18006A580 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18006B828 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18006C02C (-reset@-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_c.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CreativeFramework::SubscribedContentStore::CreateSubscriptionHandle(
        CreativeFramework::SubscribedContentStore *this,
        unsigned __int16 *a2,
        void **a3)
{
  const char *v4; // r9
  const WCHAR *v5; // rdx
  HANDLE v6; // rax
  void **v7; // r8
  const WCHAR *v8; // rcx
  int v9; // eax
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+20h] [rbp-50h] BYREF
  _SECURITY_ATTRIBUTES EventAttributes; // [rsp+28h] [rbp-48h] BYREF
  LPCWSTR lpName[3]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v13; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  *(_QWORD *)a2 = 0LL;
  CreativeFramework::SubscribedContentStore::GetSubscriptionPlacementNameFromSubscriptionId(lpName, this, a3);
  SecurityDescriptor = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &SecurityDescriptor,
    0LL);
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;FA;;;IU)(A;;FA;;;SY)(A;;GA;;;S-1-15-2-350187224-1905355452-1037786396-3028148496-2624191407-3283318427-1255436723)",
          1u,
          &SecurityDescriptor,
          0LL) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x129,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\SubscribedContentStore.h",
      v4);
  EventAttributes.nLength = 24;
  EventAttributes.lpSecurityDescriptor = SecurityDescriptor;
  EventAttributes.bInheritHandle = 0;
  v5 = (const WCHAR *)lpName;
  if ( v13 >= 8 )
    v5 = lpName[0];
  v6 = CreateEventExW(&EventAttributes, v5, 0, 0x1F0003u);
  *(_QWORD *)a2 = v6;
  if ( !v6 && (int)ResultFromKnownLastError() < 0 )
  {
    v8 = (const WCHAR *)lpName;
    if ( v13 >= 8 )
      v8 = lpName[0];
    v9 = CreativeFramework::SubscribedContentStore::Details::OpenSubscriptionHandle(v8, a2, v7);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x130,
        (__int64)"onecoreuap\\internal\\shell\\inc\\SubscribedContentStore.h",
        (const char *)(unsigned int)v9,
        (int)SecurityDescriptor);
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&SecurityDescriptor);
  std::wstring::_Tidy(lpName, 1, 0LL);
}
