/*
 * XREFs of ??_GPPIWin32VtcLayoutOperation@@UEAAPEAXI@Z @ 0x1805B61B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CAppLayoutOperation@@QEAA@XZ @ 0x1805B60D4 (--1CAppLayoutOperation@@QEAA@XZ.c)
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
