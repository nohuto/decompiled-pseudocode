/*
 * XREFs of ?OnViewRemoved@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x180059ABC
 * Callers:
 *     ?_RemoveWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAX_K@Z @ 0x1800599D0 (-_RemoveWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAX_K@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180024560 (--4-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSplashScreen::OnViewRemoved(CSplashScreen *this, struct IUnknown *a2)
{
  struct IUnknown **v4; // rdi
  struct IUnknown **v5; // r14
  bool v6; // bl
  struct IUnknown **v7; // rbx
  struct IUnknown *v8; // [rsp+40h] [rbp+8h] BYREF
  struct IUnknown **v9; // [rsp+48h] [rbp+10h]

  v4 = (struct IUnknown **)*((_QWORD *)this + 12);
  v5 = (struct IUnknown **)*((_QWORD *)this + 13);
  if ( v4 != v5 )
  {
    v9 = &v8;
    do
    {
      v8 = *v4;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
      v6 = (unsigned int)SHIsSameObject(a2, v8) != 0;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v8);
      if ( v6 )
        break;
      ++v4;
    }
    while ( v4 != v5 );
  }
  v7 = (struct IUnknown **)*((_QWORD *)this + 13);
  while ( ++v4 != v7 )
    Microsoft::WRL::ComPtr<IClassicWindow>::operator=((__int64 *)v4 - 1, (__int64 *)v4);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(*((_QWORD *)this + 13) - 8LL));
  *((_QWORD *)this + 13) -= 8LL;
}
