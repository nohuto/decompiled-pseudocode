/*
 * XREFs of ?LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x1800944EC
 * Callers:
 *     ?LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1801506F0 (-LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800406B0 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@Z @ 0x1800FF01C (-IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV-$shared_ptr@UAppUsageData.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18010AACC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$emplace@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@std@@_N@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@AEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@1@@Z @ 0x180126BD0 (--$emplace@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAV-$shared_ptr@UAp.c)
 *     ??$make_shared@UAppUsageData@Discover@PenWorkspace@@$$V@std@@YA?AV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@XZ @ 0x18014D584 (--$make_shared@UAppUsageData@Discover@PenWorkspace@@$$V@std@@YA-AV-$shared_ptr@UAppUsageData@Dis.c)
 *     ??$As@U?$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18017CC3C (--$As@U-$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@-$ComPtr@UI.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801EAD20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::LoadJsonDataFromDisk(
        RTL_SRWLOCK *this,
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
  PCWSTR StringRawBuffer; // rax
  __int64 v34; // r8
  __int64 v36; // rdx
  __int64 v37; // rdx
  HSTRING string; // [rsp+20h] [rbp-188h] BYREF
  _BYTE v39[8]; // [rsp+28h] [rbp-180h] BYREF
  __int64 v40; // [rsp+30h] [rbp-178h] BYREF
  __int64 v41; // [rsp+38h] [rbp-170h] BYREF
  __int64 v42[2]; // [rsp+40h] [rbp-168h] BYREF
  std::_Ref_count_base *v43[2]; // [rsp+50h] [rbp-158h] BYREF
  __int64 v44; // [rsp+60h] [rbp-148h] BYREF
  unsigned int v45; // [rsp+68h] [rbp-140h] BYREF
  RTL_SRWLOCK *v46; // [rsp+70h] [rbp-138h] BYREF
  double v47; // [rsp+78h] [rbp-130h] BYREF
  double v48; // [rsp+80h] [rbp-128h] BYREF
  double v49; // [rsp+88h] [rbp-120h] BYREF
  __int128 v50; // [rsp+90h] [rbp-118h] BYREF
  _BYTE v51[16]; // [rsp+A8h] [rbp-100h] BYREF
  _BYTE v52[32]; // [rsp+B8h] [rbp-F0h] BYREF
  _BYTE v53[32]; // [rsp+D8h] [rbp-D0h] BYREF
  _BYTE v54[32]; // [rsp+F8h] [rbp-B0h] BYREF
  _BYTE v55[32]; // [rsp+118h] [rbp-90h] BYREF
  _BYTE v56[32]; // [rsp+138h] [rbp-70h] BYREF
  _BYTE v57[32]; // [rsp+158h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  v44 = 0LL;
  v4 = *(__int64 (__fastcall **)(struct Windows::Data::Json::IJsonObject *, _QWORD, __int64 *))(*(_QWORD *)a2 + 72LL);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v44);
  v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v52, &off_18061DC48);
  v6 = v4(a2, *(_QWORD *)(v5 + 24), &v44);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23A,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_24;
  }
  v41 = 0LL;
  v8 = Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonArray>::As<Windows::Foundation::Collections::IVector<Windows::Data::Json::IJsonValue *>>(
         &v44,
         &v41);
  v7 = v8;
  if ( v8 < 0 )
  {
    v36 = 573LL;
    goto LABEL_28;
  }
  v9 = 0;
  v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v41 + 56LL))(v41, &v45);
  v7 = v8;
  if ( v8 < 0 )
  {
    v36 = 577LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v36,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v8);
LABEL_31:
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v41);
    goto LABEL_24;
  }
  for ( i = 0; i < v45; ++i )
  {
    v42[0] = 0LL;
    v11 = v41;
    v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v41 + 48LL);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(v42);
    v13 = v12(v11, i, v42);
    v7 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x245,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v13);
      goto LABEL_30;
    }
    v40 = 0LL;
    v14 = v42[0];
    v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v42[0] + 96LL);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v40);
    v16 = v15(v14, &v40);
    v7 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x248,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v16);
      goto LABEL_35;
    }
    string = 0LL;
    v17 = v40;
    v18 = *(__int64 (__fastcall **)(__int64, _QWORD, HSTRING *))(*(_QWORD *)v40 + 80LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v53, &off_18061DA88);
    v20 = v18(v17, *(_QWORD *)(v19 + 24), &string);
    v7 = v20;
    if ( v20 < 0 )
    {
      v37 = 587LL;
      goto LABEL_34;
    }
    v21 = v40;
    v22 = *(__int64 (__fastcall **)(__int64, _QWORD, double *))(*(_QWORD *)v40 + 88LL);
    v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v54, off_18061DA70);
    v20 = v22(v21, *(_QWORD *)(v23 + 24), &v47);
    v7 = v20;
    if ( v20 < 0 )
    {
      v37 = 590LL;
      goto LABEL_34;
    }
    v24 = v40;
    v25 = *(__int64 (__fastcall **)(__int64, _QWORD, double *))(*(_QWORD *)v40 + 88LL);
    v26 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v55, off_18061DA78);
    v20 = v25(v24, *(_QWORD *)(v26 + 24), &v48);
    v7 = v20;
    if ( v20 < 0 )
    {
      v37 = 593LL;
      goto LABEL_34;
    }
    v27 = v40;
    v28 = *(__int64 (__fastcall **)(__int64, _QWORD, double *))(*(_QWORD *)v40 + 88LL);
    v29 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v56, off_18061DA80);
    v20 = v28(v27, *(_QWORD *)(v29 + 24), &v49);
    v7 = v20;
    if ( v20 < 0 )
    {
      v37 = 596LL;
      goto LABEL_34;
    }
    v30 = v40;
    v31 = *(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)v40 + 96LL);
    v32 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v57, off_18061DA68);
    v20 = v31(v30, *(_QWORD *)(v32 + 24), v39);
    v7 = v20;
    if ( v20 < 0 )
    {
      v37 = 599LL;
LABEL_34:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v37,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v20);
      WindowsDeleteString(string);
      string = 0LL;
LABEL_35:
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v40);
LABEL_30:
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(v42);
      goto LABEL_31;
    }
    std::make_shared<PenWorkspace::Discover::AppUsageData,>(v43);
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v34 = -1LL;
    do
      ++v34;
    while ( StringRawBuffer[v34] );
    std::wstring::assign(v43[0]);
    *((_DWORD *)v43[0] + 8) = (int)v47;
    *((_DWORD *)v43[0] + 9) = (int)v48;
    *((_DWORD *)v43[0] + 10) = (int)v49;
    *((_BYTE *)v43[0] + 44) = v39[0] != 0;
    if ( v43[1] )
      _InterlockedIncrement((volatile signed __int32 *)v43[1] + 2);
    v50 = *(_OWORD *)v43;
    if ( (unsigned __int8)PenWorkspace::Discover::RecentAppsCache::IsQualifiedDisplayItem(this, &v50) )
      ++v9;
    AcquireSRWLockExclusive(this + 21);
    v46 = this + 21;
    std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<PenWorkspace::Discover::AppUsageData>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>,0>>::emplace<std::wstring &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &>(
      &this[2],
      v51,
      v43[0],
      v43);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v46);
    if ( v43[1] )
      std::_Ref_count_base::_Decref(v43[1]);
    WindowsDeleteString(string);
    string = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v40);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(v42);
  }
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v41);
  v7 = -2147467259;
  if ( v9 >= 6 )
    v7 = 0;
LABEL_24:
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v44);
  return v7;
}
