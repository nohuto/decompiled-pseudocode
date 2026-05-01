/*
 * XREFs of ?GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18007FF90
 * Callers:
 *     ?GetRootSwitchableOwner@CWin32ApplicationView@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x18015F250 (-GetRootSwitchableOwner@CWin32ApplicationView@@UEAAJPEAPEAUIApplicationView@@@Z.c)
 *     _lambda_7915f6a175cf868405df09c49fdb616f_::operator() @ 0x18022B31C (_lambda_7915f6a175cf868405df09c49fdb616f_--operator().c)
 *     ?GetOwnerAppView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@PEAPEAU2@@Z @ 0x180310340 (-GetOwnerAppView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@PEAPEAU2@@Z.c)
 *     ?WindowEnterpriseIdChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z @ 0x180310D40 (-WindowEnterpriseIdChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z @ 0x180310E40 (-WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x180312210 (-EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18013E64C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationViewManager::GetViewForHwnd(RTL_SRWLOCK *this, HWND a2, struct IApplicationView **a3)
{
  RTL_SRWLOCK *v6; // rdi
  unsigned int v7; // esi
  struct IApplicationView *v8; // r14
  struct IApplicationView **Ptr; // r15
  struct IApplicationView **v10; // r12
  struct IApplicationView *v11; // rbx
  char v12; // bl
  int (__fastcall *v14)(struct IApplicationView *, GUID *, __int64 *); // r14
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, __int64); // r14
  __int64 AddressOf; // rax
  int v19; // eax
  __int64 v20; // [rsp+20h] [rbp-30h] BYREF
  __int64 v21; // [rsp+28h] [rbp-28h] BYREF
  __int64 v22; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v23[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  struct IApplicationView *v25; // [rsp+90h] [rbp+40h] BYREF
  struct IApplicationView **v26; // [rsp+A0h] [rbp+50h]
  __int64 v27; // [rsp+A8h] [rbp+58h] BYREF

  v26 = a3;
  v6 = this + 66;
  v23[1] = this + 66;
  AcquireSRWLockShared(this + 66);
  v7 = 0;
  *a3 = 0LL;
  v8 = 0LL;
  v22 = 0LL;
  Ptr = (struct IApplicationView **)this[67].Ptr;
  v10 = &Ptr[(__int64)this[68].Ptr];
  if ( Ptr == v10 )
    goto LABEL_10;
  while ( 1 )
  {
    v11 = *Ptr;
    LODWORD(v25) = 0;
    v21 = 0LL;
    v27 = 0LL;
    if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v11)(
           v11,
           &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
           &v21) < 0 )
    {
      v14 = **(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v11;
      v15 = v27;
      if ( v27 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      if ( v14(v11, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v27) >= 0 )
      {
        v20 = 0LL;
        v16 = v27;
        v17 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 24LL);
        AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v20);
        v19 = v17(v16, AddressOf);
        if ( v19 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3D,
            (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\util.cpp",
            (const char *)(unsigned int)v19,
            v20);
        else
          (*(void (__fastcall **)(__int64, HWND, struct IApplicationView **))(*(_QWORD *)v20 + 96LL))(v20, a2, &v25);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
      }
LABEL_21:
      if ( !(_DWORD)v25 )
        goto LABEL_6;
      goto LABEL_24;
    }
    if ( (*(int (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v21 + 24LL))(v21, v23) < 0 )
      goto LABEL_21;
    if ( a2 != (HWND)v23[0] )
    {
      LODWORD(v25) = 0;
LABEL_6:
      v12 = 0;
      goto LABEL_7;
    }
    LODWORD(v25) = 1;
LABEL_24:
    v12 = 1;
LABEL_7:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v21);
    if ( v12 )
      break;
    if ( ++Ptr == v10 )
      goto LABEL_9;
  }
  v8 = *Ptr;
  if ( !*Ptr )
  {
LABEL_9:
    v8 = 0LL;
    goto LABEL_10;
  }
  v25 = *Ptr;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v25);
  v25 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v25);
LABEL_10:
  v22 = 0LL;
  *v26 = v8;
  if ( !v8 )
    v7 = -2147319765;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v22);
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v7;
}
