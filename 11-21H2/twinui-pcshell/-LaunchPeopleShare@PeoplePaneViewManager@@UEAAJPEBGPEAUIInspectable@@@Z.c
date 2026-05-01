/*
 * XREFs of ?LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z @ 0x1803D8790
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019033C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@QEAV21@$$QEAV21@@Z @ 0x1803D4B5C (--$_Emplace_reallocate@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@@-$vector@V-$shared_ptr@UPeopleP.c)
 *     ??0PeoplePaneViewInfo@@QEAA@PEBGW4ViewType@@UtagSIZE@@@Z @ 0x1803D4FA8 (--0PeoplePaneViewInfo@@QEAA@PEBGW4ViewType@@UtagSIZE@@@Z.c)
 *     ?RemovePendingShareViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x1803D8E24 (-RemovePendingShareViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z.c)
 *     ?StartTelemetryShowTimer@PeoplePaneViewInfo@@QEAAJXZ @ 0x1803D9338 (-StartTelemetryShowTimer@PeoplePaneViewInfo@@QEAAJXZ.c)
 *     ?s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ @ 0x1803D9DFC (-s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall PeoplePaneViewManager::LaunchPeopleShare(
        PeoplePaneViewManager *this,
        unsigned __int16 *a2,
        struct IInspectable *a3)
{
  unsigned __int16 **v5; // rbx
  char v6; // r14
  _QWORD *v7; // rdx
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
  __int64 v20; // rax
  __int64 AppId; // [rsp+40h] [rbp-59h] BYREF
  IUnknown *pUnk; // [rsp+48h] [rbp-51h] BYREF
  unsigned __int16 *v24; // [rsp+50h] [rbp-49h] BYREF
  PeoplePaneViewManager *v25; // [rsp+58h] [rbp-41h] BYREF
  unsigned __int16 **v26; // [rsp+60h] [rbp-39h]
  char v27; // [rsp+68h] [rbp-31h]
  char v28[8]; // [rsp+70h] [rbp-29h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-21h] BYREF
  __int64 v30; // [rsp+90h] [rbp-9h]
  char v31[32]; // [rsp+98h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v24 = a2;
  AppId = 0x25E000001F4LL;
  v5 = (unsigned __int16 **)operator new(0x60uLL);
  *(_OWORD *)v5 = 0LL;
  v6 = 1;
  *((_DWORD *)v5 + 2) = 1;
  *((_DWORD *)v5 + 3) = 1;
  *v5 = (unsigned __int16 *)&std::_Ref_count_obj2<PeoplePaneViewInfo>::`vftable';
  PeoplePaneViewInfo::PeoplePaneViewInfo((__int64)(v5 + 2), v24, 1, AppId);
  v25 = (PeoplePaneViewManager *)(v5 + 2);
  v26 = v5;
  PeoplePaneViewInfo::StartTelemetryShowTimer((PeoplePaneViewInfo *)(v5 + 2));
  wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&AppId, (RTL_SRWLOCK *)this + 5);
  v7 = (_QWORD *)*((_QWORD *)this + 7);
  if ( v7 == *((_QWORD **)this + 8) )
  {
    std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Emplace_reallocate<std::shared_ptr<PeoplePaneViewInfo>>(
      (__int64 *)this + 6,
      (__int64)v7,
      &v25);
    v8 = (std::_Ref_count_base *)v26;
  }
  else
  {
    *v7 = v5 + 2;
    v7[1] = v5;
    v8 = 0LL;
    *((_QWORD *)this + 7) += 16LL;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)&AppId);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  v9 = (PeoplePaneViewManager *)((char *)this - 88);
  v25 = v9;
  v26 = &v24;
  v27 = 1;
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
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_16;
  }
  v13 = CoAllowSetForegroundWindow(pUnk, 0LL);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x130,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v13);
  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( !SetForegroundWindow(WindowW) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x132,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      v15);
  v16 = pUnk;
  QueryInterface = pUnk->lpVtbl[1].QueryInterface;
  v30 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Windows.Launch", 0xFu, 0xEu);
  v18 = v30;
  AppId = (__int64)PeoplePaneViewManager::s_GetAppId();
  v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v31, (const WCHAR **)&AppId, v19);
  Instance = ((__int64 (__fastcall *)(IUnknown *, _QWORD, _QWORD, __int64, struct IInspectable *, _DWORD, char *))QueryInterface)(
               v16,
               *(_QWORD *)(v20 + 24),
               0LL,
               v18,
               a3,
               0,
               v28);
  v11 = Instance;
  if ( Instance < 0 )
  {
    v12 = 315LL;
    goto LABEL_14;
  }
  v6 = 0;
  v11 = 0;
LABEL_16:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&pUnk);
  if ( v6 )
    PeoplePaneViewManager::RemovePendingShareViewInfoForContactId(v9, v24);
  return v11;
}
