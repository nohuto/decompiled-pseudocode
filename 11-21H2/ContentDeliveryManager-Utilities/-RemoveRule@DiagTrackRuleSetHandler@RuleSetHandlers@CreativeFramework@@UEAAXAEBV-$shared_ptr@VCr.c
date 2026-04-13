/*
 * XREFs of ?RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x1800B12D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002245D (memset_0.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003F5AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18009AF74 (--1-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04$.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800A41C4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ??$CallAndWaitForCompletion@UIStorageFolderStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@3@$$ZPEAU4@@wil@@YA?AV?$ComPtr@UIStorageFolder@Storage@Windows@@@WRL@Microsoft@@PEAUIStorageFolderStatics@Storage@Windows@@P8456@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@6@@Z$$QEAPEAU7@@Z @ 0x1800AFC50 (--$CallAndWaitForCompletion@UIStorageFolderStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU-$IAsy.c)
 *     ??$CallAndWaitForCompletion@UIStorageItem@Storage@Windows@@W4StorageDeleteOption@23@PEAPEAUIAsyncAction@Foundation@3@$$ZW4423@@wil@@YAXPEAUIStorageItem@Storage@Windows@@P8123@EAAJW4StorageDeleteOption@23@PEAPEAUIAsyncAction@Foundation@3@@Z$$QEAW4423@@Z @ 0x1800AFCEC (--$CallAndWaitForCompletion@UIStorageItem@Storage@Windows@@W4StorageDeleteOption@23@PEAPEAUIAsyn.c)
 *     ??$GetActivationFactory@UIStorageFolderStatics@Storage@Windows@@@wil@@YA?AV?$com_ptr_t@UIStorageFolderStatics@Storage@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800AFE24 (--$GetActivationFactory@UIStorageFolderStatics@Storage@Windows@@@wil@@YA-AV-$com_ptr_t@UIStorage.c)
 *     ??$wait_for_completion@PEAVStorageFile@Storage@Windows@@V?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x1800B0594 (--$wait_for_completion@PEAVStorageFile@Storage@Windows@@V-$ComPtr@UIStorageFile@Storage@Windows@.c)
 *     ??_9IStorageFolder@Storage@Windows@@$BFA@AA @ 0x1800B0734 (--_9IStorageFolder@Storage@Windows@@$BFA@AA.c)
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800B0C48 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0.c)
 *     ?GetFileNameForRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@AEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVCreativeRule@23@@Z @ 0x1800B0D68 (-GetFileNameForRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@AEAA-AV-$basic_st.c)
 *     ?StartActivity@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_WIPEBD@Z @ 0x1800B1914 (-StartActivity@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@Cont.c)
 *     ?Stop@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x1800B1D08 (-Stop@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDelive.c)
 *     ?GetSoftLandingFolderForUser@@YAJPEAXPEA_W_K@Z @ 0x1800E7A5C (-GetSoftLandingFolderForUser@@YAJPEAXPEA_W_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=23 #try_helpers=1
void __fastcall CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::RemoveRule(__int64 a1, void ***a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // r14
  const wchar_t *p_hstringHeader; // rbx
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  int SoftLandingFolderForUser; // eax
  wil::details::in1diag3 *v9; // rcx
  HRESULT v10; // eax
  __int64 v11; // rdx
  unsigned int v12; // r8d
  __int64 *v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  unsigned int v16; // r8d
  const WCHAR *v17; // rax
  int v18; // eax
  int v19; // r8d
  wil::details::in1diag3 *v20; // rcx
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // rcx
  int v22; // eax
  __int64 (__fastcall ***v23)(_QWORD, GUID *, __int64 *); // rdx
  __int64 v24; // rcx
  __int64 (__fastcall ***v25)(_QWORD, GUID *, __int64 *); // rcx
  void ***v26; // rcx
  int v27; // [rsp+20h] [rbp-408h] BYREF
  __int64 (__fastcall ***v28)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-400h] BYREF
  void ***v29; // [rsp+30h] [rbp-3F8h] BYREF
  __int64 v30; // [rsp+38h] [rbp-3F0h] BYREF
  __int64 (__fastcall ***v31)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-3E8h] BYREF
  const WCHAR *v32[2]; // [rsp+48h] [rbp-3E0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-3D0h] BYREF
  HSTRING string; // [rsp+70h] [rbp-3B8h] BYREF
  void *v35[3]; // [rsp+78h] [rbp-3B0h] BYREF
  unsigned __int64 v36; // [rsp+90h] [rbp-398h]
  _QWORD v37[4]; // [rsp+A0h] [rbp-388h] BYREF
  int v38; // [rsp+C0h] [rbp-368h]
  int *v39; // [rsp+C8h] [rbp-360h]
  int *v40; // [rsp+D0h] [rbp-358h]
  int v41; // [rsp+D8h] [rbp-350h] BYREF
  char v42; // [rsp+DCh] [rbp-34Ch]
  int v43; // [rsp+100h] [rbp-328h] BYREF
  const char *v44; // [rsp+108h] [rbp-320h]
  __int64 v45; // [rsp+110h] [rbp-318h]
  char v46; // [rsp+118h] [rbp-310h]
  __int64 v47; // [rsp+120h] [rbp-308h]
  _BYTE v48[152]; // [rsp+128h] [rbp-300h] BYREF
  __int64 v49; // [rsp+1C0h] [rbp-268h]
  __int128 v50; // [rsp+1C8h] [rbp-260h]
  __int64 v51; // [rsp+1D8h] [rbp-250h]
  WCHAR sourceString[264]; // [rsp+1E0h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+428h] [rbp+0h]

  v29 = a2;
  v32[1] = (const WCHAR *)a1;
  v27 = 0;
  v3 = *(_QWORD *)(a1 + 8);
  string = (HSTRING)7;
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
  LOWORD(hstringHeader.Reserved.Reserved1) = 0;
  v4 = -1LL;
  std::wstring::assign(&hstringHeader.Reserved.Reserved1, *a2, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  v27 = 1;
  p_hstringHeader = (const wchar_t *)&hstringHeader;
  if ( (unsigned __int64)string >= 8 )
    p_hstringHeader = (const wchar_t *)hstringHeader.Reserved.Reserved1;
  v37[1] = 0LL;
  v37[2] = v37;
  v37[3] = 0LL;
  v38 = 0;
  v39 = &v43;
  v40 = &v41;
  v41 = 0;
  v42 = 0;
  v46 = 0;
  v43 = 0;
  v44 = "DiagTrackRuleSetHandlerRemoveRule";
  v45 = 0LL;
  v47 = 1LL;
  v49 = 0LL;
  memset_0(v48, 0, sizeof(v48));
  v50 = 0LL;
  v51 = 0LL;
  v37[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule::`vftable';
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule::StartActivity(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule *)v37,
    p_hstringHeader,
    0,
    (const char *)(v3 + 8));
  if ( (unsigned __int64)string >= 8 )
    operator delete(hstringHeader.Reserved.Reserved1);
  string = (HSTRING)7;
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
  LOWORD(hstringHeader.Reserved.Reserved1) = 0;
  CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::GetFileNameForRule(v6, (__int64)v35, *v29);
  SoftLandingFolderForUser = GetSoftLandingFolderForUser((HANDLE)0xFFFFFFFFFFFFFFFALL, sourceString, v7);
  v9 = retaddr;
  if ( SoftLandingFolderForUser < 0 )
LABEL_29:
    wil::details::in1diag3::Throw_Hr(
      v9,
      112LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\diagtrackrulesethandler.cpp",
      (const char *)(unsigned int)SoftLandingFolderForUser,
      v27);
  do
    ++v4;
  while ( sourceString[v4] );
  if ( v4 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    goto LABEL_29;
  }
  if ( (int)v4 + 1 < (unsigned int)v4 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    __debugbreak();
  }
  v10 = WindowsCreateStringReference(sourceString, v4, &hstringHeader, &string);
  if ( v10 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
    goto LABEL_32;
  }
  v28 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))string;
  v13 = (__int64 *)wil::GetActivationFactory<Windows::Storage::IStorageFolderStatics>((const WCHAR *)v32, v11, v12);
  ___CallAndWaitForCompletion_UIStorageFolderStatics_Storage_Windows__PEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_3___ZPEAU4__wil__YA_AV__ComPtr_UIStorageFolder_Storage_Windows___WRL_Microsoft__PEAUIStorageFolderStatics_Storage_Windows__P8456_EAAJPEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_6__Z__QEAPEAU7__Z(
    (__int64)&v29,
    *v13,
    v14,
    &v28);
  if ( v32[0] )
    (*(void (__fastcall **)(const WCHAR *, __int64))(*(_QWORD *)v32[0] + 16LL))(v32[0], v15);
  v17 = (const WCHAR *)v35;
  if ( v36 >= 8 )
    v17 = (const WCHAR *)v35[0];
  v32[0] = v17;
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, v32, v16);
  v28 = 0LL;
  v18 =  Windows::Storage::IStorageFolder::`vcall'{80,{flat}}((__int64)v29);
  v20 = retaddr;
  if ( v18 < 0 )
LABEL_32:
    wil::details::in1diag3::Throw_Hr(
      v20,
      1671LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v18,
      v27);
  wil::wait_for_completion<Windows::Storage::StorageFile *,Microsoft::WRL::ComPtr<Windows::Storage::IStorageFile>>(
    &v31,
    v28,
    v19);
  v27 = 17;
  v21 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v21)[2])(v21);
  }
  string = 0LL;
  if ( !v31 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      79LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\diagtrackrulesethandler.cpp",
      (const char *)0x80070490LL,
      v27);
  v30 = 0LL;
  v22 = (**v31)(v31, &GUID_4207a996_ca2f_42f7_bde8_8b10457a7f30, &v30);
  if ( v22 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      82LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\diagtrackrulesethandler.cpp",
      (const char *)(unsigned int)v22,
      v27);
  v27 = 1;
  ___CallAndWaitForCompletion_UIStorageItem_Storage_Windows__W4StorageDeleteOption_23_PEAPEAUIAsyncAction_Foundation_3___ZW4423__wil__YAXPEAUIStorageItem_Storage_Windows__P8123_EAAJW4StorageDeleteOption_23_PEAPEAUIAsyncAction_Foundation_3__Z__QEAW4423__Z(
    v30,
    v23,
    (unsigned int *)&v27);
  v24 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  v25 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v25)[2])(v25);
  }
  v26 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    ((void (__fastcall *)(void ***))(*v26)[2])(v26);
  }
  *(_BYTE *)(a1 + 24) = 1;
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule::Stop(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule *)v37,
    (const char *)(*(_QWORD *)(a1 + 8) + 8LL));
  if ( v36 >= 8 )
    operator delete(v35[0]);
  v36 = 7LL;
  v35[2] = 0LL;
  LOWORD(v35[0]) = 0;
  v37[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v37);
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v37);
}
