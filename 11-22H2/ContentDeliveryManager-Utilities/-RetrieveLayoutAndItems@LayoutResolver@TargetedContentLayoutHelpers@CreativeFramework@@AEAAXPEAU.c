/*
 * XREFs of ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800CBBCC
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800CABE8 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$end@PEAUHSTRING__@@@Collections@Foundation@Windows@@YA?AVvector_iterator@?$vector_range@U?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@PEAU?$IVectorView@PEAUHSTRING__@@@012@@Z @ 0x18006DD6C (--$end@PEAUHSTRING__@@@Collections@Foundation@Windows@@YA-AVvector_iterator@-$vector_range@U-$IV.c)
 *     ??$ActivateInstance@UITargetedContentSubscriptionInternal@Internal@TargetedContent@Services@Windows@@@wil@@YA?AV?$com_ptr_t@UITargetedContentSubscriptionInternal@Internal@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800C496C (--$ActivateInstance@UITargetedContentSubscriptionInternal@Internal@TargetedContent@Services@Wind.c)
 *     ??$ContentIdsReceived@AEAI@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXAEAI@Z @ 0x1800C4F58 (--$ContentIdsReceived@AEAI@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEA.c)
 *     ??$call_and_wait_for_completion@UITargetedContentSubscriptionInternal@Internal@TargetedContent@Services@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@5@$$ZPEAU6@@wil@@YA?A_PPEAUITargetedContentSubscriptionInternal@Internal@TargetedContent@Services@Windows@@P812345@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@5@@Z$$QEAPEAU6@@Z @ 0x1800C651C (--$call_and_wait_for_completion@UITargetedContentSubscriptionInternal@Internal@TargetedContent@S.c)
 *     ??1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x1800C73E8 (--1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ.c)
 *     ??Dvector_iterator@?$vector_range@U?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEBVHStringWithRelease@?$MapToSmartType@PEAUHSTRING__@@X@details@2@XZ @ 0x1800C765C (--Dvector_iterator@-$vector_range@U-$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@.c)
 *     ?ActivateSubscription@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ @ 0x1800C7B18 (-ActivateSubscription@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ.c)
 *     ?GetSubscriptionContainer@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AV?$com_ptr_t@UITargetedContentContainer@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUHSTRING__@@@Z @ 0x1800C97B8 (-GetSubscriptionContainer@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA-AV.c)
 *     ?ProcessContainer@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentContainer@TargetedContent@Services@Windows@@PEAUHSTRING__@@PEAUITargetedContentIdAliasStore@Internal@567@@Z @ 0x1800CAB3C (-ProcessContainer@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITarge.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9 #try_helpers=1
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems(
        CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *a1,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStore *a2,
        CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *a3)
{
  CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *v3; // r14
  __int64 *v4; // rax
  __int64 v5; // r8
  struct Windows::Services::TargetedContent::ITargetedContentContainer *v6; // rbx
  int v7; // eax
  char v8; // si
  int i; // eax
  HSTRING *v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  int j; // eax
  HSTRING *v14; // rax
  __int64 v15; // rcx
  HSTRING *v16; // rbx
  PCWSTR StringRawBuffer; // rbx
  const char *v18; // rax
  const char *v19; // rax
  int v20; // [rsp+20h] [rbp-A8h]
  struct Windows::Services::TargetedContent::ITargetedContentContainer *v21; // [rsp+38h] [rbp-90h] BYREF
  HSTRING *v22; // [rsp+40h] [rbp-88h] BYREF
  struct Windows::Services::TargetedContent::ITargetedContentContainer *v23; // [rsp+48h] [rbp-80h] BYREF
  int v24; // [rsp+50h] [rbp-78h]
  HSTRING v25; // [rsp+58h] [rbp-70h]
  CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *v26; // [rsp+60h] [rbp-68h]
  struct Windows::Services::TargetedContent::ITargetedContentContainer *v27; // [rsp+70h] [rbp-58h] BYREF
  int v28; // [rsp+78h] [rbp-50h] BYREF
  _BYTE v29[8]; // [rsp+80h] [rbp-48h] BYREF
  int v30; // [rsp+88h] [rbp-40h]
  HSTRING string; // [rsp+90h] [rbp-38h]
  struct Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStore *v32; // [rsp+98h] [rbp-30h]
  CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *v33; // [rsp+A0h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  try
  {
    v3 = a1;
    v26 = a1;
    v32 = a2;
    v33 = a3;
    CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ActivateSubscription(
      a1,
      (__int64)a2,
      (unsigned int)a3);
    v27 = (struct Windows::Services::TargetedContent::ITargetedContentContainer *)*((_QWORD *)v3 + 1);
    v4 = (__int64 *)wil::ActivateInstance<Windows::Services::TargetedContent::Internal::ITargetedContentSubscriptionInternal>((__int64)&v22);
    ___call_and_wait_for_completion_UITargetedContentSubscriptionInternal_Internal_TargetedContent_Services_Windows__PEAUHSTRING____PEAPEAU__IAsyncOperation_PEAU__IVectorView_PEAUHSTRING_____Collections_Foundation_Windows___Foundation_5___ZPEAU6__wil__YA_A_PPEAUITargetedContentSubscriptionInternal_Internal_TargetedContent_Services_Windows__P812345_EAAJPEAUHSTRING____PEAPEAU__IAsyncOperation_PEAU__IVectorView_PEAUHSTRING_____Collections_Foundation_Windows___Foundation_5__Z__QEAPEAU6__Z(
      (__int64)&v21,
      *v4,
      v5,
      &v27);
    v6 = v21;
    v21 = 0LL;
    v27 = v6;
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v22);
    v7 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentContainer *, int *))(*(_QWORD *)v6 + 56LL))(
           v6,
           &v28);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1AB,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
        (const char *)(unsigned int)v7,
        v20);
    CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::ContentIdsReceived<unsigned int &>(
      (__int64)v33,
      &v28);
    v8 = 1;
    v23 = v6;
    v24 = 0;
    v25 = 0LL;
    Windows::Foundation::Collections::end<HSTRING__ *>((__int64)v29, (__int64)v6);
    for ( i = v24; i != v30; i = ++v24 )
    {
      v10 = (HSTRING *)wil::vector_range<Windows::Foundation::Collections::IVectorView<HSTRING__ *>,wil::err_exception_policy>::vector_iterator::operator*((__int64 *)&v23);
      CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::GetSubscriptionContainer(v11, &v21, *v10);
      if ( v21 )
      {
        v12 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentContainer *, HSTRING **))(*(_QWORD *)v21 + 64LL))(
                v21,
                &v22);
        if ( v12 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x1B7,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
            (const char *)(unsigned int)v12,
            v20);
        if ( (_DWORD)v22 != 2 )
        {
          v8 = 0;
          wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v21);
          break;
        }
        v8 = 1;
      }
      wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v21);
    }
    WindowsDeleteString(string);
    string = 0LL;
    WindowsDeleteString(v25);
    if ( v8 )
    {
      v23 = v6;
      v24 = 0;
      v25 = 0LL;
      Windows::Foundation::Collections::end<HSTRING__ *>((__int64)v29, (__int64)v6);
      for ( j = v24; j != v30; j = ++v24 )
      {
        v14 = (HSTRING *)wil::vector_range<Windows::Foundation::Collections::IVectorView<HSTRING__ *>,wil::err_exception_policy>::vector_iterator::operator*((__int64 *)&v23);
        try
        {
          v16 = v14;
          v22 = v14;
          CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::GetSubscriptionContainer(v15, &v21, *v14);
          if ( v21 )
            CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ProcessContainer(
              (HSTRING *)v3,
              v21,
              *v16,
              v32);
          wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v21);
        }
        catch ( ... )
        {
          StringRawBuffer = WindowsGetStringRawBuffer(*v22, 0LL);
          v18 = (const char *)WindowsGetStringRawBuffer(*((HSTRING *)v26 + 1), 0LL);
          wil::details::in1diag3::Log_CaughtExceptionMsg(
            retaddr,
            (unsigned __int16 *)0x1CD,
            (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
            "Subscription ID: %ls, Content ID: %ls",
            v18,
            StringRawBuffer);
          v3 = v26;
        }
      }
      WindowsDeleteString(string);
      string = 0LL;
      WindowsDeleteString(v25);
    }
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v27);
  }
  catch ( ... )
  {
    v19 = (const char *)WindowsGetStringRawBuffer(*((HSTRING *)v26 + 1), 0LL);
    wil::details::in1diag3::Log_CaughtExceptionMsg(
      retaddr,
      (unsigned __int16 *)0x1D1,
      (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      "Subscription ID: %ls",
      v19);
  }
  CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::~LayoutResolver(v33);
}
