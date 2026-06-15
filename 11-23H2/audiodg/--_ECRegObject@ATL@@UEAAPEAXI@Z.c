/*
 * XREFs of ??_ECRegObject@ATL@@UEAAPEAXI@Z @ 0x1400907D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1CRegObject@ATL@@UEAA@XZ @ 0x140090294 (--1CRegObject@ATL@@UEAA@XZ.c)
 */

ATL::CRegObject *__fastcall ATL::CRegObject::`vector deleting destructor'(ATL::CRegObject *this, char a2)
{
  ATL::CRegObject::~CRegObject(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
