/*
 * XREFs of ?_ScheduleLegacyModeNotification@CImmersiveMode@@AEAAXW4IMM_SYSTEM_MODE@@0@Z @ 0x1800B7D60
 * Callers:
 *     ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x1800B7B50 (-_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18007CB00 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_6b79eb4b576a38d0be641e968c7b0b59___ @ 0x1800B7E1C (Windows--Internal--ComTaskPool--QueueTask__lambda_6b79eb4b576a38d0be641e968c7b0b59___.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveMode::_ScheduleLegacyModeNotification(RTL_SRWLOCK *a1, int a2, int a3)
{
  RTL_SRWLOCK *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct IObjectArray *v9; // [rsp+20h] [rbp-20h] BYREF
  int v10; // [rsp+28h] [rbp-18h]
  int v11; // [rsp+2Ch] [rbp-14h]
  int v12; // [rsp+30h] [rbp-10h]
  int v13; // [rsp+60h] [rbp+20h] BYREF
  struct IObjectArray *v14; // [rsp+78h] [rbp+38h] BYREF

  v14 = 0LL;
  v5 = a1 + 32;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
  if ( (int)AgileRegistrationList::GetCallbackArray(v5, &v14) >= 0
    && ((int (__fastcall *)(struct IObjectArray *, int *))v14->lpVtbl->GetCount)(v14, &v13) >= 0
    && v13 )
  {
    v9 = v14;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
    v10 = a2;
    v11 = a3;
    v12 = v13;
    Windows::Internal::ComTaskPool::QueueTask__lambda_6b79eb4b576a38d0be641e968c7b0b59___(
      v7,
      v6,
      LODWORD(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr),
      &v9);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
  }
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
}
