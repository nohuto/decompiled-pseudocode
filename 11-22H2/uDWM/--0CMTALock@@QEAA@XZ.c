/*
 * XREFs of ??0CMTALock@@QEAA@XZ @ 0x18004F388
 * Callers:
 *     ??0CBitmap@@QEAA@XZ @ 0x18004F154 (--0CBitmap@@QEAA@XZ.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x18005A144 (--0CBitmapLock@@QEAA@XZ.c)
 * Callees:
 *     ?Init@CCriticalSection@@QEAAJXZ @ 0x18004F3E0 (-Init@CCriticalSection@@QEAAJXZ.c)
 */

CMTALock *__fastcall CMTALock::CMTALock(CMTALock *this)
{
  APTTYPE pAptType; // [rsp+30h] [rbp+8h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+38h] [rbp+10h] BYREF

  *((_BYTE *)this + 48) = 0;
  *(_QWORD *)this = &CMTALock::`vftable';
  if ( CoGetApartmentType(&pAptType, &pAptQualifier) >= 0 && (unsigned int)(pAptType - 1) <= 1 )
    CCriticalSection::Init((LPCRITICAL_SECTION)((char *)this + 8));
  return this;
}
