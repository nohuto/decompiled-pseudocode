/*
 * XREFs of ?ShouldHandlePresentationRequest@CDesktopPositioner@@UEAAHPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x1804FC550
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPositionerPriority@@XZ @ 0x1800340AC (-ReleaseAndGetAddressOf@-$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPos.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_BOOL8 __fastcall CDesktopPositioner::ShouldHandlePresentationRequest(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct IInspectable *a3)
{
  struct IInspectableVtbl *lpVtbl; // rax
  BOOL v6; // edi
  int (__fastcall *v7)(struct IApplicationView *, __int64 *); // rbx
  __int64 *AddressOf; // rax
  __int64 v10[3]; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+50h] [rbp+18h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  lpVtbl = a3->lpVtbl;
  v6 = 0;
  v10[0] = 0LL;
  if ( ((int (__fastcall *)(struct IInspectable *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a3,
         &GUID_c7eb508d_5e36_46e2_8af4_b6f813539dbf,
         v10) >= 0 )
  {
    if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v10[0] + 24LL))(v10[0], &v11) < 0 )
    {
      v12 = 0LL;
      v7 = *(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 264LL);
      AddressOf = Microsoft::WRL::ComPtr<IShellPositionerPriority>::ReleaseAndGetAddressOf(&v12);
      if ( v7(a2, AddressOf) >= 0 )
        LOBYTE(v6) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12) == 0;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
    }
    else if ( !v11 )
    {
      v6 = *((_DWORD *)this + 26) == 0;
    }
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v10);
  return v6;
}
