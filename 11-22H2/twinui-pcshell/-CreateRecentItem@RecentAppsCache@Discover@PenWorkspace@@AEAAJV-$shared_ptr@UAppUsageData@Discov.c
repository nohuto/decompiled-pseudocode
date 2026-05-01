/*
 * XREFs of ?CreateRecentItem@RecentAppsCache@Discover@PenWorkspace@@AEAAJV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@PEAPEAUIDiscoverRecentItem@@@Z @ 0x180490690
 * Callers:
 *     ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180490DDC (-GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV-$vector@V-$ComPtr@UIDiscoverRecent.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18028E190 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VUTMRecentItem@Discover@PenWorkspace@@UIDiscoverRecentItem@@PEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Details@WRL@Microsoft@@YAJPEAPEAUIDiscoverRecentItem@@$$QEAPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18048EFE0 (--$MakeAndInitialize@VUTMRecentItem@Discover@PenWorkspace@@UIDiscoverRecentItem@@PEAUIUnifiedTil.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::CreateRecentItem(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rbx
  int ActivationFactory; // eax
  int v8; // ebx
  std::_Ref_count_base *v9; // rcx
  __int64 v11; // rbx
  int (__fastcall *v12)(__int64, PVOID, __int64 *); // rdi
  unsigned int v13; // r8d
  const WCHAR *v14; // rcx
  HSTRING_HEADER *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rdx
  const WCHAR *v18; // rbx
  __int64 (__fastcall *v19)(const WCHAR *, PVOID, __int64 *); // rdi
  unsigned int v20; // r8d
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v21; // rcx
  HSTRING_HEADER *v22; // rax
  __int64 v23; // rdi
  __int64 (__fastcall *v24)(__int64, __int64, struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **); // rbx
  __int64 v25; // rdx
  std::_Ref_count_base *v26; // rcx
  std::_Ref_count_base *v27; // rcx
  __int64 v28; // [rsp+20h] [rbp-60h] BYREF
  __int64 v29; // [rsp+28h] [rbp-58h] BYREF
  const WCHAR *v30; // [rsp+30h] [rbp-50h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v31; // [rsp+38h] [rbp-48h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v32[2]; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  __int64 v34; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v32[1] = (struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *)a2;
  *a3 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v34 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"WindowsInternal.Shell.UnifiedTile.PackagedUnifiedTileIdentifier",
    0x40u,
    0x3Fu);
  v6 = v34;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v29);
  ActivationFactory = RoGetActivationFactory(v6, &GUID_ec3e7864_aaab_4367_9c63_94d289545500, &v29);
  v8 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12B,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)ActivationFactory);
LABEL_3:
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v29);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v28);
    v9 = *(std::_Ref_count_base **)(a2 + 8);
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    return (unsigned int)v8;
  }
  v11 = v29;
  v12 = *(int (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v29 + 48LL);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v28);
  v14 = *(const WCHAR **)a2;
  if ( *(_QWORD *)(*(_QWORD *)a2 + 24LL) >= 8uLL )
    v14 = *(const WCHAR **)v14;
  v30 = v14;
  v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v30, v13);
  if ( v12(v11, v15[1].Reserved.Reserved1, &v28) < 0 )
  {
    v30 = 0LL;
    v34 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"WindowsInternal.Shell.UnifiedTile.Win32UnifiedTileIdentifier",
      0x3Du,
      0x3Cu);
    v16 = v34;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v30);
    v8 = RoGetActivationFactory(v16, &GUID_0e7735be_a965_44a6_a75f_54b8bcd67bec, &v30);
    if ( v8 < 0 )
    {
      v17 = 303LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v8);
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v30);
      goto LABEL_3;
    }
    v18 = v30;
    v19 = *(__int64 (__fastcall **)(const WCHAR *, PVOID, __int64 *))(*(_QWORD *)v30 + 48LL);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v28);
    v21 = *(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **)a2;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 24LL) >= 8uLL )
      v21 = *(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **)v21;
    v32[0] = v21;
    v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)v32, v20);
    v8 = v19(v18, v22[1].Reserved.Reserved1, &v28);
    if ( v8 < 0 )
    {
      v17 = 304LL;
      goto LABEL_11;
    }
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v30);
  }
  v31 = 0LL;
  v23 = *(_QWORD *)(a1 + 192);
  v24 = *(__int64 (__fastcall **)(__int64, __int64, struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **))(*(_QWORD *)v23 + 72LL);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v31);
  v8 = v24(v23, v28, &v31);
  if ( v8 < 0 )
  {
    v25 = 308LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v31);
    goto LABEL_3;
  }
  if ( v31 )
  {
    v32[0] = v31;
    v8 = Microsoft::WRL::Details::MakeAndInitialize<PenWorkspace::Discover::UTMRecentItem,IDiscoverRecentItem,WindowsInternal::Shell::UnifiedTile::IUnifiedTile *>(
           a3,
           v32);
    if ( v8 < 0 )
    {
      v25 = 311LL;
      goto LABEL_19;
    }
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v31);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v29);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v28);
    v27 = *(std::_Ref_count_base **)(a2 + 8);
    if ( v27 )
      std::_Ref_count_base::_Decref(v27);
    return 0LL;
  }
  else
  {
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v31);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v29);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v28);
    v26 = *(std::_Ref_count_base **)(a2 + 8);
    if ( v26 )
      std::_Ref_count_base::_Decref(v26);
    return 2147549183LL;
  }
}
