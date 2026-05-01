/*
 * XREFs of ??1ViewPresentationMediator@@UEAA@XZ @ 0x1804F37EC
 * Callers:
 *     ??_EViewPresentationMediator@@UEAAPEAXI@Z @ 0x1804F3970 (--_EViewPresentationMediator@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1801026C4 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 */

void __fastcall ViewPresentationMediator::~ViewPresentationMediator(ViewPresentationMediator *this)
{
  char *v1; // rbx
  unsigned __int64 *v3; // rdi
  unsigned __int64 i; // rbp
  unsigned __int64 *v5; // rdi
  unsigned __int64 j; // rbp

  v1 = (char *)this + 256;
  v3 = (unsigned __int64 *)((char *)this + 280);
  if ( *((_QWORD *)this + 34) )
  {
    for ( i = 0LL; i < *v3; ++i )
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(*((_QWORD *)v1 + 2) + 8 * i));
    CoTaskMemFree(*((LPVOID *)v1 + 2));
    *((_QWORD *)v1 + 2) = 0LL;
  }
  *v3 = 0LL;
  *((_QWORD *)v1 + 5) = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v1);
  v5 = (unsigned __int64 *)((char *)this + 232);
  if ( *((_QWORD *)this + 28) )
  {
    for ( j = 0LL; j < *v5; ++j )
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(*((_QWORD *)this + 28) + 8 * j));
    CoTaskMemFree(*((LPVOID *)this + 28));
    *((_QWORD *)this + 28) = 0LL;
  }
  *v5 = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 26);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 25);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 24);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 23);
  *((_DWORD *)this + 45) = -1073741823;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 21);
  CImmersiveShellComponent::~CImmersiveShellComponent((ViewPresentationMediator *)((char *)this + 40));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite(this);
}
