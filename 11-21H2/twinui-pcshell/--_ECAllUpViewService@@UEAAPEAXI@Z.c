/*
 * XREFs of ??_ECAllUpViewService@@UEAAPEAXI@Z @ 0x18017CE10
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAllUpViewService@@UEAA@XZ @ 0x18017CE4C (--1CAllUpViewService@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

CAllUpViewService *__fastcall CAllUpViewService::`vector deleting destructor'(CAllUpViewService *this, char a2)
{
  CAllUpViewService::~CAllUpViewService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x48uLL);
  return this;
}
