/*
 * XREFs of ?StartProductInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE00@Z @ 0x180090630
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180038F68 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180043970 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GenerateStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0PEAPEAU3@@Z @ 0x1800891F0 (-GenerateStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0PEAPEAU3@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18008FA34 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@de.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::AppManager::StartProductInstall(
        ContentManagement::AppManager *this,
        HSTRING a2,
        HSTRING a3,
        __int64 a4,
        unsigned __int8 a5,
        HSTRING a6,
        HSTRING a7)
{
  char v7; // r15
  __int64 v11; // r9
  wil::details_abi *v12; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v14; // rdi
  int v15; // esi
  HSTRING *v16; // r9
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // ebx
  HSTRING string; // [rsp+58h] [rbp-11h] BYREF
  int v23[2]; // [rsp+60h] [rbp-9h] BYREF
  int v24; // [rsp+68h] [rbp-1h]
  int v25; // [rsp+6Ch] [rbp+3h]
  unsigned int v26[2]; // [rsp+70h] [rbp+7h] BYREF
  const char *v27; // [rsp+78h] [rbp+Fh]
  __int64 v28; // [rsp+80h] [rbp+17h]
  __int16 v29; // [rsp+88h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+47h]

  v7 = a4;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetImpl'::`2'::impl,
    1u,
    3u,
    a4);
  *(_QWORD *)v26 = retaddr;
  v27 = "shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp";
  v28 = 0LL;
  v29 = 336;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetImpl'::`2'::impl,
    1u,
    1u,
    v11);
  LOBYTE(v12) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v12);
  v14 = ThreadLocalDataCache;
  *(_QWORD *)v23 = ThreadLocalDataCache;
  v24 = 0;
  v15 = 0;
  v25 = 0;
  if ( ThreadLocalDataCache )
  {
    v25 = *((_DWORD *)ThreadLocalDataCache + 4);
    v24 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v24;
    v15 = v25;
    v14 = *(struct wil::details_abi::ThreadLocalData **)v23;
  }
  WindowsDeleteString(0LL);
  string = 0LL;
  v17 = CreativeFramework::StoreHelpers::GenerateStoreId(a2, a3, &string, v16);
  v20 = v17;
  if ( v17 >= 0 )
  {
    LOBYTE(v19) = a5;
    LOBYTE(v18) = v7;
    v20 = (*(__int64 (__fastcall **)(ContentManagement::AppManager *, HSTRING, __int64, __int64, HSTRING, _QWORD, _QWORD, HSTRING))(*(_QWORD *)this + 112LL))(
            this,
            string,
            v18,
            v19,
            a6,
            0LL,
            0LL,
            a7);
    WindowsDeleteString(string);
    string = 0LL;
    if ( v20 >= 0 )
      goto LABEL_7;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x150,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v17);
    WindowsDeleteString(string);
    string = 0LL;
  }
  wil::details::ReportFeatureError(
    (wil::details *)(unsigned int)v20,
    (__int64)v23,
    (struct wil::ThreadErrorContext *)0x8284B3,
    (const struct wil::FailureInfo *)v26);
LABEL_7:
  if ( v14 )
    *((_DWORD *)v14 + 4) = v15;
  if ( v20 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x150,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
    (const char *)(unsigned int)v20);
  return (unsigned int)v20;
}
