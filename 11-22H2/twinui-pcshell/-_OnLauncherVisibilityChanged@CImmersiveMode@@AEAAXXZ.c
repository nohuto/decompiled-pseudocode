/*
 * XREFs of ?_OnLauncherVisibilityChanged@CImmersiveMode@@AEAAXXZ @ 0x1800DE2C0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b9e009682738098b72449fb04d8aa113___::Run @ 0x1800DE2B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b9e009682738098b72449fb04d8aa113___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ??4?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009D7A4 (--4-$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@Z @ 0x1800DE208 (-UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CImmersiveMode::_OnLauncherVisibilityChanged(CImmersiveMode *this)
{
  void (__fastcall *v2)(char *, GUID *, IUnknown **); // rbx
  unsigned __int64 i; // r14
  __int64 v4; // rdi
  int v5; // ebx
  void *v6; // rbx
  void (__fastcall *v7)(void *, __int64 *); // rdi
  __int64 *AddressOf; // rax
  int v9; // [rsp+60h] [rbp+38h] BYREF
  void *ppvOut; // [rsp+68h] [rbp+40h] BYREF
  IUnknown *punk; // [rsp+70h] [rbp+48h] BYREF
  __int64 v12; // [rsp+78h] [rbp+50h] BYREF

  v9 = 0;
  v12 = 0LL;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  punk = 0LL;
  v9 = 2;
  v2 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 4) + 32LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
  v2((char *)this + 32, &GUID_00000000_0000_0000_c000_000000000046, &punk);
  LOBYTE(v2) = IUnknown_QueryService(
                 punk,
                 (const GUID *const)&SID_ImmersiveLauncher,
                 &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
                 &ppvOut) >= 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
  if ( (_BYTE)v2 && (*(int (__fastcall **)(void *, int *))(*(_QWORD *)ppvOut + 56LL))(ppvOut, &v9) >= 0 && v9 )
  {
    v6 = ppvOut;
    v7 = *(void (__fastcall **)(void *, __int64 *))(*(_QWORD *)ppvOut + 88LL);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v12);
    v7(v6, AddressOf);
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::IChainLink>::operator=((__int64 *)this + 48, &v12);
  for ( i = 0LL; i < *((_QWORD *)this + 55); ++i )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 54) + 8 * i);
    v5 = *((_DWORD *)this + 84);
    *(_BYTE *)(v4 + 13) = (unsigned int)SHIsSameObject(*(struct IUnknown **)v4, *((struct IUnknown **)this + 48)) != 0;
    CImmersiveMode::CDesktopVisibilityChangeSource::UpdateActivationFilter(v4, v5);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
}
