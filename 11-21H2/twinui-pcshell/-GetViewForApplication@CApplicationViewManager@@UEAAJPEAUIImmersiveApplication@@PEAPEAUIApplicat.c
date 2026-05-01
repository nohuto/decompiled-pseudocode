/*
 * XREFs of ?GetViewForApplication@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x1800850E0
 * Callers:
 *     ?ApplicationChanged@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x180142E00 (-ApplicationChanged@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@.c)
 *     _lambda_75640f340b6302f1fe16b95c421a43bd_::operator() @ 0x18030FDD4 (_lambda_75640f340b6302f1fe16b95c421a43bd_--operator().c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18013E64C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationViewManager::GetViewForApplication(
        RTL_SRWLOCK *this,
        struct IImmersiveApplication *a2,
        struct IApplicationView **a3)
{
  unsigned int v5; // r14d
  struct IApplicationView *v6; // rsi
  PVOID v7; // r15
  struct IImmersiveApplication *v8; // rdi
  int (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v10; // rbx
  int (__fastcall *v11)(__int64, __int64); // rbp
  __int64 AddressOf; // rax
  _QWORD *Ptr; // rax
  struct IApplicationView *v14; // rbx
  __int64 v16; // [rsp+20h] [rbp-68h] BYREF
  struct IApplicationView *v17; // [rsp+28h] [rbp-60h] BYREF
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-58h]
  int v19; // [rsp+90h] [rbp+8h] BYREF
  struct IImmersiveApplication *v20; // [rsp+98h] [rbp+10h]
  __int64 v21; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+20h] BYREF

  v20 = a2;
  SRWLock = this + 66;
  AcquireSRWLockShared(this + 66);
  v5 = 0;
  *a3 = 0LL;
  v6 = 0LL;
  v17 = 0LL;
  v7 = 0LL;
  v8 = v20;
  while ( !v6 && v7 < this[68].Ptr )
  {
    v16 = 0LL;
    v9 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this[67].Ptr + (_QWORD)v7);
    if ( (**v9)(v9, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v16) >= 0 )
    {
      v22 = 0LL;
      v10 = v16;
      v11 = *(int (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 24LL);
      AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v22);
      if ( v11(v10, AddressOf) >= 0
        && (*(int (__fastcall **)(__int64, struct IImmersiveApplication *, int *))(*(_QWORD *)v22 + 104LL))(
             v22,
             v8,
             &v19) >= 0
        && v19 )
      {
        Ptr = this[67].Ptr;
        v14 = (struct IApplicationView *)Ptr[(_QWORD)v7];
        if ( v14 )
        {
          v21 = Ptr[(_QWORD)v7];
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v21);
          v21 = 0LL;
          v6 = v14;
          v17 = v14;
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v21);
        }
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
    v7 = (char *)v7 + 1;
  }
  v17 = 0LL;
  *a3 = v6;
  if ( !v6 )
    v5 = -2147319765;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v17);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v5;
}
