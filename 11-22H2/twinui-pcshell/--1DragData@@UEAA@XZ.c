/*
 * XREFs of ??1DragData@@UEAA@XZ @ 0x1805DB298
 * Callers:
 *     ??_EDragData@@UEAAPEAXI@Z @ 0x1805DB300 (--_EDragData@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall DragData::~DragData(DragData *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 17);
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *((_QWORD *)this + 17) = 0LL;
  }
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 5);
  *((_DWORD *)this + 9) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
}
