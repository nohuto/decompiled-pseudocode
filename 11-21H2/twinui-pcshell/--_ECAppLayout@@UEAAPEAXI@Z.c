/*
 * XREFs of ??_ECAppLayout@@UEAAPEAXI@Z @ 0x1801773E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180188D28 (--3@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
CAppLayout *__fastcall CAppLayout::`vector deleting destructor'(CAppLayout *this, char a2)
{
  void *v4; // rcx
  unsigned __int64 v5; // rdi

  v4 = (void *)*((_QWORD *)this + 13);
  if ( v4 )
  {
    v5 = 0LL;
    if ( *((_QWORD *)this + 14) )
    {
      do
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(*((_QWORD *)this + 13)
                                                                                             + 8 * v5++));
      while ( v5 < *((_QWORD *)this + 14) );
      v4 = (void *)*((_QWORD *)this + 13);
    }
    CoTaskMemFree(v4);
    *((_QWORD *)this + 13) = 0LL;
  }
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 13) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
