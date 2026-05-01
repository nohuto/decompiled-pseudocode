/*
 * XREFs of ?_IsViewManaged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x180098E54
 * Callers:
 *     ?_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800994B0 (-_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_OnSizeConstraintsChanged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180158D18 (-_OnSizeConstraintsChanged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$GetAsBoolean@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEA_N@Z @ 0x18002E688 (--$GetAsBoolean@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagprope.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPositionerPriority@@XZ @ 0x1800340AC (-ReleaseAndGetAddressOf@-$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPos.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x180098FE0 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18013E64C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CDesktopPositioner::_IsViewManaged(CDesktopPositioner *this, struct IApplicationView *a2, bool *a3)
{
  __int64 (__fastcall *v5)(struct IApplicationView *, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int v7; // eax
  unsigned int v8; // ebx
  struct IApplicationView *v9; // rax
  struct IImmersiveApplication **v10; // r8
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, _QWORD, GUID *, __int64 *); // rdi
  int v14; // eax
  __int64 v15; // [rsp+30h] [rbp-38h] BYREF
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF
  int v17; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+20h]
  CDesktopPositioner *v19; // [rsp+90h] [rbp+28h] BYREF
  __int64 v20; // [rsp+98h] [rbp+30h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+38h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+40h] BYREF

  v19 = this;
  *a3 = 0;
  v22 = 0LL;
  v5 = *(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 264LL);
  AddressOf = Microsoft::WRL::ComPtr<IShellPositionerPriority>::ReleaseAndGetAddressOf(&v22);
  v7 = v5(a2, AddressOf);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7AD,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v7);
  }
  else
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v22 + 24LL))(v22) )
    {
      *a3 = 0;
    }
    else
    {
      *a3 = 1;
      v21 = 0LL;
      v9 = (struct IApplicationView *)Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v21);
      if ( ApplicationViewHelpers::GetApplicationFromView(a2, v9, v10) >= 0 )
      {
        v20 = 0LL;
        v12 = v21;
        v13 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v21 + 48LL);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v20);
        v14 = v13(v12, 0LL, &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99, &v20);
        v8 = v14;
        if ( v14 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x7B6,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v14);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v20);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
          goto LABEL_6;
        }
        v15 = v20;
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
        LOBYTE(v19) = 0;
        v16 = PKEY_ImmersiveApplication_IsPartOfTabDragOperation;
        v17 = 12;
        CPropertyStoreHelperBase<IPropertyStore>::GetAsBoolean<_tagpropertykey>((__int64)&v15, &v16, &v19);
        *a3 = (_BYTE)v19 == 0;
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v20);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
    }
    v8 = 0;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
  return v8;
}
