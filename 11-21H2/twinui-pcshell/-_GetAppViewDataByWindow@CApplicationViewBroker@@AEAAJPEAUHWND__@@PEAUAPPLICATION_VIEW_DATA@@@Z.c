/*
 * XREFs of ?_GetAppViewDataByWindow@CApplicationViewBroker@@AEAAJPEAUHWND__@@PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x1804E6038
 * Callers:
 *     ?GetApplicationViewData@CApplicationViewBroker@@UEAAJPEAUHWND__@@PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x1804E6000 (-GetApplicationViewData@CApplicationViewBroker@@UEAAJPEAUHWND__@@PEAUAPPLICATION_VIEW_DATA@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18013E64C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewBroker::_GetAppViewDataByWindow(
        CApplicationViewBroker *this,
        HWND a2,
        struct APPLICATION_VIEW_DATA *a3)
{
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, HWND, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int v8; // ebx
  __int64 v10[2]; // [rsp+20h] [rbp-98h] BYREF
  _OWORD v11[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v12; // [rsp+50h] [rbp-68h]
  int v13; // [rsp+58h] [rbp-60h]

  *(_DWORD *)a3 = 0;
  *((_DWORD *)a3 + 1) = 0;
  *((_DWORD *)a3 + 2) = 0;
  *((_DWORD *)a3 + 3) = 0;
  *((_DWORD *)a3 + 5) = 0;
  *((_DWORD *)a3 + 4) = 0;
  *((_DWORD *)a3 + 6) = 0;
  *((_DWORD *)a3 + 7) = 0;
  *((_DWORD *)a3 + 8) = 3;
  *((_DWORD *)a3 + 9) = 0;
  *((_DWORD *)a3 + 10) = 0;
  v10[0] = 0LL;
  v5 = *((_QWORD *)this + 2);
  v6 = *(__int64 (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v5 + 48LL);
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(v10);
  v8 = v6(v5, a2, AddressOf);
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v10[0] + 216LL))(v10[0], v11);
    if ( v8 >= 0 )
    {
      *(_OWORD *)a3 = v11[0];
      *((_OWORD *)a3 + 1) = v11[1];
      *((_QWORD *)a3 + 4) = v12;
      *((_DWORD *)a3 + 10) = v13;
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v10);
  return (unsigned int)v8;
}
