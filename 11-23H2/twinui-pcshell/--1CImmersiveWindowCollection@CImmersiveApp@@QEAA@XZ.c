/*
 * XREFs of ??1CImmersiveWindowCollection@CImmersiveApp@@QEAA@XZ @ 0x1803BF1B0
 * Callers:
 *     ??1CImmersiveApp@@MEAA@XZ @ 0x1803BF01C (--1CImmersiveApp@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ @ 0x180064538 (-InternalRelease@-$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CImmersiveApp::CImmersiveWindowCollection::~CImmersiveWindowCollection(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 i; // rsi
  unsigned __int64 *v4; // rdi
  unsigned __int64 j; // rsi

  v1 = (unsigned __int64 *)((char *)this + 264);
  if ( *((_QWORD *)this + 32) )
  {
    for ( i = 0LL; i < *v1; ++i )
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(*((_QWORD *)this + 32)
                                                                                           + 8 * i));
    CoTaskMemFree(*((LPVOID *)this + 32));
    *((_QWORD *)this + 32) = 0LL;
  }
  *v1 = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease((__int64 *)this + 31);
  v4 = (unsigned __int64 *)((char *)this + 176);
  if ( *((_QWORD *)this + 21) )
  {
    for ( j = 0LL; j < *v4; ++j )
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(*((_QWORD *)this + 21)
                                                                                           + 8 * j));
    CoTaskMemFree(*((LPVOID *)this + 21));
    *((_QWORD *)this + 21) = 0LL;
  }
  *v4 = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 19);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 16);
}
