/*
 * XREFs of ?ShouldHandlePresentationRequest@CDesktopPositioner@@UEAAHPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x1805B4950
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
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
  __int64 v9[2]; // [rsp+20h] [rbp-10h] BYREF
  int v10; // [rsp+60h] [rbp+30h] BYREF
  __int64 v11; // [rsp+68h] [rbp+38h] BYREF

  lpVtbl = a3->lpVtbl;
  v6 = 0;
  v9[0] = 0LL;
  if ( ((int (__fastcall *)(struct IInspectable *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a3,
         &GUID_c7eb508d_5e36_46e2_8af4_b6f813539dbf,
         v9) >= 0 )
  {
    if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v9[0] + 24LL))(v9[0], &v10) < 0 )
    {
      v11 = 0LL;
      v7 = *(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 264LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
      if ( v7(a2, &v11) >= 0 )
        LOBYTE(v6) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v11 + 24LL))(v11) == 0;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
    }
    else if ( !v10 )
    {
      v6 = *((_DWORD *)this + 30) == 0;
    }
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v9);
  return v6;
}
