/*
 * XREFs of _lambda_0615c95965e6d9b4d53728bddc2218b9_::operator() @ 0x180020DF0
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs___::_)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_0615c95965e6d9b4d53728bddc2218b9___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs___::Invoke @ 0x180020DC0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180020DC0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ @ 0x18015C524 (-ReleaseAndGetAddressOf@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_0615c95965e6d9b4d53728bddc2218b9_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  _QWORD *AddressOf; // r8
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = a2;
  v5 = 0;
  v11 = 0LL;
  AddressOf = (_QWORD *)Microsoft::WRL::ComPtr<IInspectable>::ReleaseAndGetAddressOf(&v11);
  *AddressOf = 0LL;
  v7 = a1[1];
  if ( v7 )
    (*(void (__fastcall **)(__int64, GUID *, _QWORD *))(*(_QWORD *)v7 + 24LL))(
      v7,
      &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
      AddressOf);
  if ( v11 )
  {
    if ( (*(int (__fastcall **)(__int64, __int64 *, _QWORD *))(*(_QWORD *)a3 + 48LL))(a3, &v12, AddressOf) >= 0 )
    {
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v9 = *(_QWORD *)(*a1 + 136LL);
      if ( v9 )
      {
        LOBYTE(v8) = (_BYTE)v12 != 0;
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 512LL))(
          v9,
          (*a1 + 8LL) & -(__int64)(*a1 != 0LL),
          v8);
      }
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    }
  }
  else
  {
    v5 = -2147023728;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  return v5;
}
