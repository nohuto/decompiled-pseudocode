/*
 * XREFs of ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x1800831C0
 * Callers:
 *     ?HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z @ 0x1800214B0 (-HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z.c)
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180021A40 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x180041880 (-HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windo.c)
 *     ?SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_DATA@@W4MonitorChangeOptions@@@Z @ 0x180075220 (-SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_D.c)
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x1800C66F0 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x1800C6880 (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     _lambda_0ed677524a6dc3cf61a74a5bf9087e56_::operator() @ 0x18014CFBC (_lambda_0ed677524a6dc3cf61a74a5bf9087e56_--operator().c)
 *     ?ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z @ 0x1801575B0 (-ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z.c)
 *     ?HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x180172370 (-HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@W4OVERRIDE_IMMUNITY_CHANGE@@W4ReportVisibilityOverrideOptions@@@Z @ 0x180187B10 (-ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x180308F84 (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ @ 0x1800C6208 (-_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800EEF40 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801896C0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1801896CC (--_V@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VUwpViewHandledEventArgs@@@WRL@Microsoft@@QEAA@XZ @ 0x180302FFC (--1-$ComPtr@VUwpViewHandledEventArgs@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=12
void __fastcall CImmersiveApp::_ScheduleApplicationNotifications(
        CImmersiveApp *this,
        const struct APP_CHANGE_INFO *const a2,
        unsigned __int64 a3)
{
  void (__fastcall *v6)(char *, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rbx
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rbx
  char *v8; // rsi
  bool v9; // r12
  _QWORD *v10; // rdi
  LPUNKNOWN v11; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // r12
  __int64 v13; // rcx
  volatile int *v14; // rdx
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  unsigned int v17; // r12d
  _QWORD *v18; // rbx
  _QWORD *v19; // rax
  _QWORD *v20; // r14
  volatile int *v21; // rdx
  signed __int64 v22; // rax
  signed __int64 v23; // rtt
  volatile int *v24; // rdx
  int v25; // r14d
  signed __int64 v26; // rax
  unsigned int v27; // ecx
  signed __int64 v28; // rtt
  volatile int *v29; // rdx
  signed __int64 v30; // rax
  unsigned int v31; // ecx
  signed __int64 v32; // rtt
  int v33; // ebx
  __int64 v34; // rcx
  __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // r8
  __m128i v38; // xmm1
  __m128i v39; // xmm2
  int *v40; // rdx
  __m128i v41; // xmm0
  __m128i v42; // xmm0
  __m128i v43; // xmm1
  int *v44; // rcx
  unsigned __int64 v45; // r9
  unsigned __int64 v46; // rax
  _BYTE *v47; // rax
  _BYTE *v48; // r14
  char *i; // rbx
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rbx
  __int64 v53; // r15
  _QWORD *v54; // rax
  _QWORD *v55; // rdi
  char v56; // r12
  _QWORD *v57; // r15
  unsigned int Ptr; // r13d
  _DWORD *v59; // rbx
  _DWORD *v60; // rax
  _DWORD *v61; // rsi
  unsigned __int8 (__fastcall *v62)(CImmersiveApp *); // rax
  __int64 v63; // r9
  unsigned __int64 j; // rdx
  unsigned __int64 v65; // rcx
  const struct APP_CHANGE_INFO *v66; // rax
  int v67; // [rsp+20h] [rbp-59h]
  int v68; // [rsp+20h] [rbp-59h]
  __int64 v69; // [rsp+30h] [rbp-49h] BYREF
  int v70; // [rsp+38h] [rbp-41h]
  __int64 (__fastcall ***v71)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-39h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+48h] [rbp-31h] BYREF
  __int64 v73; // [rsp+50h] [rbp-29h] BYREF
  int v74; // [rsp+58h] [rbp-21h] BYREF
  __int64 (__fastcall ***v75)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp-19h] BYREF
  __int64 v76; // [rsp+68h] [rbp-11h] BYREF
  void *v77; // [rsp+70h] [rbp-9h]
  __int64 v78; // [rsp+78h] [rbp-1h]
  __int64 v79; // [rsp+80h] [rbp+7h] BYREF
  __int64 v80; // [rsp+88h] [rbp+Fh] BYREF
  char v81; // [rsp+90h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  __int64 v84; // [rsp+F8h] [rbp+7Fh] BYREF

  v71 = 0LL;
  v70 = 2;
  v6 = *(void (__fastcall **)(char *, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*((_QWORD *)this + 6) + 32LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v71);
  v6((char *)this + 48, &GUID_00000000_0000_0000_c000_000000000046, &v71);
  v70 = 1;
  v7 = v71;
  v75 = v71;
  if ( v71 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v71)[1])(v71);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v71);
  if ( !v7 )
    goto LABEL_89;
  if ( *((_BYTE *)this + 800) )
  {
    if ( (*((_BYTE *)this + 576) & 1) != 0 )
    {
      if ( !*((_QWORD *)this + 58) )
        goto LABEL_5;
      v65 = 0LL;
      if ( !a3 )
        goto LABEL_5;
      v66 = a2;
      while ( *(_DWORD *)v66 != 8 )
      {
        ++v65;
        v66 = (const struct APP_CHANGE_INFO *)((char *)v66 + 16);
        if ( v65 >= a3 )
          goto LABEL_5;
      }
    }
    CImmersiveApp::_ClearForegroundBoostHintedProcess(this);
    *((_BYTE *)this + 800) = 0;
  }
LABEL_5:
  if ( BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
  {
    v8 = (char *)this + 128;
    v9 = (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 14) + 392LL))((char *)this + 112) != 0;
    LOBYTE(v84) = v9;
    v76 = 0LL;
    v10 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v10 )
    {
      v10[2] = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      v10[5] = 0LL;
      ppunkMarshal = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppunkMarshal);
      if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
      {
        v11 = ppunkMarshal;
        QueryInterface = ppunkMarshal->lpVtbl->QueryInterface;
        v13 = v10[5];
        if ( v13 )
        {
          v10[5] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
        ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))QueryInterface)(
          v11,
          &GUID_00000003_0000_0000_c000_000000000046,
          v10 + 5);
        v9 = v84;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppunkMarshal);
      v10[7] = 1LL;
      *v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable';
      v10[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
      v10[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *v10 = &Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs::`vftable';
      v10[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
      v10[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      *((_BYTE *)v10 + 64) = v9;
      if ( this != (CImmersiveApp *)-128LL )
      {
        (*(void (__fastcall **)(char *))(*(_QWORD *)v8 + 8LL))((char *)this + 128);
        (*(void (__fastcall **)(char *))(*(_QWORD *)v8 + 8LL))((char *)this + 128);
      }
      v15 = v10[7];
      while ( v15 >= 0 )
      {
        if ( (_DWORD)v15 != 0x7FFFFFFF )
        {
          v16 = v15;
          v15 = _InterlockedCompareExchange64(v10 + 7, v15 + 1, v15);
          if ( v16 != v15 )
            continue;
        }
        goto LABEL_19;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v15 + 16), v14);
LABEL_19:
      v17 = *((_DWORD *)this + 42);
      v18 = 0LL;
      v19 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
      v20 = v19;
      if ( v19 )
      {
        *((_DWORD *)v19 + 3) = 1;
        *v19 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        v20[2] = v8;
        v20[3] = v8;
        (*(void (__fastcall **)(char *))(*(_QWORD *)v8 + 8LL))(v8);
        v20[4] = v10;
        v22 = v10[7];
        while ( v22 >= 0 )
        {
          if ( (_DWORD)v22 != 0x7FFFFFFF )
          {
            v23 = v22;
            v22 = _InterlockedCompareExchange64(v10 + 7, v22 + 1, v22);
            if ( v23 != v22 )
              continue;
          }
          goto LABEL_26;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v22 + 16), v21);
LABEL_26:
        *v20 = &Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_de7a847248f7e9ff51c83bca1460305a_>::`vftable';
        v18 = v20;
      }
      v25 = SHTaskPoolQueueTask(3LL, 2LL, v17, 0LL, v18, 0LL);
      if ( v18 )
        (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
      v26 = v10[7];
      while ( v26 >= 0 )
      {
        if ( (_DWORD)v26 == 0x7FFFFFFF )
          goto LABEL_34;
        v27 = v26 - 1;
        v28 = v26;
        v26 = _InterlockedCompareExchange64(v10 + 7, v26 - 1, v26);
        if ( v28 == v26 )
          goto LABEL_33;
      }
      v27 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v26 + 16), v24);
LABEL_33:
      if ( !v27 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*v10 + 56LL))(v10, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
LABEL_34:
      (*(void (__fastcall **)(char *))(*(_QWORD *)v8 + 16LL))(v8);
      if ( v25 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4A,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\ShellObjectHelpers.h",
          (const char *)(unsigned int)v25,
          v68);
      (*(void (__fastcall **)(char *))(*(_QWORD *)v8 + 16LL))(v8);
      v76 = 0LL;
      v30 = v10[7];
      while ( v30 >= 0 )
      {
        if ( (_DWORD)v30 == 0x7FFFFFFF )
          goto LABEL_41;
        v31 = v30 - 1;
        v32 = v30;
        v30 = _InterlockedCompareExchange64(v10 + 7, v30 - 1, v30);
        if ( v32 == v30 )
          goto LABEL_40;
      }
      v31 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v30 + 16), v29);
LABEL_40:
      if ( !v31 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*v10 + 56LL))(v10, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
LABEL_41:
      v7 = v75;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x40,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\ShellObjectHelpers.h",
        (const char *)0x8007000ELL,
        v67);
      Microsoft::WRL::ComPtr<UwpViewHandledEventArgs>::~ComPtr<UwpViewHandledEventArgs>(&v76);
    }
    v69 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v69);
    v69 = 0LL;
    v73 = 0LL;
    v84 = 0LL;
    v33 = (**v7)(v7, &GUID_a6087428_3be3_4d73_b308_7c04a540bf1a, &v84);
    if ( v33 >= 0 )
      v33 = (*(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v84 + 24LL))(
              v84,
              &SID_ImmersiveApplicationListeners,
              &GUID_747669b9_e53c_46ce_b0d5_6629c216fafc,
              &v73);
    v34 = v84;
    if ( v84 )
    {
      v84 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
    }
    if ( v33 >= 0 )
      v33 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v73 + 24LL))(v73, &v69);
    v35 = v73;
    if ( v73 )
    {
      v73 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    }
    if ( v33 >= 0 && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v69 + 24LL))(v69, &v74) >= 0 && v74 )
    {
      v36 = a3;
      v37 = 0LL;
      if ( a3 )
      {
        if ( a3 < 4 )
          goto LABEL_58;
        v38 = 0LL;
        v39 = 0LL;
        v40 = (int *)((char *)a2 + 32);
        do
        {
          *(double *)v41.m128i_i64 = dbl_1807A9820[4 * *(v40 - 8)];
          *(double *)&v41.m128i_i64[1] = dbl_1807A9820[4 * *(v40 - 4)];
          v38 = _mm_add_epi64(v38, v41);
          *(double *)v41.m128i_i64 = dbl_1807A9820[4 * *v40];
          *(double *)&v41.m128i_i64[1] = dbl_1807A9820[4 * v40[4]];
          v42 = _mm_add_epi64(v41, v39);
          v39 = v42;
          v37 += 4LL;
          v40 += 16;
        }
        while ( v37 < (a3 & 0xFFFFFFFFFFFFFFFCuLL) );
        v43 = _mm_add_epi64(v38, v42);
        v36 = a3 + _mm_add_epi64(v43, _mm_srli_si128(v43, 8)).m128i_u64[0];
        if ( v37 < a3 )
        {
LABEL_58:
          v44 = (int *)((char *)a2 + 16 * v37);
          v45 = a3 - v37;
          do
          {
            v36 += *((_QWORD *)&unk_1807A9810 + 4 * *v44 + 2);
            v44 += 4;
            --v45;
          }
          while ( v45 );
        }
      }
      v46 = 16 * v36;
      if ( !is_mul_ok(v36, 0x10uLL) )
        v46 = -1LL;
      v47 = operator new[](v46, (const struct std::nothrow_t *)&std::nothrow);
      v48 = v47;
      if ( v47 )
      {
        for ( i = v47; a3; --a3 )
        {
          *(_OWORD *)i = *(_OWORD *)a2;
          if ( *(_DWORD *)i != 6 && *(_DWORD *)i != 12 && !*((_QWORD *)i + 1) )
          {
            v50 = 0LL;
            if ( *((_QWORD *)this + 58) )
              v50 = (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 57) + 32LL))(**((_QWORD **)this + 57));
            *((_QWORD *)i + 1) = v50;
          }
          v51 = 32LL * *(int *)a2;
          if ( *(_QWORD *)((char *)&unk_1807A9810 + v51 + 8) )
          {
            v62 = *(unsigned __int8 (__fastcall **)(CImmersiveApp *))((char *)&unk_1807A9810 + v51 + 24);
            if ( !v62 || v62(this) )
            {
              v63 = *((_QWORD *)i + 1);
              for ( j = 0LL; j < *(_QWORD *)((char *)&unk_1807A9810 + v51 + 16); ++j )
              {
                i += 16;
                *(_DWORD *)i = *(_DWORD *)(*(_QWORD *)((char *)&unk_1807A9810 + v51 + 8) + 4 * j);
                *((_QWORD *)i + 1) = v63;
              }
            }
          }
          i += 16;
          a2 = (const struct APP_CHANGE_INFO *const)((char *)a2 + 16);
        }
        v52 = (i - v48) >> 4;
        v53 = v69;
        v77 = v48;
        v78 = v52;
        v79 = (__int64)this + 88;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v79);
        v80 = v53;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v80);
        v54 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
        v55 = v54;
        if ( v54 )
        {
          v54[1] = v48;
          v54[2] = v52;
          v79 = 0LL;
          v54[3] = (char *)this + 88;
          v80 = 0LL;
          v54[4] = v53;
          v48 = 0LL;
          v77 = 0LL;
          v78 = 0LL;
          *v54 = &CRefCountedObject<APP_NOTIFICATION_DATA>::`vftable';
          *((_DWORD *)v54 + 10) = 0;
        }
        else
        {
          v55 = 0LL;
        }
        if ( v55 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v55 + 8LL))(v55);
          v56 = *((_BYTE *)this + 751);
          v57 = v55;
          (*(void (__fastcall **)(_QWORD *))(*v55 + 8LL))(v55);
          Ptr = (unsigned int)CApplicationManagerUtility::g_pIAMGlobals[13].Ptr;
          v59 = 0LL;
          v60 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
          v61 = v60;
          if ( v60 )
          {
            v60[3] = 1;
            *(_QWORD *)v60 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
            if ( Microsoft::WRL::Details::ModuleBase::module_ )
              (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                   + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
            *((_QWORD *)v61 + 2) = 0LL;
            if ( v61 + 4 != (_DWORD *)&v81 )
            {
              *((_QWORD *)v61 + 2) = v55;
              v57 = 0LL;
            }
            *((_BYTE *)v61 + 24) = v56;
            *(_QWORD *)v61 = off_18061D988;
            v59 = v61;
          }
          SHTaskPoolQueueTask(3LL, 2LL, Ptr, 0LL, v59, 0LL);
          if ( v59 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v59 + 16LL))(v59);
          if ( v57 )
            (*(void (__fastcall **)(_QWORD *))(*v57 + 16LL))(v57);
        }
        if ( v55 )
          (*(void (__fastcall **)(_QWORD *))(*v55 + 16LL))(v55);
        operator delete[](v48);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v80);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v79);
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v69);
  }
LABEL_89:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v75);
}
