/*
 * XREFs of ?GetHwndFromView@PeoplePaneViewManager@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1804B3700
 * Callers:
 *     ?FindPendingViewByHwnd@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x1804B3284 (-FindPendingViewByHwnd@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18004CF9C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PeoplePaneViewManager::GetHwndFromView(
        PeoplePaneViewManager *this,
        int (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *))
{
  __int64 v3; // rsi
  int (__fastcall *v4)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, __int64 *); // rdi
  __int64 *AddressOf; // rax
  int v8; // eax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, _QWORD, GUID *, PeoplePaneViewManager **); // rdi
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  PeoplePaneViewManager *v16; // [rsp+60h] [rbp+28h] BYREF
  __int64 v17; // [rsp+68h] [rbp+30h] BYREF
  __int64 v18; // [rsp+70h] [rbp+38h] BYREF
  __int64 v19; // [rsp+78h] [rbp+40h] BYREF

  v16 = this;
  v3 = 0LL;
  v17 = 0LL;
  v4 = **a2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  if ( v4((struct IApplicationView *)a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v17) >= 0 )
  {
    v18 = 0LL;
    v5 = v17;
    v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 24LL);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v18);
    v8 = v6(v5, AddressOf);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3A7,
        (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v8);
LABEL_11:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
      goto LABEL_12;
    }
    v16 = 0LL;
    v9 = v18;
    v10 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, PeoplePaneViewManager **))(*(_QWORD *)v18 + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
    v11 = v10(v9, 0LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v16);
    v12 = retaddr;
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(PeoplePaneViewManager *, __int64 *))(*(_QWORD *)v16 + 32LL))(v16, &v19);
      v12 = retaddr;
      if ( v11 >= 0 )
      {
        v3 = v19;
        goto LABEL_10;
      }
      v13 = 941LL;
    }
    else
    {
      v13 = 938LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v12,
      (void *)v13,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v11);
LABEL_10:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
    goto LABEL_11;
  }
LABEL_12:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  return v3;
}
