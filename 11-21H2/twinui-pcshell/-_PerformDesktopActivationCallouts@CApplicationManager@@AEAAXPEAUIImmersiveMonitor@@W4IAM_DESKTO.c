/*
 * XREFs of ?_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x180058634
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_d2a883147a4aaef7223296bf15465975___::operator() @ 0x180057E10 (CDelayIAMOperations--CDelayedOperation__lambda_d2a883147a4aaef7223296bf15465975___--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x18005731C (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 *     ?_GetMonitorObjectArray@CApplicationManager@@AEAAJPEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@PEAPEAUIObjectArray@@PEA_N@Z @ 0x180057474 (-_GetMonitorObjectArray@CApplicationManager@@AEAAJPEAV-$CCoSimpleArray@V-$ComPtr@UIImmersiveMoni.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x18005897C (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     ??$FindEx@VCImmersiveMonitorFinder@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveMonitorFinder@@AEBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800591E8 (--$FindEx@VCImmersiveMonitorFinder@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveMonitor@@@WRL@Mic.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180134260 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CApplicationManager::_PerformDesktopActivationCallouts(
        CApplicationManager *a1,
        struct IObjectArray *a2,
        int a3)
{
  char v3; // bl
  struct IImmersiveMonitor *v4; // r12
  int v6; // r15d
  __int64 *v7; // r14
  __int64 v8; // rsi
  int v9; // eax
  struct ISyncIAMEventHandler **v10; // rax
  int SingleMonitorObjectArray; // eax
  __int64 *v12; // rbx
  unsigned int v13; // r12d
  __int64 v14; // rdi
  int (__fastcall *v15)(__int64, _QWORD, __int64); // rbx
  __int64 AddressOf; // rax
  __int64 v17; // rdx
  char v18; // bl
  __int64 v19; // rbx
  int v20; // eax
  __int64 *v21; // rax
  __int64 v22; // [rsp+40h] [rbp-40h] BYREF
  __int64 v23; // [rsp+48h] [rbp-38h] BYREF
  __int64 v24; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v25[8]; // [rsp+58h] [rbp-28h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-20h] BYREF
  __int64 v27; // [rsp+68h] [rbp-18h]
  __int64 v28; // [rsp+70h] [rbp-10h]
  __int64 v29; // [rsp+78h] [rbp-8h]
  struct IObjectArray *v30; // [rsp+C8h] [rbp+48h] BYREF
  int v31; // [rsp+D0h] [rbp+50h] BYREF
  struct ISyncIAMEventHandler *v32; // [rsp+D8h] [rbp+58h] BYREF

  v31 = a3;
  v30 = a2;
  v3 = a3;
  v4 = (struct IImmersiveMonitor *)a2;
  v6 = 0;
  LODWORD(v22) = 0;
  v7 = 0LL;
  pv = 0LL;
  v8 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  if ( !a2 )
    goto LABEL_41;
  v32 = (struct ISyncIAMEventHandler *)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v32);
  v9 = CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveMonitor>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>::_EnsureCapacity(
         &pv,
         1LL);
  v7 = (__int64 *)pv;
  v8 = v27;
  if ( v9 >= 0 )
  {
    v8 = v27 + 1;
    v27 = v8;
    v10 = (struct ISyncIAMEventHandler **)((char *)pv + 8 * v8 - 8);
    if ( v10 )
    {
      *v10 = 0LL;
      if ( v10 != &v32 )
      {
        *v10 = v4;
        v32 = 0LL;
      }
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v32);
  if ( (v3 & 0x12) != 0 )
  {
LABEL_41:
    if ( (*(int (__fastcall **)(_QWORD, struct ISyncIAMEventHandler **))(**((_QWORD **)a1 + 70) + 32LL))(
           *((_QWORD *)a1 + 70),
           &v32) >= 0 )
    {
      LODWORD(v22) = 0;
      if ( (_DWORD)v32 )
      {
        v13 = 0;
        do
        {
          v23 = 0LL;
          v14 = *((_QWORD *)a1 + 70);
          v15 = *(int (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v14 + 40LL);
          AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v23);
          if ( v15(v14, v13, AddressOf) < 0
            || (v24 = v23,
                Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v24),
                v6 |= 1u,
                LODWORD(v22) = v6,
                v18 = 1,
                (unsigned int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveMonitor>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>::FindEx<CImmersiveMonitorFinder>(
                                &pv,
                                v17,
                                &v24,
                                v25) != -2147319765) )
          {
            v18 = 0;
          }
          if ( (v6 & 1) != 0 )
          {
            v6 &= ~1u;
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
          }
          if ( v18 )
          {
            v19 = v23;
            v22 = v23;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v22);
            if ( v8 != v29
              || (v20 = CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveMonitor>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>::_EnsureCapacity(
                          &pv,
                          v8 + 1),
                  v8 = v27,
                  v7 = (__int64 *)pv,
                  v20 >= 0) )
            {
              v27 = ++v8;
              v21 = &v7[v8 - 1];
              if ( v21 )
              {
                *v21 = 0LL;
                if ( v21 != &v22 )
                {
                  *v21 = v19;
                  v22 = 0LL;
                }
              }
            }
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
          }
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
          ++v13;
        }
        while ( v13 < (unsigned int)v32 );
        v4 = (struct IImmersiveMonitor *)v30;
        v3 = v31;
      }
    }
  }
  if ( (v3 & 1) != 0 )
  {
    v32 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v32);
    if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(a1, &v32) >= 0 )
    {
      v30 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v30);
      if ( v4 )
        SingleMonitorObjectArray = CApplicationManager::_GetSingleMonitorObjectArray(a1, v4, &v30);
      else
        SingleMonitorObjectArray = CApplicationManager::_GetMonitorObjectArray(a1, &pv, &v30, &v31);
      if ( SingleMonitorObjectArray >= 0 )
      {
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, unsigned __int64, _QWORD, int, int, int))(*(_QWORD *)v32 + 24LL))(
          v32,
          v30,
          ((unsigned __int64)a1 + 248) & -(__int64)(a1 != 0LL),
          0LL,
          1,
          (v3 & 8) != 0 ? 4 : 1,
          0xFFFF);
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v30);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v32);
  }
  if ( v7 )
  {
    if ( v8 )
    {
      v12 = v7;
      do
      {
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v12++);
        --v8;
      }
      while ( v8 );
    }
    CoTaskMemFree(v7);
  }
}
