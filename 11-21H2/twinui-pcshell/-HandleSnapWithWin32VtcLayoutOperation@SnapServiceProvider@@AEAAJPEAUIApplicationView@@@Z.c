/*
 * XREFs of ?HandleSnapWithWin32VtcLayoutOperation@SnapServiceProvider@@AEAAJPEAUIApplicationView@@@Z @ 0x18059F950
 * Callers:
 *     ?SnapToLocation@SnapServiceProvider@@UEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@W4SNAP_TO_LOCATION_FLAGS@@PEAUtagRECT@@@Z @ 0x1805A0170 (-SnapToLocation@SnapServiceProvider@@UEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@W4SNAP_TO_LOCAT.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SnapServiceProvider::HandleSnapWithWin32VtcLayoutOperation(
        SnapServiceProvider *this,
        struct IApplicationView *a2)
{
  __int64 (__fastcall *v4)(struct IApplicationView *, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64 *, GUID *, GUID *, __int64 *); // rbx
  int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, GUID *, GUID *, __int64 *); // rdi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v16; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v18; // [rsp+68h] [rbp+28h] BYREF
  __int64 v19; // [rsp+70h] [rbp+30h] BYREF
  __int64 v20; // [rsp+78h] [rbp+38h] BYREF

  v20 = 0LL;
  v4 = *(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 80LL);
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v20);
  v6 = v4(a2, AddressOf);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v16 = 0LL;
    v19 = 0LL;
    v8 = *((_QWORD *)this + 4);
    v9 = *(__int64 (__fastcall **)(__int64, __int64 *, GUID *, GUID *, __int64 *))(*(_QWORD *)v8 + 96LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
    v10 = v9(v8, &v16, &GUID_975d55f5_ce62_42c0_868a_eda817f3871e, &GUID_975d55f5_ce62_42c0_868a_eda817f3871e, &v19);
    v7 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA0,
        (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
        (const char *)(unsigned int)v10);
LABEL_14:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
      goto LABEL_15;
    }
    v18 = 0LL;
    v11 = v19;
    v12 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v19 + 80LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
    v13 = v12(v11, &CLSID_PPIWin32VtcLayoutOperation, &GUID_7f4d2785_4b93_429e_9250_0e9670706fba, &v18);
    v7 = v13;
    if ( v13 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *))(*(_QWORD *)v18 + 72LL))(v18, a2);
      v7 = v13;
      if ( v13 >= 0 )
      {
        v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 88LL))(v19, v18);
        v7 = v13;
        if ( v13 >= 0 )
        {
          v7 = 0;
          goto LABEL_13;
        }
        v14 = 165LL;
      }
      else
      {
        v14 = 164LL;
      }
    }
    else
    {
      v14 = 163LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
      (const char *)(unsigned int)v13);
LABEL_13:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9C,
    (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
    (const char *)(unsigned int)v6);
LABEL_15:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
  return v7;
}
