/*
 * XREFs of ?GetViewForApplication@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x1800152F0
 * Callers:
 *     ?ApplicationChanged@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x18002FD40 (-ApplicationChanged@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@.c)
 *     _lambda_00579e35fd3f40d9daeda2b75c1830f2_::operator() @ 0x1801D89F0 (_lambda_00579e35fd3f40d9daeda2b75c1830f2_--operator().c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18004CF9C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationViewManager::GetViewForApplication(
        RTL_SRWLOCK *this,
        struct IImmersiveApplication *a2,
        struct IApplicationView **a3)
{
  struct IApplicationView *v5; // r14
  PVOID v6; // r15
  struct IImmersiveApplication *v7; // rdi
  int (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v10; // rbx
  int (__fastcall *v11)(__int64, __int64); // rsi
  __int64 AddressOf; // rax
  _QWORD *Ptr; // rax
  struct IApplicationView *v14; // rbx
  __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  struct IApplicationView *v16; // [rsp+28h] [rbp-20h] BYREF
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-18h]
  int v18; // [rsp+90h] [rbp+48h] BYREF
  struct IImmersiveApplication *v19; // [rsp+98h] [rbp+50h]
  __int64 v20; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+60h] BYREF

  v19 = a2;
  SRWLock = this + 66;
  AcquireSRWLockShared(this + 66);
  *a3 = 0LL;
  v5 = 0LL;
  v16 = 0LL;
  v6 = 0LL;
  v7 = v19;
  while ( !v5 && v6 < this[68].Ptr )
  {
    v15 = 0LL;
    v8 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this[67].Ptr + (_QWORD)v6);
    if ( (**v8)(v8, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v15) >= 0 )
    {
      v21 = 0LL;
      v10 = v15;
      v11 = *(int (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 24LL);
      AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v21);
      if ( v11(v10, AddressOf) >= 0
        && (*(int (__fastcall **)(__int64, struct IImmersiveApplication *, int *))(*(_QWORD *)v21 + 104LL))(
             v21,
             v7,
             &v18) >= 0
        && v18 )
      {
        Ptr = this[67].Ptr;
        v14 = (struct IApplicationView *)Ptr[(_QWORD)v6];
        if ( v14 )
        {
          v20 = Ptr[(_QWORD)v6];
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
          v20 = 0LL;
          v5 = v14;
          v16 = v14;
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v20);
        }
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v21);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
    v6 = (char *)v6 + 1;
  }
  v16 = 0LL;
  *a3 = v5;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v5 == 0LL ? 0x8002802B : 0;
}
