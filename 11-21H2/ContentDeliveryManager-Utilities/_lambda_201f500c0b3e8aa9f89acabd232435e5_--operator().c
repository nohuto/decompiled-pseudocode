/*
 * XREFs of _lambda_201f500c0b3e8aa9f89acabd232435e5_::operator() @ 0x1800D2890
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_201f500c0b3e8aa9f89acabd232435e5__&_::Run @ 0x1800D4AE0 (wil--details--functor_wrapper_void__lambda_201f500c0b3e8aa9f89acabd232435e5__-_--Run.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003F5AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UISecondaryTile@StartScreen@UI@Windows@@@wil@@YA?AV?$com_ptr_t@UISecondaryTile@StartScreen@UI@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800D215C (--$ActivateInstance@UISecondaryTile@StartScreen@UI@Windows@@@wil@@YA-AV-$com_ptr_t@UISecondaryTi.c)
 *     ??$GetActivationFactory@UIPinnableSurfaceFactory@ApplicationModel@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIPinnableSurfaceFactory@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800D2504 (--$GetActivationFactory@UIPinnableSurfaceFactory@ApplicationModel@Internal@Windows@@@wil@@YA-AV-.c)
 *     ??$GetActivationFactory@UIUriRuntimeClassFactory@Foundation@Windows@@@wil@@YA?AV?$com_ptr_t@UIUriRuntimeClassFactory@Foundation@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800D25A4 (--$GetActivationFactory@UIUriRuntimeClassFactory@Foundation@Windows@@@wil@@YA-AV-$c_ea_1800D25A4.c)
 *     ?CopyFaviconToEdge@@YAJPEAUHSTRING__@@PEAPEAU1@@Z @ 0x1800D300C (-CopyFaviconToEdge@@YAJPEAUHSTRING__@@PEAPEAU1@@Z.c)
 *     ?CreateLaunchArgumentsFromUrl@PinnedWebsiteManager@Actions@CreativeFramework@@YA?AVHString@Wrappers@WRL@Microsoft@@PEB_W@Z @ 0x1800D33CC (-CreateLaunchArgumentsFromUrl@PinnedWebsiteManager@Actions@CreativeFramework@@YA-AVHString@Wrapp.c)
 *     ?GetTileIdforNavigationUrl@EdgeTileUtils@@YAJPEB_WPEAPEA_W@Z @ 0x1800D3C24 (-GetTileIdforNavigationUrl@EdgeTileUtils@@YAJPEB_WPEAPEA_W@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=26
void __fastcall lambda_201f500c0b3e8aa9f89acabd232435e5_::operator()(__int64 a1, __int64 a2, wchar_t **a3)
{
  EdgeTileUtils **v4; // r15
  int TileIdforNavigationUrl; // eax
  __int64 v6; // rdx
  unsigned int v7; // r8d
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, HSTRING); // rsi
  WCHAR *v11; // rdi
  unsigned __int64 v12; // rcx
  HRESULT v13; // eax
  int v14; // eax
  unsigned int v15; // r8d
  wil::details::in1diag3 *v16; // rcx
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, PVOID); // rsi
  HSTRING_HEADER *v19; // rax
  int v20; // eax
  __int64 v21; // rbx
  __int64 (__fastcall *v22)(__int64, _QWORD); // rsi
  _QWORD *v23; // rax
  int v24; // eax
  unsigned int v25; // r8d
  HSTRING_HEADER *v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  unsigned int v29; // r8d
  __int64 v30; // rax
  int v31; // eax
  int v32; // eax
  __int64 v33; // rax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  unsigned int v38; // r8d
  __int64 v39; // rbx
  __int64 (__fastcall *v40)(__int64, PVOID); // rsi
  HSTRING_HEADER *v41; // rax
  int v42; // eax
  int v43; // eax
  __int64 v44; // rdx
  unsigned int v45; // r8d
  __int64 v46; // rax
  int v47; // eax
  unsigned int v48; // r8d
  __int64 v49; // rbx
  __int64 (__fastcall *v50)(__int64, PVOID, __int64); // r14
  __int64 v51; // rsi
  HSTRING_HEADER *v52; // rax
  int v53; // eax
  __int64 v54; // [rsp+20h] [rbp-49h] BYREF
  __int64 v55; // [rsp+28h] [rbp-41h] BYREF
  __int64 v56; // [rsp+30h] [rbp-39h] BYREF
  HSTRING v57; // [rsp+38h] [rbp-31h] BYREF
  __int64 v58; // [rsp+40h] [rbp-29h] BYREF
  __int64 v59; // [rsp+48h] [rbp-21h] BYREF
  __int64 *v60; // [rsp+50h] [rbp-19h] BYREF
  PCWSTR sourceString; // [rsp+58h] [rbp-11h] BYREF
  __int64 *v62; // [rsp+60h] [rbp-9h] BYREF
  __int64 *v63; // [rsp+68h] [rbp-1h] BYREF
  HSTRING v64; // [rsp+70h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp+Fh] BYREF
  HSTRING string; // [rsp+90h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  sourceString = 0LL;
  v4 = *(EdgeTileUtils ***)a1;
  TileIdforNavigationUrl = EdgeTileUtils::GetTileIdforNavigationUrl(
                             **(EdgeTileUtils ***)a1,
                             (const wchar_t *)&sourceString,
                             a3);
  v8 = retaddr;
  if ( TileIdforNavigationUrl < 0 )
LABEL_42:
    wil::details::in1diag3::Throw_Hr(
      v8,
      118LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)TileIdforNavigationUrl,
      v54);
  wil::ActivateInstance<Windows::UI::StartScreen::ISecondaryTile>(&v54, v6, v7);
  v9 = v54;
  v10 = *(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v54 + 48LL);
  string = 0LL;
  v11 = (WCHAR *)sourceString;
  v12 = -1LL;
  do
    ++v12;
  while ( sourceString[v12] );
  if ( v12 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    goto LABEL_42;
  }
  if ( (int)v12 + 1 < (unsigned int)v12 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    __debugbreak();
  }
  v13 = WindowsCreateStringReference(sourceString, v12, &hstringHeader, &string);
  if ( v13 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
LABEL_45:
    wil::details::in1diag3::Throw_Hr(
      v16,
      121LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v14,
      v54);
  }
  v14 = v10(v9, string);
  v16 = retaddr;
  if ( v14 < 0 )
    goto LABEL_45;
  v17 = v54;
  v18 = *(__int64 (__fastcall **)(__int64, PVOID))(*(_QWORD *)v54 + 96LL);
  v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, *(const WCHAR ***)(a1 + 8), v15);
  v20 = v18(v17, v19[1].Reserved.Reserved1);
  if ( v20 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      122LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v20,
      v54);
  v21 = v54;
  v22 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v54 + 64LL);
  v23 = (_QWORD *)CreativeFramework::Actions::PinnedWebsiteManager::CreateLaunchArgumentsFromUrl(&v64, *v4);
  v24 = v22(v21, *v23);
  if ( v24 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      123LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v24,
      v54);
  WindowsDeleteString(v64);
  v57 = 0LL;
  WindowsDeleteString(0LL);
  v57 = 0LL;
  v26 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, *(const WCHAR ***)(a1 + 16), v25);
  v27 = CopyFaviconToEdge((HSTRING)v26[1].Reserved.Reserved1, &v57);
  if ( v27 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      127LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v27,
      v54);
  wil::GetActivationFactory<Windows::Foundation::IUriRuntimeClassFactory>((const WCHAR *)&v63, v28, v29);
  v56 = 0LL;
  v30 = *v63;
  v56 = 0LL;
  v31 = (*(__int64 (__fastcall **)(__int64 *, HSTRING, __int64 *))(v30 + 48))(v63, v57, &v56);
  if ( v31 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      130LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v31,
      v54);
  v60 = 0LL;
  v32 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 **))v54)(
          v54,
          &GUID_b2f6cc35_3250_4990_923c_294ab4b694dd,
          &v60);
  if ( v32 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      6136LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v32,
      v54);
  v55 = 0LL;
  v33 = *v60;
  v55 = 0LL;
  v34 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v33 + 64))(v60, &v55);
  if ( v34 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      134LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v34,
      v54);
  v35 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v55 + 80LL))(v55, v56);
  if ( v35 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      135LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v35,
      v54);
  v36 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v55 + 48LL))(v55, v56);
  if ( v36 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      136LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v36,
      v54);
  v59 = 0LL;
  v37 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v54)(
          v54,
          &GUID_2d7f0d3b_ec36_463b_9f69_d7238d77c122,
          &v59);
  if ( v37 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      6136LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v37,
      v54);
  v39 = v59;
  v40 = *(__int64 (__fastcall **)(__int64, PVOID))(*(_QWORD *)v59 + 48LL);
  v41 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          &hstringHeader,
          (const WCHAR **)&off_18011A190,
          v38);
  v42 = v40(v39, v41[1].Reserved.Reserved1);
  if ( v42 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      140LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v42,
      v54);
  v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v59 + 104LL))(v59);
  if ( v43 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      141LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v43,
      v54);
  wil::GetActivationFactory<Windows::Internal::ApplicationModel::IPinnableSurfaceFactory>((const WCHAR *)&v62, v44, v45);
  v58 = 0LL;
  v46 = *v62;
  v58 = 0LL;
  v47 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v46 + 48))(v62, &v58);
  if ( v47 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      146LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v47,
      v54);
  v49 = v58;
  v50 = *(__int64 (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)v58 + 64LL);
  v51 = v54;
  v52 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          &hstringHeader,
          (const WCHAR **)&off_18011A190,
          v48);
  v53 = v50(v49, v52[1].Reserved.Reserved1, v51);
  if ( v53 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      147LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v53,
      v54);
  if ( v58 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
  if ( v62 )
    (*(void (__fastcall **)(__int64 *))(*v62 + 16))(v62);
  if ( v59 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
  if ( v55 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
  if ( v60 )
    (*(void (__fastcall **)(__int64 *))(*v60 + 16))(v60);
  if ( v56 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
  if ( v63 )
    (*(void (__fastcall **)(__int64 *))(*v63 + 16))(v63);
  WindowsDeleteString(v57);
  v57 = 0LL;
  if ( v54 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
  if ( v11 )
    CoTaskMemFree(v11);
}
