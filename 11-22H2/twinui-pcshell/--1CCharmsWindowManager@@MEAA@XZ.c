/*
 * XREFs of ??1CCharmsWindowManager@@MEAA@XZ @ 0x1801B6ADC
 * Callers:
 *     ??_ECCharmsWindowManager@@MEAAPEAXI@Z @ 0x1801B6AA0 (--_ECCharmsWindowManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CCharmsWindowManager::~CCharmsWindowManager(CCharmsWindowManager *this)
{
  unsigned __int64 *v2; // rdi
  unsigned __int64 i; // rsi

  *(_QWORD *)this = &CCharmsWindowManager::`vftable';
  *((_QWORD *)this + 3) = &CCharmsWindowManager::`vftable'{for `IImmersiveCharmsWindowManager'};
  *((_QWORD *)this + 4) = &CCharmsWindowManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ICharmWindowManagerInternal>'};
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 12);
  *((_QWORD *)this + 6) = &CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::`vftable';
  v2 = (unsigned __int64 *)((char *)this + 64);
  if ( *((_QWORD *)this + 7) )
  {
    for ( i = 0LL; i < *v2; ++i )
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(*((_QWORD *)this + 7)
                                                                                           + 8 * i));
    CoTaskMemFree(*((LPVOID *)this + 7));
    *((_QWORD *)this + 7) = 0LL;
  }
  *v2 = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
}
