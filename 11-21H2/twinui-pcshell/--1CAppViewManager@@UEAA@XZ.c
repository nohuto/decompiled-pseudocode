/*
 * XREFs of ??1CAppViewManager@@UEAA@XZ @ 0x18017ABFC
 * Callers:
 *     ??_GCAppViewManager@@UEAAPEAXI@Z @ 0x18017ABC0 (--_GCAppViewManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_G?$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x180041470 (--_G-$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAppViewManager::~CAppViewManager(CAppViewManager *this)
{
  _QWORD *v2; // rcx
  unsigned __int64 i; // rdi
  __int64 v4; // rdx
  void *v5; // rcx
  unsigned __int64 v6; // rdi

  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 23);
  v2 = (_QWORD *)*((_QWORD *)this + 17);
  if ( v2 )
  {
    for ( i = 0LL; i < *((_QWORD *)this + 18); ++i )
    {
      v2 = (_QWORD *)*((_QWORD *)this + 17);
      v4 = v2[i];
      if ( v4 )
      {
        v2[i] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        v2 = (_QWORD *)*((_QWORD *)this + 17);
      }
    }
    CoTaskMemFree(v2);
    *((_QWORD *)this + 17) = 0LL;
  }
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 15);
  v5 = (void *)*((_QWORD *)this + 11);
  if ( v5 )
  {
    v6 = 0LL;
    if ( *((_QWORD *)this + 12) )
    {
      do
        Microsoft::WRL::ComPtr<IObservablePropertyCallback>::`scalar deleting destructor'((__int64 *)(*((_QWORD *)this + 11) + 8 * v6++));
      while ( v6 < *((_QWORD *)this + 12) );
      v5 = (void *)*((_QWORD *)this + 11);
    }
    LocalFree(v5);
    *((_QWORD *)this + 11) = 0LL;
  }
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 19) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
}
