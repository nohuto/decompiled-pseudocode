/*
 * XREFs of ??_GCOperationWaiter@@UEAAPEAXI@Z @ 0x18005E4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

COperationWaiter *__fastcall COperationWaiter::`scalar deleting destructor'(COperationWaiter *this, char a2)
{
  char *v4; // rcx

  v4 = (char *)*((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  *((_DWORD *)this + 9) = -1073741823;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 3);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x30uLL);
  return this;
}
