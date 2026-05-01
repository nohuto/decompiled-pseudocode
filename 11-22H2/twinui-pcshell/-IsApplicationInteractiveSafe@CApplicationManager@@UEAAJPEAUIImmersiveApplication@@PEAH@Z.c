/*
 * XREFs of ?IsApplicationInteractiveSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x18039D160
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::IsApplicationInteractiveSafe(
        CApplicationManager *this,
        __int64 (__fastcall ***a2)(struct IImmersiveApplication *, GUID *, __int64 *),
        int *a3)
{
  int v5; // esi
  __int64 (__fastcall *v6)(struct IImmersiveApplication *, GUID *, __int64 *); // rbx
  int v7; // ebx
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  *a3 = 0;
  v9 = 0LL;
  v6 = **a2;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v9);
  v7 = v6((struct IImmersiveApplication *)a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v9);
  if ( v7 >= 0 )
  {
    LOBYTE(v5) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 392LL))(v9) != 0;
    *a3 = v5;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v9);
  return (unsigned int)v7;
}
