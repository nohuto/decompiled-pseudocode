/*
 * XREFs of ??_GCGITCallbackArray@@UEAAPEAXI@Z @ 0x18006D0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1801C7278 (--3@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=5
CGITCallbackArray *__fastcall CGITCallbackArray::`scalar deleting destructor'(CGITCallbackArray *this, char a2)
{
  unsigned __int64 *v4; // rdi
  unsigned __int64 i; // rsi

  v4 = (unsigned __int64 *)((char *)this + 56);
  if ( *((_QWORD *)this + 6) )
  {
    for ( i = 0LL; i < *v4; ++i )
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(*((_QWORD *)this + 6) + 8 * i));
    CoTaskMemFree(*((LPVOID *)this + 6));
    *((_QWORD *)this + 6) = 0LL;
  }
  *v4 = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 3);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
