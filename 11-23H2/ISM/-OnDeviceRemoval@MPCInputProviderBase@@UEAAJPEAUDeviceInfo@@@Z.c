/*
 * XREFs of ?OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800C7BA0
 * Callers:
 *     ?OnDeviceRemoval@MPCHandProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800BF430 (-OnDeviceRemoval@MPCHandProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@MPCSixDofProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801DF040 (-OnDeviceRemoval@MPCSixDofProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@MPCGamepadProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801E3D80 (-OnDeviceRemoval@MPCGamepadProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@MPCMouseProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801E7AB0 (-OnDeviceRemoval@MPCMouseProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180040694 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProviderBase@@@Z @ 0x1800A8378 (--0-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProvid.c)
 *     ?DetachProvider@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800A860C (-DetachProvider@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800A8A04 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?RemoveInputProvider@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x1800B7EA4 (-RemoveInputProvider@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ??$MPCEyeGazeProcessor_DeviceDetached@AEAK@ISMTracing@@SAXAEAK@Z @ 0x1800C4448 (--$MPCEyeGazeProcessor_DeviceDetached@AEAK@ISMTracing@@SAXAEAK@Z.c)
 */

__int64 __fastcall MPCInputProviderBase::OnDeviceRemoval(MPCInputProviderBase *this, struct DeviceInfo *a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  const char *v6; // r9
  MPCGestureHandlerManager *Instance; // rbx
  unsigned __int64 *v8; // rax
  MPCHolographicInputManager *v9; // rax
  struct MPCHolographicInputManager *v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = (unsigned __int64)this + 24;
  if ( *(_DWORD *)a2 != (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this + 3) + 88LL))((char *)this + 24) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xFB,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcinputproviderbase.cpp",
      v6);
  Instance = MPCGestureHandlerManager::GetInstance(v5, v4);
  v8 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
         &v13,
         v2 & -(__int64)(this != 0LL));
  MPCGestureHandlerManager::DetachProvider(Instance, v8);
  v9 = MPCHolographicInputManager::GetInstance();
  MPCHolographicInputManager::RemoveInputProvider(v9, (struct IMPCInputProviderBase *)(v2 & -(__int64)(this != 0LL)));
  if ( (*(unsigned int (__fastcall **)(unsigned __int64))(*(_QWORD *)v2 + 112LL))(v2) == 8 )
  {
    ISMTracing::MPCEyeGazeProcessor_DeviceDetached<unsigned long &>(*((unsigned int **)this + 6));
    if ( *((_QWORD *)MPCHolographicInputManager::GetInstance() + 419) == (v2 & -(__int64)(this != 0LL)) )
    {
      v10 = MPCHolographicInputManager::GetInstance();
      Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)v10 + 419);
    }
  }
  return 0LL;
}
