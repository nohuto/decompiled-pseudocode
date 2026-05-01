/*
 * XREFs of ?OnViewRemoved@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x18015394C
 * Callers:
 *     ?_RemoveWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAX_K@Z @ 0x1801538B4 (-_RemoveWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAX_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??4?$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18030D564 (--4-$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSplashScreen::OnViewRemoved(CSplashScreen *this, struct IUnknown *a2)
{
  struct IUnknown **v4; // rdi
  struct IUnknown **v5; // r14
  bool v6; // bl
  struct IUnknown **v7; // rbx
  struct IUnknown **v8; // rdi
  struct IUnknown *v9; // [rsp+40h] [rbp+8h] BYREF
  struct IUnknown **v10; // [rsp+48h] [rbp+10h]

  v4 = (struct IUnknown **)*((_QWORD *)this + 12);
  v5 = (struct IUnknown **)*((_QWORD *)this + 13);
  if ( v4 != v5 )
  {
    v10 = &v9;
    do
    {
      v9 = *v4;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
      v6 = (unsigned int)SHIsSameObject(a2, v9) != 0;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
      if ( v6 )
        break;
      ++v4;
    }
    while ( v4 != v5 );
  }
  v7 = (struct IUnknown **)*((_QWORD *)this + 13);
  v8 = v4 + 1;
  if ( v8 != v7 )
  {
    do
    {
      Microsoft::WRL::ComPtr<IObjectArray>::operator=(v8 - 1, v8);
      ++v8;
    }
    while ( v8 != v7 );
    v7 = (struct IUnknown **)*((_QWORD *)this + 13);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v7 - 1);
  *((_QWORD *)this + 13) -= 8LL;
}
