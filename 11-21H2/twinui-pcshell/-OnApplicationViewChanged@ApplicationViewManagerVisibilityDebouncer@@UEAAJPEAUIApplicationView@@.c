/*
 * XREFs of ?OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18007C630
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18007CB00 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18007D460 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V-$ComPtr@U.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_5f803f865b4b07caa2d72f9fc7ffab60___ @ 0x1800E9B38 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_5f803f865b4b07caa2d72f9fc7ffab60___.c)
 *     ?ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z @ 0x1800EAB10 (-ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K0@Z @ 0x18012AAF4 (-_EnsureCapacity@-$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisib.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ @ 0x1801383A4 (-InternalRelease@-$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K@Z @ 0x18022B41C (-RemoveAt@-$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDe.c)
 *     ??0ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@AEBU01@@Z @ 0x180310FBC (--0ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@AEBU01@@Z.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::OnApplicationViewChanged(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2,
        int a3,
        struct IUnknown *a4)
{
  RTL_SRWLOCK *v8; // r13
  ULONGLONG TickCount64; // r13
  int v10; // edi
  char *Ptr; // rdx
  struct IUnknown **v12; // rax
  RTL_SRWLOCK *v13; // rdi
  ULONGLONG v14; // rsi
  struct IApplicationView **v15; // rbx
  struct IApplicationView *v16; // r15
  volatile int *v17; // rdx
  unsigned int v18; // r14d
  struct IApplicationView *v19; // r12
  struct IApplicationView *v20; // rbx
  struct IObjectArray *v21; // rbx
  int v22; // eax
  struct IApplicationView *v23; // r13
  unsigned int v24; // ecx
  struct IApplicationView *v25; // rbx
  struct IObjectArray **v26; // rax
  struct IObjectArray *v27; // rsi
  HRESULT (__stdcall *GetAt)(IObjectArray *, UINT, const IID *const, void **); // r15
  int v29; // eax
  __int64 v30; // rcx
  char *v31; // rbx
  char *v32; // rax
  struct IApplicationView *v34; // rbx
  char v35; // bl
  volatile int *v36; // rdx
  Microsoft::WRL::Details *v37; // rcx
  __int64 v38; // rcx
  struct IObjectArray *v39; // rax
  bool v40; // zf
  struct IApplicationView *v41; // rbx
  int v42; // [rsp+20h] [rbp-89h]
  int v43; // [rsp+20h] [rbp-89h]
  unsigned int v44; // [rsp+30h] [rbp-79h] BYREF
  struct IApplicationView *v45; // [rsp+38h] [rbp-71h] BYREF
  struct IObjectArray **v46; // [rsp+40h] [rbp-69h]
  struct IApplicationView *v47; // [rsp+50h] [rbp-59h]
  RTL_SRWLOCK *v48; // [rsp+58h] [rbp-51h] BYREF
  struct IObjectArray *v49; // [rsp+60h] [rbp-49h] BYREF
  int v50; // [rsp+68h] [rbp-41h] BYREF
  struct IUnknown *v51; // [rsp+70h] [rbp-39h] BYREF
  __int64 v52; // [rsp+78h] [rbp-31h]
  _QWORD v53[2]; // [rsp+80h] [rbp-29h] BYREF
  __int128 v54; // [rsp+90h] [rbp-19h] BYREF
  struct IApplicationView *v55; // [rsp+A0h] [rbp-9h] BYREF
  struct IApplicationView *v56; // [rsp+A8h] [rbp-1h]
  __int64 v57; // [rsp+B0h] [rbp+7h]
  RTL_SRWLOCK *v58; // [rsp+B8h] [rbp+Fh] BYREF
  RTL_SRWLOCK *v59; // [rsp+C0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]
  struct IObjectArray *v61; // [rsp+110h] [rbp+67h] BYREF
  char v62; // [rsp+120h] [rbp+77h]

  v8 = a1 + 13;
  v48 = a1 + 13;
  AcquireSRWLockExclusive(a1 + 13);
  v58 = v8;
  if ( a3 )
    goto LABEL_2;
  v56 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v47 = 0LL;
  v34 = 0LL;
  if ( a1[9].Ptr )
  {
    v57 = 0LL;
    while ( 1 )
    {
      v49 = (struct IObjectArray *)ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::ApplicationViewManagerNotification(
                                     (ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)&v51,
                                     (const struct ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)&v54);
      v39 = (struct IObjectArray *)ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::ApplicationViewManagerNotification(
                                     (ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)&v44,
                                     (const struct ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)((char *)a1[8].Ptr + v57));
      v61 = v39;
      if ( LODWORD(v39[1].lpVtbl) != 1
        || (v40 = (unsigned int)SHIsSameObject((struct IUnknown *)v39->lpVtbl, a2) == 0, v39 = v61, v62 = 1, v40) )
      {
        v62 = 0;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v39[2]);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v61);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v49[2]);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v49);
      if ( v62 )
        break;
      v34 = (struct IApplicationView *)((char *)v34 + 1);
      v57 += 32LL;
      if ( v34 >= a1[9].Ptr )
        goto LABEL_49;
    }
    v47 = v34;
    v35 = 1;
  }
  else
  {
LABEL_49:
    v35 = 0;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v55);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v54);
  if ( !v35 )
  {
LABEL_2:
    v51 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v51);
    LODWORD(v52) = a3;
    v53[0] = a4;
    if ( a4 )
      ((void (__fastcall *)(struct IUnknown *))a4->lpVtbl->AddRef)(a4);
    TickCount64 = GetTickCount64();
    v53[1] = TickCount64;
    v10 = 0;
    Ptr = (char *)a1[9].Ptr;
    if ( Ptr != a1[11].Ptr
      || (v10 = CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>::_EnsureCapacity(
                  &a1[8],
                  Ptr + 1),
          v10 >= 0) )
    {
      v12 = (struct IUnknown **)((char *)a1[8].Ptr + 32 * (__int64)a1[9].Ptr++);
      if ( v12 )
      {
        *v12 = 0LL;
        if ( v12 != &v51 )
        {
          *v12 = a2;
          v51 = 0LL;
        }
        *((_DWORD *)v12 + 2) = a3;
        v12[2] = 0LL;
        if ( v12 + 2 != v53 )
        {
          v12[2] = a4;
          v53[0] = 0LL;
        }
        v12[3] = (struct IUnknown *)TickCount64;
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v53);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v51);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEF,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
        (const char *)(unsigned int)v10,
        v42);
      v8 = v48;
      goto LABEL_42;
    }
    v8 = a1 + 13;
  }
  else
  {
    v41 = v47;
    CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>::RemoveAt(
      &a1[8],
      v47);
    if ( !v41 )
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&a1[21]);
  }
  v13 = a1 - 1;
  v61 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v61);
  AgileRegistrationList::GetCallbackArray((AgileRegistrationList *)&a1[14], &v61);
  if ( !a1[9].Ptr )
    goto LABEL_41;
  while ( 1 )
  {
    v14 = GetTickCount64();
    v15 = (struct IApplicationView **)v13[9].Ptr;
    v16 = *v15;
    v47 = v16;
    *(_QWORD *)&v54 = v16;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v54);
    v18 = *((_DWORD *)v15 + 2);
    DWORD2(v54) = v18;
    v19 = v15[2];
    v55 = v19;
    if ( v19 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v19 + 8LL))(v19);
    v20 = v15[3];
    v56 = v20;
    if ( v18 == 1 )
      break;
LABEL_17:
    v21 = v61;
    v49 = v61;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v49);
    v50 = 0;
    v22 = ((__int64 (__fastcall *)(struct IObjectArray *, int *))v21->lpVtbl->GetCount)(v21, &v50);
    if ( v22 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x10,
        (unsigned int)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
        (const char *)(unsigned int)v22,
        v42);
    v44 = 0;
    v45 = 0LL;
    v46 = &v49;
    details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::GetCurrentObject(&v44);
    LODWORD(v51) = v50;
    v52 = 0LL;
    v53[0] = &v49;
    v23 = v47;
LABEL_20:
    v24 = v44;
    v25 = v45;
    v26 = v46;
LABEL_21:
    while ( v24 != (_DWORD)v51 || v26 != (struct IObjectArray **)v53[0] )
    {
      v47 = v25;
      if ( v25 )
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v25 + 8LL))(v25);
      (*(void (__fastcall **)(struct IApplicationView *, struct IApplicationView *, _QWORD, struct IApplicationView *))(*(_QWORD *)v25 + 24LL))(
        v25,
        v23,
        v18,
        v19);
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v25 + 16LL))(v25);
      v24 = ++v44;
      v25 = v45;
      if ( v45 )
      {
        v45 = 0LL;
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v25 + 16LL))(v25);
        v25 = v45;
        v24 = v44;
      }
      v26 = v46;
      if ( v24 < *((_DWORD *)v46 + 2) )
      {
        while ( 1 )
        {
          v27 = *v26;
          GetAt = (*v26)->lpVtbl->GetAt;
          if ( v25 )
          {
            v45 = 0LL;
            (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v25 + 16LL))(v25);
            v24 = v44;
          }
          v29 = ((__int64 (__fastcall *)(struct IObjectArray *, _QWORD, GUID *, struct IApplicationView **))GetAt)(
                  v27,
                  v24,
                  &GUID_727f9e97_76ee_497b_a942_b6371328485c,
                  &v45);
          if ( v29 >= 0 )
            goto LABEL_20;
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x35,
            (unsigned int)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
            (const char *)(unsigned int)v29,
            v42);
          v24 = v44 + 1;
          v44 = v24;
          v26 = v46;
          v25 = v45;
          if ( v24 >= *((_DWORD *)v46 + 2) )
            goto LABEL_21;
        }
      }
    }
    v30 = v52;
    v8 = v48;
    if ( v52 )
    {
      v52 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      v25 = v45;
    }
    if ( v25 )
    {
      v45 = 0LL;
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v25 + 16LL))(v25);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v49);
    if ( v13[10].Ptr )
    {
      v31 = (char *)v13[9].Ptr;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v31 + 16);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v31);
      v32 = (char *)v13[10].Ptr;
      if ( v32 != (char *)1 )
      {
        memmove_0(v13[9].Ptr, (char *)v13[9].Ptr + 32, 32LL * (_QWORD)(v32 - 1));
        v32 = (char *)v13[10].Ptr;
      }
      v13[10].Ptr = v32 - 1;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v55);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v54);
    if ( !v13[10].Ptr )
      goto LABEL_41;
  }
  if ( v14 >= (unsigned __int64)v20 + 50 )
  {
    ApplicationViewManagerVisibilityDebouncer::ClearCachedAppView((ApplicationViewManagerVisibilityDebouncer *)v13, v16);
    goto LABEL_17;
  }
  if ( v13[22].Ptr )
    goto LABEL_47;
  v48 = v13;
  Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)&v13[8].Ptr + 4), v17);
  v58 = v13;
  v59 = v13;
  Microsoft::WRL::Details::SafeUnknownIncrementReference(v37, v36);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13[22]);
  v10 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_5f803f865b4b07caa2d72f9fc7ffab60___(
          v38,
          (unsigned int)((_DWORD)v20 - v14 + 50),
          &v13[22],
          &v58);
  Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(&v59);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x128,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
      (const char *)(unsigned int)v10,
      v42);
    Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(&v48);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v55);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v54);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v61);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF1,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
      (const char *)(unsigned int)v10,
      v43);
  }
  else
  {
    Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(&v48);
LABEL_47:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v55);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v54);
LABEL_41:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v61);
    v10 = 0;
  }
LABEL_42:
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  return (unsigned int)v10;
}
