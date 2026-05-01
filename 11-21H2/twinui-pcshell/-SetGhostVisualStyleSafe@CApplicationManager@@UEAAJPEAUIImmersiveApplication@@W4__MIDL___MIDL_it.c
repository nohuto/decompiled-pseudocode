/*
 * XREFs of ?SetGhostVisualStyleSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4__MIDL___MIDL_itf_shpriv_core_0000_0325_0001@@@Z @ 0x180190110
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::SetGhostVisualStyleSafe(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        unsigned int a3)
{
  __int64 (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  int v6; // ebx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  v5 = **a2;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v8);
  v6 = v5(a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v8);
  if ( v6 >= 0 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 368LL))(v8, a3);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v8);
  return (unsigned int)v6;
}
