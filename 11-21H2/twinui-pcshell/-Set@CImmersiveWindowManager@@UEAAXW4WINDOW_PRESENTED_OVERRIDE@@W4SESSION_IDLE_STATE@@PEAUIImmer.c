/*
 * XREFs of ?Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmersiveMonitor@@@Z @ 0x1801236D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1801237F8 (-s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_6ee4989f9139f581a42397e10829ce1f___ @ 0x180124AFC (CActivationBasedCollection_Microsoft--WRL--ComPtr_IImmersiveApplicationInternal___--ForEach__lam.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_ScheduleInteractiveNotificationForApps@CImmersiveWindowManager@@AEAAXPEAUIImmersiveApplicationArray@@W4WINDOW_PRESENTED_OVERRIDE@@@Z @ 0x1802EF038 (-_ScheduleInteractiveNotificationForApps@CImmersiveWindowManager@@AEAAXPEAUIImmersiveApplication.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CImmersiveWindowManager::Set(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  const struct _GUID *v8; // rcx
  void *v9; // rbx
  void (__fastcall *v10)(void *, GUID *, __int64 *); // rdi
  int v12; // [rsp+20h] [rbp-30h] BYREF
  void *v13; // [rsp+28h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v15[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v16; // [rsp+40h] [rbp-10h]
  void *v17; // [rsp+48h] [rbp-8h] BYREF

  v13 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
  if ( (int)CImmersiveAppArray::s_CreateInstance(v8, &v13) >= 0 )
  {
    v15[0] = a3;
    v15[1] = a2;
    v16 = a4;
    v17 = v13;
    if ( v13 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 8LL))(v13);
    CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_6ee4989f9139f581a42397e10829ce1f___(
      a1 + 32,
      v15);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
    v14 = 0LL;
    v9 = v13;
    v10 = **(void (__fastcall ***)(void *, GUID *, __int64 *))v13;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
    v10(v9, &GUID_c6ed6dac_8fac_4598_a74c_69020137149c, &v14);
    if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v14 + 24LL))(v14, &v12) >= 0 && v12 )
      CImmersiveWindowManager::_ScheduleInteractiveNotificationForApps(a1 - 176, v13, a2);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  }
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
}
