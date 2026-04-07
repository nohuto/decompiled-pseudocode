/*
 * XREFs of ?UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z @ 0x18005B900
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x18004F554 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmap::UnlockState(CBitmap *this, enum WICBitmapLockFlags a2)
{
  char v3; // di
  char *v4; // rcx
  char *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  v4 = (char *)this + 80;
  v6 = v4;
  if ( v4[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 8));
  if ( (v3 & 2) != 0 )
  {
    *((_DWORD *)this + 45) = 0;
  }
  else if ( (v3 & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)this + 45);
  }
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v6);
  return 0LL;
}
