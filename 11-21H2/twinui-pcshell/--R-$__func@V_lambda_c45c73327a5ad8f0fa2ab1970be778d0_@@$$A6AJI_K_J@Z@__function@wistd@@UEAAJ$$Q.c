/*
 * XREFs of ??R?$__func@V_lambda_c45c73327a5ad8f0fa2ab1970be778d0_@@$$A6AJI_K_J@Z@__function@wistd@@UEAAJ$$QEAI$$QEA_K$$QEA_J@Z @ 0x180148080
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ @ 0x18015C524 (-ReleaseAndGetAddressOf@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wistd::__function::__func<_lambda_c45c73327a5ad8f0fa2ab1970be778d0_,long (unsigned int,unsigned __int64,__int64)>::operator()(
        __int64 a1,
        unsigned int *a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  unsigned int v7; // r14d
  unsigned int v8; // ebx
  _QWORD *AddressOf; // r8
  __int64 v10; // rcx
  int v11; // eax
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v5 = *a4;
  v6 = *a3;
  v7 = *a2;
  v8 = 0;
  v13 = 0LL;
  AddressOf = (_QWORD *)Microsoft::WRL::ComPtr<IInspectable>::ReleaseAndGetAddressOf(&v13);
  *AddressOf = 0LL;
  v10 = *(_QWORD *)(a1 + 8);
  if ( v10 )
    v11 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD *))(*(_QWORD *)v10 + 24LL))(
            v10,
            &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
            AddressOf);
  else
    v11 = 0;
  if ( v11 >= 0 )
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(a1 + 24))(
           *(_QWORD *)(a1 + 16) + *(int *)(a1 + 32),
           v7,
           v6,
           v5);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
  return v8;
}
