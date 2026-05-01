/*
 * XREFs of ?LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x18009A8C0
 * Callers:
 *     ?LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x180186908 (-LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$emplace@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@std@@_N@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@AEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@1@@Z @ 0x18008FC48 (--$emplace@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAV-$shared_ptr@UAp.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@Z @ 0x18009E370 (-IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV-$shared_ptr@UAppUsageData.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800E15F0 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_shared@UAppUsageData@Discover@PenWorkspace@@$$V@std@@YA?AV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@XZ @ 0x180175124 (--$make_shared@UAppUsageData@Discover@PenWorkspace@@$$V@std@@YA-AV-$shared_ptr@UAppUsageData@Dis.c)
 *     ??0?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@QEAA@AEBV01@@Z @ 0x18017ADC8 (--0-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$As@U?$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801B9A40 (--$As@U-$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@-$ComPtr@UI.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18028E190 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::LoadJsonDataFromDisk(
        PenWorkspace::Discover::RecentAppsCache *this,
        struct Windows::Data::Json::IJsonObject *a2)
{
  __int64 (__fastcall *v4)(struct Windows::Data::Json::IJsonObject *, _QWORD, __int64 *); // rbx
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v9; // r15d
  unsigned int i; // r14d
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64 *); // rdi
  int v13; // eax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, __int64 *); // rdi
  int v16; // eax
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, _QWORD, HSTRING *); // rdi
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rbx
  __int64 (__fastcall *v22)(__int64, _QWORD, double *); // rdi
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64, _QWORD, double *); // rdi
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 (__fastcall *v28)(__int64, _QWORD, double *); // rdi
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 (__fastcall *v31)(__int64, _QWORD, _BYTE *); // rdi
  __int64 v32; // rax
  WCHAR *StringRawBuffer; // rax
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v37; // rdx
  __int64 v38; // rdx
  HSTRING string; // [rsp+20h] [rbp-F8h] BYREF
  _BYTE v40[8]; // [rsp+28h] [rbp-F0h] BYREF
  __int64 v41; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v42; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v43; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v44; // [rsp+48h] [rbp-D0h] BYREF
  void *v45; // [rsp+50h] [rbp-C8h] BYREF
  std::_Ref_count_base *v46; // [rsp+58h] [rbp-C0h]
  unsigned int v47; // [rsp+60h] [rbp-B8h] BYREF
  _BYTE v48[8]; // [rsp+68h] [rbp-B0h] BYREF
  double v49; // [rsp+70h] [rbp-A8h] BYREF
  double v50; // [rsp+78h] [rbp-A0h] BYREF
  double v51[2]; // [rsp+80h] [rbp-98h] BYREF
  _BYTE v52[16]; // [rsp+90h] [rbp-88h] BYREF
  _BYTE v53[32]; // [rsp+A0h] [rbp-78h] BYREF
  _BYTE v54[32]; // [rsp+C0h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+0h]

  v44 = 0LL;
  v4 = *(__int64 (__fastcall **)(struct Windows::Data::Json::IJsonObject *, _QWORD, __int64 *))(*(_QWORD *)a2 + 72LL);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v44);
  v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v54, &off_1807B2318);
  v6 = v4(a2, *(_QWORD *)(v5 + 24), &v44);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23C,
      (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v6,
      (int)string);
    goto LABEL_22;
  }
  v42 = 0LL;
  v8 = Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonArray>::As<Windows::Foundation::Collections::IVector<Windows::Data::Json::IJsonValue *>>(
         &v44,
         &v42);
  v7 = v8;
  if ( v8 < 0 )
  {
    v37 = 575LL;
    goto LABEL_26;
  }
  v9 = 0;
  v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v42 + 56LL))(v42, &v47);
  v7 = v8;
  if ( v8 < 0 )
  {
    v37 = 579LL;
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v37,
      (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v8,
      (int)string);
LABEL_29:
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v42);
    goto LABEL_22;
  }
  for ( i = 0; i < v47; ++i )
  {
    v43 = 0LL;
    v11 = v42;
    v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v42 + 48LL);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v43);
    v13 = v12(v11, i, &v43);
    v7 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x247,
        (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v13,
        (int)string);
      goto LABEL_28;
    }
    v41 = 0LL;
    v14 = v43;
    v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v43 + 96LL);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v41);
    v16 = v15(v14, &v41);
    v7 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24A,
        (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v16,
        (int)string);
      goto LABEL_33;
    }
    string = 0LL;
    v17 = v41;
    v18 = *(__int64 (__fastcall **)(__int64, _QWORD, HSTRING *))(*(_QWORD *)v41 + 80LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v53, off_1807B2200);
    v20 = v18(v17, *(_QWORD *)(v19 + 24), &string);
    v7 = v20;
    if ( v20 < 0 )
    {
      v38 = 589LL;
      goto LABEL_32;
    }
    v21 = v41;
    v22 = *(__int64 (__fastcall **)(__int64, _QWORD, double *))(*(_QWORD *)v41 + 88LL);
    v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v53, off_1807B21E8);
    v20 = v22(v21, *(_QWORD *)(v23 + 24), &v49);
    v7 = v20;
    if ( v20 < 0 )
    {
      v38 = 592LL;
      goto LABEL_32;
    }
    v24 = v41;
    v25 = *(__int64 (__fastcall **)(__int64, _QWORD, double *))(*(_QWORD *)v41 + 88LL);
    v26 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v53, off_1807B21F0);
    v20 = v25(v24, *(_QWORD *)(v26 + 24), &v50);
    v7 = v20;
    if ( v20 < 0 )
    {
      v38 = 595LL;
      goto LABEL_32;
    }
    v27 = v41;
    v28 = *(__int64 (__fastcall **)(__int64, _QWORD, double *))(*(_QWORD *)v41 + 88LL);
    v29 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v53, off_1807B21F8);
    v20 = v28(v27, *(_QWORD *)(v29 + 24), v51);
    v7 = v20;
    if ( v20 < 0 )
    {
      v38 = 598LL;
      goto LABEL_32;
    }
    v30 = v41;
    v31 = *(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)v41 + 96LL);
    v32 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v53, off_1807B21E0);
    v20 = v31(v30, *(_QWORD *)(v32 + 24), v40);
    v7 = v20;
    if ( v20 < 0 )
    {
      v38 = 601LL;
LABEL_32:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v38,
        (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v20,
        (int)string);
      WindowsDeleteString(string);
      string = 0LL;
LABEL_33:
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v41);
LABEL_28:
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v43);
      goto LABEL_29;
    }
    std::make_shared<PenWorkspace::Discover::AppUsageData,>(&v45);
    StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(string, 0LL);
    v34 = -1LL;
    do
      ++v34;
    while ( StringRawBuffer[v34] );
    std::wstring::assign(v45, StringRawBuffer);
    *((_DWORD *)v45 + 8) = (int)v49;
    *((_DWORD *)v45 + 9) = (int)v50;
    *((_DWORD *)v45 + 10) = (int)v51[0];
    *((_BYTE *)v45 + 44) = v40[0] != 0;
    v35 = std::shared_ptr<PenWorkspace::Discover::AppUsageData>::shared_ptr<PenWorkspace::Discover::AppUsageData>(
            v52,
            &v45);
    if ( (unsigned __int8)PenWorkspace::Discover::RecentAppsCache::IsQualifiedDisplayItem(this, v35) )
      ++v9;
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(v48, (char *)this + 168);
    std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<PenWorkspace::Discover::AppUsageData>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>,0>>::emplace<std::wstring &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &>(
      (__int64)this + 16,
      (__int64)v54,
      v45,
      &v45);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)v48);
    if ( v46 )
      std::_Ref_count_base::_Decref(v46);
    WindowsDeleteString(string);
    string = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v41);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v43);
  }
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v42);
  v7 = -2147467259;
  if ( v9 >= 6 )
    v7 = 0;
LABEL_22:
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v44);
  return v7;
}
