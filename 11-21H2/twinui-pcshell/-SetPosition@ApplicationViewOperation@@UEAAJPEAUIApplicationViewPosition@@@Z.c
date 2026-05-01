/*
 * XREFs of ?SetPosition@ApplicationViewOperation@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x180172160
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall ApplicationViewOperation::SetPosition(
        ApplicationViewOperation *this,
        struct IApplicationViewPosition *a2)
{
  struct IApplicationViewPosition *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *((struct IApplicationViewPosition **)this + 9) != a2 )
  {
    v5 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v5);
    v5 = (struct IApplicationViewPosition *)*((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = a2;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v5);
  }
  return 0LL;
}
