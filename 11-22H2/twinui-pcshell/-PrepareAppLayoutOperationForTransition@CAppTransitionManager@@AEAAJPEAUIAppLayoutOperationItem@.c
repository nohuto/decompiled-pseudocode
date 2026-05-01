/*
 * XREFs of ?PrepareAppLayoutOperationForTransition@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperationItem@@PEAUIAppLayout@@1@Z @ 0x180597CCC
 * Callers:
 *     ?PrepareForAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x180597E80 (-PrepareForAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiv.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009D028 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1802D73A4 (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 */

__int64 __fastcall CAppTransitionManager::PrepareAppLayoutOperationForTransition(
        CAppTransitionManager *this,
        struct IAppLayoutOperationItem *a2,
        struct IAppLayout *a3,
        struct IAppLayout *a4)
{
  __int64 v4; // rax
  int (__fastcall *v9)(struct IAppLayoutOperationItem *, GUID *, __int64 *); // rdi
  __int64 *v10; // rbx
  __int64 v11; // rax
  int v12; // esi
  void *v13; // r8
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v18; // [rsp+20h] [rbp-10h] BYREF
  int v19; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v21; // [rsp+68h] [rbp+38h] BYREF

  v4 = *(_QWORD *)a2;
  v21 = 0LL;
  v9 = *(int (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, __int64 *))(v4 + 32);
  v10 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v21, &v18);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v10);
  if ( v9(a2, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v10) < 0 )
    goto LABEL_14;
  v18 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v18, &v21);
  v11 = *(_QWORD *)a2;
  v12 = 1;
  v19 = 1;
  if ( (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(v11 + 96))(a2) == 2
    && (*(unsigned int (__fastcall **)(struct IAppLayout *, __int64))(*(_QWORD *)a3 + 80LL))(a3, 1LL) == 1 )
  {
    if ( (*(unsigned int (__fastcall **)(struct IAppLayout *, __int64))(*(_QWORD *)a4 + 80LL))(a4, 1LL) )
      v12 = 3;
    v19 = v12;
  }
  v14 = 0;
  v15 = *((_QWORD *)this + 30);
  if ( v15 != *((_QWORD *)this + 32)
    || (v14 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
                (__int64)this + 232,
                v15 + 1,
                v13),
        v14 >= 0) )
  {
    ++*((_QWORD *)this + 30);
    v16 = 16LL * *((_QWORD *)this + 30) + *((_QWORD *)this + 29) - 16LL;
    if ( !v16 )
    {
LABEL_13:
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v18);
LABEL_14:
      v14 = 0;
      goto LABEL_15;
    }
    *(_QWORD *)v16 = v18;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v16);
    *(_DWORD *)(v16 + 8) = v12;
  }
  if ( v14 >= 0 )
    goto LABEL_13;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCF,
    (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
    (const char *)(unsigned int)v14);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v18);
LABEL_15:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v21);
  return (unsigned int)v14;
}
