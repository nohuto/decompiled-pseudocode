/*
 * XREFs of ?SetApplicationView@CClassicWindow@@UEAAXPEAUIApplicationView@@@Z @ 0x180188140
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CClassicWindow::SetApplicationView(CClassicWindow *this, struct IApplicationView *a2)
{
  struct IApplicationView *v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *((struct IApplicationView **)this + 10) != a2 )
  {
    v4 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v4);
    v4 = (struct IApplicationView *)*((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = a2;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v4);
  }
}
