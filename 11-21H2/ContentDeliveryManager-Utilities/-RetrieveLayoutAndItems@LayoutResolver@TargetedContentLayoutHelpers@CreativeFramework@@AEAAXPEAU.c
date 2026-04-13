/*
 * XREFs of ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800E2D34
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800E0F64 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ContentIdsReceived@AEAI@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXAEAI@Z @ 0x1800DAE0C (--$ContentIdsReceived@AEAI@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEA.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1800DAF78 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAU-$IVectorView@PEAUHSTRING__@@@Collections@Foundat.c)
 *     ??$end@PEAUHSTRING__@@@Collections@Foundation@Windows@@YA?AVvector_iterator@?$vector_range@U?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@PEAU?$IVectorView@PEAUHSTRING__@@@012@@Z @ 0x1800DBB84 (--$end@PEAUHSTRING__@@@Collections@Foundation@Windows@@YA-AVvector_iterator@-$vector_range@U-$IV.c)
 *     ??1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x1800DC614 (--1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ.c)
 *     ??Dvector_iterator@?$vector_range@U?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEBVHStringWithRelease@?$MapToSmartType@PEAUHSTRING__@@X@details@2@XZ @ 0x1800DC818 (--Dvector_iterator@-$vector_range@U-$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@.c)
 *     ??_9ITargetedContentSubscriptionInternal@Internal@TargetedContent@Services@Windows@@$BDA@AA @ 0x1800DCA3C (--_9ITargetedContentSubscriptionInternal@Internal@TargetedContent@Services@Windows@@$BDA@AA.c)
 *     ?ActivateSubscription@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ @ 0x1800DCAC0 (-ActivateSubscription@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ.c)
 *     ?FindLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@PEAUITargetedContentIdAliasStore@Internal@567@@Z @ 0x1800DDADC (-FindLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedCon.c)
 *     ?GetSubscriptionContainer@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AV?$com_ptr_t@UITargetedContentContainer@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUHSTRING__@@@Z @ 0x1800DF938 (-GetSubscriptionContainer@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA-AV.c)
 *     ?RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@I@Z @ 0x1800E26D4 (-RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=26 #try_helpers=2
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems(
        CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *a1,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStore *a2,
        CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *a3)
{
  unsigned int v4; // r8d
  HSTRING_HEADER *v5; // rax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  DWORD v9; // edx
  int v10; // r8d
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v11; // rbx
  int v12; // eax
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v13; // rcx
  const WCHAR *v14; // rbx
  int v15; // eax
  char v16; // si
  int i; // eax
  HSTRING v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  int j; // eax
  HSTRING *v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rcx
  HSTRING v26; // rsi
  __int64 v27; // rax
  int v28; // eax
  const char *StringRawBuffer; // rax
  int v30; // [rsp+20h] [rbp-C8h]
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v31; // [rsp+38h] [rbp-B0h] BYREF
  int v32; // [rsp+40h] [rbp-A8h] BYREF
  __int64 *v33; // [rsp+48h] [rbp-A0h] BYREF
  HSTRING *v34; // [rsp+50h] [rbp-98h] BYREF
  const WCHAR *v35; // [rsp+58h] [rbp-90h] BYREF
  int v36; // [rsp+60h] [rbp-88h]
  HSTRING v37; // [rsp+68h] [rbp-80h]
  CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *v38; // [rsp+70h] [rbp-78h]
  const WCHAR *v39; // [rsp+80h] [rbp-68h] BYREF
  int v40; // [rsp+88h] [rbp-60h] BYREF
  struct Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStore *v41; // [rsp+90h] [rbp-58h]
  CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *v42; // [rsp+98h] [rbp-50h]
  HSTRING_HEADER v43; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v44; // [rsp+B8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  try
  {
    v38 = a1;
    v41 = a2;
    v42 = a3;
    v32 = 0;
    CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ActivateSubscription(
      a1,
      (__int64)a2,
      (unsigned int)a3);
    v39 = L"Windows.Services.TargetedContent.Internal.TargetedContentSubscriptionInternal";
    v31 = 0LL;
    v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, &v39, v4);
    v6 = RoActivateInstance(v5[1].Reserved.Reserved1, &v31);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1695LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
        (const char *)(unsigned int)v6,
        v30);
    v44 = 0LL;
    v33 = 0LL;
    v7 = (**(__int64 (__fastcall ***)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, GUID *, __int64 *))v31)(
           v31,
           &GUID_b512937b_1be6_4e97_8489_d7ce7d2279ed,
           (__int64 *)&v33);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        6136LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v7,
        v30);
    v32 = 3;
    if ( v31 )
      (*(void (**)(void))(*(_QWORD *)v31 + 16LL))();
    v31 = 0LL;
    v8 =  Windows::Services::TargetedContent::Internal::ITargetedContentSubscriptionInternal::`vcall'{48,{flat}}((__int64)v33);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1671LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
        (const char *)(unsigned int)v8,
        v30);
    v11 = v31;
    v34 = 0LL;
    v32 = 19;
    v12 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<HSTRING__ *> *> *>(
            (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v31,
            v9,
            v10);
    if ( v12 >= 0 )
      v12 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, HSTRING **))(*(_QWORD *)v11 + 64LL))(
              v11,
              &v34);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1647LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
        (const char *)(unsigned int)v12,
        v30);
    v32 = 11;
    v13 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v14 = (const WCHAR *)v34;
    v34 = 0LL;
    v39 = v14;
    if ( v33 )
      (*(void (**)(void))(*v33 + 16))();
    v15 = (*(__int64 (__fastcall **)(const WCHAR *, int *))(*(_QWORD *)v14 + 56LL))(v14, &v40);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        425LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
        (const char *)(unsigned int)v15,
        v30);
    CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::ContentIdsReceived<unsigned int &>(
      (__int64)v42,
      &v40);
    v16 = 1;
    v35 = v14;
    v36 = 0;
    v37 = 0LL;
    Windows::Foundation::Collections::end<HSTRING__ *>((__int64)&v43, (__int64)v14);
    for ( i = v36; i != *(_DWORD *)&v43.Reserved.Reserved2[8]; i = ++v36 )
    {
      v18 = (HSTRING)*wil::vector_range<Windows::Foundation::Collections::IVectorView<HSTRING__ *>,wil::err_exception_policy>::vector_iterator::operator*((__int64 *)&v35);
      CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::GetSubscriptionContainer(
        v19,
        (__int64 *)&v33,
        v18);
      v20 = (__int64)v33;
      if ( v33 )
      {
        v21 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v33 + 64))(v33, &v32);
        if ( v21 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            437LL,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
            (const char *)(unsigned int)v21,
            v30);
        if ( v32 != 2 )
        {
          v16 = 0;
          if ( v33 )
            (*(void (__fastcall **)(__int64 *))(*v33 + 16))(v33);
          break;
        }
        v16 = 1;
        v20 = (__int64)v33;
      }
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    WindowsDeleteString(*(HSTRING *)&v43.Reserved.Reserved2[16]);
    *(_QWORD *)&v43.Reserved.Reserved2[16] = 0LL;
    WindowsDeleteString(v37);
    if ( v16 )
    {
      v35 = v14;
      v36 = 0;
      v37 = 0LL;
      Windows::Foundation::Collections::end<HSTRING__ *>((__int64)&v43, (__int64)v14);
      for ( j = v36; j != *(_DWORD *)&v43.Reserved.Reserved2[8]; j = ++v36 )
      {
        v23 = (HSTRING *)wil::vector_range<Windows::Foundation::Collections::IVectorView<HSTRING__ *>,wil::err_exception_policy>::vector_iterator::operator*((__int64 *)&v35);
        v34 = v23;
        CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::GetSubscriptionContainer(
          v24,
          (__int64 *)&v33,
          *v23);
        v25 = (__int64)v33;
        if ( v33 )
        {
          v26 = *v23;
          v27 = *v33;
          v31 = 0LL;
          v28 = (*(__int64 (__fastcall **)(__int64 *, struct Windows::Services::TargetedContent::ITargetedContentCollection **))(v27 + 72))(
                  v33,
                  &v31);
          if ( v28 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              401LL,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
              (const char *)(unsigned int)v28,
              v30);
          if ( !*(_QWORD *)a1 )
            CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::FindLayout((HSTRING *)a1, v31, v26, v41);
          CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection(a1, v31, v26, 0);
          if ( v31 )
            (*(void (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *))(*(_QWORD *)v31 + 16LL))(v31);
          v25 = (__int64)v33;
        }
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      }
      WindowsDeleteString(*(HSTRING *)&v43.Reserved.Reserved2[16]);
      *(_QWORD *)&v43.Reserved.Reserved2[16] = 0LL;
      WindowsDeleteString(v37);
    }
    if ( v14 )
      (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  catch ( ... )
  {
    StringRawBuffer = (const char *)WindowsGetStringRawBuffer(*((HSTRING *)v38 + 1), 0LL);
    wil::details::in1diag3::Log_CaughtExceptionMsg(
      retaddr,
      (unsigned __int16 *)0x1CF,
      (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      "Subscription ID: %ls",
      StringRawBuffer);
  }
  CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::~LayoutResolver(v42);
}
