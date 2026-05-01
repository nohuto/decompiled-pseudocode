/*
 * XREFs of ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18007B5B0
 * Callers:
 *     ?SetViewInFocusHelper@CApplicationViewManager@@AEAAJPEAUIApplicationView@@W4FocusType@1@@Z @ 0x1800790A8 (-SetViewInFocusHelper@CApplicationViewManager@@AEAAJPEAUIApplicationView@@W4FocusType@1@@Z.c)
 *     ?SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z @ 0x18008E660 (-SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z.c)
 *     ?SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x1800A0FC0 (-SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z.c)
 *     ?_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800E9710 (-_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x1800EAD40 (-RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_.c)
 *     _lambda_3752109e28d6ea02fd1f915d996064c2_::operator() @ 0x1800EAE5C (_lambda_3752109e28d6ea02fd1f915d996064c2_--operator().c)
 *     ?SetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x180144780 (-SetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z.c)
 *     _lambda_7915f6a175cf868405df09c49fdb616f_::operator() @ 0x18022B31C (_lambda_7915f6a175cf868405df09c49fdb616f_--operator().c)
 *     _lambda_75640f340b6302f1fe16b95c421a43bd_::operator() @ 0x18030FDD4 (_lambda_75640f340b6302f1fe16b95c421a43bd_--operator().c)
 *     ?HandleWindowReplaced@CApplicationViewManager@@UEAAJPEAUHWND__@@0@Z @ 0x1803106F0 (-HandleWindowReplaced@CApplicationViewManager@@UEAAJPEAUHWND__@@0@Z.c)
 *     ?WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z @ 0x180310E40 (-WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?SetCanTab@CApplicationViewBase@@IEAAJHAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1803152A0 (-SetCanTab@CApplicationViewBase@@IEAAJHAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_829df63d4f4da6954880c71339f9350f_____lambda_829df63d4f4da6954880c71339f9350f___ @ 0x18007B154 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_829df63d4f4da6954880c71339f9350f_.c)
 *     _lambda_4181134c5161f261fff3e61f273c9fd8_::_lambda_4181134c5161f261fff3e61f273c9fd8_ @ 0x18007B3E4 (_lambda_4181134c5161f261fff3e61f273c9fd8_--_lambda_4181134c5161f261fff3e61f273c9fd8_.c)
 *     _lambda_4181134c5161f261fff3e61f273c9fd8_::__lambda_4181134c5161f261fff3e61f273c9fd8_ @ 0x18007B4F8 (_lambda_4181134c5161f261fff3e61f273c9fd8_--__lambda_4181134c5161f261fff3e61f273c9fd8_.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?AddTask@NotificationDispatcher@@AEAAJPEAUIAsyncCallback@@@Z @ 0x18007BE50 (-AddTask@NotificationDispatcher@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     ??0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z @ 0x18007C084 (--0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StartActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18007C190 (-StartActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18007CB00 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180127040 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@.c)
 *     ?reset@?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180130774 (-reset@-$shared_object@V-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Para.c)
 *     ?LockExclusive@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180187278 (-LockExclusive@-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTa.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetStopResult@?$ActivityData@VHolographicPositionerProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x18022A4D4 (-SetStopResult@-$ActivityData@VHolographicPositionerProvider@@U_TlgReflectorTag_Param0IsProvider.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1802DEE4C (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ??1?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18030F770 (--1-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$.c)
 *     ??4?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAAEAV012@AEBV012@@Z @ 0x18030FC68 (--4-$shared_object@V-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0Is.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationViewManager::RaiseApplicationViewChanged(
        __int64 a1,
        int (__fastcall ***a2)(_QWORD, GUID *, WINBOOL *),
        unsigned int a3,
        __int64 a4)
{
  int CallbackArray; // eax
  int v9; // edi
  NotificationDispatcher *v10; // r12
  char *v11; // rax
  void *v12; // rsi
  char *v13; // rbx
  struct IAsyncCallback **CAsyncCallbackWithLambda__lambda_829df63d4f4da6954880c71339f9350f_____lambda_829df63d4f4da6954880c71339f9350f; // rax
  struct IAsyncCallback *v15; // rbx
  int v16; // eax
  unsigned int v17; // esi
  char *v18; // rbx
  int (__fastcall *v20)(_QWORD, GUID *, WINBOOL *); // rbx
  int v21; // eax
  void *v22; // rdi
  HANDLE ProcessHeap; // rax
  void *v24; // rdi
  void *v25; // rbx
  int v26; // eax
  __int64 v27; // rdx
  void *v28; // rbx
  void *v29; // rbx
  HANDLE v30; // rax
  void *v31; // rbx
  HANDLE v32; // rax
  __int64 v33; // rdx
  void (*v34)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v35; // eax
  void *v36; // rbx
  void *v37; // rbx
  void *v38; // rbx
  HANDLE v39; // rax
  void *v40; // rbx
  HANDLE v41; // rax
  __int64 v42; // rdx
  void (*v43)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL v44[2]; // [rsp+20h] [rbp-E0h] BYREF
  struct IObjectArray *v45; // [rsp+28h] [rbp-D8h] BYREF
  int v46; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+34h] [rbp-CCh] BYREF
  int v48; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  int (__fastcall ***v50)(_QWORD, _QWORD, _QWORD); // [rsp+48h] [rbp-B8h] BYREF
  char *v51; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID v52; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v53; // [rsp+60h] [rbp-A0h] BYREF
  char v54[8]; // [rsp+68h] [rbp-98h] BYREF
  struct IAsyncCallback *v55; // [rsp+70h] [rbp-90h] BYREF
  __int64 v56; // [rsp+78h] [rbp-88h] BYREF
  __int64 v57; // [rsp+80h] [rbp-80h] BYREF
  LPINIT_ONCE v58; // [rsp+88h] [rbp-78h] BYREF
  int v59; // [rsp+90h] [rbp-70h]
  LPINIT_ONCE v60; // [rsp+98h] [rbp-68h] BYREF
  int v61; // [rsp+A0h] [rbp-60h]
  void **v62; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v63[3]; // [rsp+B8h] [rbp-48h] BYREF
  int v64; // [rsp+D0h] [rbp-30h]
  int *v65; // [rsp+D8h] [rbp-28h]
  int *v66; // [rsp+E0h] [rbp-20h]
  int v67; // [rsp+E8h] [rbp-18h] BYREF
  char v68; // [rsp+ECh] [rbp-14h]
  _OWORD v69[2]; // [rsp+F0h] [rbp-10h] BYREF
  int v70; // [rsp+110h] [rbp+10h] BYREF
  const char *v71; // [rsp+118h] [rbp+18h]
  LPVOID v72; // [rsp+120h] [rbp+20h]
  char v73; // [rsp+128h] [rbp+28h]
  __int64 v74; // [rsp+130h] [rbp+30h]
  _OWORD v75[9]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v76; // [rsp+1C8h] [rbp+C8h]
  _BYTE v77[24]; // [rsp+1D0h] [rbp+D0h] BYREF
  void *v78; // [rsp+1E8h] [rbp+E8h] BYREF
  int (__fastcall ***v79)(_QWORD, _QWORD, _QWORD); // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned int v80; // [rsp+1F8h] [rbp+F8h]
  __int64 v81; // [rsp+200h] [rbp+100h] BYREF
  struct IObjectArray *v82; // [rsp+208h] [rbp+108h] BYREF
  void **v83; // [rsp+210h] [rbp+110h] BYREF
  _QWORD v84[3]; // [rsp+218h] [rbp+118h] BYREF
  int v85; // [rsp+230h] [rbp+130h]
  int *v86; // [rsp+238h] [rbp+138h]
  int *v87; // [rsp+240h] [rbp+140h]
  int v88; // [rsp+248h] [rbp+148h] BYREF
  char v89; // [rsp+24Ch] [rbp+14Ch]
  char v90[32]; // [rsp+250h] [rbp+150h] BYREF
  int v91; // [rsp+270h] [rbp+170h]
  __int64 v92; // [rsp+278h] [rbp+178h]
  LPVOID v93; // [rsp+280h] [rbp+180h]
  char v94; // [rsp+288h] [rbp+188h]
  __int64 v95; // [rsp+290h] [rbp+190h]
  __int128 v96; // [rsp+298h] [rbp+198h]
  __int128 v97; // [rsp+2A8h] [rbp+1A8h]
  __int128 v98; // [rsp+2B8h] [rbp+1B8h]
  __int128 v99; // [rsp+2C8h] [rbp+1C8h]
  __int128 v100; // [rsp+2D8h] [rbp+1D8h]
  __int128 v101; // [rsp+2E8h] [rbp+1E8h]
  __int128 v102; // [rsp+2F8h] [rbp+1F8h]
  __int128 v103; // [rsp+308h] [rbp+208h]
  __int128 v104; // [rsp+318h] [rbp+218h]
  __int64 v105; // [rsp+328h] [rbp+228h]
  _BYTE lpMem[24]; // [rsp+330h] [rbp+230h] BYREF
  void *v107; // [rsp+348h] [rbp+248h] BYREF
  _BYTE v108[352]; // [rsp+350h] [rbp+250h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+508h] [rbp+408h]

  v63[0] = 0LL;
  v63[1] = &v62;
  v63[2] = 0LL;
  v64 = 0;
  v65 = &v70;
  v66 = &v67;
  v67 = 0;
  v68 = 0;
  v73 = 0;
  v70 = 0;
  v71 = "RaiseApplicationViewChange";
  v72 = 0LL;
  v74 = 1LL;
  memset(v77, 0, sizeof(v77));
  memset(v75, 0, sizeof(v75));
  v76 = 0LL;
  v78 = 0LL;
  v62 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::StartActivity(&v62);
  v45 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v45);
  CallbackArray = AgileRegistrationList::GetCallbackArray((AgileRegistrationList *)(a1 + 96), &v45);
  v9 = CallbackArray;
  if ( CallbackArray < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x270,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)CallbackArray,
      v44[0]);
    v17 = -2147024322;
    goto LABEL_30;
  }
  if ( a3 == 7 )
  {
    *(_QWORD *)v44 = 0LL;
    v20 = **a2;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v44);
    if ( v20(a2, &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0, v44) >= 0 )
    {
      v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v44 + 40LL))(*(_QWORD *)v44, 0LL);
      if ( v21 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x278,
          (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v21,
          v44[0]);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v44);
  }
  (*(void (__fastcall **)(_QWORD, int (__fastcall ***)(_QWORD, GUID *, WINBOOL *), _QWORD))(**(_QWORD **)(a1 + 592)
                                                                                          + 40LL))(
    *(_QWORD *)(a1 + 592),
    a2,
    a3);
  v10 = *(NotificationDispatcher **)(a1 + 672);
  v50 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v50);
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  v79 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))a2;
  v50 = 0LL;
  v80 = a3;
  v81 = a4;
  v56 = 0LL;
  v82 = v45;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v82);
  v83 = &wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v84[0] = 0LL;
  v84[1] = &v83;
  v84[2] = 0LL;
  v85 = 0;
  v86 = 0LL;
  v87 = &v88;
  v88 = 0;
  v89 = 0;
  v94 = 0;
  v91 = 0;
  v92 = 0LL;
  v93 = 0LL;
  v95 = 1LL;
  memset(lpMem, 0, sizeof(lpMem));
  v96 = 0LL;
  v97 = 0LL;
  v98 = 0LL;
  v99 = 0LL;
  v100 = 0LL;
  v101 = 0LL;
  v102 = 0LL;
  v103 = 0LL;
  v104 = 0LL;
  v105 = 0LL;
  v107 = 0LL;
  if ( v78 )
  {
    v87 = v66;
    wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::operator=(
      &v107,
      &v78);
  }
  else
  {
    v11 = (char *)operator new(0x108uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v11;
    if ( v11 )
    {
      *(_DWORD *)v11 = 1;
      v13 = v11 + 8;
      *((_DWORD *)v11 + 2) = 0;
      v11[12] = 0;
      *((_DWORD *)v11 + 2) = v67;
      v11[12] = v68;
      *((_OWORD *)v11 + 1) = v69[0];
      *((_OWORD *)v11 + 2) = v69[1];
      v67 = 0;
      v68 = 0;
      *((_OWORD *)v11 + 3) = 0LL;
      *((_OWORD *)v11 + 4) = 0LL;
      *((_DWORD *)v11 + 12) = v70;
      *((_QWORD *)v11 + 7) = v71;
      if ( v11[72] )
      {
        v22 = (void *)*((_QWORD *)v11 + 8);
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v22);
        v13[64] = 0;
      }
      *((_QWORD *)v13 + 7) = 0LL;
      *((_QWORD *)v13 + 7) = v72;
      v72 = 0LL;
      v13[64] = v73;
      v73 = 0;
      *((_QWORD *)v13 + 9) = v74;
      wil::StoredFailureInfo::StoredFailureInfo(v13 + 80, v75);
      *((_QWORD *)v13 + 31) = 0LL;
      if ( v107 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v107, 0xFFFFFFFF) == 1 )
        {
          v24 = v107;
          if ( v107 )
          {
            wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v107 + 8);
            operator delete(v24, 0x108uLL);
          }
        }
      }
      v107 = v12;
      v87 = (int *)v13;
      if ( v78 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v78, 0xFFFFFFFF) == 1 )
        {
          v25 = v78;
          if ( v78 )
          {
            wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v78 + 8);
            operator delete(v25, 0x108uLL);
          }
        }
        v12 = v107;
      }
      v78 = v12;
      if ( v12 )
        _InterlockedIncrement((volatile signed __int32 *)v12);
      v66 = v87;
      v65 = v87 + 10;
    }
  }
  v86 = v87 + 10;
  v83 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  lambda_4181134c5161f261fff3e61f273c9fd8_::_lambda_4181134c5161f261fff3e61f273c9fd8_((__int64)v108, (__int64)&v79);
  CAsyncCallbackWithLambda__lambda_829df63d4f4da6954880c71339f9350f_____lambda_829df63d4f4da6954880c71339f9350f = (struct IAsyncCallback **)Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_829df63d4f4da6954880c71339f9350f_____lambda_829df63d4f4da6954880c71339f9350f___(&v53, (__int64)v108);
  v15 = *CAsyncCallbackWithLambda__lambda_829df63d4f4da6954880c71339f9350f_____lambda_829df63d4f4da6954880c71339f9350f;
  v55 = *CAsyncCallbackWithLambda__lambda_829df63d4f4da6954880c71339f9350f_____lambda_829df63d4f4da6954880c71339f9350f;
  *CAsyncCallbackWithLambda__lambda_829df63d4f4da6954880c71339f9350f_____lambda_829df63d4f4da6954880c71339f9350f = 0LL;
  if ( v53 )
  {
    v53 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release();
  }
  lambda_4181134c5161f261fff3e61f273c9fd8_::__lambda_4181134c5161f261fff3e61f273c9fd8_((__int64)v108);
  if ( v15 )
  {
    v16 = NotificationDispatcher::AddTask(v10, v15);
    v9 = v16;
    if ( v16 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\NotificationDispatcher.h",
        (const char *)(unsigned int)v16,
        v44[0]);
    else
      v9 = 0;
  }
  else
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\NotificationDispatcher.h",
      (const char *)0x8007000ELL,
      v44[0]);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v55);
  v83 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  v17 = -2147024322;
  if ( !v107 )
    goto LABEL_20;
  wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    &v83,
    v54);
  if ( v107 && *(_DWORD *)v107 == 1 )
  {
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(v54);
LABEL_20:
    if ( *v87 == 1 )
    {
      v26 = v87[22];
      v46 = v26;
      v27 = 2147942974LL;
      if ( v26 < 0 )
        v27 = (unsigned int)v26;
      wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicPositionerProvider,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v87,
        v27,
        &v46);
      ((void (__fastcall *)(void ***))v83[1])(&v83);
    }
    goto LABEL_21;
  }
  wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v107);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(v54);
LABEL_21:
  if ( v107 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v107, 0xFFFFFFFF) == 1 )
    {
      v28 = v107;
      if ( v107 )
      {
        wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v107 + 8);
        operator delete(v28, 0x108uLL);
      }
    }
    v107 = 0LL;
  }
  if ( *(_QWORD *)lpMem )
  {
    if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)lpMem, 0xFFFFFFFF) == 1 )
    {
      v29 = *(void **)lpMem;
      v30 = GetProcessHeap();
      HeapFree(v30, 0, v29);
    }
    *(_OWORD *)lpMem = 0LL;
  }
  if ( v94 )
  {
    v31 = v93;
    v32 = GetProcessHeap();
    HeapFree(v32, 0, v31);
    v94 = 0;
  }
  v93 = 0LL;
  if ( v88 == 1 )
  {
    v88 = 2;
    Context = 0LL;
    if ( __std_init_once_begin_initialize(
           &`ApplicationViewManagementLogging::Instance'::`2'::wrapper,
           0,
           &fPending,
           &Context)
      && fPending )
    {
      v58 = &`ApplicationViewManagementLogging::Instance'::`2'::wrapper;
      Context = &qword_1807B3DE0;
      qword_1807B3DE0 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_1807B3DF8 = (__int64)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      v59 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v58, v33, v34);
    }
    _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v90);
  }
  v88 = 3;
  if ( v85 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v84);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v82);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v81);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v79);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v56);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v50);
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x292,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v9,
      v44[0]);
  else
    v9 = 0;
LABEL_30:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v45);
  v62 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  if ( v78 )
  {
    v18 = (char *)v78 + 256;
    AcquireSRWLockExclusive((PSRWLOCK)v78 + 32);
    v51 = v18;
    v57 = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v57);
    if ( !v78 )
    {
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v51);
      goto LABEL_35;
    }
    if ( *(_DWORD *)v78 != 1 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v78, 0xFFFFFFFF) == 1 )
      {
        v36 = v78;
        if ( v78 )
        {
          wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v78 + 8);
          operator delete(v36, 0x108uLL);
        }
      }
      v78 = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v51);
      goto LABEL_35;
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v51);
  }
  if ( *v66 == 1 )
  {
    v35 = v66[22];
    v48 = v35;
    if ( v35 < 0 )
      v17 = v35;
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicPositionerProvider,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
      v66,
      v17,
      &v48);
    ((void (__fastcall *)(void ***))v62[1])(&v62);
  }
LABEL_35:
  if ( v78 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v78, 0xFFFFFFFF) == 1 )
    {
      v37 = v78;
      if ( v78 )
      {
        wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v78 + 8);
        operator delete(v37, 0x108uLL);
      }
    }
    v78 = 0LL;
  }
  if ( *(_QWORD *)v77 )
  {
    if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)v77, 0xFFFFFFFF) == 1 )
    {
      v38 = *(void **)v77;
      v39 = GetProcessHeap();
      HeapFree(v39, 0, v38);
    }
    *(_OWORD *)v77 = 0LL;
  }
  if ( v73 )
  {
    v40 = v72;
    v41 = GetProcessHeap();
    HeapFree(v41, 0, v40);
    v73 = 0;
  }
  v72 = 0LL;
  if ( v67 == 1 )
  {
    v67 = 2;
    v52 = 0LL;
    if ( __std_init_once_begin_initialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, v44, &v52)
      && v44[0] )
    {
      v60 = &`ApplicationViewManagementLogging::Instance'::`2'::wrapper;
      v52 = &qword_1807B3DE0;
      qword_1807B3DE0 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_1807B3DF8 = (__int64)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      v61 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v60, v42, v43);
    }
    _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)v52 + 1), v69);
  }
  v67 = 3;
  if ( v64 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v63);
  return (unsigned int)v9;
}
