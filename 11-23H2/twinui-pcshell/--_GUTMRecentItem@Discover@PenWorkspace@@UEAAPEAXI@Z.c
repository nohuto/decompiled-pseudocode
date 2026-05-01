/*
 * XREFs of ??_GUTMRecentItem@Discover@PenWorkspace@@UEAAPEAXI@Z @ 0x180490620
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18028E190 (_guard_dispatch_icall_nop.c)
 */

PenWorkspace::Discover::UTMRecentItem *__fastcall PenWorkspace::Discover::UTMRecentItem::`scalar deleting destructor'(
        PenWorkspace::Discover::UTMRecentItem *this,
        char a2)
{
  __int64 v4; // rcx

  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)this + 7);
  v4 = *((_QWORD *)this + 6);
  if ( v4 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 3);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
