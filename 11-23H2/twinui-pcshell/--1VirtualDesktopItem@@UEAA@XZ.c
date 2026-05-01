/*
 * XREFs of ??1VirtualDesktopItem@@UEAA@XZ @ 0x1805716E4
 * Callers:
 *     ??_GVirtualDesktopItem@@UEAAPEAXI@Z @ 0x1805718D0 (--_GVirtualDesktopItem@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_G?$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1802D08B8 (--_G-$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 */

void __fastcall VirtualDesktopItem::~VirtualDesktopItem(VirtualDesktopItem *this)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 i; // rsi
  unsigned __int64 *v4; // rdi
  unsigned __int64 j; // rsi
  unsigned __int64 *v6; // rdi
  unsigned __int64 k; // rsi

  v1 = (unsigned __int64 *)((char *)this + 160);
  if ( *((_QWORD *)this + 19) )
  {
    for ( i = 0LL; i < *v1; ++i )
      Microsoft::WRL::ComPtr<IObservablePropertyCallback>::`scalar deleting destructor'((__int64 *)(*((_QWORD *)this + 19)
                                                                                                  + 8 * i));
    CoTaskMemFree(*((LPVOID *)this + 19));
    *((_QWORD *)this + 19) = 0LL;
  }
  *v1 = 0LL;
  v4 = (unsigned __int64 *)((char *)this + 120);
  *((_QWORD *)this + 22) = 0LL;
  if ( *((_QWORD *)this + 14) )
  {
    for ( j = 0LL; j < *v4; ++j )
      Microsoft::WRL::ComPtr<IObservablePropertyCallback>::`scalar deleting destructor'((__int64 *)(*((_QWORD *)this + 14)
                                                                                                  + 8 * j));
    CoTaskMemFree(*((LPVOID *)this + 14));
    *((_QWORD *)this + 14) = 0LL;
  }
  *v4 = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 11);
  *((_DWORD *)this + 21) = -1073741823;
  v6 = (unsigned __int64 *)((char *)this + 48);
  if ( *((_QWORD *)this + 5) )
  {
    for ( k = 0LL; k < *v6; ++k )
      Microsoft::WRL::ComPtr<IObservablePropertyCallback>::`scalar deleting destructor'((__int64 *)(*((_QWORD *)this + 5)
                                                                                                  + 8 * k));
    CoTaskMemFree(*((LPVOID *)this + 5));
    *((_QWORD *)this + 5) = 0LL;
  }
  *v6 = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 16);
}
