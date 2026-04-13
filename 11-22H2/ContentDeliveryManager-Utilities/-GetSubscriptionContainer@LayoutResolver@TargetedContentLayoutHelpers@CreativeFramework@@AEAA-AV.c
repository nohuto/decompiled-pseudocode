/*
 * XREFs of ?GetSubscriptionContainer@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AV?$com_ptr_t@UITargetedContentContainer@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUHSTRING__@@@Z @ 0x1800C97B8
 * Callers:
 *     ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800CBBCC (-RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAU.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$GetActivationFactory@UITargetedContentContainerStatics@TargetedContent@Services@Windows@@@wil@@YA?AV?$com_ptr_t@UITargetedContentContainerStatics@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18006CAAC (--$GetActivationFactory@UITargetedContentContainerStatics@TargetedContent@Services@Windows@@@wil.c)
 *     ??$call_and_wait_for_completion@UITargetedContentContainerStatics@TargetedContent@Services@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@4@$$ZAEAPEAU5@@wil@@YA?A_PPEAUITargetedContentContainerStatics@TargetedContent@Services@Windows@@P81234@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@4@@ZAEAPEAU5@@Z @ 0x1800C6490 (--$call_and_wait_for_completion@UITargetedContentContainerStatics@TargetedContent@Services@Windo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::GetSubscriptionContainer(
        __int64 a1,
        _QWORD *a2,
        HSTRING a3)
{
  __int64 *v3; // rbx
  __int64 *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  const char *StringRawBuffer; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v13; // [rsp+58h] [rbp+10h]
  HSTRING v14; // [rsp+60h] [rbp+18h] BYREF
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  v14 = a3;
  v13 = a2;
  v12 = a1;
  try
  {
    v3 = a2;
    *a2 = 0LL;
    v4 = (__int64 *)wil::GetActivationFactory<Windows::Services::TargetedContent::ITargetedContentContainerStatics>(
                      (const WCHAR *)&v15,
                      (__int64)a2,
                      (unsigned int)a3);
    ___call_and_wait_for_completion_UITargetedContentContainerStatics_TargetedContent_Services_Windows__PEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVTargetedContentContainer_TargetedContent_Services_Windows___Foundation_4___ZAEAPEAU5__wil__YA_A_PPEAUITargetedContentContainerStatics_TargetedContent_Services_Windows__P81234_EAAJPEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVTargetedContentContainer_TargetedContent_Services_Windows___Foundation_4__ZAEAPEAU5__Z(
      (__int64)&v12,
      *v4,
      v5,
      &v14);
    v6 = v12;
    v7 = 0LL;
    v12 = 0LL;
    v8 = *v3;
    *v3 = v6;
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      v7 = v12;
    }
    if ( v7 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v15);
  }
  catch ( ... )
  {
    StringRawBuffer = (const char *)WindowsGetStringRawBuffer(v14, 0LL);
    wil::details::in1diag3::Log_CaughtExceptionMsg(
      retaddr,
      (unsigned __int16 *)0x135,
      (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      "Content ID: %ls",
      StringRawBuffer);
    return v13;
  }
  return v3;
}
