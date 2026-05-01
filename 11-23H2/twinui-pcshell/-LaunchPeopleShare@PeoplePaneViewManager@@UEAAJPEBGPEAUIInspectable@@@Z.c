/*
 * XREFs of ?LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z @ 0x1804B54C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Emplace_reallocate@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@QEAV21@$$QEAV21@@Z @ 0x1804B18C4 (--$_Emplace_reallocate@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@@-$vector@V-$shared_ptr@UPeopleP.c)
 *     ??0PeoplePaneViewInfo@@QEAA@PEBGW4ViewType@@UtagSIZE@@@Z @ 0x1804B1D10 (--0PeoplePaneViewInfo@@QEAA@PEBGW4ViewType@@UtagSIZE@@@Z.c)
 *     ?RemovePendingShareViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x1804B5B90 (-RemovePendingShareViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z.c)
 *     ?StartTelemetryShowTimer@PeoplePaneViewInfo@@QEAAJXZ @ 0x1804B60D0 (-StartTelemetryShowTimer@PeoplePaneViewInfo@@QEAAJXZ.c)
 *     ?s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ @ 0x1804B67F8 (-s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall PeoplePaneViewManager::LaunchPeopleShare(
        RTL_SRWLOCK *this,
        unsigned __int16 *a2,
        struct IInspectable *a3)
{
  _DWORD *v5; // rbx
  char v6; // r14
  char *Ptr; // rdx
  std::_Ref_count_base *v8; // rbx
  PeoplePaneViewManager *v9; // r15
  HRESULT Instance; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  HRESULT v13; // eax
  HWND WindowW; // rax
  const char *v15; // r9
  IUnknown *v16; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rsi
  __int64 v18; // rdi
  unsigned int v19; // r8d
  HSTRING_HEADER *v20; // rax
  IUnknown *pUnk; // [rsp+40h] [rbp-69h] BYREF
  __int64 AppId; // [rsp+48h] [rbp-61h] BYREF
  std::_Ref_count_base *v24; // [rsp+50h] [rbp-59h]
  char v25[8]; // [rsp+58h] [rbp-51h] BYREF
  unsigned __int16 *v26; // [rsp+60h] [rbp-49h] BYREF
  RTL_SRWLOCK *v27; // [rsp+68h] [rbp-41h]
  unsigned __int16 **v28; // [rsp+70h] [rbp-39h]
  char v29; // [rsp+78h] [rbp-31h]
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-29h] BYREF
  __int64 v31; // [rsp+98h] [rbp-11h]
  HSTRING_HEADER v32; // [rsp+A0h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v26 = a2;
  AppId = 0x25E000001F4LL;
  v5 = operator new(0x60uLL);
  *(_OWORD *)v5 = 0LL;
  v6 = 1;
  v5[2] = 1;
  v5[3] = 1;
  *(_QWORD *)v5 = &std::_Ref_count_obj2<PeoplePaneViewInfo>::`vftable';
  PeoplePaneViewInfo::PeoplePaneViewInfo((__int64)(v5 + 4), v26, 1, AppId);
  AppId = (__int64)(v5 + 4);
  v24 = (std::_Ref_count_base *)v5;
  PeoplePaneViewInfo::StartTelemetryShowTimer((PeoplePaneViewInfo *)(v5 + 4));
  AcquireSRWLockExclusive(this + 5);
  v27 = this + 5;
  Ptr = (char *)this[7].Ptr;
  if ( Ptr == this[8].Ptr )
  {
    std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Emplace_reallocate<std::shared_ptr<PeoplePaneViewInfo>>(
      &this[6].Ptr,
      Ptr,
      &AppId);
    v8 = v24;
  }
  else
  {
    *(_QWORD *)Ptr = v5 + 4;
    *((_QWORD *)Ptr + 1) = v5;
    v8 = 0LL;
    this[7].Ptr = (char *)this[7].Ptr + 16;
  }
  if ( this != (RTL_SRWLOCK *)-40LL )
    ReleaseSRWLockExclusive(this + 5);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  v9 = (PeoplePaneViewManager *)&this[-11];
  v27 = this - 11;
  v28 = &v26;
  v29 = 1;
  pUnk = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&pUnk);
  Instance = CoCreateInstance(
               &CLSID_ApplicationActivationManager,
               0LL,
               1u,
               &GUID_54e4c428_d1d4_47d4_ade6_46c829114a7d,
               (LPVOID *)&pUnk);
  v11 = Instance;
  if ( Instance < 0 )
  {
    v12 = 302LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_18;
  }
  v13 = CoAllowSetForegroundWindow(pUnk, 0LL);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x130,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v13);
  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( !SetForegroundWindow(WindowW) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x132,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      v15);
  v16 = pUnk;
  QueryInterface = pUnk->lpVtbl[1].QueryInterface;
  v31 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Windows.Launch", 0xFu, 0xEu);
  v18 = v31;
  AppId = (__int64)PeoplePaneViewManager::s_GetAppId();
  v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v32, (const WCHAR **)&AppId, v19);
  Instance = ((__int64 (__fastcall *)(IUnknown *, PVOID, _QWORD, __int64, struct IInspectable *, _DWORD, char *))QueryInterface)(
               v16,
               v20[1].Reserved.Reserved1,
               0LL,
               v18,
               a3,
               0,
               v25);
  v11 = Instance;
  if ( Instance < 0 )
  {
    v12 = 315LL;
    goto LABEL_16;
  }
  v6 = 0;
  v11 = 0;
LABEL_18:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&pUnk);
  if ( v6 )
    PeoplePaneViewManager::RemovePendingShareViewInfoForContactId(v9, v26);
  return v11;
}
