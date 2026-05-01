/*
 * XREFs of ?GetTitleSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAG@Z @ 0x18039BEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetTitleSafe(
        CApplicationManager *this,
        __int64 (__fastcall ***a2)(struct IImmersiveApplication *, GUID *, __int64 *),
        unsigned __int16 **a3)
{
  __int64 (__fastcall *v5)(struct IImmersiveApplication *, GUID *, __int64 *); // rbx
  int v6; // ebx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  v5 = **a2;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v8);
  v6 = v5((struct IImmersiveApplication *)a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v8);
  if ( v6 >= 0 )
    v6 = (*(__int64 (__fastcall **)(__int64, unsigned __int16 **))(*(_QWORD *)v8 + 480LL))(v8, a3);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v8);
  return (unsigned int)v6;
}
