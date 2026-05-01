/*
 * XREFs of _lambda_3299b7567c8e16a49084b1350d61b7f6_::operator() @ 0x1800773D4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d0da97affcf0ee4e8d5f1623cb8d936b___::Run @ 0x180167BB0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d0da97affcf0ee4e8d5f1623cb8d936b___--Run.c)
 * Callees:
 *     CIAMGlobals::QueueViewManagementTask__lambda_94391b322209b754f3b517464a133884___ @ 0x18002EAB8 (CIAMGlobals--QueueViewManagementTask__lambda_94391b322209b754f3b517464a133884___.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_UpdateMinSizePreferences@CFrameApplicationPresentation@@AEAAJPEAUHWND__@@@Z @ 0x18006D9C8 (-_UpdateMinSizePreferences@CFrameApplicationPresentation@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_FixDialogsIfNeeded@CFrameApplicationPresentation@@AEAAXXZ @ 0x180074E38 (-_FixDialogsIfNeeded@CFrameApplicationPresentation@@AEAAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z @ 0x18007735C (--0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z.c)
 *     ??1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ @ 0x1800778A4 (--1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180126700 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??4?$ComPtr@UITaskWindow@@@WRL@Microsoft@@QEAAAEAV012@PEAUITaskWindow@@@Z @ 0x1801374B8 (--4-$ComPtr@UITaskWindow@@@WRL@Microsoft@@QEAAAEAV012@PEAUITaskWindow@@@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18013751C (-ContinueOnCurrentThread@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAA.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x1801414A0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_qd @ 0x1802EC594 (WPP_SF_qd.c)
 *     ??$FailedSettingPresentedWindowOnFrame@AEBJPEBG@CFramePresentationTelemetry@@SAXAEBJ$$QEAPEBG@Z @ 0x18030C5F8 (--$FailedSettingPresentedWindowOnFrame@AEBJPEBG@CFramePresentationTelemetry@@SAXAEBJ$$QEAPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_3299b7567c8e16a49084b1350d61b7f6_::operator()(struct IUnknown **a1)
{
  _QWORD *v2; // r13
  bool v3; // r12
  __int64 v4; // r14
  struct IUnknown *v5; // rcx
  __int64 QueryInterface; // rbx
  struct IUnknown *v7; // rsi
  struct IUnknown *v8; // r15
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  struct CFrameApplicationPresentation *v11; // rbx
  int lpVtbl; // ebx
  __int64 v13; // rax
  int v14; // [rsp+20h] [rbp-59h]
  _BYTE v15[16]; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v16[32]; // [rsp+40h] [rbp-39h] BYREF
  char v17[24]; // [rsp+60h] [rbp-19h] BYREF
  int v18; // [rsp+78h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  unsigned int v20; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v21; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v22; // [rsp+F0h] [rbp+77h] BYREF
  struct IUnknownVtbl *v23; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = a1 + 2;
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    a1 + 2,
    v16);
  v3 = (unsigned int)SHIsSameObject(*a1, (struct IUnknown *)a1[1][13].lpVtbl->QueryInterface) != 0;
  v4 = ((__int64 (__fastcall *)(struct IUnknown *))(*a1)->lpVtbl[1].AddRef)(*a1);
  v5 = a1[1];
  if ( (HRESULT (__stdcall *)(IUnknown *, const IID *const, void **))v4 == v5[14].lpVtbl->QueryInterface && v3 )
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v2, 0LL);
  }
  else
  {
    if ( !IsWindowVisible((HWND)v5[16].lpVtbl) )
      ShowWindowAsync((HWND)a1[1][16].lpVtbl, 4);
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      lpVtbl = (int)a1[1][6].lpVtbl;
      v13 = ((__int64 (__fastcall *)(struct IUnknown *))(*a1)->lpVtbl[1].AddRef)(*a1);
      WPP_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        13LL,
        &WPP_2c90db7e24993e53cb0c5ea1cdf0809e_Traceguids,
        v13,
        lpVtbl);
    }
    QueryInterface = (__int64)a1[1][13].lpVtbl->QueryInterface;
    v22 = QueryInterface;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v22);
    v7 = a1[1];
    v8 = *a1;
    CFrameApplicationPresentation::PresentedWindowChangeHandler::PresentedWindowChangeHandler(
      (CFrameApplicationPresentation::PresentedWindowChangeHandler *)v15,
      (struct CFrameApplicationPresentation *)v7);
    if ( (struct IUnknown *)v7[10].lpVtbl != v8 || v7[11].lpVtbl != (struct IUnknownVtbl *)v4 )
      LOBYTE(v7[12].lpVtbl) = 0;
    Microsoft::WRL::ComPtr<ITaskWindow>::operator=(&v7[10], v8);
    v7[11].lpVtbl = (struct IUnknownVtbl *)v4;
    CFrameApplicationPresentation::PresentedWindowChangeHandler::~PresentedWindowChangeHandler((CFrameApplicationPresentation::PresentedWindowChangeHandler *)v15);
    if ( (unsigned int)GetWindowBand(a1[1][16].lpVtbl, &v20) )
      ((void (__fastcall *)(struct IUnknown *, _QWORD))(*a1)->lpVtbl[1].QueryInterface)(*a1, v20);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v9 = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, __int64))a1[1][15].lpVtbl->QueryInterface + 6))(
           a1[1][15].lpVtbl,
           v4);
    LODWORD(v21) = v9;
    v10 = retaddr;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2BC,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
        (const char *)(unsigned int)v9,
        v14);
      v23 = a1[1][76].lpVtbl;
      CFramePresentationTelemetry::FailedSettingPresentedWindowOnFrame<long const &,unsigned short const *>(&v21, &v23);
    }
    if ( v4 )
    {
      v21 = v4;
      CIAMGlobals::QueueViewManagementTask__lambda_94391b322209b754f3b517464a133884___((__int64)v10, &v21);
    }
    CFrameApplicationPresentation::_UpdateMinSizePreferences(
      (CFrameApplicationPresentation *)a1[1],
      (HWND)a1[1][14].lpVtbl->QueryInterface);
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    ((void (__fastcall *)(struct IUnknown *, struct IUnknownVtbl *, _QWORD))(*a1)->lpVtbl[8].Release)(
      *a1,
      a1[1][16].lpVtbl,
      (unsigned int)(LODWORD(a1[1][28].lpVtbl) != 0) + 4);
    if ( QueryInterface && !v3 )
      (*(void (__fastcall **)(__int64, struct IUnknownVtbl *, _QWORD))(*(_QWORD *)QueryInterface + 208LL))(
        QueryInterface,
        a1[1][16].lpVtbl,
        0LL);
    v11 = (struct CFrameApplicationPresentation *)a1[1];
    CFrameApplicationPresentation::PresentedWindowChangeHandler::PresentedWindowChangeHandler(
      (CFrameApplicationPresentation::PresentedWindowChangeHandler *)v15,
      v11);
    *((_BYTE *)v11 + 96) = 1;
    CFrameApplicationPresentation::PresentedWindowChangeHandler::~PresentedWindowChangeHandler((CFrameApplicationPresentation::PresentedWindowChangeHandler *)v15);
    CFrameApplicationPresentation::_FixDialogsIfNeeded((CFrameApplicationPresentation *)a1[1]);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v2, 0LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
  }
  if ( v18 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v17);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v16);
}
