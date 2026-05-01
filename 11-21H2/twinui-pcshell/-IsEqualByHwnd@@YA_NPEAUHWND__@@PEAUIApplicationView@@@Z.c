/*
 * XREFs of ?IsEqualByHwnd@@YA_NPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180311814
 * Callers:
 *     _lambda_08e44639c949c8f1bdbb00fd6a229011_::operator() @ 0x18022B174 (_lambda_08e44639c949c8f1bdbb00fd6a229011_--operator().c)
 *     ?GetViewForHwnd@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x1803112F0 (-GetViewForHwnd@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUHWND__@@PEAPEAUIApplicationV.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18013E64C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
bool __fastcall IsEqualByHwnd(HWND a1, int (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *))
{
  int (__fastcall *v4)(struct IApplicationView *, GUID *, __int64 *); // rbx
  int (__fastcall *v5)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64 *); // rdi
  __int64 *AddressOf; // rax
  int v9; // eax
  bool v10; // bl
  __int64 v12[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  BOOL v14; // [rsp+58h] [rbp+28h] BYREF
  __int64 v15; // [rsp+60h] [rbp+30h] BYREF
  __int64 v16; // [rsp+68h] [rbp+38h] BYREF

  v14 = 0;
  v16 = 0LL;
  v15 = 0LL;
  v4 = **a2;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
  if ( v4((struct IApplicationView *)a2, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v16) < 0 )
  {
    v5 = **a2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
    if ( v5((struct IApplicationView *)a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v15) >= 0 )
    {
      v12[0] = 0LL;
      v6 = v15;
      v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 24LL);
      AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(v12);
      v9 = v7(v6, AddressOf);
      if ( v9 >= 0 )
        (*(void (__fastcall **)(__int64, HWND, BOOL *))(*(_QWORD *)v12[0] + 96LL))(v12[0], a1, &v14);
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3D,
          (__int64)"pcshell\\twinui\\appviewmanager\\lib\\util.cpp",
          (const char *)(unsigned int)v9);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v12);
    }
  }
  else if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 24LL))(v16, v12) >= 0 )
  {
    v14 = a1 == (HWND)v12[0];
  }
  v10 = v14;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
  return v10;
}
