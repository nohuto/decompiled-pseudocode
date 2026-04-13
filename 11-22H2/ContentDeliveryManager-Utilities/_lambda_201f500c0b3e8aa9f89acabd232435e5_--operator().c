/*
 * XREFs of _lambda_201f500c0b3e8aa9f89acabd232435e5_::operator() @ 0x1800BD9A4
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_201f500c0b3e8aa9f89acabd232435e5__&_::Run @ 0x1800BF250 (wil--details--functor_wrapper_void__lambda_201f500c0b3e8aa9f89acabd232435e5__-_--Run.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x1800241B4 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024270 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C184 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1800454A8 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$ActivateInstance@UISecondaryTile@StartScreen@UI@Windows@@@wil@@YA?AV?$com_ptr_t@UISecondaryTile@StartScreen@UI@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800BD12C (--$ActivateInstance@UISecondaryTile@StartScreen@UI@Windows@@@wil@@YA-AV-$com_ptr_t@UISecondaryTi.c)
 *     ??$GetActivationFactory@UIPinnableSurfaceFactory@ApplicationModel@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIPinnableSurfaceFactory@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800BD37C (--$GetActivationFactory@UIPinnableSurfaceFactory@ApplicationModel@Internal@Windows@@@wil@@YA-AV-.c)
 *     ??$GetActivationFactory@UIUriRuntimeClassFactory@Foundation@Windows@@@wil@@YA?AV?$com_ptr_t@UIUriRuntimeClassFactory@Foundation@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800BD41C (--$GetActivationFactory@UIUriRuntimeClassFactory@Foundation@Windows@@@wil@@YA-AV-$c_ea_1800BD41C.c)
 *     ??$query@UISecondaryTile2@StartScreen@UI@Windows@@@?$com_ptr_t@UISecondaryTile@StartScreen@UI@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UISecondaryTile2@StartScreen@UI@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800BD6E0 (--$query@UISecondaryTile2@StartScreen@UI@Windows@@@-$com_ptr_t@UISecondaryTile@StartScreen@UI@Wi.c)
 *     ??$query@UISecondaryTilePrivate@StartScreen@UI@Internal@Windows@@@?$com_ptr_t@UISecondaryTile@StartScreen@UI@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UISecondaryTilePrivate@StartScreen@UI@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800BD7A0 (--$query@UISecondaryTilePrivate@StartScreen@UI@Internal@Windows@@@-$com_ptr_t@UISecondaryTile@St.c)
 *     ?CopyFaviconToEdge@@YAJPEAUHSTRING__@@PEAPEAU1@@Z @ 0x1800BDF60 (-CopyFaviconToEdge@@YAJPEAUHSTRING__@@PEAPEAU1@@Z.c)
 *     ?CreateLaunchArgumentsFromUrl@PinnedWebsiteManager@Actions@CreativeFramework@@YA?AVHString@Wrappers@WRL@Microsoft@@PEB_W@Z @ 0x1800BE1E4 (-CreateLaunchArgumentsFromUrl@PinnedWebsiteManager@Actions@CreativeFramework@@YA-AVHString@Wrapp.c)
 *     ?GetTileIdforNavigationUrl@EdgeTileUtils@@YAJPEB_WPEAPEA_W@Z @ 0x1800BE8F8 (-GetTileIdforNavigationUrl@EdgeTileUtils@@YAJPEB_WPEAPEA_W@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=18
void __fastcall lambda_201f500c0b3e8aa9f89acabd232435e5_::operator()(__int64 a1)
{
  EdgeTileUtils **v2; // r14
  wchar_t **v3; // r8
  int TileIdforNavigationUrl; // eax
  __int64 (__fastcall ***v5)(_QWORD, GUID *, _QWORD *); // rbx
  __int64 (__fastcall *v6)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), PVOID); // rdi
  unsigned int v7; // r8d
  HSTRING_HEADER *v8; // rax
  int v9; // eax
  unsigned int v10; // r8d
  __int64 (__fastcall ***v11)(_QWORD, GUID *, _QWORD *); // rbx
  __int64 (__fastcall *v12)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), PVOID); // rdi
  HSTRING_HEADER *v13; // rax
  int v14; // eax
  __int64 (__fastcall ***v15)(_QWORD, GUID *, _QWORD *); // rbx
  __int64 (__fastcall *v16)(_QWORD, _QWORD); // rdi
  _QWORD *v17; // rax
  int v18; // eax
  unsigned int v19; // r8d
  HSTRING_HEADER *v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  unsigned int v23; // r8d
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  __int64 v30; // rbx
  __int64 (__fastcall *v31)(__int64, PVOID); // rdi
  unsigned int v32; // r8d
  HSTRING_HEADER *v33; // rax
  int v34; // eax
  int v35; // eax
  __int64 v36; // rdx
  unsigned int v37; // r8d
  __int64 v38; // rax
  int v39; // eax
  unsigned int v40; // r8d
  __int64 v41; // rbx
  __int64 (__fastcall *v42)(__int64, PVOID, _QWORD); // rsi
  __int64 (__fastcall ***v43)(_QWORD, GUID *, _QWORD *); // rdi
  HSTRING_HEADER *v44; // rax
  int v45; // eax
  __int64 (__fastcall ***v46)(_QWORD, GUID *, _QWORD *); // [rsp+20h] [rbp-39h] BYREF
  __int64 v47; // [rsp+28h] [rbp-31h] BYREF
  __int64 v48; // [rsp+30h] [rbp-29h] BYREF
  HSTRING v49; // [rsp+38h] [rbp-21h] BYREF
  __int64 v50; // [rsp+40h] [rbp-19h] BYREF
  wchar_t v51[4]; // [rsp+48h] [rbp-11h] BYREF
  __int64 v52; // [rsp+50h] [rbp-9h] BYREF
  HSTRING string; // [rsp+58h] [rbp-1h] BYREF
  __int64 *v54; // [rsp+60h] [rbp+7h] BYREF
  __int64 *v55; // [rsp+68h] [rbp+Fh] BYREF
  __int64 *v56; // [rsp+70h] [rbp+17h] BYREF
  HSTRING_HEADER v57; // [rsp+78h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  *(_QWORD *)v51 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)v51,
    0LL);
  v2 = *(EdgeTileUtils ***)a1;
  TileIdforNavigationUrl = EdgeTileUtils::GetTileIdforNavigationUrl(**(EdgeTileUtils ***)a1, v51, v3);
  if ( TileIdforNavigationUrl < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x76,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)TileIdforNavigationUrl,
      (int)v46);
  wil::ActivateInstance<Windows::UI::StartScreen::ISecondaryTile>((__int64)&v46);
  v5 = v46;
  v6 = (__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), PVOID))(*v46)[6];
  string = *(HSTRING *)v51;
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v57, (const WCHAR **)&string, v7);
  v9 = v6(v5, v8[1].Reserved.Reserved1);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x79,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v9,
      (int)v46);
  v11 = v46;
  v12 = (__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), PVOID))(*v46)[12];
  v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v57, *(const WCHAR ***)(a1 + 8), v10);
  v14 = v12(v11, v13[1].Reserved.Reserved1);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v14,
      (int)v46);
  v15 = v46;
  v16 = (__int64 (__fastcall *)(_QWORD, _QWORD))(*v46)[8];
  v17 = (_QWORD *)CreativeFramework::Actions::PinnedWebsiteManager::CreateLaunchArgumentsFromUrl(&string, *v2);
  v18 = v16(v15, *v17);
  if ( v18 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v18,
      (int)v46);
  WindowsDeleteString(string);
  v49 = 0LL;
  WindowsDeleteString(0LL);
  v49 = 0LL;
  v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v57, *(const WCHAR ***)(a1 + 16), v19);
  v21 = CopyFaviconToEdge((HSTRING)v20[1].Reserved.Reserved1, &v49);
  if ( v21 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v21,
      (int)v46);
  wil::GetActivationFactory<Windows::Foundation::IUriRuntimeClassFactory>((const WCHAR *)&v56, v22, v23);
  v48 = 0LL;
  v24 = *v56;
  v48 = 0LL;
  v25 = (*(__int64 (__fastcall **)(__int64 *, HSTRING, __int64 *))(v24 + 48))(v56, v49, &v48);
  if ( v25 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x82,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v25,
      (int)v46);
  wil::com_ptr_t<Windows::UI::StartScreen::ISecondaryTile,wil::err_exception_policy>::query<Windows::UI::StartScreen::ISecondaryTile2>(
    &v46,
    &v55);
  v47 = 0LL;
  v26 = *v55;
  v47 = 0LL;
  v27 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v26 + 64))(v55, &v47);
  if ( v27 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x86,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v27,
      (int)v46);
  v28 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v47 + 80LL))(v47, v48);
  if ( v28 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x87,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v28,
      (int)v46);
  v29 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v47 + 48LL))(v47, v48);
  if ( v29 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x88,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v29,
      (int)v46);
  wil::com_ptr_t<Windows::UI::StartScreen::ISecondaryTile,wil::err_exception_policy>::query<Windows::Internal::UI::StartScreen::ISecondaryTilePrivate>(
    &v46,
    &v52);
  v30 = v52;
  v31 = *(__int64 (__fastcall **)(__int64, PVOID))(*(_QWORD *)v52 + 48LL);
  v33 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v57, (const WCHAR **)&off_1800FE430, v32);
  v34 = v31(v30, v33[1].Reserved.Reserved1);
  if ( v34 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v34,
      (int)v46);
  v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v52 + 104LL))(v52);
  if ( v35 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v35,
      (int)v46);
  wil::GetActivationFactory<Windows::Internal::ApplicationModel::IPinnableSurfaceFactory>((const WCHAR *)&v54, v36, v37);
  v50 = 0LL;
  v38 = *v54;
  v50 = 0LL;
  v39 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v38 + 48))(v54, &v50);
  if ( v39 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x92,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v39,
      (int)v46);
  v41 = v50;
  v42 = *(__int64 (__fastcall **)(__int64, PVOID, _QWORD))(*(_QWORD *)v50 + 64LL);
  v43 = v46;
  v44 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v57, (const WCHAR **)&off_1800FE430, v40);
  v45 = v42(v41, v44[1].Reserved.Reserved1, v43);
  if ( v45 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x93,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v45,
      (int)v46);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v50);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v54);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v52);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v47);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v55);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v48);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v56);
  WindowsDeleteString(v49);
  v49 = 0LL;
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v46);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)v51);
}
