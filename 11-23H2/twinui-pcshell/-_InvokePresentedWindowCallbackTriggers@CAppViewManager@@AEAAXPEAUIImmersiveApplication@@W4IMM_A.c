/*
 * XREFs of ?_InvokePresentedWindowCallbackTriggers@CAppViewManager@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x18004F4A0
 * Callers:
 *     ?ApplicationChanged@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x18004F470 (-ApplicationChanged@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_G?$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1802D08B8 (--_G-$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     WPP_SF_d @ 0x1803A4C10 (WPP_SF_d.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyLocalMem@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1803B5B18 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGG.c)
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface@@J@Z @ 0x1803BA4DC (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CAppViewManager::_InvokePresentedWindowCallbackTriggers(
        __int64 a1,
        struct IUnknown *a2,
        int a3,
        __int64 a4)
{
  struct IUnknown *v4; // r15
  char *v6; // r12
  __int64 v7; // r14
  RTL_SRWLOCK *v8; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rbx
  int v13; // r15d
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rsi
  int v15; // eax
  __int64 v16; // rcx
  __int64 *v17; // rax
  __int64 v18; // r8
  char *v19; // rbx
  __int64 v20; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-50h] BYREF
  __int64 v22; // [rsp+30h] [rbp-48h] BYREF
  PSRWLOCK v23; // [rsp+38h] [rbp-40h]
  PSRWLOCK v24; // [rsp+40h] [rbp-38h]
  char *v25; // [rsp+48h] [rbp-30h] BYREF
  __int64 v26; // [rsp+50h] [rbp-28h]
  __int64 v27; // [rsp+58h] [rbp-20h]
  __int64 v28; // [rsp+60h] [rbp-18h]
  struct IImmersiveApplicationInternal *v29; // [rsp+C0h] [rbp+48h] BYREF
  struct IUnknown *v30; // [rsp+C8h] [rbp+50h]
  int v31; // [rsp+D0h] [rbp+58h]
  __int64 v32; // [rsp+D8h] [rbp+60h]

  v32 = a4;
  v31 = a3;
  v30 = a2;
  v4 = a2;
  v6 = 0LL;
  v25 = 0LL;
  v7 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v8 = CApplicationManagerUtility::g_pIAMGlobals;
  v23 = CApplicationManagerUtility::g_pIAMGlobals;
  v24 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v9 = *(_QWORD *)(a1 + 96);
  if ( v9 )
  {
    v10 = v9 - 1;
    v21 = v9 - 1;
    v11 = v9;
    while ( 1 )
    {
      v22 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v10);
      v12 = v22;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v22);
      if ( (unsigned int)SHIsSameObject(v4, *(struct IUnknown **)(v12 + 16)) )
        break;
LABEL_36:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      v21 = --v10;
      if ( !--v11 )
      {
        v8 = v23;
        goto LABEL_2;
      }
    }
    v13 = -2147467260;
    LOBYTE(v29) = 0;
    if ( v31 != 6 )
    {
      if ( *(_DWORD *)(v12 + 8) == 1 )
      {
        if ( v31 != 8 )
          goto LABEL_35;
        v20 = 0LL;
        QueryInterface = v30->lpVtbl->QueryInterface;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v20);
        if ( ((int (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
               v30,
               &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
               &v20) >= 0
          && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v20 + 472LL))(v20) )
        {
          LOBYTE(v29) = 1;
          v13 = v32 != *(_QWORD *)(v12 + 32) ? 0x80004004 : 0;
        }
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v20);
        v10 = v21;
        if ( !(_BYTE)v29 )
          goto LABEL_35;
      }
      else
      {
        if ( *(_DWORD *)(v12 + 8) != 2 || v32 != *(_QWORD *)(v12 + 32) )
        {
LABEL_35:
          v4 = v30;
          goto LABEL_36;
        }
        v13 = v31 != 8 ? 0x80004004 : 0;
      }
    }
    v29 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v29);
    if ( (***(int (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **))(v12 + 16))(
           *(_QWORD *)(v12 + 16),
           &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
           &v29) >= 0 )
    {
      CAppViewManager::_s_QueueCallback(v29, (struct CMarshaledInterface *)(v12 + 24), v13);
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          31LL,
          &WPP_29b7c553b8593986cdf6175cf369b117_Traceguids,
          *(unsigned int *)(v12 + 40),
          v20,
          v21,
          v22);
    }
    v21 = v12;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
    v15 = 0;
    if ( v7 == v28 )
    {
      v15 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>,4294967294,CTPolicyLocalMem<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>>::_EnsureCapacity(
              &v25,
              v7 + 1);
      v7 = v26;
      v6 = v25;
    }
    v16 = v12;
    if ( v15 >= 0 )
    {
      v26 = ++v7;
      v17 = (__int64 *)&v6[8 * v7 - 8];
      if ( v17 )
      {
        *v17 = 0LL;
        if ( v17 != (__int64 *)&v21 )
        {
          *v17 = v12;
          v16 = 0LL;
        }
      }
    }
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    if ( v10 < *(_QWORD *)(a1 + 96) )
    {
      Microsoft::WRL::ComPtr<IObservablePropertyCallback>::`scalar deleting destructor'(*(_QWORD *)(a1 + 88) + 8 * v10);
      v18 = *(_QWORD *)(a1 + 96);
      if ( v10 != v18 - 1 )
        memmove_0(
          (void *)(*(_QWORD *)(a1 + 88) + 8 * v10),
          (const void *)(*(_QWORD *)(a1 + 88) + 8 * v10 + 8),
          8 * (v18 - v10) - 8);
      --*(_QWORD *)(a1 + 96);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v29);
    goto LABEL_35;
  }
LABEL_2:
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  if ( v6 )
  {
    if ( v7 )
    {
      v19 = v6;
      do
      {
        Microsoft::WRL::ComPtr<IObservablePropertyCallback>::`scalar deleting destructor'(v19);
        v19 += 8;
        --v7;
      }
      while ( v7 );
    }
    LocalFree(v6);
  }
}
