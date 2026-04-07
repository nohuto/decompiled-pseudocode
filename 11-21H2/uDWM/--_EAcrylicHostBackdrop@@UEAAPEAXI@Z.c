/*
 * XREFs of ??_EAcrylicHostBackdrop@@UEAAPEAXI@Z @ 0x18000FE10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010664 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
AcrylicHostBackdrop *__fastcall AcrylicHostBackdrop::`vector deleting destructor'(AcrylicHostBackdrop *this, char a2)
{
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease((char *)this + 16);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x20uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, AcrylicHostBackdrop *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
