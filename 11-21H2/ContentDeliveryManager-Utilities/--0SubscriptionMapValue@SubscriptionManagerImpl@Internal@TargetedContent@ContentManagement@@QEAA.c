/*
 * XREFs of ??0SubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@QEAA@PEBGU_FILETIME@@@Z @ 0x18006DE30
 * Callers:
 *     ??$make_shared@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@PEBGU_FILETIME@@@std@@YA?AV?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@0@$$QEAPEBG$$QEAU_FILETIME@@@Z @ 0x18006D9A8 (--$make_shared@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentMan.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSubscriptionPlacementNameFromSubscriptionId@SubscribedContentStore@CreativeFramework@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180070718 (-GetSubscriptionPlacementNameFromSubscriptionId@SubscribedContentStore@CreativeFramework@@YA-AV-.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180073AD4 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=7
ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue *__fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue::SubscriptionMapValue(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue *this,
        const unsigned __int16 *a2,
        struct _FILETIME a3)
{
  void *v6; // r14
  DWORD LastError; // edi
  const char *v8; // r9
  const WCHAR *v9; // rdx
  HANDLE v10; // rax
  const WCHAR *v11; // r8
  HANDLE v12; // rax
  signed int v13; // eax
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+20h] [rbp-50h] BYREF
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+28h] [rbp-48h] BYREF
  ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue *v17; // [rsp+40h] [rbp-30h]
  LPCWSTR lpName[3]; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v19; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v17 = this;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  v6 = *(void **)this;
  if ( (unsigned __int64)(*(_QWORD *)this - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    CloseHandle(v6);
    SetLastError(LastError);
  }
  *(_QWORD *)this = 0LL;
  CreativeFramework::SubscribedContentStore::GetSubscriptionPlacementNameFromSubscriptionId(lpName, a2);
  SecurityDescriptor = 0LL;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;FA;;;IU)(A;;FA;;;SY)(A;;GA;;;S-1-15-2-350187224-1905355452-1037786396-3028148496-2624191407-3283318427-1255436723)",
          1u,
          &SecurityDescriptor,
          0LL) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x129,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\SubscribedContentStore.h",
      v8);
  EventAttributes.nLength = 24;
  EventAttributes.lpSecurityDescriptor = SecurityDescriptor;
  EventAttributes.bInheritHandle = 0;
  v9 = (const WCHAR *)lpName;
  if ( v19 >= 8 )
    v9 = lpName[0];
  v10 = CreateEventExW(&EventAttributes, v9, 0, 0x1F0003u);
  *(_QWORD *)this = v10;
  if ( !v10 )
  {
    GetLastError();
    v11 = (const WCHAR *)lpName;
    if ( v19 >= 8 )
      v11 = lpName[0];
    v12 = OpenEventW(0xF0000u, 0, v11);
    *(_QWORD *)this = v12;
    if ( v12 )
    {
      v13 = 0;
    }
    else
    {
      v13 = GetLastError();
      if ( v13 > 0 )
        v13 = (unsigned __int16)v13 | 0x80070000;
      if ( v13 >= 0 )
        v13 = -2147467259;
    }
    if ( v13 >= 0 )
      v13 = 0;
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        304LL,
        (__int64)"onecoreuap\\internal\\shell\\inc\\SubscribedContentStore.h",
        (const char *)(unsigned int)v13,
        (int)SecurityDescriptor);
  }
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  if ( v19 >= 8 )
    operator delete((void *)lpName[0]);
  *((struct _FILETIME *)this + 4) = a3;
  return this;
}
