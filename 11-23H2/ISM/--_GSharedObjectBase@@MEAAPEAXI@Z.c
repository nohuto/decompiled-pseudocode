/*
 * XREFs of ??_GSharedObjectBase@@MEAAPEAXI@Z @ 0x180118010
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1SharedObjectBase@@MEAA@XZ @ 0x180117F48 (--1SharedObjectBase@@MEAA@XZ.c)
 */

SharedObjectBase *__fastcall SharedObjectBase::`scalar deleting destructor'(SharedObjectBase *this, char a2)
{
  SharedObjectBase::~SharedObjectBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
