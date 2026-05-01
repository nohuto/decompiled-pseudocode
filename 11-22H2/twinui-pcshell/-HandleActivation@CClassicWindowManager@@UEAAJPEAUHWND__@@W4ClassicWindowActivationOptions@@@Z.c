/*
 * XREFs of ?HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@W4ClassicWindowActivationOptions@@@Z @ 0x1800D2FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180024560 (--4-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x18004D928 (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 *     ?_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@V?$optional@UHandleActivationHints@CClassicWindowManager@@@std@@@Z @ 0x1800CE750 (-_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@V-$optional@UHandleActivationHints@CC.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAA_NXZ @ 0x1800D1AC0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAA_NX.c)
 *     ?s_CreateInstance@CClassicWindow@@SAJPEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CLASSIC_WINDOW_STATE@@PEAPEAU3@@Z @ 0x1800D5D3C (-s_CreateInstance@CClassicWindow@@SAJPEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CL.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureMonitorManager@CClassicWindowManager@@AEAAJXZ @ 0x1803A98FC (-_EnsureMonitorManager@CClassicWindowManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CClassicWindowManager::HandleActivation(__int64 a1, HWND a2, char a3)
{
  CClassicWindowManager *v6; // r12
  struct _RTL_CRITICAL_SECTION *v7; // r13
  int v8; // ebx
  struct IClassicWindow *v9; // rcx
  struct IClassicWindow *v11; // rdx
  __int64 v12; // rdi
  void (__fastcall *v13)(__int64, HWND, GUID *, GUID *, unsigned __int64 *); // rbx
  __int64 v14[3]; // [rsp+30h] [rbp-50h] BYREF
  int v15; // [rsp+48h] [rbp-38h]
  struct IClassicWindow *v16; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v17; // [rsp+58h] [rbp-28h]
  char v18; // [rsp+60h] [rbp-20h]
  struct IClassicWindow *v19; // [rsp+68h] [rbp-18h] BYREF
  unsigned __int64 v20; // [rsp+70h] [rbp-10h]
  char v21; // [rsp+78h] [rbp-8h]
  struct IClassicWindow *v22; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int64 v23; // [rsp+D8h] [rbp+58h] BYREF

  v6 = (CClassicWindowManager *)(a1 - 72);
  v7 = (struct _RTL_CRITICAL_SECTION *)((a1 + 64) & -(__int64)(a1 != 72));
  v14[2] = (__int64)v7;
  v15 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v7, 1LL);
  v18 = 0;
  v8 = 0;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl) )
  {
    v22 = 0LL;
    if ( (a3 & 1) != 0
      && (GetShellWindow() != a2
       || !(*(unsigned __int8 (__fastcall **)(_QWORD, HWND))(***(_QWORD ***)(a1 + 120) + 192LL))(
             **(_QWORD **)(a1 + 120),
             a2)) )
    {
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v22);
      v8 = CClassicWindow::s_CreateInstance(a2, 0LL, 0LL, 0LL, &v22);
      if ( v8 >= 0 )
        v8 = (*(__int64 (__fastcall **)(__int64, struct IClassicWindow **))(*(_QWORD *)(a1 + 112) + 8LL))(
               a1 + 112,
               &v22);
    }
    v9 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    goto LABEL_5;
  }
  if ( (a3 & 1) != 0 && GetShellWindow() != a2 )
  {
    v22 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v22);
    if ( (int)CClassicWindowManager::_FindClassicWindow(v6, a2, &v22, &v23) < 0 )
    {
      v23 = 0LL;
      if ( (a3 & 3) == 3 && (int)CClassicWindowManager::_EnsureMonitorManager(v6) >= 0 )
      {
        v12 = *(_QWORD *)(a1 + 200);
        v13 = *(void (__fastcall **)(__int64, HWND, GUID *, GUID *, unsigned __int64 *))(*(_QWORD *)v12 + 88LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
        v13(v12, a2, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v23);
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v22);
      v8 = CClassicWindow::s_CreateInstance(a2, 0LL, v23, 0LL, &v22);
      if ( v8 >= 0 )
        v8 = (*(__int64 (__fastcall **)(__int64, struct IClassicWindow **))(*(_QWORD *)(a1 + 112) + 8LL))(
               a1 + 112,
               &v22);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
    }
    else
    {
      v11 = v22;
      v22 = 0LL;
      v14[1] = v23;
      v14[0] = 0LL;
      v20 = v23;
      v21 = 1;
      v16 = v11;
      v19 = 0LL;
      v17 = v23;
      v18 = 1;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v19);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v14);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v22);
LABEL_5:
    if ( v8 < 0 )
      goto LABEL_9;
  }
  v21 = 0;
  if ( v18 )
  {
    v19 = v16;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
    v20 = v17;
    v21 = 1;
  }
  v8 = CClassicWindowManager::_HandleActivation((__int64 **)v6, (__int64)a2, (__int64)&v19);
LABEL_9:
  if ( v18 )
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v16);
  if ( v15 >= 0 )
    LeaveCriticalSection(v7);
  return (unsigned int)v8;
}
