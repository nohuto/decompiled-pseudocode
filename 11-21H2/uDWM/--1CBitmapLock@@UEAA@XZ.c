/*
 * XREFs of ??1CBitmapLock@@UEAA@XZ @ 0x1800599AC
 * Callers:
 *     ??_GCBitmapLock@@UEAAPEAXI@Z @ 0x180059950 (--_GCBitmapLock@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Unlock@CBitmapLock@@IEAAXXZ @ 0x18005A404 (-Unlock@CBitmapLock@@IEAAXXZ.c)
 */

void __fastcall CBitmapLock::~CBitmapLock(CBitmapLock *this)
{
  *(_QWORD *)this = &CBitmapLock::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CBitmapLock::`vftable'{for `CMTALock'};
  *((_QWORD *)this + 9) = &CBitmapLock::`vftable'{for `IBitmapLock'};
  *((_QWORD *)this + 10) = &CBitmapLock::`vftable'{for `IWICBitmapLock'};
  CBitmapLock::Unlock(this);
  *((_QWORD *)this + 2) = &CMTALock::`vftable';
  if ( *((_BYTE *)this + 64) )
  {
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
    *((_BYTE *)this + 64) = 0;
  }
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
