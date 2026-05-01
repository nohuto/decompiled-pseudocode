/*
 * XREFs of ?ShouldHandlePresentationRequest@TabletModePositioner@@UEAAHPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x1805BEA70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x18007093C (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_BOOL8 __fastcall TabletModePositioner::ShouldHandlePresentationRequest(
        TabletModePositioner *this,
        struct IApplicationView *a2,
        struct IInspectable *a3)
{
  BOOL IsTabletMode; // esi
  HRESULT (__stdcall *QueryInterface)(IInspectable *, const IID *const, void **); // rbx
  int (__fastcall *v8)(struct IApplicationView *, __int64 *); // rbx
  BOOL v9; // ebx
  __int64 v11[2]; // [rsp+20h] [rbp-10h] BYREF
  int v12; // [rsp+70h] [rbp+40h] BYREF
  __int64 v13; // [rsp+78h] [rbp+48h] BYREF

  IsTabletMode = 0;
  v11[0] = 0LL;
  QueryInterface = a3->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v11);
  if ( ((int (__fastcall *)(struct IInspectable *, GUID *, __int64 *))QueryInterface)(
         a3,
         &GUID_c7eb508d_5e36_46e2_8af4_b6f813539dbf,
         v11) >= 0 )
  {
    if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v11[0] + 24LL))(v11[0], &v12) < 0 )
    {
      v13 = 0LL;
      v8 = *(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 264LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
      if ( v8(a2, &v13) < 0 )
      {
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
      }
      else
      {
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13) == 1;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
        IsTabletMode = v9;
      }
    }
    else if ( !v12 )
    {
      IsTabletMode = TabletModePositioner::IsTabletMode((TabletModePositioner *)((char *)this - 128));
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v11);
  return IsTabletMode;
}
