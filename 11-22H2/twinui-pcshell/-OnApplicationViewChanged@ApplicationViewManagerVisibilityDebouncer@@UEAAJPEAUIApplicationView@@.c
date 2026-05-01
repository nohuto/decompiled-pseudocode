/*
 * XREFs of ?OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800C7B30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x1800C9510 (-ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K0@Z @ 0x1800EE6D4 (-_EnsureCapacity@-$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisib.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CTSimpleFixedArray_ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification_CSimpleArrayStandardCompareHelper_ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification___::FindEx_CLambdaCompareHelper__lambda_ca95877a0acb9673608c45b7c9bea6a2_____ @ 0x1801922AC (CTSimpleFixedArray_ApplicationViewManagerVisibilityDebouncer--ApplicationViewManagerNotification.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K@Z @ 0x1802D1696 (-RemoveAt@-$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDe.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::OnApplicationViewChanged(
        RTL_SRWLOCK *a1,
        __int64 a2,
        int a3,
        __int64 a4)
{
  RTL_SRWLOCK *v7; // rsi
  __int64 v8; // r12
  ULONGLONG TickCount64; // rdx
  int v10; // ebx
  char *Ptr; // rax
  PVOID v12; // rax
  __int64 v13; // rax
  int v14; // eax
  bool v16; // bl
  __int64 v17; // rbx
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-40h]
  _QWORD v21[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+50h] [rbp-10h] BYREF
  ULONGLONG v24; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  __int64 *v26; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+48h] BYREF

  v27 = a2;
  v7 = a1 + 13;
  AcquireSRWLockExclusive(a1 + 13);
  v21[1] = v7;
  if ( !a3 )
  {
    v24 = 0LL;
    v22 = 0LL;
    v23 = 0LL;
    v26 = &v27;
    v16 = (int)CTSimpleFixedArray_ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification_CSimpleArrayStandardCompareHelper_ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification___::FindEx_CLambdaCompareHelper__lambda_ca95877a0acb9673608c45b7c9bea6a2_____(
                 &a1[8],
                 &v26,
                 &v22,
                 v21) >= 0;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v22);
    if ( v16 )
    {
      v17 = v21[0];
      CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>::RemoveAt(
        &a1[8],
        v21[0]);
      if ( !v17 )
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&a1[21]);
      goto LABEL_12;
    }
  }
  v8 = v27;
  *(_QWORD *)&v22 = v27;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
  DWORD2(v22) = a3;
  v23 = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  TickCount64 = GetTickCount64();
  v24 = TickCount64;
  v10 = 0;
  Ptr = (char *)a1[9].Ptr;
  if ( Ptr == a1[11].Ptr )
  {
    v10 = CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>::_EnsureCapacity(
            &a1[8],
            Ptr + 1);
    if ( v10 < 0 )
      goto LABEL_11;
    TickCount64 = v24;
  }
  v12 = a1[9].Ptr;
  a1[9].Ptr = (char *)v12 + 1;
  v13 = (__int64)a1[8].Ptr + 32 * (_QWORD)v12;
  if ( v13 )
  {
    *(_QWORD *)v13 = 0LL;
    if ( (__int128 *)v13 != &v22 )
    {
      *(_QWORD *)v13 = v8;
      *(_QWORD *)&v22 = 0LL;
    }
    *(_DWORD *)(v13 + 8) = a3;
    *(_QWORD *)(v13 + 16) = 0LL;
    if ( (__int64 *)(v13 + 16) != &v23 )
    {
      *(_QWORD *)(v13 + 16) = a4;
      v23 = 0LL;
    }
    *(_QWORD *)(v13 + 24) = TickCount64;
  }
LABEL_11:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v22);
  if ( v10 < 0 )
  {
    v18 = (unsigned int)v10;
    v19 = 239LL;
    goto LABEL_24;
  }
LABEL_12:
  v14 = ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications((ApplicationViewManagerVisibilityDebouncer *)&a1[-1]);
  v10 = v14;
  if ( v14 >= 0 )
    goto LABEL_13;
  v18 = (unsigned int)v14;
  v19 = 241LL;
LABEL_24:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
    (const char *)v18,
    v20);
LABEL_13:
  if ( v7 )
    ReleaseSRWLockExclusive(v7);
  return (unsigned int)v10;
}
