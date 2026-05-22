/*
 * XREFs of ?OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800D6EA0
 * Callers:
 *     ?OnDeviceRemoval@MPCHandProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800CFA20 (-OnDeviceRemoval@MPCHandProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@MPCSixDofProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801EC270 (-OnDeviceRemoval@MPCSixDofProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@MPCGamepadProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801F0E90 (-OnDeviceRemoval@MPCGamepadProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@MPCMouseProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801F4900 (-OnDeviceRemoval@MPCMouseProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x1800182F0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FC64 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180040ACC (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProviderBase@@@Z @ 0x1800BAC64 (--0-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProvid.c)
 *     ?DetachProvider@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800BAEEC (-DetachProvider@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800BB2E4 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?RemoveInputProvider@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x1800C8FBC (-RemoveInputProvider@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?MPCEyeGazeProcessor_DeviceDetached_@ISMTracing@@QEAAXK@Z @ 0x1800D6B50 (-MPCEyeGazeProcessor_DeviceDetached_@ISMTracing@@QEAAXK@Z.c)
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
  __int64 v10; // rcx
  int *v11; // rbx
  __int64 v12; // rcx
  ISMTracing *v13; // rcx
  struct MPCHolographicInputManager *v14; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v2 = (unsigned __int64)this + 24;
  if ( *(_DWORD *)a2 != (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this + 3) + 88LL))((char *)this + 24) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xFB,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcinputproviderbase.cpp",
      v6);
  Instance = MPCGestureHandlerManager::GetInstance(v5, v4);
  v8 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
         &v17,
         v2 & -(__int64)(this != 0LL));
  MPCGestureHandlerManager::DetachProvider(Instance, v8);
  v9 = MPCHolographicInputManager::GetInstance();
  MPCHolographicInputManager::RemoveInputProvider(v9, (struct IMPCInputProviderBase *)(v2 & -(__int64)(this != 0LL)));
  if ( (*(unsigned int (__fastcall **)(unsigned __int64))(*(_QWORD *)v2 + 112LL))(v2) == 8 )
  {
    v11 = (int *)*((_QWORD *)this + 6);
    if ( ISMTracing::IsEnabled(v10) )
    {
      wil::details::static_lazy<ISMTracing>::get(v12, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      ISMTracing::MPCEyeGazeProcessor_DeviceDetached_(v13, *v11);
    }
    if ( *((_QWORD *)MPCHolographicInputManager::GetInstance() + 419) == (v2 & -(__int64)(this != 0LL)) )
    {
      v14 = MPCHolographicInputManager::GetInstance();
      Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)v14 + 419);
    }
  }
  return 0LL;
}
