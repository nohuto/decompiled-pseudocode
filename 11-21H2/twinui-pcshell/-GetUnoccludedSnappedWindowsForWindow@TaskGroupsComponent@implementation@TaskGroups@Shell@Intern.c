/*
 * XREFs of ?GetUnoccludedSnappedWindowsForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA?AU?$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@7@UWindowId@WindowManagement@ApplicationModel@567@W4UnoccludedWindowsOptions@34567@@Z @ 0x180589AFC
 * Callers:
 *     ?GetUnoccludedSnappedWindowsForWindow@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@IPEAIPEAPEAU423@@Z @ 0x180589A60 (-GetUnoccludedSnappedWindowsForWindow@-$produce@UTaskGroupsComponent@implementation@TaskGroups@S.c)
 *     ?OnGuidedSnapAssistCompletedEvent@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@AEAAXAEBUIGuidedSnapAssistController@WindowSnapping@4567@AEBUGuidedSnapAssistCompletedArgs@94567@@Z @ 0x18058AF40 (-OnGuidedSnapAssistCompletedEvent@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@W.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x180187B70 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 *     CoTaskMemFree_0 @ 0x180189A5F (CoTaskMemFree_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x180319714 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$?0V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@X@?$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@QEAA@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@0@Z @ 0x18058801C (--$-0V-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types@UWindowId@WindowManagement@Applic.c)
 *     ??$emplace_back@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@QEAAAEAUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@$$QEAU234567@@Z @ 0x180588984 (--$emplace_back@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@-$vector@UW.c)
 *     ?CSnappedWindowModel_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4SnappedWindowOcclusionModel@@AEBU_GUID@@PEAPEAX@Z @ 0x180598C0C (-CSnappedWindowModel_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PE.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::GetUnoccludedSnappedWindowsForWindow(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        const char *a4)
{
  HMONITOR v7; // rdx
  __int64 *v8; // rcx
  __int64 v9; // rax
  signed int v10; // eax
  signed int Instance; // eax
  signed int v12; // eax
  char v13; // r15
  _QWORD *v14; // r14
  _QWORD *v15; // r12
  LPVOID *v16; // rcx
  LPVOID v17; // rdx
  char v18; // di
  int v19; // eax
  __int64 v21; // [rsp+38h] [rbp-39h] BYREF
  __int64 v22; // [rsp+40h] [rbp-31h] BYREF
  __int128 v23; // [rsp+48h] [rbp-29h] BYREF
  __int64 v24; // [rsp+58h] [rbp-19h]
  int v25; // [rsp+60h] [rbp-11h]
  LPVOID pv[2]; // [rsp+68h] [rbp-9h] BYREF
  LPVOID v27[2]; // [rsp+78h] [rbp+7h] BYREF
  _QWORD *v28; // [rsp+88h] [rbp+17h] BYREF
  __int64 v29; // [rsp+90h] [rbp+1Fh]
  __int64 v30; // [rsp+98h] [rbp+27h]
  __int64 v31; // [rsp+A0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  int v33; // [rsp+F0h] [rbp+7Fh] BYREF

  v25 = 0;
  LOBYTE(a4) = ~(_BYTE)a4;
  if ( ((unsigned __int8)a4 & 1) != 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xC8,
      (int)"pcshell\\twinui\\taskgroups\\lib\\taskgroupscomponent.cpp",
      a4);
  v23 = 0LL;
  v24 = 0LL;
  v7 = MonitorFromWindow((HWND)a3, 0);
  if ( v7 )
  {
    v21 = 0LL;
    v8 = *(__int64 **)(a1 + 152);
    v9 = *v8;
    v21 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64 *, HMONITOR, __int64 *))(v9 + 48))(v8, v7, &v21);
    if ( v10 < 0 )
      winrt::throw_hresult(v10);
    v22 = 0LL;
    Instance = CSnappedWindowModel_CreateInstance(0LL, *(_QWORD *)(a1 + 136), *(_QWORD *)(a1 + 152), 1LL);
    if ( Instance < 0 )
      winrt::throw_hresult(Instance);
    v28 = 0LL;
    v29 = 0LL;
    v30 = 0LL;
    v31 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD **))(*(_QWORD *)v22 + 24LL))(v22, v21, 1LL, &v28);
    if ( v12 < 0 )
      winrt::throw_hresult(v12);
    v13 = 0;
    v14 = v28;
    v15 = &v28[v29];
    if ( v28 == v15 )
      goto LABEL_17;
    do
    {
      v33 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v14 + 80LL))(*v14);
      std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::emplace_back<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>(
        (__int64)&v23,
        &v33);
      if ( *(_DWORD *)(*((_QWORD *)&v23 + 1) - 4LL) == a3 )
        v13 = 1;
      ++v14;
    }
    while ( v14 != v15 );
    if ( !v13 )
    {
LABEL_17:
      pv[1] = 0LL;
      v16 = pv;
      v17 = 0LL;
      v18 = 5;
    }
    else
    {
      winrt::com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>(
        (__int64)v27,
        (const void *)v23,
        *((__int64 *)&v23 + 1));
      v16 = v27;
      v17 = v27[0];
      v18 = 3;
    }
    v19 = *((_DWORD *)v16 + 2);
    *(_QWORD *)a2 = v17;
    *(_DWORD *)(a2 + 8) = v19;
    *v16 = 0LL;
    *((_DWORD *)v16 + 2) = 0;
    if ( (v18 & 4) != 0 )
    {
      v18 &= ~4u;
      if ( pv[0] )
        CoTaskMemFree_0(pv[0]);
    }
    if ( (v18 & 2) != 0 && v27[0] )
      CoTaskMemFree_0(v27[0]);
    CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll((__int64)&v28);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v22);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v21);
  }
  else
  {
    winrt::com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>(
      a2,
      0LL,
      0LL);
  }
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)&v23);
  return a2;
}
