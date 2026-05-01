/*
 * XREFs of ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800C8550
 * Callers:
 *     ?SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z @ 0x180052EC0 (-SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z.c)
 *     ?SetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x180058E90 (-SetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z.c)
 *     ?RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x1800DF5E0 (-RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_.c)
 *     _lambda_3752109e28d6ea02fd1f915d996064c2_::operator() @ 0x1800DF6FC (_lambda_3752109e28d6ea02fd1f915d996064c2_--operator().c)
 *     ?_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800E0C30 (-_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x1800E1030 (-SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z.c)
 *     ?SetViewInFocusHelper@CApplicationViewManager@@AEAAJPEAUIApplicationView@@W4FocusType@1@@Z @ 0x180168F88 (-SetViewInFocusHelper@CApplicationViewManager@@AEAAJPEAUIApplicationView@@W4FocusType@1@@Z.c)
 *     _lambda_00579e35fd3f40d9daeda2b75c1830f2_::operator() @ 0x1801D89F0 (_lambda_00579e35fd3f40d9daeda2b75c1830f2_--operator().c)
 *     _lambda_d87bb6e841689a33a8176d79960f4277_::operator() @ 0x1801D8D64 (_lambda_d87bb6e841689a33a8176d79960f4277_--operator().c)
 *     ?HandleWindowReplaced@CApplicationViewManager@@UEAAJPEAUHWND__@@0@Z @ 0x1802D15A0 (-HandleWindowReplaced@CApplicationViewManager@@UEAAJPEAUHWND__@@0@Z.c)
 *     ?WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z @ 0x1803CC730 (-WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180065328 (--1-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$.c)
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?StartActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800C6530 (-StartActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?AddTask@NotificationDispatcher@@AEAAJPEAUIAsyncCallback@@@Z @ 0x1800C7D10 (-AddTask@NotificationDispatcher@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     ??4?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1800C7F20 (--4-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPr.c)
 *     _lambda_4181134c5161f261fff3e61f273c9fd8_::_lambda_4181134c5161f261fff3e61f273c9fd8_ @ 0x1800C835C (_lambda_4181134c5161f261fff3e61f273c9fd8_--_lambda_4181134c5161f261fff3e61f273c9fd8_.c)
 *     ?Destroy@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800C8BD0 (-Destroy@-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para.c)
 *     ??0?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1800C8C7C (--0-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPr.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x1800C8F50 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800C9020 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180153D84 (-reset@-$shared_object@V-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Para.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18016B8F0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x180395CD0 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationViewManager::RaiseApplicationViewChanged(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        unsigned int a3,
        __int64 a4)
{
  int CallbackArray; // eax
  int v9; // edi
  NotificationDispatcher *v10; // r12
  __int64 v11; // r8
  struct IAsyncCallback *v12; // rbx
  char *v13; // rax
  char *v14; // rdi
  int v15; // eax
  int (__fastcall *v17)(_QWORD, GUID *, WINBOOL *); // rbx
  int v18; // eax
  void *v19; // rbx
  void *v20; // rdi
  HANDLE ProcessHeap; // rax
  __int64 v22; // rdx
  void (*v23)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  void *v24; // rbx
  void *v25; // rbx
  HANDLE v26; // rax
  void *v27; // rbx
  HANDLE v28; // rax
  __int64 v29; // rdx
  void (*v30)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  void *v31; // rbx
  HANDLE v32; // rax
  void *v33; // rbx
  HANDLE v34; // rax
  __int64 v35; // rdx
  void (*v36)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL v37[2]; // [rsp+20h] [rbp-E0h] BYREF
  struct IObjectArray *v38; // [rsp+28h] [rbp-D8h] BYREF
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL v40; // [rsp+34h] [rbp-CCh] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID v42; // [rsp+40h] [rbp-C0h] BYREF
  void (__fastcall ***v43)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-B8h] BYREF
  LPVOID v44; // [rsp+50h] [rbp-B0h] BYREF
  struct IAsyncCallback *v45; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+60h] [rbp-A0h] BYREF
  union _RTL_RUN_ONCE *v47; // [rsp+68h] [rbp-98h] BYREF
  int v48; // [rsp+70h] [rbp-90h]
  union _RTL_RUN_ONCE *v49; // [rsp+78h] [rbp-88h] BYREF
  int v50; // [rsp+80h] [rbp-80h]
  union _RTL_RUN_ONCE *v51; // [rsp+88h] [rbp-78h] BYREF
  int v52; // [rsp+90h] [rbp-70h]
  __int64 v53; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v54; // [rsp+A8h] [rbp-58h]
  __int64 v55; // [rsp+B0h] [rbp-50h] BYREF
  struct IObjectArray *v56; // [rsp+B8h] [rbp-48h] BYREF
  void **v57; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v58[3]; // [rsp+C8h] [rbp-38h] BYREF
  int v59; // [rsp+E0h] [rbp-20h]
  __int64 v60; // [rsp+E8h] [rbp-18h]
  int *v61; // [rsp+F0h] [rbp-10h]
  int v62; // [rsp+F8h] [rbp-8h] BYREF
  char v63; // [rsp+FCh] [rbp-4h]
  char v64[32]; // [rsp+100h] [rbp+0h] BYREF
  int v65; // [rsp+120h] [rbp+20h]
  __int64 v66; // [rsp+128h] [rbp+28h]
  LPVOID v67; // [rsp+130h] [rbp+30h]
  char v68; // [rsp+138h] [rbp+38h]
  __int64 v69; // [rsp+140h] [rbp+40h]
  __int128 v70; // [rsp+148h] [rbp+48h]
  __int128 v71; // [rsp+158h] [rbp+58h]
  __int128 v72; // [rsp+168h] [rbp+68h]
  __int128 v73; // [rsp+178h] [rbp+78h]
  __int128 v74; // [rsp+188h] [rbp+88h]
  __int128 v75; // [rsp+198h] [rbp+98h]
  __int128 v76; // [rsp+1A8h] [rbp+A8h]
  __int128 v77; // [rsp+1B8h] [rbp+B8h]
  __int128 v78; // [rsp+1C8h] [rbp+C8h]
  __int64 v79; // [rsp+1D8h] [rbp+D8h]
  _BYTE v80[24]; // [rsp+1E0h] [rbp+E0h] BYREF
  void *v81; // [rsp+1F8h] [rbp+F8h]
  void **v82; // [rsp+200h] [rbp+100h] BYREF
  _QWORD v83[3]; // [rsp+208h] [rbp+108h] BYREF
  int v84; // [rsp+220h] [rbp+120h]
  int *v85; // [rsp+228h] [rbp+128h]
  int *v86; // [rsp+230h] [rbp+130h]
  int v87; // [rsp+238h] [rbp+138h] BYREF
  char v88; // [rsp+23Ch] [rbp+13Ch]
  char v89[32]; // [rsp+240h] [rbp+140h] BYREF
  int v90; // [rsp+260h] [rbp+160h] BYREF
  const char *v91; // [rsp+268h] [rbp+168h]
  LPVOID v92; // [rsp+270h] [rbp+170h]
  char v93; // [rsp+278h] [rbp+178h]
  __int64 v94; // [rsp+280h] [rbp+180h]
  __int128 v95; // [rsp+288h] [rbp+188h]
  __int128 v96; // [rsp+298h] [rbp+198h]
  __int128 v97; // [rsp+2A8h] [rbp+1A8h]
  __int128 v98; // [rsp+2B8h] [rbp+1B8h]
  __int128 v99; // [rsp+2C8h] [rbp+1C8h]
  __int128 v100; // [rsp+2D8h] [rbp+1D8h]
  __int128 v101; // [rsp+2E8h] [rbp+1E8h]
  __int128 v102; // [rsp+2F8h] [rbp+1F8h]
  __int128 v103; // [rsp+308h] [rbp+208h]
  __int64 v104; // [rsp+318h] [rbp+218h]
  _BYTE v105[24]; // [rsp+320h] [rbp+220h] BYREF
  void *v106; // [rsp+338h] [rbp+238h]
  __int64 v107; // [rsp+340h] [rbp+240h] BYREF
  unsigned int v108; // [rsp+348h] [rbp+248h]
  __int64 v109; // [rsp+350h] [rbp+250h] BYREF
  struct IObjectArray *v110; // [rsp+358h] [rbp+258h] BYREF
  void **v111; // [rsp+360h] [rbp+260h] BYREF
  char v112[24]; // [rsp+368h] [rbp+268h] BYREF
  int v113; // [rsp+380h] [rbp+280h]
  int v114; // [rsp+398h] [rbp+298h]
  char v115[48]; // [rsp+3A0h] [rbp+2A0h] BYREF
  LPVOID lpMem; // [rsp+3D0h] [rbp+2D0h]
  char v117; // [rsp+3D8h] [rbp+2D8h]
  char v118[24]; // [rsp+480h] [rbp+380h] BYREF
  char v119[8]; // [rsp+498h] [rbp+398h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4F8h] [rbp+3F8h]

  v83[0] = 0LL;
  v83[1] = &v82;
  v83[2] = 0LL;
  v84 = 0;
  v85 = &v90;
  v86 = &v87;
  v87 = 0;
  v88 = 0;
  v93 = 0;
  v90 = 0;
  v91 = "RaiseApplicationViewChange";
  v92 = 0LL;
  v94 = 1LL;
  memset(v105, 0, sizeof(v105));
  v95 = 0LL;
  v96 = 0LL;
  v97 = 0LL;
  v98 = 0LL;
  v99 = 0LL;
  v100 = 0LL;
  v101 = 0LL;
  v102 = 0LL;
  v103 = 0LL;
  v104 = 0LL;
  v106 = 0LL;
  v82 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::StartActivity(
    (__int64)&v82,
    a2,
    a3,
    a4);
  v38 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v38);
  CallbackArray = AgileRegistrationList::GetCallbackArray((AgileRegistrationList *)(a1 + 96), &v38);
  v9 = CallbackArray;
  if ( CallbackArray < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x273,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)CallbackArray,
      v37[0]);
  }
  else
  {
    if ( a3 == 7 )
    {
      *(_QWORD *)v37 = 0LL;
      v17 = (int (__fastcall *)(_QWORD, GUID *, WINBOOL *))**a2;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v37);
      if ( v17(a2, &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0, v37) >= 0 )
      {
        v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v37 + 40LL))(*(_QWORD *)v37, 0LL);
        if ( v18 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x27B,
            (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
            (const char *)(unsigned int)v18,
            v37[0]);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v37);
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 592) + 40LL))(*(_QWORD *)(a1 + 592), a2, a3);
    v10 = *(NotificationDispatcher **)(a1 + 672);
    v43 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v43);
    if ( a4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
    v53 = (__int64)a2;
    v43 = 0LL;
    v54 = a3;
    v55 = a4;
    v46 = 0LL;
    v56 = v38;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v56);
    v57 = &wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
    v58[0] = 0LL;
    v58[1] = &v57;
    v58[2] = 0LL;
    v59 = 0;
    v60 = 0LL;
    v61 = &v62;
    v62 = 0;
    v63 = 0;
    v68 = 0;
    v65 = 0;
    v66 = 0LL;
    v67 = 0LL;
    v69 = 1LL;
    memset(v80, 0, sizeof(v80));
    v70 = 0LL;
    v71 = 0LL;
    v72 = 0LL;
    v73 = 0LL;
    v74 = 0LL;
    v75 = 0LL;
    v76 = 0LL;
    v77 = 0LL;
    v78 = 0LL;
    v79 = 0LL;
    v81 = 0LL;
    wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(
      (__int64)&v57,
      (__int64)&v82);
    v57 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
    v107 = v53;
    v53 = 0LL;
    v108 = v54;
    v109 = v55;
    v55 = 0LL;
    v110 = v56;
    v56 = 0LL;
    if ( v59 )
      LOBYTE(v11) = 1;
    else
      v11 = 0LL;
    wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      &v111,
      &v57,
      v11);
    v111 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
    v12 = 0LL;
    v13 = (char *)operator new(0x190uLL, (const struct std::nothrow_t *)&std::nothrow);
    v14 = v13;
    if ( v13 )
    {
      Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v13 + 8));
      *((_DWORD *)v14 + 11) = 1;
      *(_QWORD *)v14 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `IAsyncCallback'};
      *((_QWORD *)v14 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      lambda_4181134c5161f261fff3e61f273c9fd8_::_lambda_4181134c5161f261fff3e61f273c9fd8_((__int64)(v14 + 48), &v107);
      *(_QWORD *)v14 = off_1807A18F0;
      *((_QWORD *)v14 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      v12 = (struct IAsyncCallback *)v14;
    }
    v45 = v12;
    v111 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
    wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v111);
    wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v119);
    wil::details::shared_buffer::reset((wil::details::shared_buffer *)v118);
    if ( v117 )
    {
      v20 = lpMem;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v20);
      v117 = 0;
    }
    lpMem = 0LL;
    if ( v114 == 1 )
    {
      v114 = 2;
      Context = 0LL;
      if ( __std_init_once_begin_initialize(
             &`ApplicationViewManagementLogging::Instance'::`2'::wrapper,
             0,
             &fPending,
             &Context)
        && fPending )
      {
        v47 = &`ApplicationViewManagementLogging::Instance'::`2'::wrapper;
        Context = &qword_18098DDC8;
        qword_18098DDC8 = (__int64)&ShellScreenClippingLogging::`vftable';
        qword_18098DDE0 = (__int64)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
        v48 = 0;
        wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v47, v22, v23);
      }
      _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v115);
    }
    v114 = 3;
    if ( v113 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v112);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v110);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v109);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v107);
    if ( v12 )
    {
      v15 = NotificationDispatcher::AddTask(v10, v12);
      v9 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1D,
          (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\NotificationDispatcher.h",
          (const char *)(unsigned int)v15,
          v37[0]);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v45);
      }
      else
      {
        (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v12 + 16LL))(v12);
        v9 = 0;
      }
    }
    else
    {
      v9 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\NotificationDispatcher.h",
        (const char *)0x8007000ELL,
        v37[0]);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v45);
    }
    v57 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
    wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v57);
    if ( v81 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v81, 0xFFFFFFFF) == 1 )
      {
        v24 = v81;
        if ( v81 )
        {
          wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v81 + 8);
          operator delete(v24, 0x108uLL);
        }
      }
      v81 = 0LL;
    }
    if ( *(_QWORD *)v80 )
    {
      if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)v80, 0xFFFFFFFF) == 1 )
      {
        v25 = *(void **)v80;
        v26 = GetProcessHeap();
        HeapFree(v26, 0, v25);
      }
      *(_OWORD *)v80 = 0LL;
    }
    if ( v68 )
    {
      v27 = v67;
      v28 = GetProcessHeap();
      HeapFree(v28, 0, v27);
      v68 = 0;
    }
    v67 = 0LL;
    if ( v62 == 1 )
    {
      v62 = 2;
      v42 = 0LL;
      if ( __std_init_once_begin_initialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &v40, &v42)
        && v40 )
      {
        v49 = &`ApplicationViewManagementLogging::Instance'::`2'::wrapper;
        v42 = &qword_18098DDC8;
        qword_18098DDC8 = (__int64)&ShellScreenClippingLogging::`vftable';
        qword_18098DDE0 = (__int64)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
        v50 = 0;
        wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v49, v29, v30);
      }
      _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)v42 + 1), v64);
    }
    v62 = 3;
    if ( v59 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v58);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v56);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v55);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v53);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v46);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v43);
    if ( v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x295,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v9,
        v37[0]);
    else
      v9 = 0;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v38);
  v82 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v82);
  if ( v106 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v106, 0xFFFFFFFF) == 1 )
    {
      v19 = v106;
      if ( v106 )
      {
        wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v106 + 8);
        operator delete(v19, 0x108uLL);
      }
    }
    v106 = 0LL;
  }
  if ( *(_QWORD *)v105 )
  {
    if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)v105, 0xFFFFFFFF) == 1 )
    {
      v31 = *(void **)v105;
      v32 = GetProcessHeap();
      HeapFree(v32, 0, v31);
    }
    *(_OWORD *)v105 = 0LL;
  }
  if ( v93 )
  {
    v33 = v92;
    v34 = GetProcessHeap();
    HeapFree(v34, 0, v33);
    v93 = 0;
  }
  v92 = 0LL;
  if ( v87 == 1 )
  {
    v87 = 2;
    v44 = 0LL;
    if ( __std_init_once_begin_initialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, v37, &v44)
      && v37[0] )
    {
      v51 = &`ApplicationViewManagementLogging::Instance'::`2'::wrapper;
      v44 = &qword_18098DDC8;
      qword_18098DDC8 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_18098DDE0 = (__int64)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      v52 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v51, v35, v36);
    }
    _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)v44 + 1), v89);
  }
  v87 = 3;
  if ( v84 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v83);
  return (unsigned int)v9;
}
