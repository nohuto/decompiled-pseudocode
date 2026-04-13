/*
 * XREFs of ??0SetLockScreenHotspotsService@Actions@CreativeFramework@@QEAA@PEB_W000@Z @ 0x1800BAD24
 * Callers:
 *     ?MakeSetLockScreenHotspotsService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800BB540 (-MakeSetLockScreenHotspotsService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@A.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18006B878 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@PEB_W@Z @ 0x18008F79C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@PEB_W@Z.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1800BAE9C (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalF.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1800BAEC0 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMe.c)
 *     ?GetCurrentUserSidString@Actions@CreativeFramework@@YAJPEAPEA_W@Z @ 0x1800BB384 (-GetCurrentUserSidString@Actions@CreativeFramework@@YAJPEAPEA_W@Z.c)
 */

// Hidden C++ exception states: #wind=8
CreativeFramework::Actions::SetLockScreenHotspotsService *__fastcall CreativeFramework::Actions::SetLockScreenHotspotsService::SetLockScreenHotspotsService(
        CreativeFramework::Actions::SetLockScreenHotspotsService *this,
        const wchar_t *a2,
        const wchar_t *a3,
        const wchar_t *a4,
        LPCWCH lpString1)
{
  PSID *v6; // r14
  LPCWSTR *v7; // r15
  wchar_t **v8; // rdx
  int CurrentUserSidString; // eax
  const char *v10; // r9
  BOOL bIgnoreCase; // [rsp+20h] [rbp-48h]
  void *v13; // [rsp+30h] [rbp-38h] BYREF
  PSID Sid; // [rsp+38h] [rbp-30h] BYREF
  char v15; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *(_QWORD *)this = &CreativeFramework::Actions::SetLockScreenHotspotsService::`vftable';
  v6 = (PSID *)((char *)this + 8);
  *((_QWORD *)this + 1) = 0LL;
  v7 = (LPCWSTR *)((char *)this + 16);
  *((_QWORD *)this + 2) = 0LL;
  std::wstring::wstring((__int64)this + 24);
  std::wstring::wstring((__int64)this + 56);
  std::wstring::wstring((__int64)this + 88);
  *((_BYTE *)this + 124) = 1;
  if ( lpString1 && CompareStringOrdinal(lpString1, -1, L"true", -1, 1) == 2 )
    *((_DWORD *)this + 30) = 1;
  v13 = v7;
  Sid = 0LL;
  v15 = 1;
  CurrentUserSidString = CreativeFramework::Actions::GetCurrentUserSidString((CreativeFramework::Actions *)&Sid, v8);
  if ( CurrentUserSidString < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
      (const char *)(unsigned int)CurrentUserSidString,
      bIgnoreCase);
  wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>>(&v13);
  v13 = v6;
  Sid = 0LL;
  v15 = 1;
  if ( !ConvertStringSidToSidW(*v7, &Sid) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x3F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
      v10);
  wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>>(&v13);
  if ( !IsValidSid(*v6) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x40,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
      (const char *)0x8000FFFFLL,
      bIgnoreCase);
  return this;
}
