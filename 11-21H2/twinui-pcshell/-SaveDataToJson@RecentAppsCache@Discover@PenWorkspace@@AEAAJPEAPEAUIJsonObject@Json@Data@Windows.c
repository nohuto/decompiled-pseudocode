/*
 * XREFs of ?SaveDataToJson@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x180093C14
 * Callers:
 *     ?SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x180150478 (-SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800406B0 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UIJsonObject@Json@Data@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIJsonObject@Json@Data@1@@Z @ 0x1800B3608 (--$ActivateInstance@UIJsonObject@Json@Data@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPE.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@0@@Z @ 0x180122AB0 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@std@@@s.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@@Z @ 0x18014F30C (-GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV-$vector@V-$shared_ptr@UAppUsa.c)
 *     ??$As@UIJsonValue@Json@Data@Windows@@@?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIJsonValue@Json@Data@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180150988 (--$As@UIJsonValue@Json@Data@Windows@@@-$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@QE.c)
 *     ??$ActivateInstance@V?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18017A778 (--$ActivateInstance@V-$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@@Foundation@Windows.c)
 *     ??$As@U?$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18017CC3C (--$As@U-$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@-$ComPtr@UI.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801EAD20 (_guard_dispatch_icall_nop.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802E6814 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::SaveDataToJson(
        PenWorkspace::Discover::RecentAppsCache *this,
        struct Windows::Data::Json::IJsonObject **a2)
{
  struct Windows::Data::Json::IJsonObject **v2; // rdi
  int SortedAppList; // eax
  int v4; // ebx
  HSTRING v5; // rbx
  int ActivationFactory; // eax
  int v7; // eax
  int v8; // eax
  int v9; // r13d
  __int64 v10; // r14
  __int64 v11; // r15
  HRESULT v12; // eax
  int v13; // edx
  unsigned int v14; // r8d
  HSTRING v15; // rbx
  int v16; // eax
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, _QWORD, __int64 *); // rdi
  _QWORD *v19; // rax
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rbx
  __int64 (__fastcall *v23)(__int64, _QWORD, __int64); // rsi
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(__int64, __int64, __int64 *); // rdi
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 (__fastcall *v30)(__int64, _QWORD, __int64); // rsi
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 (__fastcall *v34)(__int64, __int64, __int64 *); // rdi
  __int64 v35; // rdx
  __int64 v36; // rbx
  __int64 (__fastcall *v37)(__int64, _QWORD, __int64); // rsi
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 (__fastcall *v41)(__int64, __int64, __int64 *); // rdi
  __int64 v42; // rdx
  __int64 v43; // rbx
  __int64 (__fastcall *v44)(__int64, _QWORD, __int64); // rsi
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 (__fastcall *v48)(__int64, __int64, __int64 *); // rdi
  __int64 v49; // rdx
  __int64 v50; // rbx
  __int64 (__fastcall *v51)(__int64, _QWORD, __int64); // rsi
  __int64 v52; // rdi
  __int64 v53; // rax
  int v54; // eax
  int v55; // eax
  struct Windows::Data::Json::IJsonObject *v56; // rsi
  __int64 (__fastcall *v57)(struct Windows::Data::Json::IJsonObject *, _QWORD, __int64); // rdi
  __int64 v58; // rbx
  __int64 v59; // rax
  __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // [rsp+20h] [rbp-59h] BYREF
  __int64 v65; // [rsp+28h] [rbp-51h] BYREF
  __int64 v66; // [rsp+30h] [rbp-49h] BYREF
  int v67; // [rsp+38h] [rbp-41h]
  __int64 v68; // [rsp+40h] [rbp-39h] BYREF
  __int64 v69; // [rsp+48h] [rbp-31h] BYREF
  __int64 v70; // [rsp+50h] [rbp-29h] BYREF
  __int64 v71; // [rsp+58h] [rbp-21h] BYREF
  __int128 v72; // [rsp+60h] [rbp-19h] BYREF
  __int64 v73; // [rsp+70h] [rbp-9h]
  struct Windows::Data::Json::IJsonObject **v74; // [rsp+78h] [rbp-1h]
  _QWORD *v75; // [rsp+80h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp+Fh] BYREF
  HSTRING string; // [rsp+A0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v2 = a2;
  v74 = a2;
  *a2 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  SortedAppList = PenWorkspace::Discover::RecentAppsCache::GetSortedAppList(this, &v72);
  v4 = SortedAppList;
  if ( SortedAppList < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x318,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)SortedAppList);
  }
  else
  {
    v66 = 0LL;
    string = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Data.Json.JsonValue",
      0x1Cu,
      0x1Bu);
    v5 = string;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v66);
    ActivationFactory = RoGetActivationFactory(v5, &GUID_5f6b544a_2f53_48e1_91a3_f78b50a6345c, &v66);
    v4 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x31B,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)ActivationFactory);
    }
    else
    {
      v69 = 0LL;
      string = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Windows.Data.Json.JsonArray",
        0x1Cu,
        0x1Bu);
      v7 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonArray>>(string, &v69);
      v4 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x31E,
          (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
          (const char *)(unsigned int)v7);
      }
      else
      {
        v71 = 0LL;
        v8 = Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonArray>::As<Windows::Foundation::Collections::IVector<Windows::Data::Json::IJsonValue *>>(
               &v69,
               &v71);
        v4 = v8;
        if ( v8 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x321,
            (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
            (const char *)(unsigned int)v8);
        }
        else
        {
          v4 = 0;
          v67 = 0;
          v9 = 0;
          v10 = (__int64)(*((_QWORD *)&v72 + 1) - v72) >> 4;
          if ( (int)v10 > 0 )
          {
            v11 = v72;
            while ( 1 )
            {
              if ( v4 >= 30 )
              {
LABEL_27:
                v2 = v74;
                break;
              }
              if ( *(int *)(*(_QWORD *)v11 + 32LL) >= 3 )
              {
                v65 = 0LL;
                string = 0LL;
                v12 = WindowsCreateStringReference(L"Windows.Data.Json.JsonObject", 0x1Cu, &hstringHeader, &string);
                if ( v12 < 0 )
                {
                  Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12, v13, v14);
LABEL_61:
                  v63 = 839LL;
LABEL_64:
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v63,
                    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                    (const char *)(unsigned int)v55);
                  goto LABEL_32;
                }
                v15 = string;
                Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v65);
                v16 = Windows::Foundation::ActivateInstance<Windows::Data::Json::IJsonObject>(v15, &v65);
                v4 = v16;
                if ( v16 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x32D,
                    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                    (const char *)(unsigned int)v16);
                  goto LABEL_59;
                }
                v64 = 0LL;
                v17 = v66;
                v18 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v66 + 80LL);
                Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v64);
                v19 = *(_QWORD **)v11;
                if ( *(_QWORD *)(*(_QWORD *)v11 + 24LL) >= 8uLL )
                  v19 = (_QWORD *)*v19;
                v75 = v19;
                v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v75);
                v21 = v18(v17, *(_QWORD *)(v20 + 24), &v64);
                v4 = v21;
                if ( v21 < 0 )
                {
                  v62 = 816LL;
                  goto LABEL_56;
                }
                v22 = v65;
                v23 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v65 + 56LL);
                v24 = v64;
                v25 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &off_18061DA88);
                v21 = v23(v22, *(_QWORD *)(v25 + 24), v24);
                v4 = v21;
                if ( v21 < 0 )
                {
                  v62 = 817LL;
                  goto LABEL_56;
                }
                v26 = v66;
                v27 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v66 + 72LL);
                Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v64);
                v21 = v27(v26, v28, &v64);
                v4 = v21;
                if ( v21 < 0 )
                {
                  v62 = 819LL;
                  goto LABEL_56;
                }
                v29 = v65;
                v30 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v65 + 56LL);
                v31 = v64;
                v32 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, off_18061DA70);
                v21 = v30(v29, *(_QWORD *)(v32 + 24), v31);
                v4 = v21;
                if ( v21 < 0 )
                {
                  v62 = 820LL;
                  goto LABEL_56;
                }
                v33 = v66;
                v34 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v66 + 72LL);
                Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v64);
                v21 = v34(v33, v35, &v64);
                v4 = v21;
                if ( v21 < 0 )
                {
                  v62 = 822LL;
                  goto LABEL_56;
                }
                v36 = v65;
                v37 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v65 + 56LL);
                v38 = v64;
                v39 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, off_18061DA78);
                v21 = v37(v36, *(_QWORD *)(v39 + 24), v38);
                v4 = v21;
                if ( v21 < 0 )
                {
                  v62 = 823LL;
                  goto LABEL_56;
                }
                v40 = v66;
                v41 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v66 + 72LL);
                Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v64);
                v21 = v41(v40, v42, &v64);
                v4 = v21;
                if ( v21 < 0 )
                {
                  v62 = 825LL;
                  goto LABEL_56;
                }
                v43 = v65;
                v44 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v65 + 56LL);
                v45 = v64;
                v46 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, off_18061DA80);
                v21 = v44(v43, *(_QWORD *)(v46 + 24), v45);
                v4 = v21;
                if ( v21 < 0 )
                {
                  v62 = 826LL;
                  goto LABEL_56;
                }
                v47 = v66;
                v48 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v66 + 64LL);
                Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v64);
                LOBYTE(v49) = *(_BYTE *)(*(_QWORD *)v11 + 44LL);
                v21 = v48(v47, v49, &v64);
                v4 = v21;
                if ( v21 < 0 )
                {
                  v62 = 828LL;
LABEL_56:
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v62,
                    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                    (const char *)(unsigned int)v21);
                  goto LABEL_57;
                }
                v50 = v65;
                v51 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v65 + 56LL);
                v52 = v64;
                v53 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, off_18061DA68);
                v21 = v51(v50, *(_QWORD *)(v53 + 24), v52);
                v4 = v21;
                if ( v21 < 0 )
                {
                  v62 = 829LL;
                  goto LABEL_56;
                }
                v68 = 0LL;
                v54 = Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonArray>::As<Windows::Data::Json::IJsonValue>(
                        &v65,
                        &v68);
                v4 = v54;
                if ( v54 < 0 )
                {
                  v61 = 832LL;
LABEL_45:
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v61,
                    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                    (const char *)(unsigned int)v54);
                  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v68);
LABEL_57:
                  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v64);
LABEL_59:
                  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v65);
                  goto LABEL_33;
                }
                v54 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v71 + 104LL))(v71, v68);
                v4 = v54;
                if ( v54 < 0 )
                {
                  v61 = 833LL;
                  goto LABEL_45;
                }
                v4 = ++v67;
                Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v68);
                Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v64);
                Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v65);
              }
              ++v9;
              v11 += 16LL;
              if ( v9 >= (int)v10 )
                goto LABEL_27;
            }
          }
          v70 = 0LL;
          v55 = Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonArray>::As<Windows::Data::Json::IJsonValue>(&v69, &v70);
          v4 = v55;
          if ( v55 < 0 )
            goto LABEL_61;
          string = 0LL;
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(
            &hstringHeader,
            L"Windows.Data.Json.JsonObject",
            0x1Du,
            0x1Cu);
          v55 = Windows::Foundation::ActivateInstance<Windows::Data::Json::IJsonObject>(string, v2);
          v4 = v55;
          if ( v55 < 0 )
          {
            v63 = 841LL;
            goto LABEL_64;
          }
          v56 = *v2;
          v57 = *(__int64 (__fastcall **)(struct Windows::Data::Json::IJsonObject *, _QWORD, __int64))(*(_QWORD *)*v2 + 56LL);
          v58 = v70;
          v59 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &off_18061DC48);
          v55 = v57(v56, *(_QWORD *)(v59 + 24), v58);
          v4 = v55;
          if ( v55 < 0 )
          {
            v63 = 842LL;
            goto LABEL_64;
          }
          v4 = 0;
LABEL_32:
          Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v70);
        }
LABEL_33:
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v71);
      }
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v69);
    }
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v66);
  }
  if ( (_QWORD)v72 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>(
      v72,
      *((_QWORD *)&v72 + 1));
    std::_Deallocate<16,0>(v72, (v73 - v72) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return (unsigned int)v4;
}
