/*
 * XREFs of ??1CBitmapLock@@MEAA@XZ @ 0x180029B94
 * Callers:
 *     ??_GCBitmapLock@@MEAAPEAXI@Z @ 0x180029A90 (--_GCBitmapLock@@MEAAPEAXI@Z.c)
 *     ??1CBitmapLockUnaligned@@UEAA@XZ @ 0x180281EE8 (--1CBitmapLockUnaligned@@UEAA@XZ.c)
 * Callees:
 *     ?Unlock@CBitmapLock@@IEAAXXZ @ 0x180029BFC (-Unlock@CBitmapLock@@IEAAXXZ.c)
 */

void __fastcall CBitmapLock::~CBitmapLock(CBitmapLock *this)
{
  __int64 v2; // rdx

  *(_QWORD *)this = &CBitmapLock::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 3) = &CBitmapLock::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &CBitmapLock::`vftable'{for `IUnknown'};
  v2 = *(int *)(*((_QWORD *)this + 1) + 4LL);
  *(_DWORD *)((char *)this + v2 + 4) = v2 - 144;
  CBitmapLock::Unlock(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
}
