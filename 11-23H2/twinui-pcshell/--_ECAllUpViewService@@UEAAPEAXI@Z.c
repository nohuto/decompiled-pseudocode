/*
 * XREFs of ??_ECAllUpViewService@@UEAAPEAXI@Z @ 0x1801B9CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAllUpViewService@@UEAA@XZ @ 0x1801B9CDC (--1CAllUpViewService@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CAllUpViewService *__fastcall CAllUpViewService::`vector deleting destructor'(CAllUpViewService *this, char a2)
{
  CAllUpViewService::~CAllUpViewService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x48uLL);
  return this;
}
