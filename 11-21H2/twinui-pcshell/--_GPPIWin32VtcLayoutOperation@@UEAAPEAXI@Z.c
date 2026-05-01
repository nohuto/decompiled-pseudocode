/*
 * XREFs of ??_GPPIWin32VtcLayoutOperation@@UEAAPEAXI@Z @ 0x1804FD8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1CAppLayoutOperation@@QEAA@XZ @ 0x1804FD80C (--1CAppLayoutOperation@@QEAA@XZ.c)
 */

PPIWin32VtcLayoutOperation *__fastcall PPIWin32VtcLayoutOperation::`scalar deleting destructor'(
        PPIWin32VtcLayoutOperation *this,
        char a2)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  *((_DWORD *)this + 47) = -1073741823;
  CAppLayoutOperation::~CAppLayoutOperation((PPIWin32VtcLayoutOperation *)((char *)this + 24));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
