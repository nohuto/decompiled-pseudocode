/*
 * XREFs of ?RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@I@Z @ 0x1800CB794
 * Callers:
 *     ?ProcessContainer@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentContainer@TargetedContent@Services@Windows@@PEAUHSTRING__@@PEAUITargetedContentIdAliasStore@Internal@567@@Z @ 0x1800CAB3C (-ProcessContainer@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITarge.c)
 *     ?RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@I@Z @ 0x1800CB794 (-RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18003FC10 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180060494 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$make_shared@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA?AV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@XZ @ 0x1800C6634 (--$make_shared@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA-AV-$shared_ptr@UIt.c)
 *     ??Dvector_iterator@?$vector_range@U?$IVectorView@PEAVTargetedContentCollection@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEBV?$ComPtr@UITargetedContentCollection@TargetedContent@Services@Windows@@@WRL@Microsoft@@XZ @ 0x1800C76F0 (--Dvector_iterator@-$vector_range@U-$IVectorView@PEAVTargetedContentCollection@TargetedContent@S.c)
 *     ??Dvector_iterator@?$vector_range@U?$IVectorView@PEAVTargetedContentItem@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEBV?$ComPtr@UITargetedContentItem@TargetedContent@Services@Windows@@@WRL@Microsoft@@XZ @ 0x1800C7778 (--Dvector_iterator@-$vector_range@U-$IVectorView@PEAVTargetedContentItem@TargetedContent@Service.c)
 *     ?GetNumberFromPropertyBag@TargetedContentLayoutHelpers@CreativeFramework@@YANPEB_WPEAU?$IMapView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@PEAE@Z @ 0x1800C913C (-GetNumberFromPropertyBag@TargetedContentLayoutHelpers@CreativeFramework@@YANPEB_WPEAU-$IMapView.c)
 *     ?RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@I@Z @ 0x1800CB794 (-RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA.c)
 *     ?end@?$vector_range@U?$IVectorView@PEAVTargetedContentCollection@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA?AVvector_iterator@12@XZ @ 0x1800CCDF0 (-end@-$vector_range@U-$IVectorView@PEAVTargetedContentCollection@TargetedContent@Services@Window.c)
 *     ?push_back@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@2@@Z @ 0x1800CCF90 (-push_back@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection(
        CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *this,
        struct Windows::Services::TargetedContent::ITargetedContentCollection *a2,
        HSTRING a3,
        unsigned int a4)
{
  unsigned int v4; // r15d
  CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *v5; // r13
  __int64 v6; // rax
  int v7; // eax
  int i; // eax
  __int64 *v9; // rax
  __int64 *v10; // r12
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(__int64, struct Windows::Services::TargetedContent::ITargetedContentCollection **); // rax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rsi
  void (__fastcall *v16)(__int64, HSTRING *); // rdi
  HSTRING *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // ecx
  double NumberFromPropertyBag; // xmm0_8
  double v23; // xmm0_8
  double v24; // xmm0_8
  __int64 v25; // rax
  int v26; // eax
  int v27; // eax
  HSTRING v28; // rdi
  __int64 *v29; // rax
  const char *StringRawBuffer; // rax
  int v31; // [rsp+20h] [rbp-B8h]
  char v32; // [rsp+30h] [rbp-A8h] BYREF
  char v33[7]; // [rsp+31h] [rbp-A7h] BYREF
  HSTRING *newString; // [rsp+38h] [rbp-A0h] BYREF
  std::_Ref_count_base *v35; // [rsp+40h] [rbp-98h]
  __int64 v36; // [rsp+48h] [rbp-90h] BYREF
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v37; // [rsp+50h] [rbp-88h] BYREF
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v38; // [rsp+58h] [rbp-80h] BYREF
  int v39; // [rsp+60h] [rbp-78h]
  __int64 v40; // [rsp+68h] [rbp-70h] BYREF
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v41; // [rsp+70h] [rbp-68h] BYREF
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v42; // [rsp+78h] [rbp-60h] BYREF
  char v43[8]; // [rsp+80h] [rbp-58h] BYREF
  int v44; // [rsp+88h] [rbp-50h]
  __int64 v45[9]; // [rsp+90h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v49; // [rsp+E8h] [rbp+10h] BYREF
  HSTRING v50; // [rsp+F0h] [rbp+18h] BYREF
  unsigned int v51; // [rsp+F8h] [rbp+20h]

  v51 = a4;
  v50 = a3;
  v49 = a2;
  v4 = a4;
  v5 = this;
  v6 = *(_QWORD *)a2;
  v42 = 0LL;
  v7 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, struct Windows::Services::TargetedContent::ITargetedContentCollection **))(v6 + 96))(
         a2,
         &v42);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x160,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v7,
      v31);
  v37 = v42;
  v38 = v42;
  v39 = 0;
  v40 = 0LL;
  wil::vector_range<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentCollection *>,wil::err_exception_policy>::end(
    &v37,
    v43);
  for ( i = v39; i != v44; i = ++v39 )
  {
    v9 = wil::vector_range<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentItem *>,wil::err_exception_policy>::vector_iterator::operator*((__int64 *)&v38);
    v10 = v9;
    try
    {
      v37 = 0LL;
      v11 = *v9;
      v12 = *(__int64 (__fastcall **)(__int64, struct Windows::Services::TargetedContent::ITargetedContentCollection **))(*(_QWORD *)*v9 + 72LL);
      v37 = 0LL;
      v13 = v12(v11, &v37);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x166,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
          (const char *)(unsigned int)v13,
          v31);
      v33[0] = 0;
      v14 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, char *))(*(_QWORD *)v37 + 48LL))(
              v37,
              v33);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x168,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
          (const char *)(unsigned int)v14,
          v31);
      if ( v33[0] )
      {
        std::make_shared<CreativeFramework::TargetedContentLayoutHelpers::Item>(&newString);
        Microsoft::WRL::Wrappers::HString::Set(newString, &v50);
        v15 = *v10;
        v16 = *(void (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)*v10 + 48LL);
        v17 = newString;
        WindowsDeleteString(newString[1]);
        v17[1] = 0LL;
        v16(v15, v17 + 1);
        v36 = 0LL;
        v18 = *v10;
        v19 = *(_QWORD *)*v10;
        v36 = 0LL;
        v20 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v19 + 80))(v18, &v36);
        if ( v20 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x171,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
            (const char *)(unsigned int)v20,
            v31);
        v21 = v4++;
        v51 = v4;
        *((_DWORD *)newString + 5) = v21;
        NumberFromPropertyBag = CreativeFramework::TargetedContentLayoutHelpers::GetNumberFromPropertyBag(
                                  L"collection",
                                  v36,
                                  &v32);
        *((double *)newString + 4) = NumberFromPropertyBag;
        *((_BYTE *)newString + 17) = v32 != 0;
        v23 = CreativeFramework::TargetedContentLayoutHelpers::GetNumberFromPropertyBag(L"item", v36, &v32);
        *((double *)newString + 5) = v23;
        *((_BYTE *)newString + 18) = v32 != 0;
        v24 = CreativeFramework::TargetedContentLayoutHelpers::GetNumberFromPropertyBag(L"rank", v36, &v32);
        *((double *)newString + 3) = v24;
        *((_BYTE *)newString + 16) = v32 != 0;
        *((_BYTE *)newString + 48) = 0;
        std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::push_back(
          (char *)v5 + 16,
          &newString);
        if ( *((_BYTE *)newString + 17) )
          std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::push_back(
            (char *)v5 + 40,
            &newString);
        wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v36);
        if ( v35 )
          std::_Ref_count_base::_Decref(v35);
      }
      wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v37);
    }
    catch ( ... )
    {
      StringRawBuffer = (const char *)WindowsGetStringRawBuffer(v50, 0LL);
      wil::details::in1diag3::Log_CaughtExceptionMsg(
        retaddr,
        (unsigned __int16 *)0x185,
        (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
        "Content ID: %ls",
        StringRawBuffer);
      v5 = this;
      v4 = v51;
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v45);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
  v25 = *(_QWORD *)v49;
  v41 = 0LL;
  v26 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, struct Windows::Services::TargetedContent::ITargetedContentCollection **))(v25 + 88))(
          v49,
          &v41);
  if ( v26 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x189,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v26,
      v31);
  v49 = v41;
  v38 = v41;
  v39 = 0;
  v40 = 0LL;
  wil::vector_range<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentCollection *>,wil::err_exception_policy>::end(
    &v49,
    v43);
  v27 = v39;
  v28 = v50;
  while ( v27 != v44 )
  {
    v29 = wil::vector_range<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentCollection *>,wil::err_exception_policy>::vector_iterator::operator*((__int64 *)&v38);
    CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection(
      v5,
      (struct Windows::Services::TargetedContent::ITargetedContentCollection *)*v29,
      v28,
      v4);
    v27 = ++v39;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v45);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v41);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v42);
}
