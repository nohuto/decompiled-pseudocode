/*
 * XREFs of ??1CAppViewManager@@UEAA@XZ @ 0x1801B7BDC
 * Callers:
 *     ??_GCAppViewManager@@UEAAPEAXI@Z @ 0x1801B7BA0 (--_GCAppViewManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_G?$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1802D08B8 (--_G-$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 */

void __fastcall CAppViewManager::~CAppViewManager(CAppViewManager *this)
{
  unsigned __int64 *v2; // rdi
  unsigned __int64 *v3; // rdi
  unsigned __int64 i; // rsi
  unsigned __int64 j; // rsi

  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 23);
  v2 = (unsigned __int64 *)((char *)this + 144);
  if ( *((_QWORD *)this + 17) )
  {
    for ( i = 0LL; i < *v2; ++i )
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(*((_QWORD *)this + 17) + 8 * i));
    CoTaskMemFree(*((LPVOID *)this + 17));
    *((_QWORD *)this + 17) = 0LL;
  }
  *v2 = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 15);
  v3 = (unsigned __int64 *)((char *)this + 96);
  if ( *((_QWORD *)this + 11) )
  {
    for ( j = 0LL; j < *v3; ++j )
      Microsoft::WRL::ComPtr<IObservablePropertyCallback>::`scalar deleting destructor'(*((_QWORD *)this + 11) + 8 * j);
    LocalFree(*((HLOCAL *)this + 11));
    *((_QWORD *)this + 11) = 0LL;
  }
  *v3 = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 19) = -1073741823;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 3);
}
