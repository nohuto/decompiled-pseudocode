/*
 * XREFs of ?ShouldHandlePresentationRequest@TabletModePositioner@@UEAAHPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x180506830
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPositionerPriority@@XZ @ 0x1800340AC (-ReleaseAndGetAddressOf@-$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPos.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x18004157C (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
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
  __int64 *AddressOf; // rax
  BOOL v10; // ebx
  __int64 v12[2]; // [rsp+20h] [rbp-10h] BYREF
  int v13; // [rsp+70h] [rbp+40h] BYREF
  __int64 v14; // [rsp+78h] [rbp+48h] BYREF

  IsTabletMode = 0;
  v12[0] = 0LL;
  QueryInterface = a3->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v12);
  if ( ((int (__fastcall *)(struct IInspectable *, GUID *, __int64 *))QueryInterface)(
         a3,
         &GUID_c7eb508d_5e36_46e2_8af4_b6f813539dbf,
         v12) >= 0 )
  {
    if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v12[0] + 24LL))(v12[0], &v13) < 0 )
    {
      v14 = 0LL;
      v8 = *(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 264LL);
      AddressOf = Microsoft::WRL::ComPtr<IShellPositionerPriority>::ReleaseAndGetAddressOf(&v14);
      if ( v8(a2, AddressOf) < 0 )
      {
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
      }
      else
      {
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 24LL))(v14) == 1;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
        IsTabletMode = v10;
      }
    }
    else if ( !v13 )
    {
      IsTabletMode = TabletModePositioner::IsTabletMode((TabletModePositioner *)((char *)this - 128));
    }
  }
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v12);
  return IsTabletMode;
}
