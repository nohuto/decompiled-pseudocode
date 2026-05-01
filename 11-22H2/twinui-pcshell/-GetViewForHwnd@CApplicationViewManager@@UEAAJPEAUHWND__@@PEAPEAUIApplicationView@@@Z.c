/*
 * XREFs of ?GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x1800CB660
 * Callers:
 *     ?GetRootSwitchableOwner@CWin32ApplicationView@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x1800DF9E0 (-GetRootSwitchableOwner@CWin32ApplicationView@@UEAAJPEAPEAUIApplicationView@@@Z.c)
 *     _lambda_d87bb6e841689a33a8176d79960f4277_::operator() @ 0x1801D8D64 (_lambda_d87bb6e841689a33a8176d79960f4277_--operator().c)
 *     ?GetOwnerAppView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@PEAPEAU2@@Z @ 0x1803CBF10 (-GetOwnerAppView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@PEAPEAU2@@Z.c)
 *     ?WindowEnterpriseIdChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z @ 0x1803CC620 (-WindowEnterpriseIdChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z @ 0x1803CC730 (-WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x1803CD9C0 (-EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18004CF9C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationViewManager::GetViewForHwnd(RTL_SRWLOCK *this, HWND a2, struct IApplicationView **a3)
{
  RTL_SRWLOCK *v6; // rdi
  unsigned int v7; // r15d
  struct IApplicationView **Ptr; // rsi
  struct IApplicationView **v9; // r12
  struct IApplicationView *v10; // r14
  char v11; // bl
  struct IApplicationView *v12; // rbx
  int (__fastcall *v14)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, __int64 *); // r14
  __int64 *AddressOf; // rax
  int v18; // eax
  __int64 v19; // [rsp+20h] [rbp-30h] BYREF
  __int64 v20; // [rsp+28h] [rbp-28h] BYREF
  __int64 v21; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v22[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  struct IApplicationView *v24; // [rsp+90h] [rbp+40h] BYREF
  struct IApplicationView **v25; // [rsp+A0h] [rbp+50h]
  __int64 v26; // [rsp+A8h] [rbp+58h] BYREF

  v25 = a3;
  v6 = this + 66;
  v22[1] = this + 66;
  AcquireSRWLockShared(this + 66);
  v7 = 0;
  *a3 = 0LL;
  v21 = 0LL;
  Ptr = (struct IApplicationView **)this[67].Ptr;
  v9 = &Ptr[(__int64)this[68].Ptr];
  if ( Ptr == v9 )
    goto LABEL_9;
  while ( 1 )
  {
    v10 = *Ptr;
    LODWORD(v24) = 0;
    v20 = 0LL;
    v26 = 0LL;
    if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v10)(
           v10,
           &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
           &v20) < 0 )
    {
      v14 = **(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v10;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
      if ( v14(v10, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v26) >= 0 )
      {
        v19 = 0LL;
        v15 = v26;
        v16 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 24LL);
        AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v19);
        v18 = v16(v15, AddressOf);
        if ( v18 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3D,
            (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\util.cpp",
            (const char *)(unsigned int)v18,
            v19);
        else
          (*(void (__fastcall **)(__int64, HWND, struct IApplicationView **))(*(_QWORD *)v19 + 96LL))(v19, a2, &v24);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
      }
LABEL_23:
      if ( !(_DWORD)v24 )
        goto LABEL_6;
      goto LABEL_18;
    }
    if ( (*(int (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v20 + 24LL))(v20, v22) < 0 )
      goto LABEL_23;
    if ( a2 != (HWND)v22[0] )
    {
      LODWORD(v24) = 0;
LABEL_6:
      v11 = 0;
      goto LABEL_7;
    }
    LODWORD(v24) = 1;
LABEL_18:
    v11 = 1;
LABEL_7:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v20);
    if ( v11 )
      break;
    if ( ++Ptr == v9 )
      goto LABEL_9;
  }
  v12 = *Ptr;
  if ( !*Ptr )
  {
LABEL_9:
    v12 = 0LL;
    goto LABEL_10;
  }
  v24 = *Ptr;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v24);
  v24 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v24);
LABEL_10:
  v21 = 0LL;
  *v25 = v12;
  if ( !v12 )
    v7 = -2147319765;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v21);
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v7;
}
