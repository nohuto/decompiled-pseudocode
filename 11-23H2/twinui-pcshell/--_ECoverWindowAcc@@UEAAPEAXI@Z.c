/*
 * XREFs of ??_ECoverWindowAcc@@UEAAPEAXI@Z @ 0x1805DF080
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CoverWindowAcc@@UEAA@XZ @ 0x1805DF02C (--1CoverWindowAcc@@UEAA@XZ.c)
 */

CoverWindowAcc *__fastcall CoverWindowAcc::`vector deleting destructor'(CoverWindowAcc *this, char a2)
{
  CoverWindowAcc::~CoverWindowAcc(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
