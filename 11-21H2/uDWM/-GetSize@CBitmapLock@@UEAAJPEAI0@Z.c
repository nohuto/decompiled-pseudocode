/*
 * XREFs of ?GetSize@CBitmapLock@@UEAAJPEAI0@Z @ 0x1800595F0
 * Callers:
 *     ?GetSize@CBitmapLock@@W7EAAJPEAI0@Z @ 0x180063F20 (-GetSize@CBitmapLock@@W7EAAJPEAI0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x18005A03C (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmapLock::GetSize(CBitmapLock *this, unsigned int *a2, unsigned int *a3)
{
  char *v5; // rcx
  unsigned int v7; // ebx
  char *v9; // [rsp+40h] [rbp+8h] BYREF

  v5 = (char *)this - 56;
  v9 = v5;
  if ( v5[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 8));
  if ( a2 )
  {
    if ( a3 )
    {
      if ( *((_BYTE *)this + 16) )
      {
        v7 = 0;
        *a2 = *((_DWORD *)this + 8);
        *a3 = *((_DWORD *)this + 9);
      }
      else
      {
        v7 = -2003292412;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003292412, 0x7Du);
      }
    }
    else
    {
      v7 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x7Bu);
    }
  }
  else
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x7Au);
  }
  CGuard<CMTALock>::~CGuard<CMTALock>(&v9);
  return v7;
}
