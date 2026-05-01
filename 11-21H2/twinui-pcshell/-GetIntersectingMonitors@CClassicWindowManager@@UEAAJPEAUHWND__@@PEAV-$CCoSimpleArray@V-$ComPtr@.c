/*
 * XREFs of ?GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@@Z @ 0x180103B30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180036AA8 (--4-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_::operator() @ 0x180104DE8 (_lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_--operator().c)
 *     ?GetRootOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClassicWindow@@@Z @ 0x180104F18 (-GetRootOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClass.c)
 *     CClassicWindowManager::ForEachWindow__lambda_46f7271c5c6893b3d3a15b7b7af716b5___ @ 0x1801050D4 (CClassicWindowManager--ForEachWindow__lambda_46f7271c5c6893b3d3a15b7b7af716b5___.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180134260 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureMonitorManager@CClassicWindowManager@@AEAAJXZ @ 0x1802F0FF8 (-_EnsureMonitorManager@CClassicWindowManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall CClassicWindowManager::GetIntersectingMonitors(__int64 a1, __int64 a2, LPVOID *a3)
{
  __int64 v4; // r13
  CClassicWindowManager *v6; // r14
  struct _RTL_CRITICAL_SECTION *v7; // r12
  __int64 v8; // rdi
  __int64 v9; // r13
  __int64 v10; // rbx
  int v11; // ebx
  __int64 v12; // rcx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // rcx
  __int64 *v14; // rcx
  char *v15; // rax
  char v16; // al
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 (__fastcall *v20)(__int64, __int64, GUID *, GUID *, LPVOID **); // rbx
  LPVOID *v21; // rbx
  char *v22; // rcx
  __int64 *v23; // rdx
  unsigned __int64 v24; // rbx
  __int64 v25; // [rsp+30h] [rbp-49h] BYREF
  __int64 v26[3]; // [rsp+38h] [rbp-41h] BYREF
  int v27; // [rsp+50h] [rbp-29h]
  _QWORD v28[4]; // [rsp+60h] [rbp-19h] BYREF
  LPVOID pv; // [rsp+80h] [rbp+7h] BYREF
  char *v30; // [rsp+88h] [rbp+Fh]
  void *v31; // [rsp+90h] [rbp+17h]
  char *v32; // [rsp+98h] [rbp+1Fh]
  __int64 v33; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v34; // [rsp+E8h] [rbp+6Fh] BYREF
  LPVOID *p_pv; // [rsp+F8h] [rbp+7Fh] BYREF

  v34 = a2;
  v4 = a2;
  v6 = (CClassicWindowManager *)(a1 - 72);
  v7 = (struct _RTL_CRITICAL_SECTION *)((a1 + 64) & -(__int64)(a1 != 72));
  v26[2] = (__int64)v7;
  v27 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v7, 1LL);
  v33 = 0LL;
  v8 = 0LL;
  if ( v4 )
  {
    v33 = 0LL;
    v26[1] = 0LL;
    v9 = 0LL;
    if ( *(_QWORD *)(a1 + 128) )
    {
      while ( 1 )
      {
        v26[0] = 0LL;
        v10 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v8);
        v25 = v10;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        p_pv = 0LL;
        if ( (**(int (__fastcall ***)(__int64, GUID *, LPVOID **))v10)(
               v10,
               &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
               &p_pv) >= 0
          && (*((unsigned __int8 (__fastcall **)(LPVOID *, __int64))*p_pv + 24))(p_pv, v34) )
        {
          v11 = 0;
        }
        else
        {
          v11 = -1;
        }
        v12 = (__int64)p_pv;
        if ( p_pv )
        {
          p_pv = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v26);
        if ( !v11 )
          break;
        if ( (unsigned __int64)++v8 >= *(_QWORD *)(a1 + 128) )
          goto LABEL_33;
      }
      v9 = v8;
      LODWORD(v8) = 0;
    }
    else
    {
LABEL_33:
      LODWORD(v8) = -2147319765;
    }
    if ( (int)v8 >= 0 )
    {
      v13 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(a1 + 120) + 8 * v9);
      LODWORD(v8) = (**v13)(v13, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v33);
    }
    v4 = v34;
  }
  else
  {
    Microsoft::WRL::ComPtr<IAppLayout>::operator=(&v33, *(__int64 **)(a1 + 120));
  }
  v14 = 0LL;
  pv = 0LL;
  v15 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( (int)v8 >= 0 )
  {
    p_pv = &pv;
    CClassicWindowManager::GetRootOwner(0LL, &v34, v33);
    v16 = lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_::operator()(&p_pv, &v34);
    v17 = v34;
    if ( v16 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v34 + 128LL))(v34) )
    {
      v34 = v17;
      v26[0] = (__int64)&p_pv;
      v28[0] = v6;
      v28[1] = &v34;
      v28[2] = v26;
      CClassicWindowManager::ForEachWindow__lambda_46f7271c5c6893b3d3a15b7b7af716b5___(v6, v28);
    }
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    goto LABEL_21;
  }
  if ( (_DWORD)v8 == -2147319765 )
  {
    LODWORD(v8) = CClassicWindowManager::_EnsureMonitorManager(v6);
    if ( (int)v8 < 0 )
    {
LABEL_44:
      v15 = v30;
      v14 = (__int64 *)pv;
      goto LABEL_22;
    }
    p_pv = 0LL;
    v8 = *(_QWORD *)(a1 + 200);
    v20 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, GUID *, LPVOID **))(*(_QWORD *)v8 + 88LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&p_pv);
    LODWORD(v8) = v20(
                    v8,
                    v4,
                    &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                    &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                    &p_pv);
    if ( (int)v8 < 0 )
    {
LABEL_28:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&p_pv);
      if ( (int)v8 >= 0 )
      {
LABEL_21:
        *a3 = pv;
        a3[2] = v31;
        a3[1] = v30;
        a3[3] = v32;
        v14 = 0LL;
        pv = 0LL;
        v31 = 0LL;
        v15 = 0LL;
        v30 = 0LL;
        v32 = 0LL;
        goto LABEL_22;
      }
      goto LABEL_44;
    }
    v21 = p_pv;
    v34 = (__int64)p_pv;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v34);
    v22 = v30;
    if ( v30 == v32 )
    {
      if ( (int)CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveMonitor>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>::_EnsureCapacity(
                  &pv,
                  v30 + 1) < 0 )
      {
LABEL_43:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v34);
        goto LABEL_28;
      }
      v22 = v30;
    }
    v30 = v22 + 1;
    v23 = (__int64 *)((char *)pv + 8 * (_QWORD)(v22 + 1) - 8);
    if ( v23 )
    {
      *v23 = 0LL;
      if ( v23 != &v34 )
      {
        *v23 = (__int64)v21;
        v34 = 0LL;
      }
    }
    goto LABEL_43;
  }
LABEL_22:
  if ( v14 )
  {
    v24 = 0LL;
    if ( v15 )
    {
      do
      {
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14[v24++]);
        v14 = (__int64 *)pv;
      }
      while ( v24 < (unsigned __int64)v30 );
    }
    CoTaskMemFree(v14);
    pv = 0LL;
  }
  v30 = 0LL;
  v32 = 0LL;
  v18 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  if ( v27 >= 0 )
    LeaveCriticalSection(v7);
  return (unsigned int)v8;
}
