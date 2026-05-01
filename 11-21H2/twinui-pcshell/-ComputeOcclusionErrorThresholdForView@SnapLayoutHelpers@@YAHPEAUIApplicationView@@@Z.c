/*
 * XREFs of ?ComputeOcclusionErrorThresholdForView@SnapLayoutHelpers@@YAHPEAUIApplicationView@@@Z @ 0x1805A1FF0
 * Callers:
 *     ?GetAdjacentHalfSnappedView@CShellSnapComponent@@UEAAJPEAUIApplicationView@@PEAPEAU2@@Z @ 0x1805928A0 (-GetAdjacentHalfSnappedView@CShellSnapComponent@@UEAAJPEAUIApplicationView@@PEAPEAU2@@Z.c)
 *     ?IsUnoccluded@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIObjectArray@@0PEA_N@Z @ 0x1805A6F8C (-IsUnoccluded@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIObjectArray@@0PEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SnapLayoutHelpers::ComputeOcclusionErrorThresholdForView(
        SnapLayoutHelpers *this,
        struct IApplicationView *a2)
{
  unsigned int v3; // esi
  int (__fastcall *v4)(SnapLayoutHelpers *, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int nNumerator; // [rsp+40h] [rbp+8h] BYREF
  char v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v3 = 5;
  v9 = 0LL;
  v4 = *(int (__fastcall **)(SnapLayoutHelpers *, __int64 *))(*(_QWORD *)this + 80LL);
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v9);
  if ( v4(this, AddressOf) >= 0
    && (*(int (__fastcall **)(__int64, int *, char *))(*(_QWORD *)v9 + 112LL))(v9, &nNumerator, &v8) >= 0 )
  {
    v3 = MulDiv(5, nNumerator, 96);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
  return v3;
}
