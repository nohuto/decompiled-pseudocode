/*
 * XREFs of ?ExpandRatingParameters@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z @ 0x1800D6588
 * Callers:
 *     ?EnforceSchemaAndValidate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x1800D5364 (-EnforceSchemaAndValidate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180039F6C (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800A42B8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAAAEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@$$QEAV21@@Z @ 0x1800D5228 (--A-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V12@U-$less@V-$basic_s.c)
 *     ?EnsureMrtResourceMapInitialized@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x1800D5FD4 (-EnsureMrtResourceMapInitialized@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ.c)
 *     ?ResolveRatingImage@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z @ 0x1800D7168 (-ResolveRatingImage@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CreativeFramework::NotificationManager::ToastHelpers::ExpandRatingParameters(
        CreativeFramework::NotificationManager::ToastHelpers *this,
        const wchar_t *a2)
{
  int v4; // eax
  int v5; // eax
  unsigned __int64 *v6; // rax
  void *v7; // rbx
  unsigned __int64 v8; // r8
  int v9; // [rsp+20h] [rbp-60h]
  LPVOID v10; // [rsp+30h] [rbp-50h] BYREF
  LPVOID pv[3]; // [rsp+38h] [rbp-48h] BYREF
  void *v12[3]; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v13; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  CreativeFramework::NotificationManager::ToastHelpers::EnsureMrtResourceMapInitialized(this);
  v10 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const wchar_t *, LPVOID *))(**((_QWORD **)this + 7) + 48LL))(
         *((_QWORD *)this + 7),
         *((_QWORD *)this + 8),
         L"ms-resource://Microsoft.Windows.ContentDeliveryManager/Ratings/Rating_AccessibilityString",
         &v10);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      393LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v4,
      v9);
  memset(pv, 0, sizeof(pv));
  v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
         (__int64)pv,
         (const wchar_t *)v10,
         a2);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      396LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v5,
      v9);
  v13 = 7LL;
  v12[2] = 0LL;
  LOWORD(v12[0]) = 0;
  std::wstring::assign((unsigned __int64 *)v12, (char *)L"rating_accessible", aRatingAccessib[0] != 0 ? 0x11 : 0);
  v6 = (unsigned __int64 *)std::map<std::wstring,std::wstring>::operator[]((__int64 *)this + 4, v12);
  v7 = pv[0];
  if ( *(_WORD *)pv[0] )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( *((_WORD *)pv[0] + v8) );
  }
  else
  {
    v8 = 0LL;
  }
  std::wstring::assign(v6, (char *)pv[0], v8);
  if ( v13 >= 8 )
    operator delete(v12[0]);
  CoTaskMemFree(v7);
  if ( v10 )
    CoTaskMemFree(v10);
  CreativeFramework::NotificationManager::ToastHelpers::ResolveRatingImage(this, a2);
}
