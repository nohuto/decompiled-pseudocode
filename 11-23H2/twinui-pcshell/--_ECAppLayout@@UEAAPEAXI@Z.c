/*
 * XREFs of ??_ECAppLayout@@UEAAPEAXI@Z @ 0x1801B1B30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1801C7278 (--3@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
CAppLayout *__fastcall CAppLayout::`vector deleting destructor'(CAppLayout *this, char a2)
{
  unsigned __int64 *v4; // rdi
  unsigned __int64 i; // rsi

  v4 = (unsigned __int64 *)((char *)this + 112);
  if ( *((_QWORD *)this + 13) )
  {
    for ( i = 0LL; i < *v4; ++i )
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(*((_QWORD *)this + 13)
                                                                                           + 8 * i));
    CoTaskMemFree(*((LPVOID *)this + 13));
    *((_QWORD *)this + 13) = 0LL;
  }
  *v4 = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 13) = -1073741823;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 3);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
