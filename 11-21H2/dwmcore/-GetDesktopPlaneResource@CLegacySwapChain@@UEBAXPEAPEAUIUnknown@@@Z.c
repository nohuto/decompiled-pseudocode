/*
 * XREFs of ?GetDesktopPlaneResource@CLegacySwapChain@@UEBAXPEAPEAUIUnknown@@@Z @ 0x18001A6E4
 * Callers:
 *     ?GetDesktopPlaneResource@CLegacySwapChain@@$4PPPPPPPM@A@EBAXPEAPEAUIUnknown@@@Z @ 0x180108E30 (-GetDesktopPlaneResource@CLegacySwapChain@@$4PPPPPPPM@A@EBAXPEAPEAUIUnknown@@@Z.c)
 *     ?GetDesktopPlaneResource@CLegacySwapChain@@$4PPPPPPPM@BI@EBAXPEAPEAUIUnknown@@@Z @ 0x180109E30 (-GetDesktopPlaneResource@CLegacySwapChain@@$4PPPPPPPM@BI@EBAXPEAPEAUIUnknown@@@Z.c)
 *     ?GetDesktopPlaneResource@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAXPEAPEAUIUnknown@@@Z @ 0x18010A450 (-GetDesktopPlaneResource@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAXPEAPEAUIUnknown@@@Z.c)
 *     ?IsDesktopPlane@CConversionSwapChain@@IEBA_NAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x180292C78 (-IsDesktopPlane@CConversionSwapChain@@IEBA_NAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CLegacySwapChain::GetDesktopPlaneResource(CLegacySwapChain *this, struct IUnknown **a2)
{
  __int64 (__fastcall ***v3)(_QWORD); // rcx
  __int64 v4; // rax
  __int64 v5; // rbx
  void (__fastcall *v6)(__int64, __int64 *); // rdi
  struct IUnknown *v7; // rax
  struct IUnknown *v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  v3 = (__int64 (__fastcall ***)(_QWORD))((char *)this + *(int *)(*((_QWORD *)this - 47) + 16LL) - 376);
  v4 = (**v3)(v3);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
  v6 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 56LL);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v6(v5, &v9);
  if ( v8 )
    ((void (__fastcall *)(struct IUnknown *))v8->lpVtbl->Release)(v8);
  (**(void (__fastcall ***)(__int64, GUID *, struct IUnknown **))v9)(
    v9,
    &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
    &v8);
  v7 = v8;
  v8 = 0LL;
  *a2 = v7;
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v8);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v9);
}
