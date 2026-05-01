/*
 * XREFs of ?SaveDataToJson@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x18009A358
 * Callers:
 *     ?SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x180186688 (-SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@0@@Z @ 0x18017AED4 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@std@@@s.c)
 *     ??$As@UIJsonValue@Json@Data@Windows@@@?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIJsonValue@Json@Data@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180186C14 (--$As@UIJsonValue@Json@Data@Windows@@@-$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@QE.c)
 *     ?GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@@Z @ 0x180188918 (-GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV-$vector@V-$shared_ptr@UAppUsa.c)
 *     ??$ActivateInstance@V?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180189634 (--$ActivateInstance@V-$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@@Foundation@Windows.c)
 *     ??$ActivateInstance@V?$ComPtr@UIJsonObject@Json@Data@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIJsonObject@Json@Data@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801897F8 (--$ActivateInstance@V-$ComPtr@UIJsonObject@Json@Data@Windows@@@WRL@Microsoft@@@Foundation@Window.c)
 *     ??$ActivateInstance@UIJsonObject@Json@Data@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIJsonObject@Json@Data@1@@Z @ 0x180189830 (--$ActivateInstance@UIJsonObject@Json@Data@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPE.c)
 *     ??$As@U?$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801B9A40 (--$As@U-$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@-$ComPtr@UI.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18028E190 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::SaveDataToJson(
        PenWorkspace::Discover::RecentAppsCache *this,
        struct Windows::Data::Json::IJsonObject **a2)
{
  struct Windows::Data::Json::IJsonObject **v2; // rdi
  int SortedAppList; // eax
  unsigned int v4; // ebx
  __int64 v5; // rbx
  int ActivationFactory; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ebx
  int v10; // r13d
  __int64 v11; // r15
  __int64 v12; // r14
  int v13; // eax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, _QWORD, __int64 *); // rdi
  _QWORD *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, _QWORD, __int64); // rsi
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(__int64, __int64, __int64 *); // rdi
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(__int64, _QWORD, __int64); // rsi
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 (__fastcall *v31)(__int64, __int64, __int64 *); // rdi
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 (__fastcall *v34)(__int64, _QWORD, __int64); // rsi
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 (__fastcall *v38)(__int64, __int64, __int64 *); // rdi
  __int64 v39; // rdx
  __int64 v40; // rbx
  __int64 (__fastcall *v41)(__int64, _QWORD, __int64); // rsi
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 (__fastcall *v45)(__int64, __int64, __int64 *); // rdi
  __int64 v46; // rdx
  __int64 v47; // rbx
  __int64 (__fastcall *v48)(__int64, _QWORD, __int64); // rsi
  __int64 v49; // rdi
  __int64 v50; // rax
  int v51; // eax
  int v52; // eax
  struct Windows::Data::Json::IJsonObject *v53; // rsi
  __int64 (__fastcall *v54)(struct Windows::Data::Json::IJsonObject *, _QWORD, __int64); // rdi
  __int64 v55; // rbx
  __int64 v56; // rax
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // [rsp+20h] [rbp-59h] BYREF
  __int64 v62; // [rsp+28h] [rbp-51h] BYREF
  __int64 v63; // [rsp+30h] [rbp-49h] BYREF
  int v64; // [rsp+38h] [rbp-41h]
  __int64 v65; // [rsp+40h] [rbp-39h] BYREF
  __int64 v66; // [rsp+48h] [rbp-31h] BYREF
  __int64 v67; // [rsp+50h] [rbp-29h] BYREF
  __int64 v68; // [rsp+58h] [rbp-21h] BYREF
  __int128 v69; // [rsp+60h] [rbp-19h] BYREF
  __int64 v70; // [rsp+70h] [rbp-9h]
  struct Windows::Data::Json::IJsonObject **v71; // [rsp+78h] [rbp-1h]
  _QWORD *v72; // [rsp+80h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v74; // [rsp+A0h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v2 = a2;
  v71 = a2;
  *a2 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  SortedAppList = PenWorkspace::Discover::RecentAppsCache::GetSortedAppList(this, &v69);
  v4 = SortedAppList;
  if ( SortedAppList < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x30D,
      (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)SortedAppList,
      v61);
    goto LABEL_35;
  }
  v63 = 0LL;
  v74 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Data.Json.JsonValue",
    0x1Cu,
    0x1Bu);
  v5 = v74;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v63);
  ActivationFactory = RoGetActivationFactory(v5, &GUID_5f6b544a_2f53_48e1_91a3_f78b50a6345c, &v63);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x310,
      (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)ActivationFactory,
      v61);
    goto LABEL_34;
  }
  v66 = 0LL;
  v74 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Data.Json.JsonArray",
    0x1Cu,
    0x1Bu);
  v7 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonArray>>(v74, &v66);
  v4 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x313,
      (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v7,
      v61);
    goto LABEL_33;
  }
  v68 = 0LL;
  v8 = Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonArray>::As<Windows::Foundation::Collections::IVector<Windows::Data::Json::IJsonValue *>>(
         &v66,
         &v68);
  v4 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x316,
      (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v8,
      v61);
    goto LABEL_32;
  }
  v9 = 0;
  v64 = 0;
  v10 = 0;
  v11 = (__int64)(*((_QWORD *)&v69 + 1) - v69) >> 4;
  if ( (int)v11 <= 0 )
  {
LABEL_27:
    v67 = 0LL;
    v52 = Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonArray>::As<Windows::Data::Json::IJsonValue>(&v66, &v67);
    v4 = v52;
    if ( v52 < 0 )
    {
      v60 = 828LL;
    }
    else
    {
      v74 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Windows.Data.Json.JsonObject",
        0x1Du,
        0x1Cu);
      v52 = Windows::Foundation::ActivateInstance<Windows::Data::Json::IJsonObject>(v74, v2);
      v4 = v52;
      if ( v52 < 0 )
      {
        v60 = 830LL;
      }
      else
      {
        v53 = *v2;
        v54 = *(__int64 (__fastcall **)(struct Windows::Data::Json::IJsonObject *, _QWORD, __int64))(*(_QWORD *)*v2 + 56LL);
        v55 = v67;
        v56 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &off_1807B2318);
        v52 = v54(v53, *(_QWORD *)(v56 + 24), v55);
        v4 = v52;
        if ( v52 >= 0 )
        {
          v4 = 0;
LABEL_31:
          Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v67);
          goto LABEL_32;
        }
        v60 = 831LL;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v60,
      (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v52,
      v61);
    goto LABEL_31;
  }
  v12 = v69;
  while ( 1 )
  {
    if ( v9 >= 30 )
    {
LABEL_26:
      v2 = v71;
      goto LABEL_27;
    }
    if ( *(int *)(*(_QWORD *)v12 + 32LL) < 3 )
      goto LABEL_25;
    v62 = 0LL;
    v74 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Data.Json.JsonObject",
      0x1Du,
      0x1Cu);
    v13 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonObject>>(v74, &v62);
    v4 = v13;
    if ( v13 < 0 )
      break;
    v61 = 0LL;
    v14 = v63;
    v15 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v63 + 80LL);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v61);
    v16 = *(_QWORD **)v12;
    if ( *(_QWORD *)(*(_QWORD *)v12 + 24LL) >= 8uLL )
      v16 = (_QWORD *)*v16;
    v72 = v16;
    v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v72);
    v18 = v15(v14, *(_QWORD *)(v17 + 24), &v61);
    v4 = v18;
    if ( v18 < 0 )
    {
      v59 = 805LL;
      goto LABEL_55;
    }
    v19 = v62;
    v20 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v62 + 56LL);
    v21 = v61;
    v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, off_1807B2200);
    v18 = v20(v19, *(_QWORD *)(v22 + 24), v21);
    v4 = v18;
    if ( v18 < 0 )
    {
      v59 = 806LL;
      goto LABEL_55;
    }
    v23 = v63;
    v24 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v63 + 72LL);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v61);
    v18 = v24(v23, v25, &v61);
    v4 = v18;
    if ( v18 < 0 )
    {
      v59 = 808LL;
      goto LABEL_55;
    }
    v26 = v62;
    v27 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v62 + 56LL);
    v28 = v61;
    v29 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, off_1807B21E8);
    v18 = v27(v26, *(_QWORD *)(v29 + 24), v28);
    v4 = v18;
    if ( v18 < 0 )
    {
      v59 = 809LL;
      goto LABEL_55;
    }
    v30 = v63;
    v31 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v63 + 72LL);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v61);
    v18 = v31(v30, v32, &v61);
    v4 = v18;
    if ( v18 < 0 )
    {
      v59 = 811LL;
      goto LABEL_55;
    }
    v33 = v62;
    v34 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v62 + 56LL);
    v35 = v61;
    v36 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, off_1807B21F0);
    v18 = v34(v33, *(_QWORD *)(v36 + 24), v35);
    v4 = v18;
    if ( v18 < 0 )
    {
      v59 = 812LL;
      goto LABEL_55;
    }
    v37 = v63;
    v38 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v63 + 72LL);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v61);
    v18 = v38(v37, v39, &v61);
    v4 = v18;
    if ( v18 < 0 )
    {
      v59 = 814LL;
      goto LABEL_55;
    }
    v40 = v62;
    v41 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v62 + 56LL);
    v42 = v61;
    v43 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, off_1807B21F8);
    v18 = v41(v40, *(_QWORD *)(v43 + 24), v42);
    v4 = v18;
    if ( v18 < 0 )
    {
      v59 = 815LL;
      goto LABEL_55;
    }
    v44 = v63;
    v45 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v63 + 64LL);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v61);
    LOBYTE(v46) = *(_BYTE *)(*(_QWORD *)v12 + 44LL);
    v18 = v45(v44, v46, &v61);
    v4 = v18;
    if ( v18 < 0 )
    {
      v59 = 817LL;
LABEL_55:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v59,
        (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v18,
        v61);
      goto LABEL_56;
    }
    v47 = v62;
    v48 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v62 + 56LL);
    v49 = v61;
    v50 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, off_1807B21E0);
    v18 = v48(v47, *(_QWORD *)(v50 + 24), v49);
    v4 = v18;
    if ( v18 < 0 )
    {
      v59 = 818LL;
      goto LABEL_55;
    }
    v65 = 0LL;
    v51 = Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonArray>::As<Windows::Data::Json::IJsonValue>(&v62, &v65);
    v4 = v51;
    if ( v51 < 0 )
    {
      v58 = 821LL;
LABEL_44:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v58,
        (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v51,
        v61);
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v65);
LABEL_56:
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v61);
      goto LABEL_58;
    }
    v51 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v68 + 104LL))(v68, v65);
    v4 = v51;
    if ( v51 < 0 )
    {
      v58 = 822LL;
      goto LABEL_44;
    }
    v9 = ++v64;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v65);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v61);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v62);
LABEL_25:
    ++v10;
    v12 += 16LL;
    if ( v10 >= (int)v11 )
      goto LABEL_26;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x322,
    (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
    (const char *)(unsigned int)v13,
    v61);
LABEL_58:
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v62);
LABEL_32:
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v68);
LABEL_33:
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v66);
LABEL_34:
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v63);
LABEL_35:
  if ( (_QWORD)v69 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>(
      v69,
      *((_QWORD *)&v69 + 1));
    std::_Deallocate<16,0>(v69, (v70 - v69) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return v4;
}
