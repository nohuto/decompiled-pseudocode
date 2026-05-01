/*
 * XREFs of ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x1800C9510
 * Callers:
 *     ?OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800C7B30 (-OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@.c)
 *     CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e___::Invoke @ 0x1801AA9D0 (CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e___--Invoke.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x1800C8F50 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z @ 0x1800DEF10 (-ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801484D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ @ 0x180164114 (-InternalRelease@-$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIApplicationViewVisibilityDebouncedNotificationServicePrivate@@UIApplicationViewVisibilityDebouncedNotificationService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewChangeListener@@UIApplicationViewCollection@@UIApplicationViewCollectionTestHook@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180164200 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$C_ea_180164200.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60_____lambda_5f803f865b4b07caa2d72f9fc7ffab60___ @ 0x180170A48 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5f803f865b4b0.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications(
        ApplicationViewManagerVisibilityDebouncer *this)
{
  RTL_SRWLOCK *v1; // rdi
  ULONGLONG TickCount64; // r15
  struct IApplicationView **Ptr; // rbx
  struct IApplicationView *v4; // r14
  volatile int *v5; // rdx
  unsigned int v6; // r12d
  struct IApplicationView *v7; // r13
  struct IApplicationView *v8; // rsi
  struct IObjectArray *v9; // rbx
  int v10; // eax
  unsigned int v11; // ecx
  void *v12; // rbx
  struct IObjectArray **v13; // rdx
  struct IObjectArray *v14; // rsi
  HRESULT (__stdcall *GetAt)(IObjectArray *, UINT, const IID *const, void **); // r14
  int v16; // eax
  void *v17; // rdi
  struct IObjectArray *v18; // rsi
  HRESULT (__stdcall *v19)(IObjectArray *, UINT, const IID *const, void **); // r14
  int v20; // eax
  __int64 v21; // rcx
  char *v22; // rbx
  int v23; // esi
  volatile int *v25; // rdx
  Microsoft::WRL::Details *v26; // rcx
  __int64 *v27; // rax
  __int64 v28; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v30; // rdx
  int v31; // [rsp+20h] [rbp-49h]
  struct IObjectArray *v32; // [rsp+30h] [rbp-39h] BYREF
  RTL_SRWLOCK *v33; // [rsp+38h] [rbp-31h] BYREF
  unsigned int v34; // [rsp+40h] [rbp-29h]
  void *v35; // [rsp+48h] [rbp-21h] BYREF
  struct IObjectArray **v36; // [rsp+50h] [rbp-19h]
  int v37; // [rsp+58h] [rbp-11h]
  __int64 v38; // [rsp+60h] [rbp-9h]
  struct IObjectArray **v39; // [rsp+68h] [rbp-1h]
  struct IApplicationView *v40; // [rsp+70h] [rbp+7h] BYREF
  unsigned int v41; // [rsp+78h] [rbp+Fh]
  _QWORD v42[8]; // [rsp+80h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  ApplicationViewManagerVisibilityDebouncer *v44; // [rsp+D0h] [rbp+67h] BYREF
  struct IObjectArray *v45; // [rsp+D8h] [rbp+6Fh] BYREF
  void *v46; // [rsp+E0h] [rbp+77h] BYREF

  v44 = this;
  v1 = (RTL_SRWLOCK *)this;
  v45 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v45);
  AgileRegistrationList::GetCallbackArray(v1 + 15, &v45);
  if ( !v1[10].Ptr )
    goto LABEL_35;
  while ( 1 )
  {
    TickCount64 = GetTickCount64();
    Ptr = (struct IApplicationView **)v1[9].Ptr;
    v4 = *Ptr;
    v46 = v4;
    v40 = v4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v40);
    v6 = *((_DWORD *)Ptr + 2);
    v41 = v6;
    v7 = Ptr[2];
    v42[0] = v7;
    if ( v7 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v7 + 8LL))(v7);
    v8 = Ptr[3];
    v42[1] = v8;
    if ( v6 != 1 )
      goto LABEL_5;
    if ( TickCount64 < (unsigned __int64)v8 + 50 )
      break;
    ApplicationViewManagerVisibilityDebouncer::ClearCachedAppView((ApplicationViewManagerVisibilityDebouncer *)v1, v4);
LABEL_5:
    v9 = v45;
    v32 = v45;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v32);
    LODWORD(v33) = 0;
    v10 = ((__int64 (__fastcall *)(struct IObjectArray *, RTL_SRWLOCK **))v9->lpVtbl->GetCount)(v9, &v33);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x10,
        (unsigned int)"desktop\\internal\\shell\\inc\\private\\ObjectArrayAdapter.h",
        (const char *)(unsigned int)v10,
        v31);
    v11 = 0;
    v34 = 0;
    v12 = 0LL;
    v35 = 0LL;
    v13 = &v32;
    v36 = &v32;
    if ( (_DWORD)v33 )
    {
      while ( 1 )
      {
        v14 = *v13;
        GetAt = (*v13)->lpVtbl->GetAt;
        if ( v12 )
        {
          v35 = 0LL;
          (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
          v11 = v34;
        }
        v16 = ((__int64 (__fastcall *)(struct IObjectArray *, _QWORD, GUID *, void **))GetAt)(
                v14,
                v11,
                &GUID_727f9e97_76ee_497b_a942_b6371328485c,
                &v35);
        if ( v16 >= 0 )
          break;
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x35,
          (unsigned int)"desktop\\internal\\shell\\inc\\private\\ObjectArrayAdapter.h",
          (const char *)(unsigned int)v16,
          v31);
        v11 = v34 + 1;
        v34 = v11;
        v13 = v36;
        v12 = v35;
        if ( v11 >= *((_DWORD *)v36 + 2) )
          goto LABEL_12;
      }
      v13 = v36;
      v12 = v35;
      v11 = v34;
    }
LABEL_12:
    v37 = (int)v33;
    v38 = 0LL;
    v39 = &v32;
    v17 = v46;
LABEL_13:
    while ( v11 != v37 || v13 != v39 )
    {
      v46 = v12;
      if ( v12 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 8LL))(v12);
      (*(void (__fastcall **)(void *, void *, _QWORD, struct IApplicationView *))(*(_QWORD *)v12 + 24LL))(
        v12,
        v17,
        v6,
        v7);
      if ( v12 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
      v11 = ++v34;
      v12 = v35;
      if ( v35 )
      {
        v35 = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
        v12 = v35;
        v11 = v34;
      }
      v13 = v36;
      if ( v11 < *((_DWORD *)v36 + 2) )
      {
        while ( 1 )
        {
          v18 = *v13;
          v19 = (*v13)->lpVtbl->GetAt;
          if ( v12 )
          {
            v35 = 0LL;
            (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
            v11 = v34;
          }
          v20 = ((__int64 (__fastcall *)(struct IObjectArray *, _QWORD, GUID *, void **))v19)(
                  v18,
                  v11,
                  &GUID_727f9e97_76ee_497b_a942_b6371328485c,
                  &v35);
          if ( v20 >= 0 )
            break;
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x35,
            (unsigned int)"desktop\\internal\\shell\\inc\\private\\ObjectArrayAdapter.h",
            (const char *)(unsigned int)v20,
            v31);
          v11 = v34 + 1;
          v34 = v11;
          v13 = v36;
          v12 = v35;
          if ( v11 >= *((_DWORD *)v36 + 2) )
            goto LABEL_13;
        }
        v13 = v36;
        v12 = v35;
        v11 = v34;
      }
    }
    v21 = v38;
    v1 = (RTL_SRWLOCK *)v44;
    if ( v38 )
    {
      v38 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      v12 = v35;
    }
    if ( v12 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v32);
    if ( v1[10].Ptr )
    {
      v22 = (char *)v1[9].Ptr;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v22 + 16);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v22);
      if ( v1[10].Ptr != (PVOID)1 )
        memmove_0(v1[9].Ptr, (char *)v1[9].Ptr + 32, 32 * ((__int64)v1[10].Ptr - 1));
      --v1[10].Ptr;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v42);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v40);
    if ( !v1[10].Ptr )
      goto LABEL_35;
  }
  if ( v1[22].Ptr )
  {
LABEL_47:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v42);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v40);
LABEL_35:
    v23 = 0;
    goto LABEL_36;
  }
  v46 = v1;
  Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)&v1[8].Ptr + 4), v5);
  v32 = (struct IObjectArray *)v1;
  v33 = v1;
  Microsoft::WRL::Details::SafeUnknownIncrementReference(v26, v25);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v1[22]);
  v27 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60_____lambda_5f803f865b4b07caa2d72f9fc7ffab60___(
                     &v44,
                     &v32);
  v28 = *v27;
  *v27 = 0LL;
  if ( v44 )
  {
    v44 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
  }
  CurrentThreadId = GetCurrentThreadId();
  v23 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v33 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IApplicationViewVisibilityDebouncedNotificationServicePrivate,IApplicationViewVisibilityDebouncedNotificationService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewChangeListener,IApplicationViewCollection,IApplicationViewCollectionTestHook,Microsoft::WRL::FtmBase>::Release(
      v33,
      v30);
  if ( v23 >= 0 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IApplicationViewVisibilityDebouncedNotificationServicePrivate,IApplicationViewVisibilityDebouncedNotificationService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewChangeListener,IApplicationViewCollection,IApplicationViewCollectionTestHook,Microsoft::WRL::FtmBase>::Release(
      v1,
      v30);
    goto LABEL_47;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x128,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
    (const char *)(unsigned int)v23,
    v28);
  Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(&v46);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v42);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v40);
LABEL_36:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v45);
  return (unsigned int)v23;
}
