/*
 * XREFs of ?GetStride@CBitmapLock@@UEAAJPEAI@Z @ 0x180059680
 * Callers:
 *     ?GetStride@CBitmapLock@@W7EAAJPEAI@Z @ 0x180063F40 (-GetStride@CBitmapLock@@W7EAAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x18005A03C (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmapLock::GetStride(CBitmapLock *this, unsigned int *a2)
{
  char *v4; // rcx
  unsigned int v5; // ebx
  char *v7; // [rsp+40h] [rbp+8h] BYREF

  v4 = (char *)this - 56;
  v7 = v4;
  if ( v4[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 8));
  if ( a2 )
  {
    if ( *((_BYTE *)this + 16) )
    {
      v5 = 0;
      *a2 = *((_DWORD *)this + 10);
    }
    else
    {
      v5 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003292412, 0x8Eu);
    }
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x8Cu);
  }
  CGuard<CMTALock>::~CGuard<CMTALock>(&v7);
  return v5;
}
