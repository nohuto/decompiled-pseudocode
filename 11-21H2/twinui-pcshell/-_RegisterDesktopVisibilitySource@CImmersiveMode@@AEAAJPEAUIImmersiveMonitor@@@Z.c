/*
 * XREFs of ?_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1800B6134
 * Callers:
 *     ?DisplaySettingsChange@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180043690 (-DisplaySettingsChange@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_C.c)
 *     ?CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@@Z @ 0x1800B5E00 (-CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyLocalMem@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18003D8DC (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGG.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?s_CreateInstance@CDesktopVisibilityChangeHelper@@SAJPEAUIDesktopVisibilityChangesNotification@@AEBU_GUID@@PEAPEAX@Z @ 0x1800B6510 (-s_CreateInstance@CDesktopVisibilityChangeHelper@@SAJPEAUIDesktopVisibilityChangesNotification@@.c)
 *     ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x1800B7B50 (-_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z.c)
 *     ??0CDesktopVisibilityChangeSource@CImmersiveMode@@QEAA@PEAUIImmersiveMonitor@@K_N0W4IMM_SYSTEM_MODE@@@Z @ 0x1800B8018 (--0CDesktopVisibilityChangeSource@CImmersiveMode@@QEAA@PEAUIImmersiveMonitor@@K_N0W4IMM_SYSTEM_M.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GCDesktopVisibilityChangeSource@CImmersiveMode@@QEAAPEAXI@Z @ 0x18022A5F6 (--_GCDesktopVisibilityChangeSource@CImmersiveMode@@QEAAPEAXI@Z.c)
 *     WPP_SF_ddddd @ 0x1802EF7CC (WPP_SF_ddddd.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CImmersiveMode::_RegisterDesktopVisibilitySource(CImmersiveMode *this, IUnknown *a2)
{
  int v4; // edi
  unsigned __int64 i; // rbx
  void *v6; // rax
  void *v7; // r8
  __int64 v8; // r9
  CImmersiveMode::CDesktopVisibilityChangeSource *v9; // rbx
  __int64 v10; // rdx
  CImmersiveMode::CDesktopVisibilityChangeSource **v11; // rdx
  __int64 v12; // rdx
  __int64 v14; // r8
  void *ppvOut; // [rsp+40h] [rbp-40h] BYREF
  int v16; // [rsp+48h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+4Ch] [rbp-34h] BYREF
  void *v18; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v19[2]; // [rsp+58h] [rbp-28h] BYREF
  _DWORD v20[4]; // [rsp+68h] [rbp-18h] BYREF

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  v4 = IUnknown_QueryService(
         a2,
         (const GUID *const)&SID_PerMonitorDesktopVisibilityService,
         &GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84,
         &ppvOut);
  if ( v4 >= 0 )
  {
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    for ( i = 0LL; i < *((_QWORD *)this + 55); ++i )
    {
      if ( (unsigned int)SHIsSameObject(**(struct IUnknown ***)(*((_QWORD *)this + 54) + 8 * i), a2) )
        v4 = -2147467260;
    }
    ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v4 >= 0 )
    {
      v18 = 0LL;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v18);
      v4 = CDesktopVisibilityChangeHelper::s_CreateInstance(
             (struct IDesktopVisibilityChangesNotification *)(((unsigned __int64)this + 152) & -(__int64)(this != 0LL)),
             (const struct _GUID *)((char *)this + 152),
             &v18);
      if ( v4 >= 0 )
      {
        v4 = (*(__int64 (__fastcall **)(void *, __int64, void *, unsigned int *))(*(_QWORD *)ppvOut + 32LL))(
               ppvOut,
               1LL,
               v18,
               &v17);
        if ( v4 < 0 )
          goto LABEL_32;
        v4 = (*(__int64 (__fastcall **)(void *, _QWORD, int *))(*(_QWORD *)ppvOut + 24LL))(ppvOut, 0LL, &v16);
        if ( v4 < 0 )
          goto LABEL_32;
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        v6 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
        v19[0] = v6;
        if ( v6 )
        {
          LOBYTE(v8) = v16 != 0;
          v9 = (CImmersiveMode::CDesktopVisibilityChangeSource *)CImmersiveMode::CDesktopVisibilityChangeSource::CDesktopVisibilityChangeSource(
                                                                   v6,
                                                                   a2,
                                                                   v17,
                                                                   v8,
                                                                   *((_QWORD *)this + 48),
                                                                   *((_DWORD *)this + 84));
        }
        else
        {
          v9 = 0LL;
        }
        if ( v9 )
        {
          v4 = 0;
          v10 = *((_QWORD *)this + 55);
          if ( v10 != *((_QWORD *)this + 57)
            || (v4 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>,4294967294,CTPolicyLocalMem<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>>::_EnsureCapacity(
                       (__int64)this + 432,
                       v10 + 1,
                       v7),
                v4 >= 0) )
          {
            v11 = (CImmersiveMode::CDesktopVisibilityChangeSource **)(*((_QWORD *)this + 54)
                                                                    + 8 * (*((_QWORD *)this + 55))++);
            if ( v11 )
              *v11 = v9;
          }
        }
        else
        {
          v4 = -2147024882;
        }
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        if ( v4 >= 0 )
        {
          v9 = 0LL;
          v19[1] = 0LL;
          CImmersiveMode::_HandleDesktopVisibilityChange(this, (struct IImmersiveMonitor *)a2, v16 != 0, 1);
          if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0
            && ((int (__fastcall *)(IUnknown *, _DWORD *))a2->lpVtbl[3].QueryInterface)(a2, v20) >= 0
            && ((int (__fastcall *)(IUnknown *, _QWORD *))a2->lpVtbl[1].QueryInterface)(a2, v19) >= 0
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_ddddd(*((_QWORD *)WPP_GLOBAL_Control + 2), v12, v14, v20[0], v20[1], v20[2], v20[3], v19[0]);
          }
        }
        if ( v9 )
          CImmersiveMode::CDesktopVisibilityChangeSource::`scalar deleting destructor'(v9, v12);
        if ( v4 < 0 )
        {
LABEL_32:
          if ( v17 )
            (*(void (__fastcall **)(void *))(*(_QWORD *)ppvOut + 40LL))(ppvOut);
        }
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v18);
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)v4;
}
