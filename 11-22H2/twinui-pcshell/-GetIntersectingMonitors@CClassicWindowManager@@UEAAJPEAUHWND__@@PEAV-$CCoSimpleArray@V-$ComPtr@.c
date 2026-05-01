/*
 * XREFs of ?GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@@Z @ 0x18014B9C0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000E158 (--4-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$FindEx@VCClassicWindowFinderByHWND@@@?$CTSimpleFixedArray@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCClassicWindowFinderByHWND@@AEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800C9960 (--$FindEx@VCClassicWindowFinderByHWND@@@-$CTSimpleFixedArray@V-$ComPtr@UIClassicWindow@@@WRL@Mic.c)
 *     ?GetRootOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClassicWindow@@@Z @ 0x18014BD50 (-GetRootOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClass.c)
 *     _lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_::operator() @ 0x18014BE20 (_lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_--operator().c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180163AB4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureMonitorManager@CClassicWindowManager@@AEAAJXZ @ 0x1803A98FC (-_EnsureMonitorManager@CClassicWindowManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CClassicWindowManager::GetIntersectingMonitors(__int64 a1, LPVOID *a2, LPVOID *a3)
{
  LPVOID *v3; // r12
  CClassicWindowManager *v6; // r13
  struct _RTL_CRITICAL_SECTION *v7; // r15
  int v8; // r14d
  __int64 **v9; // rbx
  __int64 *v10; // rcx
  char *v11; // rax
  char v12; // al
  __int64 v13; // r15
  char v14; // bl
  unsigned __int64 i; // r12
  __int64 v16; // rdi
  __int64 v17; // rbx
  char v18; // al
  __int64 v19; // rcx
  unsigned __int64 v21; // rbx
  __int64 *v22; // rax
  __int64 v23; // rdi
  __int64 (__fastcall *v24)(__int64, LPVOID *, GUID *, GUID *, LPVOID **); // rbx
  LPVOID *v25; // rbx
  char *v26; // rcx
  __int64 *v27; // rdx
  __int64 v28; // [rsp+20h] [rbp-49h]
  __int64 v29; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-31h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-29h]
  struct _RTL_CRITICAL_SECTION *v32; // [rsp+48h] [rbp-21h]
  int v33; // [rsp+50h] [rbp-19h]
  LPVOID pv; // [rsp+58h] [rbp-11h] BYREF
  char *v35; // [rsp+60h] [rbp-9h]
  void *v36; // [rsp+68h] [rbp-1h]
  char *v37; // [rsp+70h] [rbp+7h]
  LPVOID *v38; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v39; // [rsp+D8h] [rbp+6Fh] BYREF
  LPVOID *v40; // [rsp+E0h] [rbp+77h]
  LPVOID *p_pv; // [rsp+E8h] [rbp+7Fh] BYREF

  v40 = a3;
  v3 = a3;
  v6 = (CClassicWindowManager *)(a1 - 72);
  v7 = (struct _RTL_CRITICAL_SECTION *)((a1 + 64) & -(__int64)(a1 != 72));
  lpCriticalSection = v7;
  v32 = v7;
  v33 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v7, 1LL);
  v39 = 0LL;
  v8 = 0;
  v9 = (__int64 **)(a1 + 120);
  if ( a2 )
  {
    v39 = 0LL;
    p_pv = a2;
    v38 = 0LL;
    v8 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IClassicWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IClassicWindow>>>::FindEx<CClassicWindowFinderByHWND>(
           (_QWORD *)(a1 + 120),
           &p_pv,
           (__int64 *)&v38,
           &v29,
           v28);
    if ( v8 >= 0 )
      v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))(*v9)[v29])(
             (*v9)[v29],
             &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
             &v39);
  }
  else
  {
    Microsoft::WRL::ComPtr<IAppLayout>::operator=(&v39, *v9);
  }
  v10 = 0LL;
  pv = 0LL;
  v11 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  if ( v8 >= 0 )
  {
    p_pv = &pv;
    CClassicWindowManager::GetRootOwner(0LL, &v38, v39);
    v12 = lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_::operator()(&p_pv, &v38);
    v13 = (__int64)v38;
    if ( v12 && (*((unsigned __int8 (__fastcall **)(LPVOID *))*v38 + 16))(v38) )
    {
      v14 = 1;
      v30 = *((_QWORD *)v6 + 25);
      for ( i = 0LL; i < v30; ++i )
      {
        if ( !v14 )
          break;
        v16 = *(_QWORD *)(*((_QWORD *)v6 + 24) + 8 * i);
        v29 = v16;
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
        v17 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 96LL))(v16);
        v38 = (LPVOID *)v17;
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
        while ( v17 && v16 != v17 )
        {
          if ( v17 == v13 )
          {
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v38);
            v18 = 1;
            goto LABEL_17;
          }
          v22 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 96LL))(v17);
          Microsoft::WRL::ComPtr<IAppLayout>::operator=((__int64 *)&v38, v22);
          v17 = (__int64)v38;
        }
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        v18 = 0;
LABEL_17:
        if ( v18 )
          v14 = lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_::operator()(&p_pv, &v29);
        else
          v14 = 1;
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      v3 = v40;
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v7 = lpCriticalSection;
    goto LABEL_26;
  }
  if ( v8 == -2147319765 )
  {
    v8 = CClassicWindowManager::_EnsureMonitorManager(v6);
    if ( v8 < 0 )
    {
LABEL_54:
      v11 = v35;
      v10 = (__int64 *)pv;
      goto LABEL_27;
    }
    p_pv = 0LL;
    v23 = *(_QWORD *)(a1 + 200);
    v24 = *(__int64 (__fastcall **)(__int64, LPVOID *, GUID *, GUID *, LPVOID **))(*(_QWORD *)v23 + 88LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&p_pv);
    v8 = v24(v23, a2, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &p_pv);
    if ( v8 < 0 )
    {
LABEL_41:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&p_pv);
      if ( v8 >= 0 )
      {
LABEL_26:
        *v3 = pv;
        v3[2] = v36;
        v3[1] = v35;
        v3[3] = v37;
        v10 = 0LL;
        pv = 0LL;
        v36 = 0LL;
        v11 = 0LL;
        v35 = 0LL;
        v37 = 0LL;
        goto LABEL_27;
      }
      goto LABEL_54;
    }
    v25 = p_pv;
    v38 = p_pv;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v38);
    v26 = v35;
    if ( v35 == v37 )
    {
      if ( (int)CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveMonitor>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>::_EnsureCapacity(
                  &pv,
                  v35 + 1) < 0 )
      {
LABEL_53:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v38);
        goto LABEL_41;
      }
      v26 = v35;
    }
    v35 = v26 + 1;
    v27 = (__int64 *)((char *)pv + 8 * (_QWORD)(v26 + 1) - 8);
    if ( v27 )
    {
      *v27 = 0LL;
      if ( v27 != (__int64 *)&v38 )
      {
        *v27 = (__int64)v25;
        v38 = 0LL;
      }
    }
    goto LABEL_53;
  }
LABEL_27:
  if ( v10 )
  {
    v21 = 0LL;
    if ( v11 )
    {
      do
      {
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10[v21++]);
        v10 = (__int64 *)pv;
      }
      while ( v21 < (unsigned __int64)v35 );
    }
    CoTaskMemFree(v10);
    pv = 0LL;
  }
  v35 = 0LL;
  v37 = 0LL;
  v19 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  if ( v33 >= 0 )
    LeaveCriticalSection(v7);
  return (unsigned int)v8;
}
