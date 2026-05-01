/*
 * XREFs of ??_ECClassicWindowActivationBasedCollection@@UEAAPEAXI@Z @ 0x1803A89E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CClassicWindowActivationBasedCollection *__fastcall CClassicWindowActivationBasedCollection::`vector deleting destructor'(
        CClassicWindowActivationBasedCollection *this,
        char a2)
{
  unsigned __int64 *v3; // rdi
  unsigned __int64 i; // rsi

  *(_QWORD *)this = &CClassicWindowActivationBasedCollection::`vftable';
  v3 = (unsigned __int64 *)((char *)this + 16);
  if ( *((_QWORD *)this + 1) )
  {
    for ( i = 0LL; i < *v3; ++i )
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(*((_QWORD *)this + 1)
                                                                                           + 8 * i));
    CoTaskMemFree(*((LPVOID *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
  *v3 = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
