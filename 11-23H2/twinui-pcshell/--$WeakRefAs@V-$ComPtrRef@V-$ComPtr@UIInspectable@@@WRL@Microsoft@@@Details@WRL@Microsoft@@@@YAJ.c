/*
 * XREFs of ??$WeakRefAs@V?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJAEBVWeakRef@WRL@Microsoft@@V?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803CA83C
 * Callers:
 *     ?OnActivationEnd@CSplashScreen@@UEAAJJ_K@Z @ 0x1803CAE50 (-OnActivationEnd@CSplashScreen@@UEAAJJ_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800DEC74 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WeakRefAs<Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IInspectable>>>(
        Microsoft::WRL::WeakRef *a1,
        __int64 *a2)
{
  int v3; // ebx
  struct IInspectable *v4; // rbx
  HRESULT (__stdcall *QueryInterface)(IInspectable *, const IID *const, void **); // rsi
  struct IInspectable *v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  v3 = Microsoft::WRL::WeakRef::As<IInspectable>(a1, &v7);
  if ( v3 >= 0 )
  {
    v4 = v7;
    if ( v7 )
    {
      QueryInterface = v7->lpVtbl->QueryInterface;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a2);
      v3 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, __int64 *))QueryInterface)(
             v4,
             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
             a2);
    }
    else
    {
      v3 = -2147467259;
    }
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v7);
  return (unsigned int)v3;
}
