/*
 * XREFs of ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x1800E97CC
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e___::Invoke @ 0x18017CC20 (CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e___--Invoke.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18007CB00 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18007D460 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V-$ComPtr@U.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_5f803f865b4b07caa2d72f9fc7ffab60___ @ 0x1800E9B38 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_5f803f865b4b07caa2d72f9fc7ffab60___.c)
 *     ?ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z @ 0x1800EAB10 (-ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ @ 0x1801383A4 (-InternalRelease@-$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications(
        ApplicationViewManagerVisibilityDebouncer *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rax
  ULONGLONG TickCount64; // r14
  __int64 v6; // rbx
  struct IApplicationView *v7; // r13
  volatile int *v8; // rdx
  unsigned int v9; // r12d
  __int64 v10; // r15
  __int64 v11; // rbx
  volatile int *v12; // rdx
  Microsoft::WRL::Details *v13; // rcx
  __int64 v14; // rcx
  int v15; // ebx
  struct IObjectArray *v17; // rbx
  int v18; // eax
  unsigned int v19; // ecx
  struct IObjectArray **v20; // rax
  struct IObjectArray *v21; // rsi
  HRESULT (__stdcall *GetAt)(IObjectArray *, UINT, const IID *const, void **); // r14
  int v23; // eax
  ApplicationViewManagerVisibilityDebouncer *v24; // rbx
  struct IObjectArray *v25; // [rsp+30h] [rbp-39h] BYREF
  ApplicationViewManagerVisibilityDebouncer *v26; // [rsp+38h] [rbp-31h] BYREF
  unsigned int v27; // [rsp+40h] [rbp-29h] BYREF
  ApplicationViewManagerVisibilityDebouncer *v28; // [rsp+48h] [rbp-21h] BYREF
  struct IObjectArray **v29; // [rsp+50h] [rbp-19h]
  unsigned int v30; // [rsp+58h] [rbp-11h] BYREF
  __int64 v31; // [rsp+60h] [rbp-9h]
  struct IObjectArray **v32; // [rsp+68h] [rbp-1h]
  struct IApplicationView *v33; // [rsp+70h] [rbp+7h] BYREF
  unsigned int v34; // [rsp+78h] [rbp+Fh]
  __int64 v35[8]; // [rsp+80h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  struct IObjectArray *v37; // [rsp+D0h] [rbp+67h] BYREF
  ApplicationViewManagerVisibilityDebouncer *v38; // [rsp+D8h] [rbp+6Fh] BYREF

  v37 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v37);
  AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)this + 15, &v37);
  while ( 1 )
  {
    if ( !*((_QWORD *)this + 10) )
      goto LABEL_21;
    TickCount64 = GetTickCount64();
    v6 = *((_QWORD *)this + 9);
    v7 = *(struct IApplicationView **)v6;
    v33 = *(struct IApplicationView **)v6;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v33);
    v9 = *(_DWORD *)(v6 + 8);
    v34 = v9;
    v10 = *(_QWORD *)(v6 + 16);
    v35[0] = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v11 = *(_QWORD *)(v6 + 24);
    v35[1] = v11;
    if ( v9 == 1 )
      break;
LABEL_24:
    v17 = v37;
    v25 = v37;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v25);
    LODWORD(v26) = 0;
    v18 = ((__int64 (__fastcall *)(struct IObjectArray *, ApplicationViewManagerVisibilityDebouncer **))v17->lpVtbl->GetCount)(
            v17,
            &v26);
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x10,
        (__int64)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
        (const char *)(unsigned int)v18);
    v27 = 0;
    v28 = 0LL;
    v29 = &v25;
    details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::GetCurrentObject(&v27);
    v30 = (unsigned int)v26;
    v31 = 0LL;
    v32 = &v25;
    details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::GetCurrentObject(&v30);
LABEL_27:
    v19 = v27;
    v24 = v28;
    v20 = v29;
    while ( v19 != v30 || v20 != v32 )
    {
      v38 = v24;
      if ( v24 )
        (*(void (__fastcall **)(ApplicationViewManagerVisibilityDebouncer *))(*(_QWORD *)v24 + 8LL))(v24);
      (*(void (__fastcall **)(ApplicationViewManagerVisibilityDebouncer *, struct IApplicationView *, _QWORD, __int64))(*(_QWORD *)v24 + 24LL))(
        v24,
        v7,
        v9,
        v10);
      (*(void (__fastcall **)(ApplicationViewManagerVisibilityDebouncer *))(*(_QWORD *)v24 + 16LL))(v24);
      v19 = ++v27;
      v24 = v28;
      if ( v28 )
      {
        v28 = 0LL;
        (*(void (__fastcall **)(ApplicationViewManagerVisibilityDebouncer *))(*(_QWORD *)v24 + 16LL))(v24);
        v24 = v28;
        v19 = v27;
      }
      while ( 1 )
      {
        v20 = v29;
        if ( v19 >= *((_DWORD *)v29 + 2) )
          break;
        v21 = *v29;
        GetAt = (*v29)->lpVtbl->GetAt;
        if ( v24 )
        {
          v28 = 0LL;
          (*(void (__fastcall **)(ApplicationViewManagerVisibilityDebouncer *))(*(_QWORD *)v24 + 16LL))(v24);
          v19 = v27;
        }
        v23 = ((__int64 (__fastcall *)(struct IObjectArray *, _QWORD, GUID *, ApplicationViewManagerVisibilityDebouncer **))GetAt)(
                v21,
                v19,
                &GUID_727f9e97_76ee_497b_a942_b6371328485c,
                &v28);
        if ( v23 >= 0 )
          goto LABEL_27;
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x35,
          (__int64)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
          (const char *)(unsigned int)v23);
        v19 = ++v27;
        v24 = v28;
      }
    }
    v2 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
      v24 = v28;
    }
    if ( v24 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(ApplicationViewManagerVisibilityDebouncer *))(*(_QWORD *)v24 + 16LL))(v24);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
    if ( *((_QWORD *)this + 10) )
    {
      v3 = *((_QWORD *)this + 9);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(v3 + 16));
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v3);
      v4 = *((_QWORD *)this + 10);
      if ( v4 != 1 )
      {
        memmove_0(*((void **)this + 9), (const void *)(*((_QWORD *)this + 9) + 32LL), 32 * (v4 - 1));
        v4 = *((_QWORD *)this + 10);
      }
      *((_QWORD *)this + 10) = v4 - 1;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v35);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v33);
  }
  if ( TickCount64 >= v11 + 50 )
  {
    ApplicationViewManagerVisibilityDebouncer::ClearCachedAppView(this, v7);
    goto LABEL_24;
  }
  if ( *((_QWORD *)this + 22) )
    goto LABEL_20;
  v38 = this;
  Microsoft::WRL::Details::SafeUnknownIncrementReference(
    (ApplicationViewManagerVisibilityDebouncer *)((char *)this + 68),
    v8);
  v25 = (struct IObjectArray *)this;
  v26 = this;
  Microsoft::WRL::Details::SafeUnknownIncrementReference(v13, v12);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 22);
  v15 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_5f803f865b4b07caa2d72f9fc7ffab60___(
          v14,
          (unsigned int)(v11 - TickCount64 + 50),
          (char *)this + 176,
          &v25);
  Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(&v26);
  if ( v15 >= 0 )
  {
    Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(&v38);
LABEL_20:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v35);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v33);
LABEL_21:
    v15 = 0;
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x128,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
    (const char *)(unsigned int)v15);
  Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(&v38);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v35);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v33);
LABEL_22:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v37);
  return (unsigned int)v15;
}
