/*
 * XREFs of ?ResolveRatingImage@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z @ 0x1800D7168
 * Callers:
 *     ?ExpandRatingParameters@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z @ 0x1800D6588 (-ExpandRatingParameters@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180039F6C (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800A42B8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAAAEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@$$QEAV21@@Z @ 0x1800D5228 (--A-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V12@U-$less@V-$basic_s.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CreativeFramework::NotificationManager::ToastHelpers::ResolveRatingImage(
        CreativeFramework::NotificationManager::ToastHelpers *this,
        const wchar_t *a2)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  char *v10; // r14
  unsigned __int64 *v11; // rax
  int v12; // [rsp+20h] [rbp-60h]
  LPVOID pv; // [rsp+30h] [rbp-50h] BYREF
  LPVOID v14[3]; // [rsp+38h] [rbp-48h] BYREF
  void *v15[3]; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v16; // [rsp+68h] [rbp-18h]
  _WORD v17[4]; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v17[0] = *a2;
  v3 = -1LL;
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  v5 = 1LL;
  if ( v4 > 2 && a2[1] == 46 )
  {
    v17[1] = a2[2];
    v5 = 2LL;
  }
  v17[v5] = 0;
  memset(v14, 0, sizeof(v14));
  v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
         (__int64)v14,
         L"ms-resource://Microsoft.Windows.ContentDeliveryManager/Files/Ratings/RatingStars%s.png",
         v17);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      413LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v6,
      v12);
  pv = 0LL;
  v7 = (__int64 *)*((_QWORD *)this + 7);
  v8 = *v7;
  pv = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, LPVOID, LPVOID *))(v8 + 64))(
         v7,
         *((_QWORD *)this + 8),
         v14[0],
         &pv);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      416LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v9,
      v12);
  v10 = (char *)pv;
  v16 = 7LL;
  v15[2] = 0LL;
  LOWORD(v15[0]) = 0;
  std::wstring::assign((unsigned __int64 *)v15, (char *)L"rating_image", aRatingImage[0] != 0 ? 0xC : 0);
  v11 = (unsigned __int64 *)std::map<std::wstring,std::wstring>::operator[]((__int64 *)this + 4, v15);
  if ( *(_WORD *)v10 )
  {
    do
      ++v3;
    while ( *(_WORD *)&v10[2 * v3] );
  }
  else
  {
    v3 = 0LL;
  }
  std::wstring::assign(v11, v10, v3);
  if ( v16 >= 8 )
    operator delete(v15[0]);
  if ( pv )
    CoTaskMemFree(pv);
  if ( v14[0] )
    CoTaskMemFree(v14[0]);
}
