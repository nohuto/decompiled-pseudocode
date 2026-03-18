/*
 * XREFs of ??1CBitmap@@MEAA@XZ @ 0x1800288C0
 * Callers:
 *     ??_GCWICBitmapWrapper@@UEAAPEAXI@Z @ 0x180025D20 (--_GCWICBitmapWrapper@@UEAAPEAXI@Z.c)
 *     ??1CSystemMemoryBitmap@@MEAA@XZ @ 0x180026F7C (--1CSystemMemoryBitmap@@MEAA@XZ.c)
 *     ??_ECBitmap@@MEAAPEAXI@Z @ 0x1802811F0 (--_ECBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CBitmap::~CBitmap(CBitmap *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CBitmap::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 3) = &CBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CSystemMemoryBitmap::`vftable'{for `IBitmapDest2'};
  *((_QWORD *)this + 5) = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 6) = &CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &CBitmap::`vftable'{for `IUnknown'};
  v2 = *(int *)(*((_QWORD *)this + 1) + 4LL);
  *(_DWORD *)((char *)this + v2 + 4) = v2 - 136;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
}
