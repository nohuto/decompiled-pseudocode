/*
 * XREFs of ?ShouldHandlePresentationRequest@FullScreenPositioner@@UEAAHPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x180320D50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPositionerPriority@@XZ @ 0x1800340AC (-ReleaseAndGetAddressOf@-$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPos.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall FullScreenPositioner::ShouldHandlePresentationRequest(
        FullScreenPositioner *this,
        struct IApplicationView *a2,
        struct IInspectable *a3)
{
  unsigned int v5; // esi
  HRESULT (__stdcall *QueryInterface)(IInspectable *, const IID *const, void **); // rbx
  int (__fastcall *v7)(struct IApplicationView *, __int64 *); // rbx
  __int64 *AddressOf; // rax
  __int64 v10[2]; // [rsp+20h] [rbp-10h] BYREF
  int v11; // [rsp+60h] [rbp+30h] BYREF
  __int64 v12; // [rsp+68h] [rbp+38h] BYREF

  v5 = 0;
  v10[0] = 0LL;
  QueryInterface = a3->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v10);
  if ( ((int (__fastcall *)(struct IInspectable *, GUID *, __int64 *))QueryInterface)(
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
        LOBYTE(v5) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12) == 3;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
    }
    else
    {
      LOBYTE(v5) = v11 == 2;
    }
  }
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v10);
  return v5;
}
